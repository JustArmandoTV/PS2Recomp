#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B9FE0
// Address: 0x2b9fe0 - 0x2ba4a0
void sub_002B9FE0_0x2b9fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9FE0_0x2b9fe0");
#endif

    switch (ctx->pc) {
        case 0x2b9fe0u: goto label_2b9fe0;
        case 0x2b9fe4u: goto label_2b9fe4;
        case 0x2b9fe8u: goto label_2b9fe8;
        case 0x2b9fecu: goto label_2b9fec;
        case 0x2b9ff0u: goto label_2b9ff0;
        case 0x2b9ff4u: goto label_2b9ff4;
        case 0x2b9ff8u: goto label_2b9ff8;
        case 0x2b9ffcu: goto label_2b9ffc;
        case 0x2ba000u: goto label_2ba000;
        case 0x2ba004u: goto label_2ba004;
        case 0x2ba008u: goto label_2ba008;
        case 0x2ba00cu: goto label_2ba00c;
        case 0x2ba010u: goto label_2ba010;
        case 0x2ba014u: goto label_2ba014;
        case 0x2ba018u: goto label_2ba018;
        case 0x2ba01cu: goto label_2ba01c;
        case 0x2ba020u: goto label_2ba020;
        case 0x2ba024u: goto label_2ba024;
        case 0x2ba028u: goto label_2ba028;
        case 0x2ba02cu: goto label_2ba02c;
        case 0x2ba030u: goto label_2ba030;
        case 0x2ba034u: goto label_2ba034;
        case 0x2ba038u: goto label_2ba038;
        case 0x2ba03cu: goto label_2ba03c;
        case 0x2ba040u: goto label_2ba040;
        case 0x2ba044u: goto label_2ba044;
        case 0x2ba048u: goto label_2ba048;
        case 0x2ba04cu: goto label_2ba04c;
        case 0x2ba050u: goto label_2ba050;
        case 0x2ba054u: goto label_2ba054;
        case 0x2ba058u: goto label_2ba058;
        case 0x2ba05cu: goto label_2ba05c;
        case 0x2ba060u: goto label_2ba060;
        case 0x2ba064u: goto label_2ba064;
        case 0x2ba068u: goto label_2ba068;
        case 0x2ba06cu: goto label_2ba06c;
        case 0x2ba070u: goto label_2ba070;
        case 0x2ba074u: goto label_2ba074;
        case 0x2ba078u: goto label_2ba078;
        case 0x2ba07cu: goto label_2ba07c;
        case 0x2ba080u: goto label_2ba080;
        case 0x2ba084u: goto label_2ba084;
        case 0x2ba088u: goto label_2ba088;
        case 0x2ba08cu: goto label_2ba08c;
        case 0x2ba090u: goto label_2ba090;
        case 0x2ba094u: goto label_2ba094;
        case 0x2ba098u: goto label_2ba098;
        case 0x2ba09cu: goto label_2ba09c;
        case 0x2ba0a0u: goto label_2ba0a0;
        case 0x2ba0a4u: goto label_2ba0a4;
        case 0x2ba0a8u: goto label_2ba0a8;
        case 0x2ba0acu: goto label_2ba0ac;
        case 0x2ba0b0u: goto label_2ba0b0;
        case 0x2ba0b4u: goto label_2ba0b4;
        case 0x2ba0b8u: goto label_2ba0b8;
        case 0x2ba0bcu: goto label_2ba0bc;
        case 0x2ba0c0u: goto label_2ba0c0;
        case 0x2ba0c4u: goto label_2ba0c4;
        case 0x2ba0c8u: goto label_2ba0c8;
        case 0x2ba0ccu: goto label_2ba0cc;
        case 0x2ba0d0u: goto label_2ba0d0;
        case 0x2ba0d4u: goto label_2ba0d4;
        case 0x2ba0d8u: goto label_2ba0d8;
        case 0x2ba0dcu: goto label_2ba0dc;
        case 0x2ba0e0u: goto label_2ba0e0;
        case 0x2ba0e4u: goto label_2ba0e4;
        case 0x2ba0e8u: goto label_2ba0e8;
        case 0x2ba0ecu: goto label_2ba0ec;
        case 0x2ba0f0u: goto label_2ba0f0;
        case 0x2ba0f4u: goto label_2ba0f4;
        case 0x2ba0f8u: goto label_2ba0f8;
        case 0x2ba0fcu: goto label_2ba0fc;
        case 0x2ba100u: goto label_2ba100;
        case 0x2ba104u: goto label_2ba104;
        case 0x2ba108u: goto label_2ba108;
        case 0x2ba10cu: goto label_2ba10c;
        case 0x2ba110u: goto label_2ba110;
        case 0x2ba114u: goto label_2ba114;
        case 0x2ba118u: goto label_2ba118;
        case 0x2ba11cu: goto label_2ba11c;
        case 0x2ba120u: goto label_2ba120;
        case 0x2ba124u: goto label_2ba124;
        case 0x2ba128u: goto label_2ba128;
        case 0x2ba12cu: goto label_2ba12c;
        case 0x2ba130u: goto label_2ba130;
        case 0x2ba134u: goto label_2ba134;
        case 0x2ba138u: goto label_2ba138;
        case 0x2ba13cu: goto label_2ba13c;
        case 0x2ba140u: goto label_2ba140;
        case 0x2ba144u: goto label_2ba144;
        case 0x2ba148u: goto label_2ba148;
        case 0x2ba14cu: goto label_2ba14c;
        case 0x2ba150u: goto label_2ba150;
        case 0x2ba154u: goto label_2ba154;
        case 0x2ba158u: goto label_2ba158;
        case 0x2ba15cu: goto label_2ba15c;
        case 0x2ba160u: goto label_2ba160;
        case 0x2ba164u: goto label_2ba164;
        case 0x2ba168u: goto label_2ba168;
        case 0x2ba16cu: goto label_2ba16c;
        case 0x2ba170u: goto label_2ba170;
        case 0x2ba174u: goto label_2ba174;
        case 0x2ba178u: goto label_2ba178;
        case 0x2ba17cu: goto label_2ba17c;
        case 0x2ba180u: goto label_2ba180;
        case 0x2ba184u: goto label_2ba184;
        case 0x2ba188u: goto label_2ba188;
        case 0x2ba18cu: goto label_2ba18c;
        case 0x2ba190u: goto label_2ba190;
        case 0x2ba194u: goto label_2ba194;
        case 0x2ba198u: goto label_2ba198;
        case 0x2ba19cu: goto label_2ba19c;
        case 0x2ba1a0u: goto label_2ba1a0;
        case 0x2ba1a4u: goto label_2ba1a4;
        case 0x2ba1a8u: goto label_2ba1a8;
        case 0x2ba1acu: goto label_2ba1ac;
        case 0x2ba1b0u: goto label_2ba1b0;
        case 0x2ba1b4u: goto label_2ba1b4;
        case 0x2ba1b8u: goto label_2ba1b8;
        case 0x2ba1bcu: goto label_2ba1bc;
        case 0x2ba1c0u: goto label_2ba1c0;
        case 0x2ba1c4u: goto label_2ba1c4;
        case 0x2ba1c8u: goto label_2ba1c8;
        case 0x2ba1ccu: goto label_2ba1cc;
        case 0x2ba1d0u: goto label_2ba1d0;
        case 0x2ba1d4u: goto label_2ba1d4;
        case 0x2ba1d8u: goto label_2ba1d8;
        case 0x2ba1dcu: goto label_2ba1dc;
        case 0x2ba1e0u: goto label_2ba1e0;
        case 0x2ba1e4u: goto label_2ba1e4;
        case 0x2ba1e8u: goto label_2ba1e8;
        case 0x2ba1ecu: goto label_2ba1ec;
        case 0x2ba1f0u: goto label_2ba1f0;
        case 0x2ba1f4u: goto label_2ba1f4;
        case 0x2ba1f8u: goto label_2ba1f8;
        case 0x2ba1fcu: goto label_2ba1fc;
        case 0x2ba200u: goto label_2ba200;
        case 0x2ba204u: goto label_2ba204;
        case 0x2ba208u: goto label_2ba208;
        case 0x2ba20cu: goto label_2ba20c;
        case 0x2ba210u: goto label_2ba210;
        case 0x2ba214u: goto label_2ba214;
        case 0x2ba218u: goto label_2ba218;
        case 0x2ba21cu: goto label_2ba21c;
        case 0x2ba220u: goto label_2ba220;
        case 0x2ba224u: goto label_2ba224;
        case 0x2ba228u: goto label_2ba228;
        case 0x2ba22cu: goto label_2ba22c;
        case 0x2ba230u: goto label_2ba230;
        case 0x2ba234u: goto label_2ba234;
        case 0x2ba238u: goto label_2ba238;
        case 0x2ba23cu: goto label_2ba23c;
        case 0x2ba240u: goto label_2ba240;
        case 0x2ba244u: goto label_2ba244;
        case 0x2ba248u: goto label_2ba248;
        case 0x2ba24cu: goto label_2ba24c;
        case 0x2ba250u: goto label_2ba250;
        case 0x2ba254u: goto label_2ba254;
        case 0x2ba258u: goto label_2ba258;
        case 0x2ba25cu: goto label_2ba25c;
        case 0x2ba260u: goto label_2ba260;
        case 0x2ba264u: goto label_2ba264;
        case 0x2ba268u: goto label_2ba268;
        case 0x2ba26cu: goto label_2ba26c;
        case 0x2ba270u: goto label_2ba270;
        case 0x2ba274u: goto label_2ba274;
        case 0x2ba278u: goto label_2ba278;
        case 0x2ba27cu: goto label_2ba27c;
        case 0x2ba280u: goto label_2ba280;
        case 0x2ba284u: goto label_2ba284;
        case 0x2ba288u: goto label_2ba288;
        case 0x2ba28cu: goto label_2ba28c;
        case 0x2ba290u: goto label_2ba290;
        case 0x2ba294u: goto label_2ba294;
        case 0x2ba298u: goto label_2ba298;
        case 0x2ba29cu: goto label_2ba29c;
        case 0x2ba2a0u: goto label_2ba2a0;
        case 0x2ba2a4u: goto label_2ba2a4;
        case 0x2ba2a8u: goto label_2ba2a8;
        case 0x2ba2acu: goto label_2ba2ac;
        case 0x2ba2b0u: goto label_2ba2b0;
        case 0x2ba2b4u: goto label_2ba2b4;
        case 0x2ba2b8u: goto label_2ba2b8;
        case 0x2ba2bcu: goto label_2ba2bc;
        case 0x2ba2c0u: goto label_2ba2c0;
        case 0x2ba2c4u: goto label_2ba2c4;
        case 0x2ba2c8u: goto label_2ba2c8;
        case 0x2ba2ccu: goto label_2ba2cc;
        case 0x2ba2d0u: goto label_2ba2d0;
        case 0x2ba2d4u: goto label_2ba2d4;
        case 0x2ba2d8u: goto label_2ba2d8;
        case 0x2ba2dcu: goto label_2ba2dc;
        case 0x2ba2e0u: goto label_2ba2e0;
        case 0x2ba2e4u: goto label_2ba2e4;
        case 0x2ba2e8u: goto label_2ba2e8;
        case 0x2ba2ecu: goto label_2ba2ec;
        case 0x2ba2f0u: goto label_2ba2f0;
        case 0x2ba2f4u: goto label_2ba2f4;
        case 0x2ba2f8u: goto label_2ba2f8;
        case 0x2ba2fcu: goto label_2ba2fc;
        case 0x2ba300u: goto label_2ba300;
        case 0x2ba304u: goto label_2ba304;
        case 0x2ba308u: goto label_2ba308;
        case 0x2ba30cu: goto label_2ba30c;
        case 0x2ba310u: goto label_2ba310;
        case 0x2ba314u: goto label_2ba314;
        case 0x2ba318u: goto label_2ba318;
        case 0x2ba31cu: goto label_2ba31c;
        case 0x2ba320u: goto label_2ba320;
        case 0x2ba324u: goto label_2ba324;
        case 0x2ba328u: goto label_2ba328;
        case 0x2ba32cu: goto label_2ba32c;
        case 0x2ba330u: goto label_2ba330;
        case 0x2ba334u: goto label_2ba334;
        case 0x2ba338u: goto label_2ba338;
        case 0x2ba33cu: goto label_2ba33c;
        case 0x2ba340u: goto label_2ba340;
        case 0x2ba344u: goto label_2ba344;
        case 0x2ba348u: goto label_2ba348;
        case 0x2ba34cu: goto label_2ba34c;
        case 0x2ba350u: goto label_2ba350;
        case 0x2ba354u: goto label_2ba354;
        case 0x2ba358u: goto label_2ba358;
        case 0x2ba35cu: goto label_2ba35c;
        case 0x2ba360u: goto label_2ba360;
        case 0x2ba364u: goto label_2ba364;
        case 0x2ba368u: goto label_2ba368;
        case 0x2ba36cu: goto label_2ba36c;
        case 0x2ba370u: goto label_2ba370;
        case 0x2ba374u: goto label_2ba374;
        case 0x2ba378u: goto label_2ba378;
        case 0x2ba37cu: goto label_2ba37c;
        case 0x2ba380u: goto label_2ba380;
        case 0x2ba384u: goto label_2ba384;
        case 0x2ba388u: goto label_2ba388;
        case 0x2ba38cu: goto label_2ba38c;
        case 0x2ba390u: goto label_2ba390;
        case 0x2ba394u: goto label_2ba394;
        case 0x2ba398u: goto label_2ba398;
        case 0x2ba39cu: goto label_2ba39c;
        case 0x2ba3a0u: goto label_2ba3a0;
        case 0x2ba3a4u: goto label_2ba3a4;
        case 0x2ba3a8u: goto label_2ba3a8;
        case 0x2ba3acu: goto label_2ba3ac;
        case 0x2ba3b0u: goto label_2ba3b0;
        case 0x2ba3b4u: goto label_2ba3b4;
        case 0x2ba3b8u: goto label_2ba3b8;
        case 0x2ba3bcu: goto label_2ba3bc;
        case 0x2ba3c0u: goto label_2ba3c0;
        case 0x2ba3c4u: goto label_2ba3c4;
        case 0x2ba3c8u: goto label_2ba3c8;
        case 0x2ba3ccu: goto label_2ba3cc;
        case 0x2ba3d0u: goto label_2ba3d0;
        case 0x2ba3d4u: goto label_2ba3d4;
        case 0x2ba3d8u: goto label_2ba3d8;
        case 0x2ba3dcu: goto label_2ba3dc;
        case 0x2ba3e0u: goto label_2ba3e0;
        case 0x2ba3e4u: goto label_2ba3e4;
        case 0x2ba3e8u: goto label_2ba3e8;
        case 0x2ba3ecu: goto label_2ba3ec;
        case 0x2ba3f0u: goto label_2ba3f0;
        case 0x2ba3f4u: goto label_2ba3f4;
        case 0x2ba3f8u: goto label_2ba3f8;
        case 0x2ba3fcu: goto label_2ba3fc;
        case 0x2ba400u: goto label_2ba400;
        case 0x2ba404u: goto label_2ba404;
        case 0x2ba408u: goto label_2ba408;
        case 0x2ba40cu: goto label_2ba40c;
        case 0x2ba410u: goto label_2ba410;
        case 0x2ba414u: goto label_2ba414;
        case 0x2ba418u: goto label_2ba418;
        case 0x2ba41cu: goto label_2ba41c;
        case 0x2ba420u: goto label_2ba420;
        case 0x2ba424u: goto label_2ba424;
        case 0x2ba428u: goto label_2ba428;
        case 0x2ba42cu: goto label_2ba42c;
        case 0x2ba430u: goto label_2ba430;
        case 0x2ba434u: goto label_2ba434;
        case 0x2ba438u: goto label_2ba438;
        case 0x2ba43cu: goto label_2ba43c;
        case 0x2ba440u: goto label_2ba440;
        case 0x2ba444u: goto label_2ba444;
        case 0x2ba448u: goto label_2ba448;
        case 0x2ba44cu: goto label_2ba44c;
        case 0x2ba450u: goto label_2ba450;
        case 0x2ba454u: goto label_2ba454;
        case 0x2ba458u: goto label_2ba458;
        case 0x2ba45cu: goto label_2ba45c;
        case 0x2ba460u: goto label_2ba460;
        case 0x2ba464u: goto label_2ba464;
        case 0x2ba468u: goto label_2ba468;
        case 0x2ba46cu: goto label_2ba46c;
        case 0x2ba470u: goto label_2ba470;
        case 0x2ba474u: goto label_2ba474;
        case 0x2ba478u: goto label_2ba478;
        case 0x2ba47cu: goto label_2ba47c;
        case 0x2ba480u: goto label_2ba480;
        case 0x2ba484u: goto label_2ba484;
        case 0x2ba488u: goto label_2ba488;
        case 0x2ba48cu: goto label_2ba48c;
        case 0x2ba490u: goto label_2ba490;
        case 0x2ba494u: goto label_2ba494;
        case 0x2ba498u: goto label_2ba498;
        case 0x2ba49cu: goto label_2ba49c;
        default: break;
    }

    ctx->pc = 0x2b9fe0u;

label_2b9fe0:
    // 0x2b9fe0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b9fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2b9fe4:
    // 0x2b9fe4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2b9fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2b9fe8:
    // 0x2b9fe8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2b9fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2b9fec:
    // 0x2b9fec: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2b9fecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2b9ff0:
    // 0x2b9ff0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b9ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2b9ff4:
    // 0x2b9ff4: 0x34468703  ori         $a2, $v0, 0x8703
    ctx->pc = 0x2b9ff4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34563);
label_2b9ff8:
    // 0x2b9ff8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b9ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2b9ffc:
    // 0x2b9ffc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b9ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ba000:
    // 0x2ba000: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ba000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ba004:
    // 0x2ba004: 0xc0aeaf4  jal         func_2BABD0
label_2ba008:
    if (ctx->pc == 0x2BA008u) {
        ctx->pc = 0x2BA008u;
            // 0x2ba008: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2BA00Cu;
        goto label_2ba00c;
    }
    ctx->pc = 0x2BA004u;
    SET_GPR_U32(ctx, 31, 0x2BA00Cu);
    ctx->pc = 0x2BA008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA004u;
            // 0x2ba008: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BABD0u;
    if (runtime->hasFunction(0x2BABD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA00Cu; }
        if (ctx->pc != 0x2BA00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BABD0_0x2babd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA00Cu; }
        if (ctx->pc != 0x2BA00Cu) { return; }
    }
    ctx->pc = 0x2BA00Cu;
label_2ba00c:
    // 0x2ba00c: 0xc0aeaec  jal         func_2BABB0
label_2ba010:
    if (ctx->pc == 0x2BA010u) {
        ctx->pc = 0x2BA010u;
            // 0x2ba010: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2BA014u;
        goto label_2ba014;
    }
    ctx->pc = 0x2BA00Cu;
    SET_GPR_U32(ctx, 31, 0x2BA014u);
    ctx->pc = 0x2BA010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA00Cu;
            // 0x2ba010: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BABB0u;
    if (runtime->hasFunction(0x2BABB0u)) {
        auto targetFn = runtime->lookupFunction(0x2BABB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA014u; }
        if (ctx->pc != 0x2BA014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BABB0_0x2babb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA014u; }
        if (ctx->pc != 0x2BA014u) { return; }
    }
    ctx->pc = 0x2BA014u;
label_2ba014:
    // 0x2ba014: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ba014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2ba018:
    // 0x2ba018: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ba018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2ba01c:
    // 0x2ba01c: 0x246324d0  addiu       $v1, $v1, 0x24D0
    ctx->pc = 0x2ba01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9424));
label_2ba020:
    // 0x2ba020: 0x24422508  addiu       $v0, $v0, 0x2508
    ctx->pc = 0x2ba020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9480));
label_2ba024:
    // 0x2ba024: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2ba024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2ba028:
    // 0x2ba028: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x2ba028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2ba02c:
    // 0x2ba02c: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2ba02cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2ba030:
    // 0x2ba030: 0xc0aeae4  jal         func_2BAB90
label_2ba034:
    if (ctx->pc == 0x2BA034u) {
        ctx->pc = 0x2BA034u;
            // 0x2ba034: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x2BA038u;
        goto label_2ba038;
    }
    ctx->pc = 0x2BA030u;
    SET_GPR_U32(ctx, 31, 0x2BA038u);
    ctx->pc = 0x2BA034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA030u;
            // 0x2ba034: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB90u;
    if (runtime->hasFunction(0x2BAB90u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA038u; }
        if (ctx->pc != 0x2BA038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB90_0x2bab90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA038u; }
        if (ctx->pc != 0x2BA038u) { return; }
    }
    ctx->pc = 0x2BA038u;
label_2ba038:
    // 0x2ba038: 0xc0aeae4  jal         func_2BAB90
label_2ba03c:
    if (ctx->pc == 0x2BA03Cu) {
        ctx->pc = 0x2BA03Cu;
            // 0x2ba03c: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2BA040u;
        goto label_2ba040;
    }
    ctx->pc = 0x2BA038u;
    SET_GPR_U32(ctx, 31, 0x2BA040u);
    ctx->pc = 0x2BA03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA038u;
            // 0x2ba03c: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB90u;
    if (runtime->hasFunction(0x2BAB90u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA040u; }
        if (ctx->pc != 0x2BA040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB90_0x2bab90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA040u; }
        if (ctx->pc != 0x2BA040u) { return; }
    }
    ctx->pc = 0x2BA040u;
label_2ba040:
    // 0x2ba040: 0xc0aeac4  jal         func_2BAB10
label_2ba044:
    if (ctx->pc == 0x2BA044u) {
        ctx->pc = 0x2BA044u;
            // 0x2ba044: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->pc = 0x2BA048u;
        goto label_2ba048;
    }
    ctx->pc = 0x2BA040u;
    SET_GPR_U32(ctx, 31, 0x2BA048u);
    ctx->pc = 0x2BA044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA040u;
            // 0x2ba044: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB10u;
    if (runtime->hasFunction(0x2BAB10u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA048u; }
        if (ctx->pc != 0x2BA048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB10_0x2bab10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA048u; }
        if (ctx->pc != 0x2BA048u) { return; }
    }
    ctx->pc = 0x2BA048u;
label_2ba048:
    // 0x2ba048: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ba048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ba04c:
    // 0x2ba04c: 0xc0aeac0  jal         func_2BAB00
label_2ba050:
    if (ctx->pc == 0x2BA050u) {
        ctx->pc = 0x2BA050u;
            // 0x2ba050: 0xae20009c  sw          $zero, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
        ctx->pc = 0x2BA054u;
        goto label_2ba054;
    }
    ctx->pc = 0x2BA04Cu;
    SET_GPR_U32(ctx, 31, 0x2BA054u);
    ctx->pc = 0x2BA050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA04Cu;
            // 0x2ba050: 0xae20009c  sw          $zero, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB00u;
    if (runtime->hasFunction(0x2BAB00u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA054u; }
        if (ctx->pc != 0x2BA054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB00_0x2bab00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA054u; }
        if (ctx->pc != 0x2BA054u) { return; }
    }
    ctx->pc = 0x2BA054u;
label_2ba054:
    // 0x2ba054: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ba054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba058:
    // 0x2ba058: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_2ba05c:
    if (ctx->pc == 0x2BA05Cu) {
        ctx->pc = 0x2BA060u;
        goto label_2ba060;
    }
    ctx->pc = 0x2BA058u;
    {
        const bool branch_taken_0x2ba058 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba058) {
            ctx->pc = 0x2BA0D8u;
            goto label_2ba0d8;
        }
    }
    ctx->pc = 0x2BA060u;
label_2ba060:
    // 0x2ba060: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2ba060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_2ba064:
    // 0x2ba064: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2ba064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2ba068:
    // 0x2ba068: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2ba068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_2ba06c:
    // 0x2ba06c: 0xc040138  jal         func_1004E0
label_2ba070:
    if (ctx->pc == 0x2BA070u) {
        ctx->pc = 0x2BA070u;
            // 0x2ba070: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x2BA074u;
        goto label_2ba074;
    }
    ctx->pc = 0x2BA06Cu;
    SET_GPR_U32(ctx, 31, 0x2BA074u);
    ctx->pc = 0x2BA070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA06Cu;
            // 0x2ba070: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA074u; }
        if (ctx->pc != 0x2BA074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA074u; }
        if (ctx->pc != 0x2BA074u) { return; }
    }
    ctx->pc = 0x2BA074u;
label_2ba074:
    // 0x2ba074: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2ba074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2ba078:
    // 0x2ba078: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2ba078u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_2ba07c:
    // 0x2ba07c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ba07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba080:
    // 0x2ba080: 0x24a5a750  addiu       $a1, $a1, -0x58B0
    ctx->pc = 0x2ba080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944592));
label_2ba084:
    // 0x2ba084: 0x24c6a610  addiu       $a2, $a2, -0x59F0
    ctx->pc = 0x2ba084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944272));
label_2ba088:
    // 0x2ba088: 0x240700c0  addiu       $a3, $zero, 0xC0
    ctx->pc = 0x2ba088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_2ba08c:
    // 0x2ba08c: 0xc040840  jal         func_102100
label_2ba090:
    if (ctx->pc == 0x2BA090u) {
        ctx->pc = 0x2BA090u;
            // 0x2ba090: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA094u;
        goto label_2ba094;
    }
    ctx->pc = 0x2BA08Cu;
    SET_GPR_U32(ctx, 31, 0x2BA094u);
    ctx->pc = 0x2BA090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA08Cu;
            // 0x2ba090: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA094u; }
        if (ctx->pc != 0x2BA094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA094u; }
        if (ctx->pc != 0x2BA094u) { return; }
    }
    ctx->pc = 0x2BA094u;
label_2ba094:
    // 0x2ba094: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x2ba094u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
label_2ba098:
    // 0x2ba098: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2ba098u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba09c:
    // 0x2ba09c: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x2ba09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2ba0a0:
    // 0x2ba0a0: 0xc0ae980  jal         func_2BA600
label_2ba0a4:
    if (ctx->pc == 0x2BA0A4u) {
        ctx->pc = 0x2BA0A4u;
            // 0x2ba0a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA0A8u;
        goto label_2ba0a8;
    }
    ctx->pc = 0x2BA0A0u;
    SET_GPR_U32(ctx, 31, 0x2BA0A8u);
    ctx->pc = 0x2BA0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA0A0u;
            // 0x2ba0a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BA600u;
    if (runtime->hasFunction(0x2BA600u)) {
        auto targetFn = runtime->lookupFunction(0x2BA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA0A8u; }
        if (ctx->pc != 0x2BA0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BA600_0x2ba600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA0A8u; }
        if (ctx->pc != 0x2BA0A8u) { return; }
    }
    ctx->pc = 0x2BA0A8u;
label_2ba0a8:
    // 0x2ba0a8: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x2ba0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2ba0ac:
    // 0x2ba0ac: 0xc0ae980  jal         func_2BA600
label_2ba0b0:
    if (ctx->pc == 0x2BA0B0u) {
        ctx->pc = 0x2BA0B0u;
            // 0x2ba0b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA0B4u;
        goto label_2ba0b4;
    }
    ctx->pc = 0x2BA0ACu;
    SET_GPR_U32(ctx, 31, 0x2BA0B4u);
    ctx->pc = 0x2BA0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA0ACu;
            // 0x2ba0b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BA600u;
    if (runtime->hasFunction(0x2BA600u)) {
        auto targetFn = runtime->lookupFunction(0x2BA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA0B4u; }
        if (ctx->pc != 0x2BA0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BA600_0x2ba600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA0B4u; }
        if (ctx->pc != 0x2BA0B4u) { return; }
    }
    ctx->pc = 0x2BA0B4u;
label_2ba0b4:
    // 0x2ba0b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ba0b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ba0b8:
    // 0x2ba0b8: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x2ba0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2ba0bc:
    // 0x2ba0bc: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x2ba0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_2ba0c0:
    // 0x2ba0c0: 0xc0ae978  jal         func_2BA5E0
label_2ba0c4:
    if (ctx->pc == 0x2BA0C4u) {
        ctx->pc = 0x2BA0C4u;
            // 0x2ba0c4: 0xafb3006c  sw          $s3, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 19));
        ctx->pc = 0x2BA0C8u;
        goto label_2ba0c8;
    }
    ctx->pc = 0x2BA0C0u;
    SET_GPR_U32(ctx, 31, 0x2BA0C8u);
    ctx->pc = 0x2BA0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA0C0u;
            // 0x2ba0c4: 0xafb3006c  sw          $s3, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BA5E0u;
    if (runtime->hasFunction(0x2BA5E0u)) {
        auto targetFn = runtime->lookupFunction(0x2BA5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA0C8u; }
        if (ctx->pc != 0x2BA0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BA5E0_0x2ba5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA0C8u; }
        if (ctx->pc != 0x2BA0C8u) { return; }
    }
    ctx->pc = 0x2BA0C8u;
label_2ba0c8:
    // 0x2ba0c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2ba0c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2ba0cc:
    // 0x2ba0cc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x2ba0ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2ba0d0:
    // 0x2ba0d0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_2ba0d4:
    if (ctx->pc == 0x2BA0D4u) {
        ctx->pc = 0x2BA0D4u;
            // 0x2ba0d4: 0x267300c0  addiu       $s3, $s3, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
        ctx->pc = 0x2BA0D8u;
        goto label_2ba0d8;
    }
    ctx->pc = 0x2BA0D0u;
    {
        const bool branch_taken_0x2ba0d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA0D0u;
            // 0x2ba0d4: 0x267300c0  addiu       $s3, $s3, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba0d0) {
            ctx->pc = 0x2BA0B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ba0b8;
        }
    }
    ctx->pc = 0x2BA0D8u;
label_2ba0d8:
    // 0x2ba0d8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2ba0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2ba0dc:
    // 0x2ba0dc: 0x24423bf0  addiu       $v0, $v0, 0x3BF0
    ctx->pc = 0x2ba0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15344));
label_2ba0e0:
    // 0x2ba0e0: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x2ba0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
label_2ba0e4:
    // 0x2ba0e4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2ba0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2ba0e8:
    // 0x2ba0e8: 0x3c054170  lui         $a1, 0x4170
    ctx->pc = 0x2ba0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16752 << 16));
label_2ba0ec:
    // 0x2ba0ec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2ba0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2ba0f0:
    // 0x2ba0f0: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x2ba0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_2ba0f4:
    // 0x2ba0f4: 0x24423c28  addiu       $v0, $v0, 0x3C28
    ctx->pc = 0x2ba0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15400));
label_2ba0f8:
    // 0x2ba0f8: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x2ba0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_2ba0fc:
    // 0x2ba0fc: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2ba0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2ba100:
    // 0x2ba100: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ba100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2ba104:
    // 0x2ba104: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2ba104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2ba108:
    // 0x2ba108: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x2ba108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_2ba10c:
    // 0x2ba10c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ba10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2ba110:
    // 0x2ba110: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x2ba110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_2ba114:
    // 0x2ba114: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x2ba114u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_2ba118:
    // 0x2ba118: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ba118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2ba11c:
    // 0x2ba11c: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x2ba11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_2ba120:
    // 0x2ba120: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x2ba120u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_2ba124:
    // 0x2ba124: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2ba124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2ba128:
    // 0x2ba128: 0xae2000a4  sw          $zero, 0xA4($s1)
    ctx->pc = 0x2ba128u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
label_2ba12c:
    // 0x2ba12c: 0x24428220  addiu       $v0, $v0, -0x7DE0
    ctx->pc = 0x2ba12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935072));
label_2ba130:
    // 0x2ba130: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x2ba130u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_2ba134:
    // 0x2ba134: 0xae2000a8  sw          $zero, 0xA8($s1)
    ctx->pc = 0x2ba134u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
label_2ba138:
    // 0x2ba138: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2ba138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2ba13c:
    // 0x2ba13c: 0xae2000ac  sw          $zero, 0xAC($s1)
    ctx->pc = 0x2ba13cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 0));
label_2ba140:
    // 0x2ba140: 0xafa40054  sw          $a0, 0x54($sp)
    ctx->pc = 0x2ba140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
label_2ba144:
    // 0x2ba144: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2ba144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2ba148:
    // 0x2ba148: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x2ba148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
label_2ba14c:
    // 0x2ba14c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x2ba14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2ba150:
    // 0x2ba150: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x2ba150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_2ba154:
    // 0x2ba154: 0xc0a7a88  jal         func_29EA20
label_2ba158:
    if (ctx->pc == 0x2BA158u) {
        ctx->pc = 0x2BA158u;
            // 0x2ba158: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->pc = 0x2BA15Cu;
        goto label_2ba15c;
    }
    ctx->pc = 0x2BA154u;
    SET_GPR_U32(ctx, 31, 0x2BA15Cu);
    ctx->pc = 0x2BA158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA154u;
            // 0x2ba158: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA15Cu; }
        if (ctx->pc != 0x2BA15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA15Cu; }
        if (ctx->pc != 0x2BA15Cu) { return; }
    }
    ctx->pc = 0x2BA15Cu;
label_2ba15c:
    // 0x2ba15c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2ba15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2ba160:
    // 0x2ba160: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ba160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba164:
    // 0x2ba164: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2ba168:
    if (ctx->pc == 0x2BA168u) {
        ctx->pc = 0x2BA168u;
            // 0x2ba168: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2BA16Cu;
        goto label_2ba16c;
    }
    ctx->pc = 0x2BA164u;
    {
        const bool branch_taken_0x2ba164 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA164u;
            // 0x2ba168: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba164) {
            ctx->pc = 0x2BA180u;
            goto label_2ba180;
        }
    }
    ctx->pc = 0x2BA16Cu;
label_2ba16c:
    // 0x2ba16c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2ba16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2ba170:
    // 0x2ba170: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x2ba170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ba174:
    // 0x2ba174: 0xc0804bc  jal         func_2012F0
label_2ba178:
    if (ctx->pc == 0x2BA178u) {
        ctx->pc = 0x2BA178u;
            // 0x2ba178: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2BA17Cu;
        goto label_2ba17c;
    }
    ctx->pc = 0x2BA174u;
    SET_GPR_U32(ctx, 31, 0x2BA17Cu);
    ctx->pc = 0x2BA178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA174u;
            // 0x2ba178: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA17Cu; }
        if (ctx->pc != 0x2BA17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA17Cu; }
        if (ctx->pc != 0x2BA17Cu) { return; }
    }
    ctx->pc = 0x2BA17Cu;
label_2ba17c:
    // 0x2ba17c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ba17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba180:
    // 0x2ba180: 0xae24005c  sw          $a0, 0x5C($s1)
    ctx->pc = 0x2ba180u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 4));
label_2ba184:
    // 0x2ba184: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ba184u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ba188:
    // 0x2ba188: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ba188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2ba18c:
    // 0x2ba18c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ba18cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ba190:
    // 0x2ba190: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ba190u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ba194:
    // 0x2ba194: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ba194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ba198:
    // 0x2ba198: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ba198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ba19c:
    // 0x2ba19c: 0x3e00008  jr          $ra
label_2ba1a0:
    if (ctx->pc == 0x2BA1A0u) {
        ctx->pc = 0x2BA1A0u;
            // 0x2ba1a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2BA1A4u;
        goto label_2ba1a4;
    }
    ctx->pc = 0x2BA19Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA19Cu;
            // 0x2ba1a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BA1A4u;
label_2ba1a4:
    // 0x2ba1a4: 0x0  nop
    ctx->pc = 0x2ba1a4u;
    // NOP
label_2ba1a8:
    // 0x2ba1a8: 0x0  nop
    ctx->pc = 0x2ba1a8u;
    // NOP
label_2ba1ac:
    // 0x2ba1ac: 0x0  nop
    ctx->pc = 0x2ba1acu;
    // NOP
label_2ba1b0:
    // 0x2ba1b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ba1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2ba1b4:
    // 0x2ba1b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ba1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2ba1b8:
    // 0x2ba1b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ba1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ba1bc:
    // 0x2ba1bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ba1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ba1c0:
    // 0x2ba1c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ba1c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ba1c4:
    // 0x2ba1c4: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_2ba1c8:
    if (ctx->pc == 0x2BA1C8u) {
        ctx->pc = 0x2BA1C8u;
            // 0x2ba1c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA1CCu;
        goto label_2ba1cc;
    }
    ctx->pc = 0x2BA1C4u;
    {
        const bool branch_taken_0x2ba1c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA1C4u;
            // 0x2ba1c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba1c4) {
            ctx->pc = 0x2BA228u;
            goto label_2ba228;
        }
    }
    ctx->pc = 0x2BA1CCu;
label_2ba1cc:
    // 0x2ba1cc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2ba1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2ba1d0:
    // 0x2ba1d0: 0x24428220  addiu       $v0, $v0, -0x7DE0
    ctx->pc = 0x2ba1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935072));
label_2ba1d4:
    // 0x2ba1d4: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_2ba1d8:
    if (ctx->pc == 0x2BA1D8u) {
        ctx->pc = 0x2BA1D8u;
            // 0x2ba1d8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2BA1DCu;
        goto label_2ba1dc;
    }
    ctx->pc = 0x2BA1D4u;
    {
        const bool branch_taken_0x2ba1d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA1D4u;
            // 0x2ba1d8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba1d4) {
            ctx->pc = 0x2BA210u;
            goto label_2ba210;
        }
    }
    ctx->pc = 0x2BA1DCu;
label_2ba1dc:
    // 0x2ba1dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ba1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2ba1e0:
    // 0x2ba1e0: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x2ba1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_2ba1e4:
    // 0x2ba1e4: 0xc0d37dc  jal         func_34DF70
label_2ba1e8:
    if (ctx->pc == 0x2BA1E8u) {
        ctx->pc = 0x2BA1E8u;
            // 0x2ba1e8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2BA1ECu;
        goto label_2ba1ec;
    }
    ctx->pc = 0x2BA1E4u;
    SET_GPR_U32(ctx, 31, 0x2BA1ECu);
    ctx->pc = 0x2BA1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA1E4u;
            // 0x2ba1e8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA1ECu; }
        if (ctx->pc != 0x2BA1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA1ECu; }
        if (ctx->pc != 0x2BA1ECu) { return; }
    }
    ctx->pc = 0x2BA1ECu;
label_2ba1ec:
    // 0x2ba1ec: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_2ba1f0:
    if (ctx->pc == 0x2BA1F0u) {
        ctx->pc = 0x2BA1F0u;
            // 0x2ba1f0: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x2BA1F4u;
        goto label_2ba1f4;
    }
    ctx->pc = 0x2BA1ECu;
    {
        const bool branch_taken_0x2ba1ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba1ec) {
            ctx->pc = 0x2BA1F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA1ECu;
            // 0x2ba1f0: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BA214u;
            goto label_2ba214;
        }
    }
    ctx->pc = 0x2BA1F4u;
label_2ba1f4:
    // 0x2ba1f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ba1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2ba1f8:
    // 0x2ba1f8: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x2ba1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_2ba1fc:
    // 0x2ba1fc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_2ba200:
    if (ctx->pc == 0x2BA200u) {
        ctx->pc = 0x2BA200u;
            // 0x2ba200: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2BA204u;
        goto label_2ba204;
    }
    ctx->pc = 0x2BA1FCu;
    {
        const bool branch_taken_0x2ba1fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA1FCu;
            // 0x2ba200: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba1fc) {
            ctx->pc = 0x2BA210u;
            goto label_2ba210;
        }
    }
    ctx->pc = 0x2BA204u;
label_2ba204:
    // 0x2ba204: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ba204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2ba208:
    // 0x2ba208: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2ba208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2ba20c:
    // 0x2ba20c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2ba20cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2ba210:
    // 0x2ba210: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2ba210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2ba214:
    // 0x2ba214: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ba214u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2ba218:
    // 0x2ba218: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2ba21c:
    if (ctx->pc == 0x2BA21Cu) {
        ctx->pc = 0x2BA21Cu;
            // 0x2ba21c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA220u;
        goto label_2ba220;
    }
    ctx->pc = 0x2BA218u;
    {
        const bool branch_taken_0x2ba218 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ba218) {
            ctx->pc = 0x2BA21Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA218u;
            // 0x2ba21c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BA22Cu;
            goto label_2ba22c;
        }
    }
    ctx->pc = 0x2BA220u;
label_2ba220:
    // 0x2ba220: 0xc0400a8  jal         func_1002A0
label_2ba224:
    if (ctx->pc == 0x2BA224u) {
        ctx->pc = 0x2BA224u;
            // 0x2ba224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA228u;
        goto label_2ba228;
    }
    ctx->pc = 0x2BA220u;
    SET_GPR_U32(ctx, 31, 0x2BA228u);
    ctx->pc = 0x2BA224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA220u;
            // 0x2ba224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA228u; }
        if (ctx->pc != 0x2BA228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA228u; }
        if (ctx->pc != 0x2BA228u) { return; }
    }
    ctx->pc = 0x2BA228u;
label_2ba228:
    // 0x2ba228: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ba228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ba22c:
    // 0x2ba22c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ba22cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ba230:
    // 0x2ba230: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ba230u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ba234:
    // 0x2ba234: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ba234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ba238:
    // 0x2ba238: 0x3e00008  jr          $ra
label_2ba23c:
    if (ctx->pc == 0x2BA23Cu) {
        ctx->pc = 0x2BA23Cu;
            // 0x2ba23c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2BA240u;
        goto label_2ba240;
    }
    ctx->pc = 0x2BA238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA238u;
            // 0x2ba23c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BA240u;
label_2ba240:
    // 0x2ba240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ba240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2ba244:
    // 0x2ba244: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ba244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2ba248:
    // 0x2ba248: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ba248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ba24c:
    // 0x2ba24c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ba24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ba250:
    // 0x2ba250: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ba250u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ba254:
    // 0x2ba254: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_2ba258:
    if (ctx->pc == 0x2BA258u) {
        ctx->pc = 0x2BA258u;
            // 0x2ba258: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA25Cu;
        goto label_2ba25c;
    }
    ctx->pc = 0x2BA254u;
    {
        const bool branch_taken_0x2ba254 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA254u;
            // 0x2ba258: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba254) {
            ctx->pc = 0x2BA2A8u;
            goto label_2ba2a8;
        }
    }
    ctx->pc = 0x2BA25Cu;
label_2ba25c:
    // 0x2ba25c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ba25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2ba260:
    // 0x2ba260: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x2ba260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_2ba264:
    // 0x2ba264: 0xc0d37dc  jal         func_34DF70
label_2ba268:
    if (ctx->pc == 0x2BA268u) {
        ctx->pc = 0x2BA268u;
            // 0x2ba268: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2BA26Cu;
        goto label_2ba26c;
    }
    ctx->pc = 0x2BA264u;
    SET_GPR_U32(ctx, 31, 0x2BA26Cu);
    ctx->pc = 0x2BA268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA264u;
            // 0x2ba268: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA26Cu; }
        if (ctx->pc != 0x2BA26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA26Cu; }
        if (ctx->pc != 0x2BA26Cu) { return; }
    }
    ctx->pc = 0x2BA26Cu;
label_2ba26c:
    // 0x2ba26c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2ba270:
    if (ctx->pc == 0x2BA270u) {
        ctx->pc = 0x2BA270u;
            // 0x2ba270: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2BA274u;
        goto label_2ba274;
    }
    ctx->pc = 0x2BA26Cu;
    {
        const bool branch_taken_0x2ba26c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba26c) {
            ctx->pc = 0x2BA270u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA26Cu;
            // 0x2ba270: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BA294u;
            goto label_2ba294;
        }
    }
    ctx->pc = 0x2BA274u;
label_2ba274:
    // 0x2ba274: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ba274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2ba278:
    // 0x2ba278: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x2ba278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_2ba27c:
    // 0x2ba27c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2ba280:
    if (ctx->pc == 0x2BA280u) {
        ctx->pc = 0x2BA280u;
            // 0x2ba280: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2BA284u;
        goto label_2ba284;
    }
    ctx->pc = 0x2BA27Cu;
    {
        const bool branch_taken_0x2ba27c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA27Cu;
            // 0x2ba280: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba27c) {
            ctx->pc = 0x2BA290u;
            goto label_2ba290;
        }
    }
    ctx->pc = 0x2BA284u;
label_2ba284:
    // 0x2ba284: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ba284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2ba288:
    // 0x2ba288: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2ba288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2ba28c:
    // 0x2ba28c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2ba28cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2ba290:
    // 0x2ba290: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2ba290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2ba294:
    // 0x2ba294: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ba294u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2ba298:
    // 0x2ba298: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2ba29c:
    if (ctx->pc == 0x2BA29Cu) {
        ctx->pc = 0x2BA29Cu;
            // 0x2ba29c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA2A0u;
        goto label_2ba2a0;
    }
    ctx->pc = 0x2BA298u;
    {
        const bool branch_taken_0x2ba298 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ba298) {
            ctx->pc = 0x2BA29Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA298u;
            // 0x2ba29c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BA2ACu;
            goto label_2ba2ac;
        }
    }
    ctx->pc = 0x2BA2A0u;
label_2ba2a0:
    // 0x2ba2a0: 0xc0400a8  jal         func_1002A0
label_2ba2a4:
    if (ctx->pc == 0x2BA2A4u) {
        ctx->pc = 0x2BA2A4u;
            // 0x2ba2a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA2A8u;
        goto label_2ba2a8;
    }
    ctx->pc = 0x2BA2A0u;
    SET_GPR_U32(ctx, 31, 0x2BA2A8u);
    ctx->pc = 0x2BA2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA2A0u;
            // 0x2ba2a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA2A8u; }
        if (ctx->pc != 0x2BA2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA2A8u; }
        if (ctx->pc != 0x2BA2A8u) { return; }
    }
    ctx->pc = 0x2BA2A8u;
label_2ba2a8:
    // 0x2ba2a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ba2a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ba2ac:
    // 0x2ba2ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ba2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ba2b0:
    // 0x2ba2b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ba2b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ba2b4:
    // 0x2ba2b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ba2b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ba2b8:
    // 0x2ba2b8: 0x3e00008  jr          $ra
label_2ba2bc:
    if (ctx->pc == 0x2BA2BCu) {
        ctx->pc = 0x2BA2BCu;
            // 0x2ba2bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2BA2C0u;
        goto label_2ba2c0;
    }
    ctx->pc = 0x2BA2B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA2B8u;
            // 0x2ba2bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BA2C0u;
label_2ba2c0:
    // 0x2ba2c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ba2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2ba2c4:
    // 0x2ba2c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ba2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2ba2c8:
    // 0x2ba2c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ba2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ba2cc:
    // 0x2ba2cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ba2ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ba2d0:
    // 0x2ba2d0: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_2ba2d4:
    if (ctx->pc == 0x2BA2D4u) {
        ctx->pc = 0x2BA2D4u;
            // 0x2ba2d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA2D8u;
        goto label_2ba2d8;
    }
    ctx->pc = 0x2BA2D0u;
    {
        const bool branch_taken_0x2ba2d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba2d0) {
            ctx->pc = 0x2BA2D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA2D0u;
            // 0x2ba2d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BA310u;
            goto label_2ba310;
        }
    }
    ctx->pc = 0x2BA2D8u;
label_2ba2d8:
    // 0x2ba2d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ba2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2ba2dc:
    // 0x2ba2dc: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x2ba2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_2ba2e0:
    // 0x2ba2e0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_2ba2e4:
    if (ctx->pc == 0x2BA2E4u) {
        ctx->pc = 0x2BA2E4u;
            // 0x2ba2e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2BA2E8u;
        goto label_2ba2e8;
    }
    ctx->pc = 0x2BA2E0u;
    {
        const bool branch_taken_0x2ba2e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA2E0u;
            // 0x2ba2e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba2e0) {
            ctx->pc = 0x2BA2F4u;
            goto label_2ba2f4;
        }
    }
    ctx->pc = 0x2BA2E8u;
label_2ba2e8:
    // 0x2ba2e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ba2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2ba2ec:
    // 0x2ba2ec: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2ba2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2ba2f0:
    // 0x2ba2f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2ba2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2ba2f4:
    // 0x2ba2f4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2ba2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_2ba2f8:
    // 0x2ba2f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ba2f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2ba2fc:
    // 0x2ba2fc: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_2ba300:
    if (ctx->pc == 0x2BA300u) {
        ctx->pc = 0x2BA304u;
        goto label_2ba304;
    }
    ctx->pc = 0x2BA2FCu;
    {
        const bool branch_taken_0x2ba2fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ba2fc) {
            ctx->pc = 0x2BA30Cu;
            goto label_2ba30c;
        }
    }
    ctx->pc = 0x2BA304u;
label_2ba304:
    // 0x2ba304: 0xc0400a8  jal         func_1002A0
label_2ba308:
    if (ctx->pc == 0x2BA308u) {
        ctx->pc = 0x2BA308u;
            // 0x2ba308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA30Cu;
        goto label_2ba30c;
    }
    ctx->pc = 0x2BA304u;
    SET_GPR_U32(ctx, 31, 0x2BA30Cu);
    ctx->pc = 0x2BA308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA304u;
            // 0x2ba308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA30Cu; }
        if (ctx->pc != 0x2BA30Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA30Cu; }
        if (ctx->pc != 0x2BA30Cu) { return; }
    }
    ctx->pc = 0x2BA30Cu;
label_2ba30c:
    // 0x2ba30c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ba30cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ba310:
    // 0x2ba310: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ba310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ba314:
    // 0x2ba314: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ba314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ba318:
    // 0x2ba318: 0x3e00008  jr          $ra
label_2ba31c:
    if (ctx->pc == 0x2BA31Cu) {
        ctx->pc = 0x2BA31Cu;
            // 0x2ba31c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2BA320u;
        goto label_2ba320;
    }
    ctx->pc = 0x2BA318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA318u;
            // 0x2ba31c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BA320u;
label_2ba320:
    // 0x2ba320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ba320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2ba324:
    // 0x2ba324: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ba324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2ba328:
    // 0x2ba328: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ba328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ba32c:
    // 0x2ba32c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ba32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ba330:
    // 0x2ba330: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ba330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ba334:
    // 0x2ba334: 0x12200054  beqz        $s1, . + 4 + (0x54 << 2)
label_2ba338:
    if (ctx->pc == 0x2BA338u) {
        ctx->pc = 0x2BA338u;
            // 0x2ba338: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA33Cu;
        goto label_2ba33c;
    }
    ctx->pc = 0x2BA334u;
    {
        const bool branch_taken_0x2ba334 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA334u;
            // 0x2ba338: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba334) {
            ctx->pc = 0x2BA488u;
            goto label_2ba488;
        }
    }
    ctx->pc = 0x2BA33Cu;
label_2ba33c:
    // 0x2ba33c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ba33cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2ba340:
    // 0x2ba340: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ba340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2ba344:
    // 0x2ba344: 0x246324d0  addiu       $v1, $v1, 0x24D0
    ctx->pc = 0x2ba344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9424));
label_2ba348:
    // 0x2ba348: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2ba348u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2ba34c:
    // 0x2ba34c: 0x24422508  addiu       $v0, $v0, 0x2508
    ctx->pc = 0x2ba34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9480));
label_2ba350:
    // 0x2ba350: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2ba350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2ba354:
    // 0x2ba354: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2ba354u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2ba358:
    // 0x2ba358: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2ba358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2ba35c:
    // 0x2ba35c: 0xc0407c0  jal         func_101F00
label_2ba360:
    if (ctx->pc == 0x2BA360u) {
        ctx->pc = 0x2BA360u;
            // 0x2ba360: 0x24a5a610  addiu       $a1, $a1, -0x59F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944272));
        ctx->pc = 0x2BA364u;
        goto label_2ba364;
    }
    ctx->pc = 0x2BA35Cu;
    SET_GPR_U32(ctx, 31, 0x2BA364u);
    ctx->pc = 0x2BA360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA35Cu;
            // 0x2ba360: 0x24a5a610  addiu       $a1, $a1, -0x59F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA364u; }
        if (ctx->pc != 0x2BA364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA364u; }
        if (ctx->pc != 0x2BA364u) { return; }
    }
    ctx->pc = 0x2BA364u;
label_2ba364:
    // 0x2ba364: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2ba364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2ba368:
    // 0x2ba368: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_2ba36c:
    if (ctx->pc == 0x2BA36Cu) {
        ctx->pc = 0x2BA36Cu;
            // 0x2ba36c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2BA370u;
        goto label_2ba370;
    }
    ctx->pc = 0x2BA368u;
    {
        const bool branch_taken_0x2ba368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba368) {
            ctx->pc = 0x2BA36Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA368u;
            // 0x2ba36c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BA39Cu;
            goto label_2ba39c;
        }
    }
    ctx->pc = 0x2BA370u;
label_2ba370:
    // 0x2ba370: 0x26220094  addiu       $v0, $s1, 0x94
    ctx->pc = 0x2ba370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
label_2ba374:
    // 0x2ba374: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2ba378:
    if (ctx->pc == 0x2BA378u) {
        ctx->pc = 0x2BA378u;
            // 0x2ba378: 0x26220084  addiu       $v0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->pc = 0x2BA37Cu;
        goto label_2ba37c;
    }
    ctx->pc = 0x2BA374u;
    {
        const bool branch_taken_0x2ba374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba374) {
            ctx->pc = 0x2BA378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA374u;
            // 0x2ba378: 0x26220084  addiu       $v0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BA388u;
            goto label_2ba388;
        }
    }
    ctx->pc = 0x2BA37Cu;
label_2ba37c:
    // 0x2ba37c: 0xc07507c  jal         func_1D41F0
label_2ba380:
    if (ctx->pc == 0x2BA380u) {
        ctx->pc = 0x2BA380u;
            // 0x2ba380: 0x8e240098  lw          $a0, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->pc = 0x2BA384u;
        goto label_2ba384;
    }
    ctx->pc = 0x2BA37Cu;
    SET_GPR_U32(ctx, 31, 0x2BA384u);
    ctx->pc = 0x2BA380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA37Cu;
            // 0x2ba380: 0x8e240098  lw          $a0, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA384u; }
        if (ctx->pc != 0x2BA384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA384u; }
        if (ctx->pc != 0x2BA384u) { return; }
    }
    ctx->pc = 0x2BA384u;
label_2ba384:
    // 0x2ba384: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2ba384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2ba388:
    // 0x2ba388: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2ba38c:
    if (ctx->pc == 0x2BA38Cu) {
        ctx->pc = 0x2BA390u;
        goto label_2ba390;
    }
    ctx->pc = 0x2BA388u;
    {
        const bool branch_taken_0x2ba388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba388) {
            ctx->pc = 0x2BA398u;
            goto label_2ba398;
        }
    }
    ctx->pc = 0x2BA390u;
label_2ba390:
    // 0x2ba390: 0xc07507c  jal         func_1D41F0
label_2ba394:
    if (ctx->pc == 0x2BA394u) {
        ctx->pc = 0x2BA394u;
            // 0x2ba394: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x2BA398u;
        goto label_2ba398;
    }
    ctx->pc = 0x2BA390u;
    SET_GPR_U32(ctx, 31, 0x2BA398u);
    ctx->pc = 0x2BA394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA390u;
            // 0x2ba394: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA398u; }
        if (ctx->pc != 0x2BA398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA398u; }
        if (ctx->pc != 0x2BA398u) { return; }
    }
    ctx->pc = 0x2BA398u;
label_2ba398:
    // 0x2ba398: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2ba398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2ba39c:
    // 0x2ba39c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2ba3a0:
    if (ctx->pc == 0x2BA3A0u) {
        ctx->pc = 0x2BA3A0u;
            // 0x2ba3a0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2BA3A4u;
        goto label_2ba3a4;
    }
    ctx->pc = 0x2BA39Cu;
    {
        const bool branch_taken_0x2ba39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba39c) {
            ctx->pc = 0x2BA3A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA39Cu;
            // 0x2ba3a0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BA3CCu;
            goto label_2ba3cc;
        }
    }
    ctx->pc = 0x2BA3A4u;
label_2ba3a4:
    // 0x2ba3a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2ba3a8:
    if (ctx->pc == 0x2BA3A8u) {
        ctx->pc = 0x2BA3ACu;
        goto label_2ba3ac;
    }
    ctx->pc = 0x2BA3A4u;
    {
        const bool branch_taken_0x2ba3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba3a4) {
            ctx->pc = 0x2BA3C8u;
            goto label_2ba3c8;
        }
    }
    ctx->pc = 0x2BA3ACu;
label_2ba3ac:
    // 0x2ba3ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2ba3b0:
    if (ctx->pc == 0x2BA3B0u) {
        ctx->pc = 0x2BA3B4u;
        goto label_2ba3b4;
    }
    ctx->pc = 0x2BA3ACu;
    {
        const bool branch_taken_0x2ba3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba3ac) {
            ctx->pc = 0x2BA3C8u;
            goto label_2ba3c8;
        }
    }
    ctx->pc = 0x2BA3B4u;
label_2ba3b4:
    // 0x2ba3b4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2ba3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2ba3b8:
    // 0x2ba3b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2ba3bc:
    if (ctx->pc == 0x2BA3BCu) {
        ctx->pc = 0x2BA3C0u;
        goto label_2ba3c0;
    }
    ctx->pc = 0x2BA3B8u;
    {
        const bool branch_taken_0x2ba3b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba3b8) {
            ctx->pc = 0x2BA3C8u;
            goto label_2ba3c8;
        }
    }
    ctx->pc = 0x2BA3C0u;
label_2ba3c0:
    // 0x2ba3c0: 0xc0400a8  jal         func_1002A0
label_2ba3c4:
    if (ctx->pc == 0x2BA3C4u) {
        ctx->pc = 0x2BA3C8u;
        goto label_2ba3c8;
    }
    ctx->pc = 0x2BA3C0u;
    SET_GPR_U32(ctx, 31, 0x2BA3C8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA3C8u; }
        if (ctx->pc != 0x2BA3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA3C8u; }
        if (ctx->pc != 0x2BA3C8u) { return; }
    }
    ctx->pc = 0x2BA3C8u;
label_2ba3c8:
    // 0x2ba3c8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2ba3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2ba3cc:
    // 0x2ba3cc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2ba3d0:
    if (ctx->pc == 0x2BA3D0u) {
        ctx->pc = 0x2BA3D0u;
            // 0x2ba3d0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2BA3D4u;
        goto label_2ba3d4;
    }
    ctx->pc = 0x2BA3CCu;
    {
        const bool branch_taken_0x2ba3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba3cc) {
            ctx->pc = 0x2BA3D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA3CCu;
            // 0x2ba3d0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BA3FCu;
            goto label_2ba3fc;
        }
    }
    ctx->pc = 0x2BA3D4u;
label_2ba3d4:
    // 0x2ba3d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2ba3d8:
    if (ctx->pc == 0x2BA3D8u) {
        ctx->pc = 0x2BA3DCu;
        goto label_2ba3dc;
    }
    ctx->pc = 0x2BA3D4u;
    {
        const bool branch_taken_0x2ba3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba3d4) {
            ctx->pc = 0x2BA3F8u;
            goto label_2ba3f8;
        }
    }
    ctx->pc = 0x2BA3DCu;
label_2ba3dc:
    // 0x2ba3dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2ba3e0:
    if (ctx->pc == 0x2BA3E0u) {
        ctx->pc = 0x2BA3E4u;
        goto label_2ba3e4;
    }
    ctx->pc = 0x2BA3DCu;
    {
        const bool branch_taken_0x2ba3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba3dc) {
            ctx->pc = 0x2BA3F8u;
            goto label_2ba3f8;
        }
    }
    ctx->pc = 0x2BA3E4u;
label_2ba3e4:
    // 0x2ba3e4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2ba3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2ba3e8:
    // 0x2ba3e8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2ba3ec:
    if (ctx->pc == 0x2BA3ECu) {
        ctx->pc = 0x2BA3F0u;
        goto label_2ba3f0;
    }
    ctx->pc = 0x2BA3E8u;
    {
        const bool branch_taken_0x2ba3e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba3e8) {
            ctx->pc = 0x2BA3F8u;
            goto label_2ba3f8;
        }
    }
    ctx->pc = 0x2BA3F0u;
label_2ba3f0:
    // 0x2ba3f0: 0xc0400a8  jal         func_1002A0
label_2ba3f4:
    if (ctx->pc == 0x2BA3F4u) {
        ctx->pc = 0x2BA3F8u;
        goto label_2ba3f8;
    }
    ctx->pc = 0x2BA3F0u;
    SET_GPR_U32(ctx, 31, 0x2BA3F8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA3F8u; }
        if (ctx->pc != 0x2BA3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA3F8u; }
        if (ctx->pc != 0x2BA3F8u) { return; }
    }
    ctx->pc = 0x2BA3F8u;
label_2ba3f8:
    // 0x2ba3f8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2ba3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2ba3fc:
    // 0x2ba3fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2ba400:
    if (ctx->pc == 0x2BA400u) {
        ctx->pc = 0x2BA404u;
        goto label_2ba404;
    }
    ctx->pc = 0x2BA3FCu;
    {
        const bool branch_taken_0x2ba3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba3fc) {
            ctx->pc = 0x2BA418u;
            goto label_2ba418;
        }
    }
    ctx->pc = 0x2BA404u;
label_2ba404:
    // 0x2ba404: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ba404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2ba408:
    // 0x2ba408: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ba408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2ba40c:
    // 0x2ba40c: 0x24632448  addiu       $v1, $v1, 0x2448
    ctx->pc = 0x2ba40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9288));
label_2ba410:
    // 0x2ba410: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2ba410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2ba414:
    // 0x2ba414: 0xac400cf0  sw          $zero, 0xCF0($v0)
    ctx->pc = 0x2ba414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3312), GPR_U32(ctx, 0));
label_2ba418:
    // 0x2ba418: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2ba41c:
    if (ctx->pc == 0x2BA41Cu) {
        ctx->pc = 0x2BA41Cu;
            // 0x2ba41c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2BA420u;
        goto label_2ba420;
    }
    ctx->pc = 0x2BA418u;
    {
        const bool branch_taken_0x2ba418 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba418) {
            ctx->pc = 0x2BA41Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA418u;
            // 0x2ba41c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BA474u;
            goto label_2ba474;
        }
    }
    ctx->pc = 0x2BA420u;
label_2ba420:
    // 0x2ba420: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ba420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2ba424:
    // 0x2ba424: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2ba424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2ba428:
    // 0x2ba428: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2ba428u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2ba42c:
    // 0x2ba42c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2ba42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2ba430:
    // 0x2ba430: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ba434:
    if (ctx->pc == 0x2BA434u) {
        ctx->pc = 0x2BA434u;
            // 0x2ba434: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2BA438u;
        goto label_2ba438;
    }
    ctx->pc = 0x2BA430u;
    {
        const bool branch_taken_0x2ba430 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba430) {
            ctx->pc = 0x2BA434u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA430u;
            // 0x2ba434: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BA44Cu;
            goto label_2ba44c;
        }
    }
    ctx->pc = 0x2BA438u;
label_2ba438:
    // 0x2ba438: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2ba438u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ba43c:
    // 0x2ba43c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2ba43cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2ba440:
    // 0x2ba440: 0x320f809  jalr        $t9
label_2ba444:
    if (ctx->pc == 0x2BA444u) {
        ctx->pc = 0x2BA444u;
            // 0x2ba444: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BA448u;
        goto label_2ba448;
    }
    ctx->pc = 0x2BA440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BA448u);
        ctx->pc = 0x2BA444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA440u;
            // 0x2ba444: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BA448u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BA448u; }
            if (ctx->pc != 0x2BA448u) { return; }
        }
        }
    }
    ctx->pc = 0x2BA448u;
label_2ba448:
    // 0x2ba448: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2ba448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2ba44c:
    // 0x2ba44c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ba450:
    if (ctx->pc == 0x2BA450u) {
        ctx->pc = 0x2BA450u;
            // 0x2ba450: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA454u;
        goto label_2ba454;
    }
    ctx->pc = 0x2BA44Cu;
    {
        const bool branch_taken_0x2ba44c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba44c) {
            ctx->pc = 0x2BA450u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA44Cu;
            // 0x2ba450: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BA468u;
            goto label_2ba468;
        }
    }
    ctx->pc = 0x2BA454u;
label_2ba454:
    // 0x2ba454: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2ba454u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ba458:
    // 0x2ba458: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2ba458u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2ba45c:
    // 0x2ba45c: 0x320f809  jalr        $t9
label_2ba460:
    if (ctx->pc == 0x2BA460u) {
        ctx->pc = 0x2BA460u;
            // 0x2ba460: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BA464u;
        goto label_2ba464;
    }
    ctx->pc = 0x2BA45Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BA464u);
        ctx->pc = 0x2BA460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA45Cu;
            // 0x2ba460: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BA464u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BA464u; }
            if (ctx->pc != 0x2BA464u) { return; }
        }
        }
    }
    ctx->pc = 0x2BA464u;
label_2ba464:
    // 0x2ba464: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ba464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ba468:
    // 0x2ba468: 0xc075bf8  jal         func_1D6FE0
label_2ba46c:
    if (ctx->pc == 0x2BA46Cu) {
        ctx->pc = 0x2BA46Cu;
            // 0x2ba46c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA470u;
        goto label_2ba470;
    }
    ctx->pc = 0x2BA468u;
    SET_GPR_U32(ctx, 31, 0x2BA470u);
    ctx->pc = 0x2BA46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA468u;
            // 0x2ba46c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA470u; }
        if (ctx->pc != 0x2BA470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA470u; }
        if (ctx->pc != 0x2BA470u) { return; }
    }
    ctx->pc = 0x2BA470u;
label_2ba470:
    // 0x2ba470: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2ba470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2ba474:
    // 0x2ba474: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ba474u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2ba478:
    // 0x2ba478: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2ba47c:
    if (ctx->pc == 0x2BA47Cu) {
        ctx->pc = 0x2BA47Cu;
            // 0x2ba47c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA480u;
        goto label_2ba480;
    }
    ctx->pc = 0x2BA478u;
    {
        const bool branch_taken_0x2ba478 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ba478) {
            ctx->pc = 0x2BA47Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA478u;
            // 0x2ba47c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BA48Cu;
            goto label_2ba48c;
        }
    }
    ctx->pc = 0x2BA480u;
label_2ba480:
    // 0x2ba480: 0xc0400a8  jal         func_1002A0
label_2ba484:
    if (ctx->pc == 0x2BA484u) {
        ctx->pc = 0x2BA484u;
            // 0x2ba484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA488u;
        goto label_2ba488;
    }
    ctx->pc = 0x2BA480u;
    SET_GPR_U32(ctx, 31, 0x2BA488u);
    ctx->pc = 0x2BA484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA480u;
            // 0x2ba484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA488u; }
        if (ctx->pc != 0x2BA488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA488u; }
        if (ctx->pc != 0x2BA488u) { return; }
    }
    ctx->pc = 0x2BA488u;
label_2ba488:
    // 0x2ba488: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ba488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ba48c:
    // 0x2ba48c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ba48cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ba490:
    // 0x2ba490: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ba490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ba494:
    // 0x2ba494: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ba494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ba498:
    // 0x2ba498: 0x3e00008  jr          $ra
label_2ba49c:
    if (ctx->pc == 0x2BA49Cu) {
        ctx->pc = 0x2BA49Cu;
            // 0x2ba49c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2BA4A0u;
        goto label_fallthrough_0x2ba498;
    }
    ctx->pc = 0x2BA498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA498u;
            // 0x2ba49c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2ba498:
    ctx->pc = 0x2BA4A0u;
}
