#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004BCF50
// Address: 0x4bcf50 - 0x4bd4d0
void sub_004BCF50_0x4bcf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BCF50_0x4bcf50");
#endif

    switch (ctx->pc) {
        case 0x4bcf50u: goto label_4bcf50;
        case 0x4bcf54u: goto label_4bcf54;
        case 0x4bcf58u: goto label_4bcf58;
        case 0x4bcf5cu: goto label_4bcf5c;
        case 0x4bcf60u: goto label_4bcf60;
        case 0x4bcf64u: goto label_4bcf64;
        case 0x4bcf68u: goto label_4bcf68;
        case 0x4bcf6cu: goto label_4bcf6c;
        case 0x4bcf70u: goto label_4bcf70;
        case 0x4bcf74u: goto label_4bcf74;
        case 0x4bcf78u: goto label_4bcf78;
        case 0x4bcf7cu: goto label_4bcf7c;
        case 0x4bcf80u: goto label_4bcf80;
        case 0x4bcf84u: goto label_4bcf84;
        case 0x4bcf88u: goto label_4bcf88;
        case 0x4bcf8cu: goto label_4bcf8c;
        case 0x4bcf90u: goto label_4bcf90;
        case 0x4bcf94u: goto label_4bcf94;
        case 0x4bcf98u: goto label_4bcf98;
        case 0x4bcf9cu: goto label_4bcf9c;
        case 0x4bcfa0u: goto label_4bcfa0;
        case 0x4bcfa4u: goto label_4bcfa4;
        case 0x4bcfa8u: goto label_4bcfa8;
        case 0x4bcfacu: goto label_4bcfac;
        case 0x4bcfb0u: goto label_4bcfb0;
        case 0x4bcfb4u: goto label_4bcfb4;
        case 0x4bcfb8u: goto label_4bcfb8;
        case 0x4bcfbcu: goto label_4bcfbc;
        case 0x4bcfc0u: goto label_4bcfc0;
        case 0x4bcfc4u: goto label_4bcfc4;
        case 0x4bcfc8u: goto label_4bcfc8;
        case 0x4bcfccu: goto label_4bcfcc;
        case 0x4bcfd0u: goto label_4bcfd0;
        case 0x4bcfd4u: goto label_4bcfd4;
        case 0x4bcfd8u: goto label_4bcfd8;
        case 0x4bcfdcu: goto label_4bcfdc;
        case 0x4bcfe0u: goto label_4bcfe0;
        case 0x4bcfe4u: goto label_4bcfe4;
        case 0x4bcfe8u: goto label_4bcfe8;
        case 0x4bcfecu: goto label_4bcfec;
        case 0x4bcff0u: goto label_4bcff0;
        case 0x4bcff4u: goto label_4bcff4;
        case 0x4bcff8u: goto label_4bcff8;
        case 0x4bcffcu: goto label_4bcffc;
        case 0x4bd000u: goto label_4bd000;
        case 0x4bd004u: goto label_4bd004;
        case 0x4bd008u: goto label_4bd008;
        case 0x4bd00cu: goto label_4bd00c;
        case 0x4bd010u: goto label_4bd010;
        case 0x4bd014u: goto label_4bd014;
        case 0x4bd018u: goto label_4bd018;
        case 0x4bd01cu: goto label_4bd01c;
        case 0x4bd020u: goto label_4bd020;
        case 0x4bd024u: goto label_4bd024;
        case 0x4bd028u: goto label_4bd028;
        case 0x4bd02cu: goto label_4bd02c;
        case 0x4bd030u: goto label_4bd030;
        case 0x4bd034u: goto label_4bd034;
        case 0x4bd038u: goto label_4bd038;
        case 0x4bd03cu: goto label_4bd03c;
        case 0x4bd040u: goto label_4bd040;
        case 0x4bd044u: goto label_4bd044;
        case 0x4bd048u: goto label_4bd048;
        case 0x4bd04cu: goto label_4bd04c;
        case 0x4bd050u: goto label_4bd050;
        case 0x4bd054u: goto label_4bd054;
        case 0x4bd058u: goto label_4bd058;
        case 0x4bd05cu: goto label_4bd05c;
        case 0x4bd060u: goto label_4bd060;
        case 0x4bd064u: goto label_4bd064;
        case 0x4bd068u: goto label_4bd068;
        case 0x4bd06cu: goto label_4bd06c;
        case 0x4bd070u: goto label_4bd070;
        case 0x4bd074u: goto label_4bd074;
        case 0x4bd078u: goto label_4bd078;
        case 0x4bd07cu: goto label_4bd07c;
        case 0x4bd080u: goto label_4bd080;
        case 0x4bd084u: goto label_4bd084;
        case 0x4bd088u: goto label_4bd088;
        case 0x4bd08cu: goto label_4bd08c;
        case 0x4bd090u: goto label_4bd090;
        case 0x4bd094u: goto label_4bd094;
        case 0x4bd098u: goto label_4bd098;
        case 0x4bd09cu: goto label_4bd09c;
        case 0x4bd0a0u: goto label_4bd0a0;
        case 0x4bd0a4u: goto label_4bd0a4;
        case 0x4bd0a8u: goto label_4bd0a8;
        case 0x4bd0acu: goto label_4bd0ac;
        case 0x4bd0b0u: goto label_4bd0b0;
        case 0x4bd0b4u: goto label_4bd0b4;
        case 0x4bd0b8u: goto label_4bd0b8;
        case 0x4bd0bcu: goto label_4bd0bc;
        case 0x4bd0c0u: goto label_4bd0c0;
        case 0x4bd0c4u: goto label_4bd0c4;
        case 0x4bd0c8u: goto label_4bd0c8;
        case 0x4bd0ccu: goto label_4bd0cc;
        case 0x4bd0d0u: goto label_4bd0d0;
        case 0x4bd0d4u: goto label_4bd0d4;
        case 0x4bd0d8u: goto label_4bd0d8;
        case 0x4bd0dcu: goto label_4bd0dc;
        case 0x4bd0e0u: goto label_4bd0e0;
        case 0x4bd0e4u: goto label_4bd0e4;
        case 0x4bd0e8u: goto label_4bd0e8;
        case 0x4bd0ecu: goto label_4bd0ec;
        case 0x4bd0f0u: goto label_4bd0f0;
        case 0x4bd0f4u: goto label_4bd0f4;
        case 0x4bd0f8u: goto label_4bd0f8;
        case 0x4bd0fcu: goto label_4bd0fc;
        case 0x4bd100u: goto label_4bd100;
        case 0x4bd104u: goto label_4bd104;
        case 0x4bd108u: goto label_4bd108;
        case 0x4bd10cu: goto label_4bd10c;
        case 0x4bd110u: goto label_4bd110;
        case 0x4bd114u: goto label_4bd114;
        case 0x4bd118u: goto label_4bd118;
        case 0x4bd11cu: goto label_4bd11c;
        case 0x4bd120u: goto label_4bd120;
        case 0x4bd124u: goto label_4bd124;
        case 0x4bd128u: goto label_4bd128;
        case 0x4bd12cu: goto label_4bd12c;
        case 0x4bd130u: goto label_4bd130;
        case 0x4bd134u: goto label_4bd134;
        case 0x4bd138u: goto label_4bd138;
        case 0x4bd13cu: goto label_4bd13c;
        case 0x4bd140u: goto label_4bd140;
        case 0x4bd144u: goto label_4bd144;
        case 0x4bd148u: goto label_4bd148;
        case 0x4bd14cu: goto label_4bd14c;
        case 0x4bd150u: goto label_4bd150;
        case 0x4bd154u: goto label_4bd154;
        case 0x4bd158u: goto label_4bd158;
        case 0x4bd15cu: goto label_4bd15c;
        case 0x4bd160u: goto label_4bd160;
        case 0x4bd164u: goto label_4bd164;
        case 0x4bd168u: goto label_4bd168;
        case 0x4bd16cu: goto label_4bd16c;
        case 0x4bd170u: goto label_4bd170;
        case 0x4bd174u: goto label_4bd174;
        case 0x4bd178u: goto label_4bd178;
        case 0x4bd17cu: goto label_4bd17c;
        case 0x4bd180u: goto label_4bd180;
        case 0x4bd184u: goto label_4bd184;
        case 0x4bd188u: goto label_4bd188;
        case 0x4bd18cu: goto label_4bd18c;
        case 0x4bd190u: goto label_4bd190;
        case 0x4bd194u: goto label_4bd194;
        case 0x4bd198u: goto label_4bd198;
        case 0x4bd19cu: goto label_4bd19c;
        case 0x4bd1a0u: goto label_4bd1a0;
        case 0x4bd1a4u: goto label_4bd1a4;
        case 0x4bd1a8u: goto label_4bd1a8;
        case 0x4bd1acu: goto label_4bd1ac;
        case 0x4bd1b0u: goto label_4bd1b0;
        case 0x4bd1b4u: goto label_4bd1b4;
        case 0x4bd1b8u: goto label_4bd1b8;
        case 0x4bd1bcu: goto label_4bd1bc;
        case 0x4bd1c0u: goto label_4bd1c0;
        case 0x4bd1c4u: goto label_4bd1c4;
        case 0x4bd1c8u: goto label_4bd1c8;
        case 0x4bd1ccu: goto label_4bd1cc;
        case 0x4bd1d0u: goto label_4bd1d0;
        case 0x4bd1d4u: goto label_4bd1d4;
        case 0x4bd1d8u: goto label_4bd1d8;
        case 0x4bd1dcu: goto label_4bd1dc;
        case 0x4bd1e0u: goto label_4bd1e0;
        case 0x4bd1e4u: goto label_4bd1e4;
        case 0x4bd1e8u: goto label_4bd1e8;
        case 0x4bd1ecu: goto label_4bd1ec;
        case 0x4bd1f0u: goto label_4bd1f0;
        case 0x4bd1f4u: goto label_4bd1f4;
        case 0x4bd1f8u: goto label_4bd1f8;
        case 0x4bd1fcu: goto label_4bd1fc;
        case 0x4bd200u: goto label_4bd200;
        case 0x4bd204u: goto label_4bd204;
        case 0x4bd208u: goto label_4bd208;
        case 0x4bd20cu: goto label_4bd20c;
        case 0x4bd210u: goto label_4bd210;
        case 0x4bd214u: goto label_4bd214;
        case 0x4bd218u: goto label_4bd218;
        case 0x4bd21cu: goto label_4bd21c;
        case 0x4bd220u: goto label_4bd220;
        case 0x4bd224u: goto label_4bd224;
        case 0x4bd228u: goto label_4bd228;
        case 0x4bd22cu: goto label_4bd22c;
        case 0x4bd230u: goto label_4bd230;
        case 0x4bd234u: goto label_4bd234;
        case 0x4bd238u: goto label_4bd238;
        case 0x4bd23cu: goto label_4bd23c;
        case 0x4bd240u: goto label_4bd240;
        case 0x4bd244u: goto label_4bd244;
        case 0x4bd248u: goto label_4bd248;
        case 0x4bd24cu: goto label_4bd24c;
        case 0x4bd250u: goto label_4bd250;
        case 0x4bd254u: goto label_4bd254;
        case 0x4bd258u: goto label_4bd258;
        case 0x4bd25cu: goto label_4bd25c;
        case 0x4bd260u: goto label_4bd260;
        case 0x4bd264u: goto label_4bd264;
        case 0x4bd268u: goto label_4bd268;
        case 0x4bd26cu: goto label_4bd26c;
        case 0x4bd270u: goto label_4bd270;
        case 0x4bd274u: goto label_4bd274;
        case 0x4bd278u: goto label_4bd278;
        case 0x4bd27cu: goto label_4bd27c;
        case 0x4bd280u: goto label_4bd280;
        case 0x4bd284u: goto label_4bd284;
        case 0x4bd288u: goto label_4bd288;
        case 0x4bd28cu: goto label_4bd28c;
        case 0x4bd290u: goto label_4bd290;
        case 0x4bd294u: goto label_4bd294;
        case 0x4bd298u: goto label_4bd298;
        case 0x4bd29cu: goto label_4bd29c;
        case 0x4bd2a0u: goto label_4bd2a0;
        case 0x4bd2a4u: goto label_4bd2a4;
        case 0x4bd2a8u: goto label_4bd2a8;
        case 0x4bd2acu: goto label_4bd2ac;
        case 0x4bd2b0u: goto label_4bd2b0;
        case 0x4bd2b4u: goto label_4bd2b4;
        case 0x4bd2b8u: goto label_4bd2b8;
        case 0x4bd2bcu: goto label_4bd2bc;
        case 0x4bd2c0u: goto label_4bd2c0;
        case 0x4bd2c4u: goto label_4bd2c4;
        case 0x4bd2c8u: goto label_4bd2c8;
        case 0x4bd2ccu: goto label_4bd2cc;
        case 0x4bd2d0u: goto label_4bd2d0;
        case 0x4bd2d4u: goto label_4bd2d4;
        case 0x4bd2d8u: goto label_4bd2d8;
        case 0x4bd2dcu: goto label_4bd2dc;
        case 0x4bd2e0u: goto label_4bd2e0;
        case 0x4bd2e4u: goto label_4bd2e4;
        case 0x4bd2e8u: goto label_4bd2e8;
        case 0x4bd2ecu: goto label_4bd2ec;
        case 0x4bd2f0u: goto label_4bd2f0;
        case 0x4bd2f4u: goto label_4bd2f4;
        case 0x4bd2f8u: goto label_4bd2f8;
        case 0x4bd2fcu: goto label_4bd2fc;
        case 0x4bd300u: goto label_4bd300;
        case 0x4bd304u: goto label_4bd304;
        case 0x4bd308u: goto label_4bd308;
        case 0x4bd30cu: goto label_4bd30c;
        case 0x4bd310u: goto label_4bd310;
        case 0x4bd314u: goto label_4bd314;
        case 0x4bd318u: goto label_4bd318;
        case 0x4bd31cu: goto label_4bd31c;
        case 0x4bd320u: goto label_4bd320;
        case 0x4bd324u: goto label_4bd324;
        case 0x4bd328u: goto label_4bd328;
        case 0x4bd32cu: goto label_4bd32c;
        case 0x4bd330u: goto label_4bd330;
        case 0x4bd334u: goto label_4bd334;
        case 0x4bd338u: goto label_4bd338;
        case 0x4bd33cu: goto label_4bd33c;
        case 0x4bd340u: goto label_4bd340;
        case 0x4bd344u: goto label_4bd344;
        case 0x4bd348u: goto label_4bd348;
        case 0x4bd34cu: goto label_4bd34c;
        case 0x4bd350u: goto label_4bd350;
        case 0x4bd354u: goto label_4bd354;
        case 0x4bd358u: goto label_4bd358;
        case 0x4bd35cu: goto label_4bd35c;
        case 0x4bd360u: goto label_4bd360;
        case 0x4bd364u: goto label_4bd364;
        case 0x4bd368u: goto label_4bd368;
        case 0x4bd36cu: goto label_4bd36c;
        case 0x4bd370u: goto label_4bd370;
        case 0x4bd374u: goto label_4bd374;
        case 0x4bd378u: goto label_4bd378;
        case 0x4bd37cu: goto label_4bd37c;
        case 0x4bd380u: goto label_4bd380;
        case 0x4bd384u: goto label_4bd384;
        case 0x4bd388u: goto label_4bd388;
        case 0x4bd38cu: goto label_4bd38c;
        case 0x4bd390u: goto label_4bd390;
        case 0x4bd394u: goto label_4bd394;
        case 0x4bd398u: goto label_4bd398;
        case 0x4bd39cu: goto label_4bd39c;
        case 0x4bd3a0u: goto label_4bd3a0;
        case 0x4bd3a4u: goto label_4bd3a4;
        case 0x4bd3a8u: goto label_4bd3a8;
        case 0x4bd3acu: goto label_4bd3ac;
        case 0x4bd3b0u: goto label_4bd3b0;
        case 0x4bd3b4u: goto label_4bd3b4;
        case 0x4bd3b8u: goto label_4bd3b8;
        case 0x4bd3bcu: goto label_4bd3bc;
        case 0x4bd3c0u: goto label_4bd3c0;
        case 0x4bd3c4u: goto label_4bd3c4;
        case 0x4bd3c8u: goto label_4bd3c8;
        case 0x4bd3ccu: goto label_4bd3cc;
        case 0x4bd3d0u: goto label_4bd3d0;
        case 0x4bd3d4u: goto label_4bd3d4;
        case 0x4bd3d8u: goto label_4bd3d8;
        case 0x4bd3dcu: goto label_4bd3dc;
        case 0x4bd3e0u: goto label_4bd3e0;
        case 0x4bd3e4u: goto label_4bd3e4;
        case 0x4bd3e8u: goto label_4bd3e8;
        case 0x4bd3ecu: goto label_4bd3ec;
        case 0x4bd3f0u: goto label_4bd3f0;
        case 0x4bd3f4u: goto label_4bd3f4;
        case 0x4bd3f8u: goto label_4bd3f8;
        case 0x4bd3fcu: goto label_4bd3fc;
        case 0x4bd400u: goto label_4bd400;
        case 0x4bd404u: goto label_4bd404;
        case 0x4bd408u: goto label_4bd408;
        case 0x4bd40cu: goto label_4bd40c;
        case 0x4bd410u: goto label_4bd410;
        case 0x4bd414u: goto label_4bd414;
        case 0x4bd418u: goto label_4bd418;
        case 0x4bd41cu: goto label_4bd41c;
        case 0x4bd420u: goto label_4bd420;
        case 0x4bd424u: goto label_4bd424;
        case 0x4bd428u: goto label_4bd428;
        case 0x4bd42cu: goto label_4bd42c;
        case 0x4bd430u: goto label_4bd430;
        case 0x4bd434u: goto label_4bd434;
        case 0x4bd438u: goto label_4bd438;
        case 0x4bd43cu: goto label_4bd43c;
        case 0x4bd440u: goto label_4bd440;
        case 0x4bd444u: goto label_4bd444;
        case 0x4bd448u: goto label_4bd448;
        case 0x4bd44cu: goto label_4bd44c;
        case 0x4bd450u: goto label_4bd450;
        case 0x4bd454u: goto label_4bd454;
        case 0x4bd458u: goto label_4bd458;
        case 0x4bd45cu: goto label_4bd45c;
        case 0x4bd460u: goto label_4bd460;
        case 0x4bd464u: goto label_4bd464;
        case 0x4bd468u: goto label_4bd468;
        case 0x4bd46cu: goto label_4bd46c;
        case 0x4bd470u: goto label_4bd470;
        case 0x4bd474u: goto label_4bd474;
        case 0x4bd478u: goto label_4bd478;
        case 0x4bd47cu: goto label_4bd47c;
        case 0x4bd480u: goto label_4bd480;
        case 0x4bd484u: goto label_4bd484;
        case 0x4bd488u: goto label_4bd488;
        case 0x4bd48cu: goto label_4bd48c;
        case 0x4bd490u: goto label_4bd490;
        case 0x4bd494u: goto label_4bd494;
        case 0x4bd498u: goto label_4bd498;
        case 0x4bd49cu: goto label_4bd49c;
        case 0x4bd4a0u: goto label_4bd4a0;
        case 0x4bd4a4u: goto label_4bd4a4;
        case 0x4bd4a8u: goto label_4bd4a8;
        case 0x4bd4acu: goto label_4bd4ac;
        case 0x4bd4b0u: goto label_4bd4b0;
        case 0x4bd4b4u: goto label_4bd4b4;
        case 0x4bd4b8u: goto label_4bd4b8;
        case 0x4bd4bcu: goto label_4bd4bc;
        case 0x4bd4c0u: goto label_4bd4c0;
        case 0x4bd4c4u: goto label_4bd4c4;
        case 0x4bd4c8u: goto label_4bd4c8;
        case 0x4bd4ccu: goto label_4bd4cc;
        default: break;
    }

    ctx->pc = 0x4bcf50u;

label_4bcf50:
    // 0x4bcf50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4bcf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4bcf54:
    // 0x4bcf54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4bcf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4bcf58:
    // 0x4bcf58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bcf58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4bcf5c:
    // 0x4bcf5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bcf5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4bcf60:
    // 0x4bcf60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4bcf60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4bcf64:
    // 0x4bcf64: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_4bcf68:
    if (ctx->pc == 0x4BCF68u) {
        ctx->pc = 0x4BCF68u;
            // 0x4bcf68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BCF6Cu;
        goto label_4bcf6c;
    }
    ctx->pc = 0x4BCF64u;
    {
        const bool branch_taken_0x4bcf64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BCF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCF64u;
            // 0x4bcf68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bcf64) {
            ctx->pc = 0x4BD098u;
            goto label_4bd098;
        }
    }
    ctx->pc = 0x4BCF6Cu;
label_4bcf6c:
    // 0x4bcf6c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4bcf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4bcf70:
    // 0x4bcf70: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4bcf70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4bcf74:
    // 0x4bcf74: 0x24630f20  addiu       $v1, $v1, 0xF20
    ctx->pc = 0x4bcf74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3872));
label_4bcf78:
    // 0x4bcf78: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x4bcf78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
label_4bcf7c:
    // 0x4bcf7c: 0x24420f58  addiu       $v0, $v0, 0xF58
    ctx->pc = 0x4bcf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3928));
label_4bcf80:
    // 0x4bcf80: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4bcf80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4bcf84:
    // 0x4bcf84: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4bcf84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4bcf88:
    // 0x4bcf88: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4bcf88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4bcf8c:
    // 0x4bcf8c: 0xc0407c0  jal         func_101F00
label_4bcf90:
    if (ctx->pc == 0x4BCF90u) {
        ctx->pc = 0x4BCF90u;
            // 0x4bcf90: 0x24a5d0b0  addiu       $a1, $a1, -0x2F50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955184));
        ctx->pc = 0x4BCF94u;
        goto label_4bcf94;
    }
    ctx->pc = 0x4BCF8Cu;
    SET_GPR_U32(ctx, 31, 0x4BCF94u);
    ctx->pc = 0x4BCF90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCF8Cu;
            // 0x4bcf90: 0x24a5d0b0  addiu       $a1, $a1, -0x2F50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCF94u; }
        if (ctx->pc != 0x4BCF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCF94u; }
        if (ctx->pc != 0x4BCF94u) { return; }
    }
    ctx->pc = 0x4BCF94u;
label_4bcf94:
    // 0x4bcf94: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4bcf94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4bcf98:
    // 0x4bcf98: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4bcf9c:
    if (ctx->pc == 0x4BCF9Cu) {
        ctx->pc = 0x4BCF9Cu;
            // 0x4bcf9c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4BCFA0u;
        goto label_4bcfa0;
    }
    ctx->pc = 0x4BCF98u;
    {
        const bool branch_taken_0x4bcf98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bcf98) {
            ctx->pc = 0x4BCF9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCF98u;
            // 0x4bcf9c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BCFACu;
            goto label_4bcfac;
        }
    }
    ctx->pc = 0x4BCFA0u;
label_4bcfa0:
    // 0x4bcfa0: 0xc07507c  jal         func_1D41F0
label_4bcfa4:
    if (ctx->pc == 0x4BCFA4u) {
        ctx->pc = 0x4BCFA4u;
            // 0x4bcfa4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x4BCFA8u;
        goto label_4bcfa8;
    }
    ctx->pc = 0x4BCFA0u;
    SET_GPR_U32(ctx, 31, 0x4BCFA8u);
    ctx->pc = 0x4BCFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCFA0u;
            // 0x4bcfa4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCFA8u; }
        if (ctx->pc != 0x4BCFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCFA8u; }
        if (ctx->pc != 0x4BCFA8u) { return; }
    }
    ctx->pc = 0x4BCFA8u;
label_4bcfa8:
    // 0x4bcfa8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4bcfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4bcfac:
    // 0x4bcfac: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4bcfb0:
    if (ctx->pc == 0x4BCFB0u) {
        ctx->pc = 0x4BCFB0u;
            // 0x4bcfb0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4BCFB4u;
        goto label_4bcfb4;
    }
    ctx->pc = 0x4BCFACu;
    {
        const bool branch_taken_0x4bcfac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bcfac) {
            ctx->pc = 0x4BCFB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCFACu;
            // 0x4bcfb0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BCFDCu;
            goto label_4bcfdc;
        }
    }
    ctx->pc = 0x4BCFB4u;
label_4bcfb4:
    // 0x4bcfb4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4bcfb8:
    if (ctx->pc == 0x4BCFB8u) {
        ctx->pc = 0x4BCFBCu;
        goto label_4bcfbc;
    }
    ctx->pc = 0x4BCFB4u;
    {
        const bool branch_taken_0x4bcfb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bcfb4) {
            ctx->pc = 0x4BCFD8u;
            goto label_4bcfd8;
        }
    }
    ctx->pc = 0x4BCFBCu;
label_4bcfbc:
    // 0x4bcfbc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4bcfc0:
    if (ctx->pc == 0x4BCFC0u) {
        ctx->pc = 0x4BCFC4u;
        goto label_4bcfc4;
    }
    ctx->pc = 0x4BCFBCu;
    {
        const bool branch_taken_0x4bcfbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bcfbc) {
            ctx->pc = 0x4BCFD8u;
            goto label_4bcfd8;
        }
    }
    ctx->pc = 0x4BCFC4u;
label_4bcfc4:
    // 0x4bcfc4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4bcfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4bcfc8:
    // 0x4bcfc8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4bcfcc:
    if (ctx->pc == 0x4BCFCCu) {
        ctx->pc = 0x4BCFD0u;
        goto label_4bcfd0;
    }
    ctx->pc = 0x4BCFC8u;
    {
        const bool branch_taken_0x4bcfc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bcfc8) {
            ctx->pc = 0x4BCFD8u;
            goto label_4bcfd8;
        }
    }
    ctx->pc = 0x4BCFD0u;
label_4bcfd0:
    // 0x4bcfd0: 0xc0400a8  jal         func_1002A0
label_4bcfd4:
    if (ctx->pc == 0x4BCFD4u) {
        ctx->pc = 0x4BCFD8u;
        goto label_4bcfd8;
    }
    ctx->pc = 0x4BCFD0u;
    SET_GPR_U32(ctx, 31, 0x4BCFD8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCFD8u; }
        if (ctx->pc != 0x4BCFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCFD8u; }
        if (ctx->pc != 0x4BCFD8u) { return; }
    }
    ctx->pc = 0x4BCFD8u;
label_4bcfd8:
    // 0x4bcfd8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4bcfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4bcfdc:
    // 0x4bcfdc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4bcfe0:
    if (ctx->pc == 0x4BCFE0u) {
        ctx->pc = 0x4BCFE0u;
            // 0x4bcfe0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4BCFE4u;
        goto label_4bcfe4;
    }
    ctx->pc = 0x4BCFDCu;
    {
        const bool branch_taken_0x4bcfdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bcfdc) {
            ctx->pc = 0x4BCFE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCFDCu;
            // 0x4bcfe0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BD00Cu;
            goto label_4bd00c;
        }
    }
    ctx->pc = 0x4BCFE4u;
label_4bcfe4:
    // 0x4bcfe4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4bcfe8:
    if (ctx->pc == 0x4BCFE8u) {
        ctx->pc = 0x4BCFECu;
        goto label_4bcfec;
    }
    ctx->pc = 0x4BCFE4u;
    {
        const bool branch_taken_0x4bcfe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bcfe4) {
            ctx->pc = 0x4BD008u;
            goto label_4bd008;
        }
    }
    ctx->pc = 0x4BCFECu;
label_4bcfec:
    // 0x4bcfec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4bcff0:
    if (ctx->pc == 0x4BCFF0u) {
        ctx->pc = 0x4BCFF4u;
        goto label_4bcff4;
    }
    ctx->pc = 0x4BCFECu;
    {
        const bool branch_taken_0x4bcfec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bcfec) {
            ctx->pc = 0x4BD008u;
            goto label_4bd008;
        }
    }
    ctx->pc = 0x4BCFF4u;
label_4bcff4:
    // 0x4bcff4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4bcff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4bcff8:
    // 0x4bcff8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4bcffc:
    if (ctx->pc == 0x4BCFFCu) {
        ctx->pc = 0x4BD000u;
        goto label_4bd000;
    }
    ctx->pc = 0x4BCFF8u;
    {
        const bool branch_taken_0x4bcff8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bcff8) {
            ctx->pc = 0x4BD008u;
            goto label_4bd008;
        }
    }
    ctx->pc = 0x4BD000u;
label_4bd000:
    // 0x4bd000: 0xc0400a8  jal         func_1002A0
label_4bd004:
    if (ctx->pc == 0x4BD004u) {
        ctx->pc = 0x4BD008u;
        goto label_4bd008;
    }
    ctx->pc = 0x4BD000u;
    SET_GPR_U32(ctx, 31, 0x4BD008u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD008u; }
        if (ctx->pc != 0x4BD008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD008u; }
        if (ctx->pc != 0x4BD008u) { return; }
    }
    ctx->pc = 0x4BD008u;
label_4bd008:
    // 0x4bd008: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4bd008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4bd00c:
    // 0x4bd00c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4bd010:
    if (ctx->pc == 0x4BD010u) {
        ctx->pc = 0x4BD014u;
        goto label_4bd014;
    }
    ctx->pc = 0x4BD00Cu;
    {
        const bool branch_taken_0x4bd00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bd00c) {
            ctx->pc = 0x4BD028u;
            goto label_4bd028;
        }
    }
    ctx->pc = 0x4BD014u;
label_4bd014:
    // 0x4bd014: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4bd014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4bd018:
    // 0x4bd018: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4bd018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4bd01c:
    // 0x4bd01c: 0x24630f08  addiu       $v1, $v1, 0xF08
    ctx->pc = 0x4bd01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3848));
label_4bd020:
    // 0x4bd020: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4bd020u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4bd024:
    // 0x4bd024: 0xac40a9e0  sw          $zero, -0x5620($v0)
    ctx->pc = 0x4bd024u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945248), GPR_U32(ctx, 0));
label_4bd028:
    // 0x4bd028: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4bd02c:
    if (ctx->pc == 0x4BD02Cu) {
        ctx->pc = 0x4BD02Cu;
            // 0x4bd02c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4BD030u;
        goto label_4bd030;
    }
    ctx->pc = 0x4BD028u;
    {
        const bool branch_taken_0x4bd028 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bd028) {
            ctx->pc = 0x4BD02Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD028u;
            // 0x4bd02c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BD084u;
            goto label_4bd084;
        }
    }
    ctx->pc = 0x4BD030u;
label_4bd030:
    // 0x4bd030: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4bd030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4bd034:
    // 0x4bd034: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4bd034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4bd038:
    // 0x4bd038: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4bd038u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4bd03c:
    // 0x4bd03c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4bd03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4bd040:
    // 0x4bd040: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4bd044:
    if (ctx->pc == 0x4BD044u) {
        ctx->pc = 0x4BD044u;
            // 0x4bd044: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4BD048u;
        goto label_4bd048;
    }
    ctx->pc = 0x4BD040u;
    {
        const bool branch_taken_0x4bd040 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bd040) {
            ctx->pc = 0x4BD044u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD040u;
            // 0x4bd044: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BD05Cu;
            goto label_4bd05c;
        }
    }
    ctx->pc = 0x4BD048u;
label_4bd048:
    // 0x4bd048: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4bd048u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4bd04c:
    // 0x4bd04c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4bd04cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4bd050:
    // 0x4bd050: 0x320f809  jalr        $t9
label_4bd054:
    if (ctx->pc == 0x4BD054u) {
        ctx->pc = 0x4BD054u;
            // 0x4bd054: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4BD058u;
        goto label_4bd058;
    }
    ctx->pc = 0x4BD050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BD058u);
        ctx->pc = 0x4BD054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD050u;
            // 0x4bd054: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BD058u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BD058u; }
            if (ctx->pc != 0x4BD058u) { return; }
        }
        }
    }
    ctx->pc = 0x4BD058u;
label_4bd058:
    // 0x4bd058: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4bd058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4bd05c:
    // 0x4bd05c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4bd060:
    if (ctx->pc == 0x4BD060u) {
        ctx->pc = 0x4BD060u;
            // 0x4bd060: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BD064u;
        goto label_4bd064;
    }
    ctx->pc = 0x4BD05Cu;
    {
        const bool branch_taken_0x4bd05c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bd05c) {
            ctx->pc = 0x4BD060u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD05Cu;
            // 0x4bd060: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BD078u;
            goto label_4bd078;
        }
    }
    ctx->pc = 0x4BD064u;
label_4bd064:
    // 0x4bd064: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4bd064u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4bd068:
    // 0x4bd068: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4bd068u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4bd06c:
    // 0x4bd06c: 0x320f809  jalr        $t9
label_4bd070:
    if (ctx->pc == 0x4BD070u) {
        ctx->pc = 0x4BD070u;
            // 0x4bd070: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4BD074u;
        goto label_4bd074;
    }
    ctx->pc = 0x4BD06Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BD074u);
        ctx->pc = 0x4BD070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD06Cu;
            // 0x4bd070: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BD074u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BD074u; }
            if (ctx->pc != 0x4BD074u) { return; }
        }
        }
    }
    ctx->pc = 0x4BD074u;
label_4bd074:
    // 0x4bd074: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bd074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4bd078:
    // 0x4bd078: 0xc075bf8  jal         func_1D6FE0
label_4bd07c:
    if (ctx->pc == 0x4BD07Cu) {
        ctx->pc = 0x4BD07Cu;
            // 0x4bd07c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BD080u;
        goto label_4bd080;
    }
    ctx->pc = 0x4BD078u;
    SET_GPR_U32(ctx, 31, 0x4BD080u);
    ctx->pc = 0x4BD07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD078u;
            // 0x4bd07c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD080u; }
        if (ctx->pc != 0x4BD080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD080u; }
        if (ctx->pc != 0x4BD080u) { return; }
    }
    ctx->pc = 0x4BD080u;
label_4bd080:
    // 0x4bd080: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4bd080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4bd084:
    // 0x4bd084: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4bd084u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4bd088:
    // 0x4bd088: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4bd08c:
    if (ctx->pc == 0x4BD08Cu) {
        ctx->pc = 0x4BD08Cu;
            // 0x4bd08c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BD090u;
        goto label_4bd090;
    }
    ctx->pc = 0x4BD088u;
    {
        const bool branch_taken_0x4bd088 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4bd088) {
            ctx->pc = 0x4BD08Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD088u;
            // 0x4bd08c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BD09Cu;
            goto label_4bd09c;
        }
    }
    ctx->pc = 0x4BD090u;
label_4bd090:
    // 0x4bd090: 0xc0400a8  jal         func_1002A0
label_4bd094:
    if (ctx->pc == 0x4BD094u) {
        ctx->pc = 0x4BD094u;
            // 0x4bd094: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BD098u;
        goto label_4bd098;
    }
    ctx->pc = 0x4BD090u;
    SET_GPR_U32(ctx, 31, 0x4BD098u);
    ctx->pc = 0x4BD094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD090u;
            // 0x4bd094: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD098u; }
        if (ctx->pc != 0x4BD098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD098u; }
        if (ctx->pc != 0x4BD098u) { return; }
    }
    ctx->pc = 0x4BD098u;
label_4bd098:
    // 0x4bd098: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4bd098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4bd09c:
    // 0x4bd09c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4bd09cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4bd0a0:
    // 0x4bd0a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bd0a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4bd0a4:
    // 0x4bd0a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bd0a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4bd0a8:
    // 0x4bd0a8: 0x3e00008  jr          $ra
label_4bd0ac:
    if (ctx->pc == 0x4BD0ACu) {
        ctx->pc = 0x4BD0ACu;
            // 0x4bd0ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4BD0B0u;
        goto label_4bd0b0;
    }
    ctx->pc = 0x4BD0A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BD0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD0A8u;
            // 0x4bd0ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BD0B0u;
label_4bd0b0:
    // 0x4bd0b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4bd0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4bd0b4:
    // 0x4bd0b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4bd0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4bd0b8:
    // 0x4bd0b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bd0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4bd0bc:
    // 0x4bd0bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bd0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4bd0c0:
    // 0x4bd0c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4bd0c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4bd0c4:
    // 0x4bd0c4: 0x12200037  beqz        $s1, . + 4 + (0x37 << 2)
label_4bd0c8:
    if (ctx->pc == 0x4BD0C8u) {
        ctx->pc = 0x4BD0C8u;
            // 0x4bd0c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BD0CCu;
        goto label_4bd0cc;
    }
    ctx->pc = 0x4BD0C4u;
    {
        const bool branch_taken_0x4bd0c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BD0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD0C4u;
            // 0x4bd0c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd0c4) {
            ctx->pc = 0x4BD1A4u;
            goto label_4bd1a4;
        }
    }
    ctx->pc = 0x4BD0CCu;
label_4bd0cc:
    // 0x4bd0cc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4bd0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4bd0d0:
    // 0x4bd0d0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4bd0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4bd0d4:
    // 0x4bd0d4: 0x24630fc0  addiu       $v1, $v1, 0xFC0
    ctx->pc = 0x4bd0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4032));
label_4bd0d8:
    // 0x4bd0d8: 0x24421000  addiu       $v0, $v0, 0x1000
    ctx->pc = 0x4bd0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
label_4bd0dc:
    // 0x4bd0dc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4bd0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4bd0e0:
    // 0x4bd0e0: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x4bd0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_4bd0e4:
    // 0x4bd0e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4bd0e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4bd0e8:
    // 0x4bd0e8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4bd0e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4bd0ec:
    // 0x4bd0ec: 0x320f809  jalr        $t9
label_4bd0f0:
    if (ctx->pc == 0x4BD0F0u) {
        ctx->pc = 0x4BD0F4u;
        goto label_4bd0f4;
    }
    ctx->pc = 0x4BD0ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BD0F4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BD0F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BD0F4u; }
            if (ctx->pc != 0x4BD0F4u) { return; }
        }
        }
    }
    ctx->pc = 0x4BD0F4u;
label_4bd0f4:
    // 0x4bd0f4: 0x262200f0  addiu       $v0, $s1, 0xF0
    ctx->pc = 0x4bd0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
label_4bd0f8:
    // 0x4bd0f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4bd0fc:
    if (ctx->pc == 0x4BD0FCu) {
        ctx->pc = 0x4BD100u;
        goto label_4bd100;
    }
    ctx->pc = 0x4BD0F8u;
    {
        const bool branch_taken_0x4bd0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bd0f8) {
            ctx->pc = 0x4BD10Cu;
            goto label_4bd10c;
        }
    }
    ctx->pc = 0x4BD100u;
label_4bd100:
    // 0x4bd100: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4bd100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4bd104:
    // 0x4bd104: 0x24424b70  addiu       $v0, $v0, 0x4B70
    ctx->pc = 0x4bd104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19312));
label_4bd108:
    // 0x4bd108: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x4bd108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
label_4bd10c:
    // 0x4bd10c: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_4bd110:
    if (ctx->pc == 0x4BD110u) {
        ctx->pc = 0x4BD110u;
            // 0x4bd110: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4BD114u;
        goto label_4bd114;
    }
    ctx->pc = 0x4BD10Cu;
    {
        const bool branch_taken_0x4bd10c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bd10c) {
            ctx->pc = 0x4BD110u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD10Cu;
            // 0x4bd110: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BD190u;
            goto label_4bd190;
        }
    }
    ctx->pc = 0x4BD114u;
label_4bd114:
    // 0x4bd114: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4bd114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4bd118:
    // 0x4bd118: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4bd118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4bd11c:
    // 0x4bd11c: 0x24422670  addiu       $v0, $v0, 0x2670
    ctx->pc = 0x4bd11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
label_4bd120:
    // 0x4bd120: 0x246326b0  addiu       $v1, $v1, 0x26B0
    ctx->pc = 0x4bd120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9904));
label_4bd124:
    // 0x4bd124: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4bd124u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4bd128:
    // 0x4bd128: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x4bd128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_4bd12c:
    // 0x4bd12c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_4bd130:
    if (ctx->pc == 0x4BD130u) {
        ctx->pc = 0x4BD130u;
            // 0x4bd130: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x4BD134u;
        goto label_4bd134;
    }
    ctx->pc = 0x4BD12Cu;
    {
        const bool branch_taken_0x4bd12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BD130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD12Cu;
            // 0x4bd130: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd12c) {
            ctx->pc = 0x4BD168u;
            goto label_4bd168;
        }
    }
    ctx->pc = 0x4BD134u;
label_4bd134:
    // 0x4bd134: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4bd134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4bd138:
    // 0x4bd138: 0x24422660  addiu       $v0, $v0, 0x2660
    ctx->pc = 0x4bd138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
label_4bd13c:
    // 0x4bd13c: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x4bd13cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_4bd140:
    // 0x4bd140: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x4bd140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_4bd144:
    // 0x4bd144: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_4bd148:
    if (ctx->pc == 0x4BD148u) {
        ctx->pc = 0x4BD14Cu;
        goto label_4bd14c;
    }
    ctx->pc = 0x4BD144u;
    {
        const bool branch_taken_0x4bd144 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bd144) {
            ctx->pc = 0x4BD168u;
            goto label_4bd168;
        }
    }
    ctx->pc = 0x4BD14Cu;
label_4bd14c:
    // 0x4bd14c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4bd150:
    if (ctx->pc == 0x4BD150u) {
        ctx->pc = 0x4BD150u;
            // 0x4bd150: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x4BD154u;
        goto label_4bd154;
    }
    ctx->pc = 0x4BD14Cu;
    {
        const bool branch_taken_0x4bd14c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bd14c) {
            ctx->pc = 0x4BD150u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD14Cu;
            // 0x4bd150: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BD168u;
            goto label_4bd168;
        }
    }
    ctx->pc = 0x4BD154u;
label_4bd154:
    // 0x4bd154: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4bd154u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4bd158:
    // 0x4bd158: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4bd158u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4bd15c:
    // 0x4bd15c: 0x320f809  jalr        $t9
label_4bd160:
    if (ctx->pc == 0x4BD160u) {
        ctx->pc = 0x4BD160u;
            // 0x4bd160: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4BD164u;
        goto label_4bd164;
    }
    ctx->pc = 0x4BD15Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BD164u);
        ctx->pc = 0x4BD160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD15Cu;
            // 0x4bd160: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BD164u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BD164u; }
            if (ctx->pc != 0x4BD164u) { return; }
        }
        }
    }
    ctx->pc = 0x4BD164u;
label_4bd164:
    // 0x4bd164: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x4bd164u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_4bd168:
    // 0x4bd168: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_4bd16c:
    if (ctx->pc == 0x4BD16Cu) {
        ctx->pc = 0x4BD170u;
        goto label_4bd170;
    }
    ctx->pc = 0x4BD168u;
    {
        const bool branch_taken_0x4bd168 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bd168) {
            ctx->pc = 0x4BD18Cu;
            goto label_4bd18c;
        }
    }
    ctx->pc = 0x4BD170u;
label_4bd170:
    // 0x4bd170: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4bd170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4bd174:
    // 0x4bd174: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x4bd174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_4bd178:
    // 0x4bd178: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_4bd17c:
    if (ctx->pc == 0x4BD17Cu) {
        ctx->pc = 0x4BD17Cu;
            // 0x4bd17c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4BD180u;
        goto label_4bd180;
    }
    ctx->pc = 0x4BD178u;
    {
        const bool branch_taken_0x4bd178 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BD17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD178u;
            // 0x4bd17c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd178) {
            ctx->pc = 0x4BD18Cu;
            goto label_4bd18c;
        }
    }
    ctx->pc = 0x4BD180u;
label_4bd180:
    // 0x4bd180: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4bd180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4bd184:
    // 0x4bd184: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x4bd184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_4bd188:
    // 0x4bd188: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4bd188u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4bd18c:
    // 0x4bd18c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4bd18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4bd190:
    // 0x4bd190: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4bd190u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4bd194:
    // 0x4bd194: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4bd198:
    if (ctx->pc == 0x4BD198u) {
        ctx->pc = 0x4BD198u;
            // 0x4bd198: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BD19Cu;
        goto label_4bd19c;
    }
    ctx->pc = 0x4BD194u;
    {
        const bool branch_taken_0x4bd194 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4bd194) {
            ctx->pc = 0x4BD198u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD194u;
            // 0x4bd198: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BD1A8u;
            goto label_4bd1a8;
        }
    }
    ctx->pc = 0x4BD19Cu;
label_4bd19c:
    // 0x4bd19c: 0xc0400a8  jal         func_1002A0
label_4bd1a0:
    if (ctx->pc == 0x4BD1A0u) {
        ctx->pc = 0x4BD1A0u;
            // 0x4bd1a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BD1A4u;
        goto label_4bd1a4;
    }
    ctx->pc = 0x4BD19Cu;
    SET_GPR_U32(ctx, 31, 0x4BD1A4u);
    ctx->pc = 0x4BD1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD19Cu;
            // 0x4bd1a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD1A4u; }
        if (ctx->pc != 0x4BD1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD1A4u; }
        if (ctx->pc != 0x4BD1A4u) { return; }
    }
    ctx->pc = 0x4BD1A4u;
label_4bd1a4:
    // 0x4bd1a4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4bd1a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4bd1a8:
    // 0x4bd1a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4bd1a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4bd1ac:
    // 0x4bd1ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bd1acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4bd1b0:
    // 0x4bd1b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bd1b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4bd1b4:
    // 0x4bd1b4: 0x3e00008  jr          $ra
label_4bd1b8:
    if (ctx->pc == 0x4BD1B8u) {
        ctx->pc = 0x4BD1B8u;
            // 0x4bd1b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4BD1BCu;
        goto label_4bd1bc;
    }
    ctx->pc = 0x4BD1B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BD1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD1B4u;
            // 0x4bd1b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BD1BCu;
label_4bd1bc:
    // 0x4bd1bc: 0x0  nop
    ctx->pc = 0x4bd1bcu;
    // NOP
label_4bd1c0:
    // 0x4bd1c0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x4bd1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_4bd1c4:
    // 0x4bd1c4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4bd1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4bd1c8:
    // 0x4bd1c8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4bd1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_4bd1cc:
    // 0x4bd1cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4bd1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4bd1d0:
    // 0x4bd1d0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4bd1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4bd1d4:
    // 0x4bd1d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4bd1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4bd1d8:
    // 0x4bd1d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4bd1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4bd1dc:
    // 0x4bd1dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4bd1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4bd1e0:
    // 0x4bd1e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4bd1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4bd1e4:
    // 0x4bd1e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bd1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4bd1e8:
    // 0x4bd1e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bd1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4bd1ec:
    // 0x4bd1ec: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x4bd1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4bd1f0:
    // 0x4bd1f0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4bd1f0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4bd1f4:
    // 0x4bd1f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4bd1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4bd1f8:
    // 0x4bd1f8: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_4bd1fc:
    if (ctx->pc == 0x4BD1FCu) {
        ctx->pc = 0x4BD1FCu;
            // 0x4bd1fc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BD200u;
        goto label_4bd200;
    }
    ctx->pc = 0x4BD1F8u;
    {
        const bool branch_taken_0x4bd1f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4BD1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD1F8u;
            // 0x4bd1fc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd1f8) {
            ctx->pc = 0x4BD23Cu;
            goto label_4bd23c;
        }
    }
    ctx->pc = 0x4BD200u;
label_4bd200:
    // 0x4bd200: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4bd200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4bd204:
    // 0x4bd204: 0x10a30030  beq         $a1, $v1, . + 4 + (0x30 << 2)
label_4bd208:
    if (ctx->pc == 0x4BD208u) {
        ctx->pc = 0x4BD20Cu;
        goto label_4bd20c;
    }
    ctx->pc = 0x4BD204u;
    {
        const bool branch_taken_0x4bd204 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4bd204) {
            ctx->pc = 0x4BD2C8u;
            goto label_4bd2c8;
        }
    }
    ctx->pc = 0x4BD20Cu;
label_4bd20c:
    // 0x4bd20c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4bd20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4bd210:
    // 0x4bd210: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_4bd214:
    if (ctx->pc == 0x4BD214u) {
        ctx->pc = 0x4BD214u;
            // 0x4bd214: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4BD218u;
        goto label_4bd218;
    }
    ctx->pc = 0x4BD210u;
    {
        const bool branch_taken_0x4bd210 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4bd210) {
            ctx->pc = 0x4BD214u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD210u;
            // 0x4bd214: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BD220u;
            goto label_4bd220;
        }
    }
    ctx->pc = 0x4BD218u;
label_4bd218:
    // 0x4bd218: 0x1000002b  b           . + 4 + (0x2B << 2)
label_4bd21c:
    if (ctx->pc == 0x4BD21Cu) {
        ctx->pc = 0x4BD220u;
        goto label_4bd220;
    }
    ctx->pc = 0x4BD218u;
    {
        const bool branch_taken_0x4bd218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bd218) {
            ctx->pc = 0x4BD2C8u;
            goto label_4bd2c8;
        }
    }
    ctx->pc = 0x4BD220u;
label_4bd220:
    // 0x4bd220: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x4bd220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_4bd224:
    // 0x4bd224: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4bd224u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4bd228:
    // 0x4bd228: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4bd228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4bd22c:
    // 0x4bd22c: 0x320f809  jalr        $t9
label_4bd230:
    if (ctx->pc == 0x4BD230u) {
        ctx->pc = 0x4BD230u;
            // 0x4bd230: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4BD234u;
        goto label_4bd234;
    }
    ctx->pc = 0x4BD22Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BD234u);
        ctx->pc = 0x4BD230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD22Cu;
            // 0x4bd230: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BD234u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BD234u; }
            if (ctx->pc != 0x4BD234u) { return; }
        }
        }
    }
    ctx->pc = 0x4BD234u;
label_4bd234:
    // 0x4bd234: 0x10000024  b           . + 4 + (0x24 << 2)
label_4bd238:
    if (ctx->pc == 0x4BD238u) {
        ctx->pc = 0x4BD23Cu;
        goto label_4bd23c;
    }
    ctx->pc = 0x4BD234u;
    {
        const bool branch_taken_0x4bd234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bd234) {
            ctx->pc = 0x4BD2C8u;
            goto label_4bd2c8;
        }
    }
    ctx->pc = 0x4BD23Cu;
label_4bd23c:
    // 0x4bd23c: 0x8e740070  lw          $s4, 0x70($s3)
    ctx->pc = 0x4bd23cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_4bd240:
    // 0x4bd240: 0x12800021  beqz        $s4, . + 4 + (0x21 << 2)
label_4bd244:
    if (ctx->pc == 0x4BD244u) {
        ctx->pc = 0x4BD248u;
        goto label_4bd248;
    }
    ctx->pc = 0x4BD240u;
    {
        const bool branch_taken_0x4bd240 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bd240) {
            ctx->pc = 0x4BD2C8u;
            goto label_4bd2c8;
        }
    }
    ctx->pc = 0x4BD248u;
label_4bd248:
    // 0x4bd248: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4bd248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4bd24c:
    // 0x4bd24c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4bd24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4bd250:
    // 0x4bd250: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x4bd250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4bd254:
    // 0x4bd254: 0x26770084  addiu       $s7, $s3, 0x84
    ctx->pc = 0x4bd254u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
label_4bd258:
    // 0x4bd258: 0x8c72e378  lw          $s2, -0x1C88($v1)
    ctx->pc = 0x4bd258u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4bd25c:
    // 0x4bd25c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4bd25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4bd260:
    // 0x4bd260: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x4bd260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_4bd264:
    // 0x4bd264: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4bd264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4bd268:
    // 0x4bd268: 0x8c50e370  lw          $s0, -0x1C90($v0)
    ctx->pc = 0x4bd268u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_4bd26c:
    // 0x4bd26c: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x4bd26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_4bd270:
    // 0x4bd270: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x4bd270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
label_4bd274:
    // 0x4bd274: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4bd274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4bd278:
    // 0x4bd278: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x4bd278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4bd27c:
    // 0x4bd27c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4bd27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4bd280:
    // 0x4bd280: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4bd280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4bd284:
    // 0x4bd284: 0xc04e738  jal         func_139CE0
label_4bd288:
    if (ctx->pc == 0x4BD288u) {
        ctx->pc = 0x4BD288u;
            // 0x4bd288: 0x24510010  addiu       $s1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4BD28Cu;
        goto label_4bd28c;
    }
    ctx->pc = 0x4BD284u;
    SET_GPR_U32(ctx, 31, 0x4BD28Cu);
    ctx->pc = 0x4BD288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD284u;
            // 0x4bd288: 0x24510010  addiu       $s1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD28Cu; }
        if (ctx->pc != 0x4BD28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD28Cu; }
        if (ctx->pc != 0x4BD28Cu) { return; }
    }
    ctx->pc = 0x4BD28Cu;
label_4bd28c:
    // 0x4bd28c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4bd28cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bd290:
    // 0x4bd290: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4bd290u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bd294:
    // 0x4bd294: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x4bd294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_4bd298:
    // 0x4bd298: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4bd298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4bd29c:
    // 0x4bd29c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4bd29cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bd2a0:
    // 0x4bd2a0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4bd2a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4bd2a4:
    // 0x4bd2a4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x4bd2a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4bd2a8:
    // 0x4bd2a8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x4bd2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_4bd2ac:
    // 0x4bd2ac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4bd2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4bd2b0:
    // 0x4bd2b0: 0xc12f628  jal         func_4BD8A0
label_4bd2b4:
    if (ctx->pc == 0x4BD2B4u) {
        ctx->pc = 0x4BD2B4u;
            // 0x4bd2b4: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4BD2B8u;
        goto label_4bd2b8;
    }
    ctx->pc = 0x4BD2B0u;
    SET_GPR_U32(ctx, 31, 0x4BD2B8u);
    ctx->pc = 0x4BD2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD2B0u;
            // 0x4bd2b4: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4BD8A0u;
    if (runtime->hasFunction(0x4BD8A0u)) {
        auto targetFn = runtime->lookupFunction(0x4BD8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD2B8u; }
        if (ctx->pc != 0x4BD2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004BD8A0_0x4bd8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD2B8u; }
        if (ctx->pc != 0x4BD2B8u) { return; }
    }
    ctx->pc = 0x4BD2B8u;
label_4bd2b8:
    // 0x4bd2b8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x4bd2b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_4bd2bc:
    // 0x4bd2bc: 0x2d4182b  sltu        $v1, $s6, $s4
    ctx->pc = 0x4bd2bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_4bd2c0:
    // 0x4bd2c0: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_4bd2c4:
    if (ctx->pc == 0x4BD2C4u) {
        ctx->pc = 0x4BD2C4u;
            // 0x4bd2c4: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x4BD2C8u;
        goto label_4bd2c8;
    }
    ctx->pc = 0x4BD2C0u;
    {
        const bool branch_taken_0x4bd2c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BD2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD2C0u;
            // 0x4bd2c4: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd2c0) {
            ctx->pc = 0x4BD294u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4bd294;
        }
    }
    ctx->pc = 0x4BD2C8u;
label_4bd2c8:
    // 0x4bd2c8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4bd2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4bd2cc:
    // 0x4bd2cc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4bd2ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4bd2d0:
    // 0x4bd2d0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4bd2d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4bd2d4:
    // 0x4bd2d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4bd2d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4bd2d8:
    // 0x4bd2d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4bd2d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4bd2dc:
    // 0x4bd2dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4bd2dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4bd2e0:
    // 0x4bd2e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4bd2e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4bd2e4:
    // 0x4bd2e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bd2e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4bd2e8:
    // 0x4bd2e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bd2e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4bd2ec:
    // 0x4bd2ec: 0x3e00008  jr          $ra
label_4bd2f0:
    if (ctx->pc == 0x4BD2F0u) {
        ctx->pc = 0x4BD2F0u;
            // 0x4bd2f0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x4BD2F4u;
        goto label_4bd2f4;
    }
    ctx->pc = 0x4BD2ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BD2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD2ECu;
            // 0x4bd2f0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BD2F4u;
label_4bd2f4:
    // 0x4bd2f4: 0x0  nop
    ctx->pc = 0x4bd2f4u;
    // NOP
label_4bd2f8:
    // 0x4bd2f8: 0x0  nop
    ctx->pc = 0x4bd2f8u;
    // NOP
label_4bd2fc:
    // 0x4bd2fc: 0x0  nop
    ctx->pc = 0x4bd2fcu;
    // NOP
label_4bd300:
    // 0x4bd300: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4bd300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4bd304:
    // 0x4bd304: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4bd304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4bd308:
    // 0x4bd308: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4bd308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4bd30c:
    // 0x4bd30c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4bd30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4bd310:
    // 0x4bd310: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4bd310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4bd314:
    // 0x4bd314: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bd314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4bd318:
    // 0x4bd318: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bd318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4bd31c:
    // 0x4bd31c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4bd31cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4bd320:
    // 0x4bd320: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_4bd324:
    if (ctx->pc == 0x4BD324u) {
        ctx->pc = 0x4BD324u;
            // 0x4bd324: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BD328u;
        goto label_4bd328;
    }
    ctx->pc = 0x4BD320u;
    {
        const bool branch_taken_0x4bd320 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4BD324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD320u;
            // 0x4bd324: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd320) {
            ctx->pc = 0x4BD354u;
            goto label_4bd354;
        }
    }
    ctx->pc = 0x4BD328u;
label_4bd328:
    // 0x4bd328: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4bd328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4bd32c:
    // 0x4bd32c: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_4bd330:
    if (ctx->pc == 0x4BD330u) {
        ctx->pc = 0x4BD330u;
            // 0x4bd330: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4BD334u;
        goto label_4bd334;
    }
    ctx->pc = 0x4BD32Cu;
    {
        const bool branch_taken_0x4bd32c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4bd32c) {
            ctx->pc = 0x4BD330u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD32Cu;
            // 0x4bd330: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BD348u;
            goto label_4bd348;
        }
    }
    ctx->pc = 0x4BD334u;
label_4bd334:
    // 0x4bd334: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4bd334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4bd338:
    // 0x4bd338: 0x10a30037  beq         $a1, $v1, . + 4 + (0x37 << 2)
label_4bd33c:
    if (ctx->pc == 0x4BD33Cu) {
        ctx->pc = 0x4BD340u;
        goto label_4bd340;
    }
    ctx->pc = 0x4BD338u;
    {
        const bool branch_taken_0x4bd338 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4bd338) {
            ctx->pc = 0x4BD418u;
            goto label_4bd418;
        }
    }
    ctx->pc = 0x4BD340u;
label_4bd340:
    // 0x4bd340: 0x10000035  b           . + 4 + (0x35 << 2)
label_4bd344:
    if (ctx->pc == 0x4BD344u) {
        ctx->pc = 0x4BD348u;
        goto label_4bd348;
    }
    ctx->pc = 0x4BD340u;
    {
        const bool branch_taken_0x4bd340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bd340) {
            ctx->pc = 0x4BD418u;
            goto label_4bd418;
        }
    }
    ctx->pc = 0x4BD348u;
label_4bd348:
    // 0x4bd348: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4bd348u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4bd34c:
    // 0x4bd34c: 0x320f809  jalr        $t9
label_4bd350:
    if (ctx->pc == 0x4BD350u) {
        ctx->pc = 0x4BD354u;
        goto label_4bd354;
    }
    ctx->pc = 0x4BD34Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BD354u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BD354u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BD354u; }
            if (ctx->pc != 0x4BD354u) { return; }
        }
        }
    }
    ctx->pc = 0x4BD354u;
label_4bd354:
    // 0x4bd354: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4bd354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4bd358:
    // 0x4bd358: 0x26640084  addiu       $a0, $s3, 0x84
    ctx->pc = 0x4bd358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
label_4bd35c:
    // 0x4bd35c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4bd35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4bd360:
    // 0x4bd360: 0xc66000a0  lwc1        $f0, 0xA0($s3)
    ctx->pc = 0x4bd360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bd364:
    // 0x4bd364: 0x2486001c  addiu       $a2, $a0, 0x1C
    ctx->pc = 0x4bd364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
label_4bd368:
    // 0x4bd368: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x4bd368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4bd36c:
    // 0x4bd36c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4bd36cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4bd370:
    // 0x4bd370: 0xe66000a0  swc1        $f0, 0xA0($s3)
    ctx->pc = 0x4bd370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 160), bits); }
label_4bd374:
    // 0x4bd374: 0x8e630098  lw          $v1, 0x98($s3)
    ctx->pc = 0x4bd374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
label_4bd378:
    // 0x4bd378: 0xc66000a0  lwc1        $f0, 0xA0($s3)
    ctx->pc = 0x4bd378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bd37c:
    // 0x4bd37c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x4bd37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4bd380:
    // 0x4bd380: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4bd380u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bd384:
    // 0x4bd384: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4bd388:
    if (ctx->pc == 0x4BD388u) {
        ctx->pc = 0x4BD388u;
            // 0x4bd388: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4BD38Cu;
        goto label_4bd38c;
    }
    ctx->pc = 0x4BD384u;
    {
        const bool branch_taken_0x4bd384 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4BD388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD384u;
            // 0x4bd388: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd384) {
            ctx->pc = 0x4BD390u;
            goto label_4bd390;
        }
    }
    ctx->pc = 0x4BD38Cu;
label_4bd38c:
    // 0x4bd38c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4bd38cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bd390:
    // 0x4bd390: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
label_4bd394:
    if (ctx->pc == 0x4BD394u) {
        ctx->pc = 0x4BD394u;
            // 0x4bd394: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x4BD398u;
        goto label_4bd398;
    }
    ctx->pc = 0x4BD390u;
    {
        const bool branch_taken_0x4bd390 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x4bd390) {
            ctx->pc = 0x4BD394u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD390u;
            // 0x4bd394: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BD3A4u;
            goto label_4bd3a4;
        }
    }
    ctx->pc = 0x4BD398u;
label_4bd398:
    // 0x4bd398: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4bd398u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4bd39c:
    // 0x4bd39c: 0x10000007  b           . + 4 + (0x7 << 2)
label_4bd3a0:
    if (ctx->pc == 0x4BD3A0u) {
        ctx->pc = 0x4BD3A0u;
            // 0x4bd3a0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4BD3A4u;
        goto label_4bd3a4;
    }
    ctx->pc = 0x4BD39Cu;
    {
        const bool branch_taken_0x4bd39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BD3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD39Cu;
            // 0x4bd3a0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd39c) {
            ctx->pc = 0x4BD3BCu;
            goto label_4bd3bc;
        }
    }
    ctx->pc = 0x4BD3A4u;
label_4bd3a4:
    // 0x4bd3a4: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x4bd3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_4bd3a8:
    // 0x4bd3a8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4bd3a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4bd3ac:
    // 0x4bd3ac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4bd3acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4bd3b0:
    // 0x4bd3b0: 0x0  nop
    ctx->pc = 0x4bd3b0u;
    // NOP
label_4bd3b4:
    // 0x4bd3b4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4bd3b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4bd3b8:
    // 0x4bd3b8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4bd3b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_4bd3bc:
    // 0x4bd3bc: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x4bd3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bd3c0:
    // 0x4bd3c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4bd3c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4bd3c4:
    // 0x4bd3c4: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x4bd3c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_4bd3c8:
    // 0x4bd3c8: 0x8e700070  lw          $s0, 0x70($s3)
    ctx->pc = 0x4bd3c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_4bd3cc:
    // 0x4bd3cc: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
label_4bd3d0:
    if (ctx->pc == 0x4BD3D0u) {
        ctx->pc = 0x4BD3D4u;
        goto label_4bd3d4;
    }
    ctx->pc = 0x4BD3CCu;
    {
        const bool branch_taken_0x4bd3cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bd3cc) {
            ctx->pc = 0x4BD418u;
            goto label_4bd418;
        }
    }
    ctx->pc = 0x4BD3D4u;
label_4bd3d4:
    // 0x4bd3d4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4bd3d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bd3d8:
    // 0x4bd3d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4bd3d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bd3dc:
    // 0x4bd3dc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4bd3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4bd3e0:
    // 0x4bd3e0: 0x8e640074  lw          $a0, 0x74($s3)
    ctx->pc = 0x4bd3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_4bd3e4:
    // 0x4bd3e4: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4bd3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4bd3e8:
    // 0x4bd3e8: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x4bd3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_4bd3ec:
    // 0x4bd3ec: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x4bd3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_4bd3f0:
    // 0x4bd3f0: 0x28610007  slti        $at, $v1, 0x7
    ctx->pc = 0x4bd3f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
label_4bd3f4:
    // 0x4bd3f4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_4bd3f8:
    if (ctx->pc == 0x4BD3F8u) {
        ctx->pc = 0x4BD3F8u;
            // 0x4bd3f8: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4BD3FCu;
        goto label_4bd3fc;
    }
    ctx->pc = 0x4BD3F4u;
    {
        const bool branch_taken_0x4bd3f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BD3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD3F4u;
            // 0x4bd3f8: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd3f4) {
            ctx->pc = 0x4BD408u;
            goto label_4bd408;
        }
    }
    ctx->pc = 0x4BD3FCu;
label_4bd3fc:
    // 0x4bd3fc: 0xc0bc6ec  jal         func_2F1BB0
label_4bd400:
    if (ctx->pc == 0x4BD400u) {
        ctx->pc = 0x4BD400u;
            // 0x4bd400: 0x248400f0  addiu       $a0, $a0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
        ctx->pc = 0x4BD404u;
        goto label_4bd404;
    }
    ctx->pc = 0x4BD3FCu;
    SET_GPR_U32(ctx, 31, 0x4BD404u);
    ctx->pc = 0x4BD400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD3FCu;
            // 0x4bd400: 0x248400f0  addiu       $a0, $a0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BB0u;
    if (runtime->hasFunction(0x2F1BB0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD404u; }
        if (ctx->pc != 0x4BD404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1BB0_0x2f1bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD404u; }
        if (ctx->pc != 0x4BD404u) { return; }
    }
    ctx->pc = 0x4BD404u;
label_4bd404:
    // 0x4bd404: 0x0  nop
    ctx->pc = 0x4bd404u;
    // NOP
label_4bd408:
    // 0x4bd408: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4bd408u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4bd40c:
    // 0x4bd40c: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x4bd40cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4bd410:
    // 0x4bd410: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_4bd414:
    if (ctx->pc == 0x4BD414u) {
        ctx->pc = 0x4BD414u;
            // 0x4bd414: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4BD418u;
        goto label_4bd418;
    }
    ctx->pc = 0x4BD410u;
    {
        const bool branch_taken_0x4bd410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BD414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD410u;
            // 0x4bd414: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd410) {
            ctx->pc = 0x4BD3DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4bd3dc;
        }
    }
    ctx->pc = 0x4BD418u;
label_4bd418:
    // 0x4bd418: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4bd418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4bd41c:
    // 0x4bd41c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4bd41cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4bd420:
    // 0x4bd420: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4bd420u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4bd424:
    // 0x4bd424: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bd424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4bd428:
    // 0x4bd428: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bd428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4bd42c:
    // 0x4bd42c: 0x3e00008  jr          $ra
label_4bd430:
    if (ctx->pc == 0x4BD430u) {
        ctx->pc = 0x4BD430u;
            // 0x4bd430: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4BD434u;
        goto label_4bd434;
    }
    ctx->pc = 0x4BD42Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BD430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD42Cu;
            // 0x4bd430: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BD434u;
label_4bd434:
    // 0x4bd434: 0x0  nop
    ctx->pc = 0x4bd434u;
    // NOP
label_4bd438:
    // 0x4bd438: 0x0  nop
    ctx->pc = 0x4bd438u;
    // NOP
label_4bd43c:
    // 0x4bd43c: 0x0  nop
    ctx->pc = 0x4bd43cu;
    // NOP
label_4bd440:
    // 0x4bd440: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4bd440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4bd444:
    // 0x4bd444: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4bd444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4bd448:
    // 0x4bd448: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4bd448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4bd44c:
    // 0x4bd44c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4bd44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4bd450:
    // 0x4bd450: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bd450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4bd454:
    // 0x4bd454: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bd454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4bd458:
    // 0x4bd458: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4bd458u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4bd45c:
    // 0x4bd45c: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_4bd460:
    if (ctx->pc == 0x4BD460u) {
        ctx->pc = 0x4BD460u;
            // 0x4bd460: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BD464u;
        goto label_4bd464;
    }
    ctx->pc = 0x4BD45Cu;
    {
        const bool branch_taken_0x4bd45c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BD460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD45Cu;
            // 0x4bd460: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd45c) {
            ctx->pc = 0x4BD4B0u;
            goto label_4bd4b0;
        }
    }
    ctx->pc = 0x4BD464u;
label_4bd464:
    // 0x4bd464: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4bd464u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bd468:
    // 0x4bd468: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4bd468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bd46c:
    // 0x4bd46c: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x4bd46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_4bd470:
    // 0x4bd470: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4bd470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4bd474:
    // 0x4bd474: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4bd474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bd478:
    // 0x4bd478: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4bd478u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bd47c:
    // 0x4bd47c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4bd47cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bd480:
    // 0x4bd480: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4bd480u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bd484:
    // 0x4bd484: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4bd484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4bd488:
    // 0x4bd488: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x4bd488u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4bd48c:
    // 0x4bd48c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4bd48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4bd490:
    // 0x4bd490: 0x240b0063  addiu       $t3, $zero, 0x63
    ctx->pc = 0x4bd490u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_4bd494:
    // 0x4bd494: 0xc0bc754  jal         func_2F1D50
label_4bd498:
    if (ctx->pc == 0x4BD498u) {
        ctx->pc = 0x4BD498u;
            // 0x4bd498: 0x244400f0  addiu       $a0, $v0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
        ctx->pc = 0x4BD49Cu;
        goto label_4bd49c;
    }
    ctx->pc = 0x4BD494u;
    SET_GPR_U32(ctx, 31, 0x4BD49Cu);
    ctx->pc = 0x4BD498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD494u;
            // 0x4bd498: 0x244400f0  addiu       $a0, $v0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D50u;
    if (runtime->hasFunction(0x2F1D50u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD49Cu; }
        if (ctx->pc != 0x4BD49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1D50_0x2f1d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD49Cu; }
        if (ctx->pc != 0x4BD49Cu) { return; }
    }
    ctx->pc = 0x4BD49Cu;
label_4bd49c:
    // 0x4bd49c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4bd49cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4bd4a0:
    // 0x4bd4a0: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x4bd4a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4bd4a4:
    // 0x4bd4a4: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_4bd4a8:
    if (ctx->pc == 0x4BD4A8u) {
        ctx->pc = 0x4BD4A8u;
            // 0x4bd4a8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4BD4ACu;
        goto label_4bd4ac;
    }
    ctx->pc = 0x4BD4A4u;
    {
        const bool branch_taken_0x4bd4a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BD4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD4A4u;
            // 0x4bd4a8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd4a4) {
            ctx->pc = 0x4BD46Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4bd46c;
        }
    }
    ctx->pc = 0x4BD4ACu;
label_4bd4ac:
    // 0x4bd4ac: 0x0  nop
    ctx->pc = 0x4bd4acu;
    // NOP
label_4bd4b0:
    // 0x4bd4b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4bd4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4bd4b4:
    // 0x4bd4b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4bd4b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4bd4b8:
    // 0x4bd4b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4bd4b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4bd4bc:
    // 0x4bd4bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bd4bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4bd4c0:
    // 0x4bd4c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bd4c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4bd4c4:
    // 0x4bd4c4: 0x3e00008  jr          $ra
label_4bd4c8:
    if (ctx->pc == 0x4BD4C8u) {
        ctx->pc = 0x4BD4C8u;
            // 0x4bd4c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4BD4CCu;
        goto label_4bd4cc;
    }
    ctx->pc = 0x4BD4C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BD4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD4C4u;
            // 0x4bd4c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BD4CCu;
label_4bd4cc:
    // 0x4bd4cc: 0x0  nop
    ctx->pc = 0x4bd4ccu;
    // NOP
}
