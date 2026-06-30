#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016F068
// Address: 0x16f068 - 0x16f490
void sub_0016F068_0x16f068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F068_0x16f068");
#endif

    switch (ctx->pc) {
        case 0x16f068u: goto label_16f068;
        case 0x16f06cu: goto label_16f06c;
        case 0x16f070u: goto label_16f070;
        case 0x16f074u: goto label_16f074;
        case 0x16f078u: goto label_16f078;
        case 0x16f07cu: goto label_16f07c;
        case 0x16f080u: goto label_16f080;
        case 0x16f084u: goto label_16f084;
        case 0x16f088u: goto label_16f088;
        case 0x16f08cu: goto label_16f08c;
        case 0x16f090u: goto label_16f090;
        case 0x16f094u: goto label_16f094;
        case 0x16f098u: goto label_16f098;
        case 0x16f09cu: goto label_16f09c;
        case 0x16f0a0u: goto label_16f0a0;
        case 0x16f0a4u: goto label_16f0a4;
        case 0x16f0a8u: goto label_16f0a8;
        case 0x16f0acu: goto label_16f0ac;
        case 0x16f0b0u: goto label_16f0b0;
        case 0x16f0b4u: goto label_16f0b4;
        case 0x16f0b8u: goto label_16f0b8;
        case 0x16f0bcu: goto label_16f0bc;
        case 0x16f0c0u: goto label_16f0c0;
        case 0x16f0c4u: goto label_16f0c4;
        case 0x16f0c8u: goto label_16f0c8;
        case 0x16f0ccu: goto label_16f0cc;
        case 0x16f0d0u: goto label_16f0d0;
        case 0x16f0d4u: goto label_16f0d4;
        case 0x16f0d8u: goto label_16f0d8;
        case 0x16f0dcu: goto label_16f0dc;
        case 0x16f0e0u: goto label_16f0e0;
        case 0x16f0e4u: goto label_16f0e4;
        case 0x16f0e8u: goto label_16f0e8;
        case 0x16f0ecu: goto label_16f0ec;
        case 0x16f0f0u: goto label_16f0f0;
        case 0x16f0f4u: goto label_16f0f4;
        case 0x16f0f8u: goto label_16f0f8;
        case 0x16f0fcu: goto label_16f0fc;
        case 0x16f100u: goto label_16f100;
        case 0x16f104u: goto label_16f104;
        case 0x16f108u: goto label_16f108;
        case 0x16f10cu: goto label_16f10c;
        case 0x16f110u: goto label_16f110;
        case 0x16f114u: goto label_16f114;
        case 0x16f118u: goto label_16f118;
        case 0x16f11cu: goto label_16f11c;
        case 0x16f120u: goto label_16f120;
        case 0x16f124u: goto label_16f124;
        case 0x16f128u: goto label_16f128;
        case 0x16f12cu: goto label_16f12c;
        case 0x16f130u: goto label_16f130;
        case 0x16f134u: goto label_16f134;
        case 0x16f138u: goto label_16f138;
        case 0x16f13cu: goto label_16f13c;
        case 0x16f140u: goto label_16f140;
        case 0x16f144u: goto label_16f144;
        case 0x16f148u: goto label_16f148;
        case 0x16f14cu: goto label_16f14c;
        case 0x16f150u: goto label_16f150;
        case 0x16f154u: goto label_16f154;
        case 0x16f158u: goto label_16f158;
        case 0x16f15cu: goto label_16f15c;
        case 0x16f160u: goto label_16f160;
        case 0x16f164u: goto label_16f164;
        case 0x16f168u: goto label_16f168;
        case 0x16f16cu: goto label_16f16c;
        case 0x16f170u: goto label_16f170;
        case 0x16f174u: goto label_16f174;
        case 0x16f178u: goto label_16f178;
        case 0x16f17cu: goto label_16f17c;
        case 0x16f180u: goto label_16f180;
        case 0x16f184u: goto label_16f184;
        case 0x16f188u: goto label_16f188;
        case 0x16f18cu: goto label_16f18c;
        case 0x16f190u: goto label_16f190;
        case 0x16f194u: goto label_16f194;
        case 0x16f198u: goto label_16f198;
        case 0x16f19cu: goto label_16f19c;
        case 0x16f1a0u: goto label_16f1a0;
        case 0x16f1a4u: goto label_16f1a4;
        case 0x16f1a8u: goto label_16f1a8;
        case 0x16f1acu: goto label_16f1ac;
        case 0x16f1b0u: goto label_16f1b0;
        case 0x16f1b4u: goto label_16f1b4;
        case 0x16f1b8u: goto label_16f1b8;
        case 0x16f1bcu: goto label_16f1bc;
        case 0x16f1c0u: goto label_16f1c0;
        case 0x16f1c4u: goto label_16f1c4;
        case 0x16f1c8u: goto label_16f1c8;
        case 0x16f1ccu: goto label_16f1cc;
        case 0x16f1d0u: goto label_16f1d0;
        case 0x16f1d4u: goto label_16f1d4;
        case 0x16f1d8u: goto label_16f1d8;
        case 0x16f1dcu: goto label_16f1dc;
        case 0x16f1e0u: goto label_16f1e0;
        case 0x16f1e4u: goto label_16f1e4;
        case 0x16f1e8u: goto label_16f1e8;
        case 0x16f1ecu: goto label_16f1ec;
        case 0x16f1f0u: goto label_16f1f0;
        case 0x16f1f4u: goto label_16f1f4;
        case 0x16f1f8u: goto label_16f1f8;
        case 0x16f1fcu: goto label_16f1fc;
        case 0x16f200u: goto label_16f200;
        case 0x16f204u: goto label_16f204;
        case 0x16f208u: goto label_16f208;
        case 0x16f20cu: goto label_16f20c;
        case 0x16f210u: goto label_16f210;
        case 0x16f214u: goto label_16f214;
        case 0x16f218u: goto label_16f218;
        case 0x16f21cu: goto label_16f21c;
        case 0x16f220u: goto label_16f220;
        case 0x16f224u: goto label_16f224;
        case 0x16f228u: goto label_16f228;
        case 0x16f22cu: goto label_16f22c;
        case 0x16f230u: goto label_16f230;
        case 0x16f234u: goto label_16f234;
        case 0x16f238u: goto label_16f238;
        case 0x16f23cu: goto label_16f23c;
        case 0x16f240u: goto label_16f240;
        case 0x16f244u: goto label_16f244;
        case 0x16f248u: goto label_16f248;
        case 0x16f24cu: goto label_16f24c;
        case 0x16f250u: goto label_16f250;
        case 0x16f254u: goto label_16f254;
        case 0x16f258u: goto label_16f258;
        case 0x16f25cu: goto label_16f25c;
        case 0x16f260u: goto label_16f260;
        case 0x16f264u: goto label_16f264;
        case 0x16f268u: goto label_16f268;
        case 0x16f26cu: goto label_16f26c;
        case 0x16f270u: goto label_16f270;
        case 0x16f274u: goto label_16f274;
        case 0x16f278u: goto label_16f278;
        case 0x16f27cu: goto label_16f27c;
        case 0x16f280u: goto label_16f280;
        case 0x16f284u: goto label_16f284;
        case 0x16f288u: goto label_16f288;
        case 0x16f28cu: goto label_16f28c;
        case 0x16f290u: goto label_16f290;
        case 0x16f294u: goto label_16f294;
        case 0x16f298u: goto label_16f298;
        case 0x16f29cu: goto label_16f29c;
        case 0x16f2a0u: goto label_16f2a0;
        case 0x16f2a4u: goto label_16f2a4;
        case 0x16f2a8u: goto label_16f2a8;
        case 0x16f2acu: goto label_16f2ac;
        case 0x16f2b0u: goto label_16f2b0;
        case 0x16f2b4u: goto label_16f2b4;
        case 0x16f2b8u: goto label_16f2b8;
        case 0x16f2bcu: goto label_16f2bc;
        case 0x16f2c0u: goto label_16f2c0;
        case 0x16f2c4u: goto label_16f2c4;
        case 0x16f2c8u: goto label_16f2c8;
        case 0x16f2ccu: goto label_16f2cc;
        case 0x16f2d0u: goto label_16f2d0;
        case 0x16f2d4u: goto label_16f2d4;
        case 0x16f2d8u: goto label_16f2d8;
        case 0x16f2dcu: goto label_16f2dc;
        case 0x16f2e0u: goto label_16f2e0;
        case 0x16f2e4u: goto label_16f2e4;
        case 0x16f2e8u: goto label_16f2e8;
        case 0x16f2ecu: goto label_16f2ec;
        case 0x16f2f0u: goto label_16f2f0;
        case 0x16f2f4u: goto label_16f2f4;
        case 0x16f2f8u: goto label_16f2f8;
        case 0x16f2fcu: goto label_16f2fc;
        case 0x16f300u: goto label_16f300;
        case 0x16f304u: goto label_16f304;
        case 0x16f308u: goto label_16f308;
        case 0x16f30cu: goto label_16f30c;
        case 0x16f310u: goto label_16f310;
        case 0x16f314u: goto label_16f314;
        case 0x16f318u: goto label_16f318;
        case 0x16f31cu: goto label_16f31c;
        case 0x16f320u: goto label_16f320;
        case 0x16f324u: goto label_16f324;
        case 0x16f328u: goto label_16f328;
        case 0x16f32cu: goto label_16f32c;
        case 0x16f330u: goto label_16f330;
        case 0x16f334u: goto label_16f334;
        case 0x16f338u: goto label_16f338;
        case 0x16f33cu: goto label_16f33c;
        case 0x16f340u: goto label_16f340;
        case 0x16f344u: goto label_16f344;
        case 0x16f348u: goto label_16f348;
        case 0x16f34cu: goto label_16f34c;
        case 0x16f350u: goto label_16f350;
        case 0x16f354u: goto label_16f354;
        case 0x16f358u: goto label_16f358;
        case 0x16f35cu: goto label_16f35c;
        case 0x16f360u: goto label_16f360;
        case 0x16f364u: goto label_16f364;
        case 0x16f368u: goto label_16f368;
        case 0x16f36cu: goto label_16f36c;
        case 0x16f370u: goto label_16f370;
        case 0x16f374u: goto label_16f374;
        case 0x16f378u: goto label_16f378;
        case 0x16f37cu: goto label_16f37c;
        case 0x16f380u: goto label_16f380;
        case 0x16f384u: goto label_16f384;
        case 0x16f388u: goto label_16f388;
        case 0x16f38cu: goto label_16f38c;
        case 0x16f390u: goto label_16f390;
        case 0x16f394u: goto label_16f394;
        case 0x16f398u: goto label_16f398;
        case 0x16f39cu: goto label_16f39c;
        case 0x16f3a0u: goto label_16f3a0;
        case 0x16f3a4u: goto label_16f3a4;
        case 0x16f3a8u: goto label_16f3a8;
        case 0x16f3acu: goto label_16f3ac;
        case 0x16f3b0u: goto label_16f3b0;
        case 0x16f3b4u: goto label_16f3b4;
        case 0x16f3b8u: goto label_16f3b8;
        case 0x16f3bcu: goto label_16f3bc;
        case 0x16f3c0u: goto label_16f3c0;
        case 0x16f3c4u: goto label_16f3c4;
        case 0x16f3c8u: goto label_16f3c8;
        case 0x16f3ccu: goto label_16f3cc;
        case 0x16f3d0u: goto label_16f3d0;
        case 0x16f3d4u: goto label_16f3d4;
        case 0x16f3d8u: goto label_16f3d8;
        case 0x16f3dcu: goto label_16f3dc;
        case 0x16f3e0u: goto label_16f3e0;
        case 0x16f3e4u: goto label_16f3e4;
        case 0x16f3e8u: goto label_16f3e8;
        case 0x16f3ecu: goto label_16f3ec;
        case 0x16f3f0u: goto label_16f3f0;
        case 0x16f3f4u: goto label_16f3f4;
        case 0x16f3f8u: goto label_16f3f8;
        case 0x16f3fcu: goto label_16f3fc;
        case 0x16f400u: goto label_16f400;
        case 0x16f404u: goto label_16f404;
        case 0x16f408u: goto label_16f408;
        case 0x16f40cu: goto label_16f40c;
        case 0x16f410u: goto label_16f410;
        case 0x16f414u: goto label_16f414;
        case 0x16f418u: goto label_16f418;
        case 0x16f41cu: goto label_16f41c;
        case 0x16f420u: goto label_16f420;
        case 0x16f424u: goto label_16f424;
        case 0x16f428u: goto label_16f428;
        case 0x16f42cu: goto label_16f42c;
        case 0x16f430u: goto label_16f430;
        case 0x16f434u: goto label_16f434;
        case 0x16f438u: goto label_16f438;
        case 0x16f43cu: goto label_16f43c;
        case 0x16f440u: goto label_16f440;
        case 0x16f444u: goto label_16f444;
        case 0x16f448u: goto label_16f448;
        case 0x16f44cu: goto label_16f44c;
        case 0x16f450u: goto label_16f450;
        case 0x16f454u: goto label_16f454;
        case 0x16f458u: goto label_16f458;
        case 0x16f45cu: goto label_16f45c;
        case 0x16f460u: goto label_16f460;
        case 0x16f464u: goto label_16f464;
        case 0x16f468u: goto label_16f468;
        case 0x16f46cu: goto label_16f46c;
        case 0x16f470u: goto label_16f470;
        case 0x16f474u: goto label_16f474;
        case 0x16f478u: goto label_16f478;
        case 0x16f47cu: goto label_16f47c;
        case 0x16f480u: goto label_16f480;
        case 0x16f484u: goto label_16f484;
        case 0x16f488u: goto label_16f488;
        case 0x16f48cu: goto label_16f48c;
        default: break;
    }

    ctx->pc = 0x16f068u;

label_16f068:
    // 0x16f068: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16f068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_16f06c:
    // 0x16f06c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16f06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f070:
    // 0x16f070: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x16f070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_16f074:
    // 0x16f074: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x16f074u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16f078:
    // 0x16f078: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x16f078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_16f07c:
    // 0x16f07c: 0x3406c800  ori         $a2, $zero, 0xC800
    ctx->pc = 0x16f07cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)51200);
label_16f080:
    // 0x16f080: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x16f080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_16f084:
    // 0x16f084: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x16f084u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16f088:
    // 0x16f088: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x16f088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_16f08c:
    // 0x16f08c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x16f08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_16f090:
    // 0x16f090: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x16f090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_16f094:
    // 0x16f094: 0x8e700008  lw          $s0, 0x8($s3)
    ctx->pc = 0x16f094u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_16f098:
    // 0x16f098: 0x8e720004  lw          $s2, 0x4($s3)
    ctx->pc = 0x16f098u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_16f09c:
    // 0x16f09c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16f09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16f0a0:
    // 0x16f0a0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x16f0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_16f0a4:
    // 0x16f0a4: 0x40f809  jalr        $v0
label_16f0a8:
    if (ctx->pc == 0x16F0A8u) {
        ctx->pc = 0x16F0A8u;
            // 0x16f0a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F0ACu;
        goto label_16f0ac;
    }
    ctx->pc = 0x16F0A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16F0ACu);
        ctx->pc = 0x16F0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F0A4u;
            // 0x16f0a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F0ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F0ACu; }
            if (ctx->pc != 0x16F0ACu) { return; }
        }
        }
    }
    ctx->pc = 0x16F0ACu;
label_16f0ac:
    // 0x16f0ac: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x16f0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_16f0b0:
    // 0x16f0b0: 0x18800012  blez        $a0, . + 4 + (0x12 << 2)
label_16f0b4:
    if (ctx->pc == 0x16F0B4u) {
        ctx->pc = 0x16F0B4u;
            // 0x16f0b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F0B8u;
        goto label_16f0b8;
    }
    ctx->pc = 0x16F0B0u;
    {
        const bool branch_taken_0x16f0b0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x16F0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F0B0u;
            // 0x16f0b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f0b0) {
            ctx->pc = 0x16F0FCu;
            goto label_16f0fc;
        }
    }
    ctx->pc = 0x16F0B8u;
label_16f0b8:
    // 0x16f0b8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16f0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16f0bc:
    // 0x16f0bc: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x16f0bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_16f0c0:
    // 0x16f0c0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_16f0c4:
    if (ctx->pc == 0x16F0C4u) {
        ctx->pc = 0x16F0C4u;
            // 0x16f0c4: 0x517c2  srl         $v0, $a1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
        ctx->pc = 0x16F0C8u;
        goto label_16f0c8;
    }
    ctx->pc = 0x16F0C0u;
    {
        const bool branch_taken_0x16f0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F0C0u;
            // 0x16f0c4: 0x517c2  srl         $v0, $a1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f0c0) {
            ctx->pc = 0x16F100u;
            goto label_16f100;
        }
    }
    ctx->pc = 0x16F0C8u;
label_16f0c8:
    // 0x16f0c8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x16f0c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16f0cc:
    // 0x16f0cc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x16f0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_16f0d0:
    // 0x16f0d0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x16f0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_16f0d4:
    // 0x16f0d4: 0x0  nop
    ctx->pc = 0x16f0d4u;
    // NOP
label_16f0d8:
    // 0x16f0d8: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x16f0d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_16f0dc:
    // 0x16f0dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_16f0e0:
    if (ctx->pc == 0x16F0E0u) {
        ctx->pc = 0x16F0E0u;
            // 0x16f0e0: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->pc = 0x16F0E4u;
        goto label_16f0e4;
    }
    ctx->pc = 0x16F0DCu;
    {
        const bool branch_taken_0x16f0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F0DCu;
            // 0x16f0e0: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f0dc) {
            ctx->pc = 0x16F0FCu;
            goto label_16f0fc;
        }
    }
    ctx->pc = 0x16F0E4u;
label_16f0e4:
    // 0x16f0e4: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x16f0e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_16f0e8:
    // 0x16f0e8: 0x0  nop
    ctx->pc = 0x16f0e8u;
    // NOP
label_16f0ec:
    // 0x16f0ec: 0x0  nop
    ctx->pc = 0x16f0ecu;
    // NOP
label_16f0f0:
    // 0x16f0f0: 0x0  nop
    ctx->pc = 0x16f0f0u;
    // NOP
label_16f0f4:
    // 0x16f0f4: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
label_16f0f8:
    if (ctx->pc == 0x16F0F8u) {
        ctx->pc = 0x16F0F8u;
            // 0x16f0f8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x16F0FCu;
        goto label_16f0fc;
    }
    ctx->pc = 0x16F0F4u;
    {
        const bool branch_taken_0x16f0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f0f4) {
            ctx->pc = 0x16F0F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16F0F4u;
            // 0x16f0f8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16F0D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16f0d8;
        }
    }
    ctx->pc = 0x16F0FCu;
label_16f0fc:
    // 0x16f0fc: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x16f0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_16f100:
    // 0x16f100: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x16f100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_16f104:
    // 0x16f104: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x16f104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_16f108:
    // 0x16f108: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x16f108u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_16f10c:
    // 0x16f10c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x16f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_16f110:
    // 0x16f110: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
label_16f114:
    if (ctx->pc == 0x16F114u) {
        ctx->pc = 0x16F114u;
            // 0x16f114: 0x27b40010  addiu       $s4, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x16F118u;
        goto label_16f118;
    }
    ctx->pc = 0x16F110u;
    {
        const bool branch_taken_0x16f110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x16F114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F110u;
            // 0x16f114: 0x27b40010  addiu       $s4, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f110) {
            ctx->pc = 0x16F160u;
            goto label_16f160;
        }
    }
    ctx->pc = 0x16F118u;
label_16f118:
    // 0x16f118: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16f118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16f11c:
    // 0x16f11c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16f120:
    // 0x16f120: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16f120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f124:
    // 0x16f124: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x16f124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_16f128:
    // 0x16f128: 0x40f809  jalr        $v0
label_16f12c:
    if (ctx->pc == 0x16F12Cu) {
        ctx->pc = 0x16F12Cu;
            // 0x16f12c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F130u;
        goto label_16f130;
    }
    ctx->pc = 0x16F128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16F130u);
        ctx->pc = 0x16F12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F128u;
            // 0x16f12c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F130u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F130u; }
            if (ctx->pc != 0x16F130u) { return; }
        }
        }
    }
    ctx->pc = 0x16F130u;
label_16f130:
    // 0x16f130: 0xc05919a  jal         func_164668
label_16f134:
    if (ctx->pc == 0x16F134u) {
        ctx->pc = 0x16F138u;
        goto label_16f138;
    }
    ctx->pc = 0x16F130u;
    SET_GPR_U32(ctx, 31, 0x16F138u);
    ctx->pc = 0x164668u;
    if (runtime->hasFunction(0x164668u)) {
        auto targetFn = runtime->lookupFunction(0x164668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F138u; }
        if (ctx->pc != 0x16F138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164668_0x164668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F138u; }
        if (ctx->pc != 0x16F138u) { return; }
    }
    ctx->pc = 0x16F138u;
label_16f138:
    // 0x16f138: 0x54400084  bnel        $v0, $zero, . + 4 + (0x84 << 2)
label_16f13c:
    if (ctx->pc == 0x16F13Cu) {
        ctx->pc = 0x16F13Cu;
            // 0x16f13c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x16F140u;
        goto label_16f140;
    }
    ctx->pc = 0x16F138u;
    {
        const bool branch_taken_0x16f138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f138) {
            ctx->pc = 0x16F13Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16F138u;
            // 0x16f13c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16F34Cu;
            goto label_16f34c;
        }
    }
    ctx->pc = 0x16F140u;
label_16f140:
    // 0x16f140: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16f140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_16f144:
    // 0x16f144: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x16f144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_16f148:
    // 0x16f148: 0x24843f68  addiu       $a0, $a0, 0x3F68
    ctx->pc = 0x16f148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16232));
label_16f14c:
    // 0x16f14c: 0xc059f6c  jal         func_167DB0
label_16f150:
    if (ctx->pc == 0x16F150u) {
        ctx->pc = 0x16F150u;
            // 0x16f150: 0x24a53f88  addiu       $a1, $a1, 0x3F88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16264));
        ctx->pc = 0x16F154u;
        goto label_16f154;
    }
    ctx->pc = 0x16F14Cu;
    SET_GPR_U32(ctx, 31, 0x16F154u);
    ctx->pc = 0x16F150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F14Cu;
            // 0x16f150: 0x24a53f88  addiu       $a1, $a1, 0x3F88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167DB0u;
    if (runtime->hasFunction(0x167DB0u)) {
        auto targetFn = runtime->lookupFunction(0x167DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F154u; }
        if (ctx->pc != 0x16F154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167DB0_0x167db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F154u; }
        if (ctx->pc != 0x16F154u) { return; }
    }
    ctx->pc = 0x16F154u;
label_16f154:
    // 0x16f154: 0x1000007d  b           . + 4 + (0x7D << 2)
label_16f158:
    if (ctx->pc == 0x16F158u) {
        ctx->pc = 0x16F158u;
            // 0x16f158: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x16F15Cu;
        goto label_16f15c;
    }
    ctx->pc = 0x16F154u;
    {
        const bool branch_taken_0x16f154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F154u;
            // 0x16f158: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f154) {
            ctx->pc = 0x16F34Cu;
            goto label_16f34c;
        }
    }
    ctx->pc = 0x16F15Cu;
label_16f15c:
    // 0x16f15c: 0x0  nop
    ctx->pc = 0x16f15cu;
    // NOP
label_16f160:
    // 0x16f160: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16f160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16f164:
    // 0x16f164: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x16f164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16f168:
    // 0x16f168: 0xc061c20  jal         func_187080
label_16f16c:
    if (ctx->pc == 0x16F16Cu) {
        ctx->pc = 0x16F16Cu;
            // 0x16f16c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F170u;
        goto label_16f170;
    }
    ctx->pc = 0x16F168u;
    SET_GPR_U32(ctx, 31, 0x16F170u);
    ctx->pc = 0x16F16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F168u;
            // 0x16f16c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187080u;
    if (runtime->hasFunction(0x187080u)) {
        auto targetFn = runtime->lookupFunction(0x187080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F170u; }
        if (ctx->pc != 0x16F170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187080_0x187080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F170u; }
        if (ctx->pc != 0x16F170u) { return; }
    }
    ctx->pc = 0x16F170u;
label_16f170:
    // 0x16f170: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16f170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16f174:
    // 0x16f174: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x16f174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16f178:
    // 0x16f178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16f17c:
    // 0x16f17c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x16f17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_16f180:
    // 0x16f180: 0x40f809  jalr        $v0
label_16f184:
    if (ctx->pc == 0x16F184u) {
        ctx->pc = 0x16F184u;
            // 0x16f184: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F188u;
        goto label_16f188;
    }
    ctx->pc = 0x16F180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16F188u);
        ctx->pc = 0x16F184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F180u;
            // 0x16f184: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F188u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F188u; }
            if (ctx->pc != 0x16F188u) { return; }
        }
        }
    }
    ctx->pc = 0x16F188u;
label_16f188:
    // 0x16f188: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x16f188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_16f18c:
    // 0x16f18c: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x16f18cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
label_16f190:
    // 0x16f190: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_16f194:
    if (ctx->pc == 0x16F194u) {
        ctx->pc = 0x16F194u;
            // 0x16f194: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x16F198u;
        goto label_16f198;
    }
    ctx->pc = 0x16F190u;
    {
        const bool branch_taken_0x16f190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f190) {
            ctx->pc = 0x16F194u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16F190u;
            // 0x16f194: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16F1C0u;
            goto label_16f1c0;
        }
    }
    ctx->pc = 0x16F198u;
label_16f198:
    // 0x16f198: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x16f198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16f19c:
    // 0x16f19c: 0xc05931e  jal         func_164C78
label_16f1a0:
    if (ctx->pc == 0x16F1A0u) {
        ctx->pc = 0x16F1A0u;
            // 0x16f1a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F1A4u;
        goto label_16f1a4;
    }
    ctx->pc = 0x16F19Cu;
    SET_GPR_U32(ctx, 31, 0x16F1A4u);
    ctx->pc = 0x16F1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F19Cu;
            // 0x16f1a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164C78u;
    if (runtime->hasFunction(0x164C78u)) {
        auto targetFn = runtime->lookupFunction(0x164C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F1A4u; }
        if (ctx->pc != 0x16F1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164C78_0x164c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F1A4u; }
        if (ctx->pc != 0x16F1A4u) { return; }
    }
    ctx->pc = 0x16F1A4u;
label_16f1a4:
    // 0x16f1a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16f1a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16f1a8:
    // 0x16f1a8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_16f1ac:
    if (ctx->pc == 0x16F1ACu) {
        ctx->pc = 0x16F1ACu;
            // 0x16f1ac: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x16F1B0u;
        goto label_16f1b0;
    }
    ctx->pc = 0x16F1A8u;
    {
        const bool branch_taken_0x16f1a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F1A8u;
            // 0x16f1ac: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f1a8) {
            ctx->pc = 0x16F1BCu;
            goto label_16f1bc;
        }
    }
    ctx->pc = 0x16F1B0u;
label_16f1b0:
    // 0x16f1b0: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x16f1b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_16f1b4:
    // 0x16f1b4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_16f1b8:
    if (ctx->pc == 0x16F1B8u) {
        ctx->pc = 0x16F1BCu;
        goto label_16f1bc;
    }
    ctx->pc = 0x16F1B4u;
    {
        const bool branch_taken_0x16f1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f1b4) {
            ctx->pc = 0x16F1E0u;
            goto label_16f1e0;
        }
    }
    ctx->pc = 0x16F1BCu;
label_16f1bc:
    // 0x16f1bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16f1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16f1c0:
    // 0x16f1c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16f1c4:
    // 0x16f1c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16f1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f1c8:
    // 0x16f1c8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x16f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_16f1cc:
    // 0x16f1cc: 0x40f809  jalr        $v0
label_16f1d0:
    if (ctx->pc == 0x16F1D0u) {
        ctx->pc = 0x16F1D0u;
            // 0x16f1d0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F1D4u;
        goto label_16f1d4;
    }
    ctx->pc = 0x16F1CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16F1D4u);
        ctx->pc = 0x16F1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F1CCu;
            // 0x16f1d0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F1D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F1D4u; }
            if (ctx->pc != 0x16F1D4u) { return; }
        }
        }
    }
    ctx->pc = 0x16F1D4u;
label_16f1d4:
    // 0x16f1d4: 0x1000005f  b           . + 4 + (0x5F << 2)
label_16f1d8:
    if (ctx->pc == 0x16F1D8u) {
        ctx->pc = 0x16F1D8u;
            // 0x16f1d8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x16F1DCu;
        goto label_16f1dc;
    }
    ctx->pc = 0x16F1D4u;
    {
        const bool branch_taken_0x16f1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F1D4u;
            // 0x16f1d8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f1d4) {
            ctx->pc = 0x16F354u;
            goto label_16f354;
        }
    }
    ctx->pc = 0x16F1DCu;
label_16f1dc:
    // 0x16f1dc: 0x0  nop
    ctx->pc = 0x16f1dcu;
    // NOP
label_16f1e0:
    // 0x16f1e0: 0x623001b  bgezl       $s1, . + 4 + (0x1B << 2)
label_16f1e4:
    if (ctx->pc == 0x16F1E4u) {
        ctx->pc = 0x16F1E4u;
            // 0x16f1e4: 0xae710098  sw          $s1, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 17));
        ctx->pc = 0x16F1E8u;
        goto label_16f1e8;
    }
    ctx->pc = 0x16F1E0u;
    {
        const bool branch_taken_0x16f1e0 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x16f1e0) {
            ctx->pc = 0x16F1E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16F1E0u;
            // 0x16f1e4: 0xae710098  sw          $s1, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16F250u;
            goto label_16f250;
        }
    }
    ctx->pc = 0x16F1E8u;
label_16f1e8:
    // 0x16f1e8: 0x8642009a  lh          $v0, 0x9A($s2)
    ctx->pc = 0x16f1e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 154)));
label_16f1ec:
    // 0x16f1ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_16f1f0:
    if (ctx->pc == 0x16F1F0u) {
        ctx->pc = 0x16F1F0u;
            // 0x16f1f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F1F4u;
        goto label_16f1f4;
    }
    ctx->pc = 0x16F1ECu;
    {
        const bool branch_taken_0x16f1ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F1ECu;
            // 0x16f1f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f1ec) {
            ctx->pc = 0x16F208u;
            goto label_16f208;
        }
    }
    ctx->pc = 0x16F1F4u;
label_16f1f4:
    // 0x16f1f4: 0xc0592f6  jal         func_164BD8
label_16f1f8:
    if (ctx->pc == 0x16F1F8u) {
        ctx->pc = 0x16F1F8u;
            // 0x16f1f8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F1FCu;
        goto label_16f1fc;
    }
    ctx->pc = 0x16F1F4u;
    SET_GPR_U32(ctx, 31, 0x16F1FCu);
    ctx->pc = 0x16F1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F1F4u;
            // 0x16f1f8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164BD8u;
    if (runtime->hasFunction(0x164BD8u)) {
        auto targetFn = runtime->lookupFunction(0x164BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F1FCu; }
        if (ctx->pc != 0x16F1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164BD8_0x164bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F1FCu; }
        if (ctx->pc != 0x16F1FCu) { return; }
    }
    ctx->pc = 0x16F1FCu;
label_16f1fc:
    // 0x16f1fc: 0x10000014  b           . + 4 + (0x14 << 2)
label_16f200:
    if (ctx->pc == 0x16F200u) {
        ctx->pc = 0x16F200u;
            // 0x16f200: 0xae710098  sw          $s1, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 17));
        ctx->pc = 0x16F204u;
        goto label_16f204;
    }
    ctx->pc = 0x16F1FCu;
    {
        const bool branch_taken_0x16f1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F1FCu;
            // 0x16f200: 0xae710098  sw          $s1, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f1fc) {
            ctx->pc = 0x16F250u;
            goto label_16f250;
        }
    }
    ctx->pc = 0x16F204u;
label_16f204:
    // 0x16f204: 0x0  nop
    ctx->pc = 0x16f204u;
    // NOP
label_16f208:
    // 0x16f208: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16f208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16f20c:
    // 0x16f20c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16f210:
    // 0x16f210: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16f210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f214:
    // 0x16f214: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x16f214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_16f218:
    // 0x16f218: 0x40f809  jalr        $v0
label_16f21c:
    if (ctx->pc == 0x16F21Cu) {
        ctx->pc = 0x16F21Cu;
            // 0x16f21c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F220u;
        goto label_16f220;
    }
    ctx->pc = 0x16F218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16F220u);
        ctx->pc = 0x16F21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F218u;
            // 0x16f21c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F220u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F220u; }
            if (ctx->pc != 0x16F220u) { return; }
        }
        }
    }
    ctx->pc = 0x16F220u;
label_16f220:
    // 0x16f220: 0xc05919a  jal         func_164668
label_16f224:
    if (ctx->pc == 0x16F224u) {
        ctx->pc = 0x16F228u;
        goto label_16f228;
    }
    ctx->pc = 0x16F220u;
    SET_GPR_U32(ctx, 31, 0x16F228u);
    ctx->pc = 0x164668u;
    if (runtime->hasFunction(0x164668u)) {
        auto targetFn = runtime->lookupFunction(0x164668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F228u; }
        if (ctx->pc != 0x16F228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164668_0x164668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F228u; }
        if (ctx->pc != 0x16F228u) { return; }
    }
    ctx->pc = 0x16F228u;
label_16f228:
    // 0x16f228: 0x54400048  bnel        $v0, $zero, . + 4 + (0x48 << 2)
label_16f22c:
    if (ctx->pc == 0x16F22Cu) {
        ctx->pc = 0x16F22Cu;
            // 0x16f22c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x16F230u;
        goto label_16f230;
    }
    ctx->pc = 0x16F228u;
    {
        const bool branch_taken_0x16f228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f228) {
            ctx->pc = 0x16F22Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16F228u;
            // 0x16f22c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16F34Cu;
            goto label_16f34c;
        }
    }
    ctx->pc = 0x16F230u;
label_16f230:
    // 0x16f230: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16f230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_16f234:
    // 0x16f234: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x16f234u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_16f238:
    // 0x16f238: 0x24843fa8  addiu       $a0, $a0, 0x3FA8
    ctx->pc = 0x16f238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16296));
label_16f23c:
    // 0x16f23c: 0xc059f6c  jal         func_167DB0
label_16f240:
    if (ctx->pc == 0x16F240u) {
        ctx->pc = 0x16F240u;
            // 0x16f240: 0x24a53fc8  addiu       $a1, $a1, 0x3FC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16328));
        ctx->pc = 0x16F244u;
        goto label_16f244;
    }
    ctx->pc = 0x16F23Cu;
    SET_GPR_U32(ctx, 31, 0x16F244u);
    ctx->pc = 0x16F240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F23Cu;
            // 0x16f240: 0x24a53fc8  addiu       $a1, $a1, 0x3FC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167DB0u;
    if (runtime->hasFunction(0x167DB0u)) {
        auto targetFn = runtime->lookupFunction(0x167DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F244u; }
        if (ctx->pc != 0x16F244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167DB0_0x167db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F244u; }
        if (ctx->pc != 0x16F244u) { return; }
    }
    ctx->pc = 0x16F244u;
label_16f244:
    // 0x16f244: 0x10000041  b           . + 4 + (0x41 << 2)
label_16f248:
    if (ctx->pc == 0x16F248u) {
        ctx->pc = 0x16F248u;
            // 0x16f248: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x16F24Cu;
        goto label_16f24c;
    }
    ctx->pc = 0x16F244u;
    {
        const bool branch_taken_0x16f244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F244u;
            // 0x16f248: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f244) {
            ctx->pc = 0x16F34Cu;
            goto label_16f34c;
        }
    }
    ctx->pc = 0x16F24Cu;
label_16f24c:
    // 0x16f24c: 0x0  nop
    ctx->pc = 0x16f24cu;
    // NOP
label_16f250:
    // 0x16f250: 0xc059386  jal         func_164E18
label_16f254:
    if (ctx->pc == 0x16F254u) {
        ctx->pc = 0x16F254u;
            // 0x16f254: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F258u;
        goto label_16f258;
    }
    ctx->pc = 0x16F250u;
    SET_GPR_U32(ctx, 31, 0x16F258u);
    ctx->pc = 0x16F254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F250u;
            // 0x16f254: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164E18u;
    if (runtime->hasFunction(0x164E18u)) {
        auto targetFn = runtime->lookupFunction(0x164E18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F258u; }
        if (ctx->pc != 0x16F258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164E18_0x164e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F258u; }
        if (ctx->pc != 0x16F258u) { return; }
    }
    ctx->pc = 0x16F258u;
label_16f258:
    // 0x16f258: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x16f258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_16f25c:
    // 0x16f25c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_16f260:
    if (ctx->pc == 0x16F260u) {
        ctx->pc = 0x16F260u;
            // 0x16f260: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16F264u;
        goto label_16f264;
    }
    ctx->pc = 0x16F25Cu;
    {
        const bool branch_taken_0x16f25c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x16F260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F25Cu;
            // 0x16f260: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f25c) {
            ctx->pc = 0x16F268u;
            goto label_16f268;
        }
    }
    ctx->pc = 0x16F264u;
label_16f264:
    // 0x16f264: 0xa2620003  sb          $v0, 0x3($s3)
    ctx->pc = 0x16f264u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 2));
label_16f268:
    // 0x16f268: 0xc059386  jal         func_164E18
label_16f26c:
    if (ctx->pc == 0x16F26Cu) {
        ctx->pc = 0x16F26Cu;
            // 0x16f26c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F270u;
        goto label_16f270;
    }
    ctx->pc = 0x16F268u;
    SET_GPR_U32(ctx, 31, 0x16F270u);
    ctx->pc = 0x16F26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F268u;
            // 0x16f26c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164E18u;
    if (runtime->hasFunction(0x164E18u)) {
        auto targetFn = runtime->lookupFunction(0x164E18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F270u; }
        if (ctx->pc != 0x16F270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164E18_0x164e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F270u; }
        if (ctx->pc != 0x16F270u) { return; }
    }
    ctx->pc = 0x16F270u;
label_16f270:
    // 0x16f270: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16f270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16f274:
    // 0x16f274: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_16f278:
    if (ctx->pc == 0x16F278u) {
        ctx->pc = 0x16F278u;
            // 0x16f278: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x16F27Cu;
        goto label_16f27c;
    }
    ctx->pc = 0x16F274u;
    {
        const bool branch_taken_0x16f274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x16F278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F274u;
            // 0x16f278: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f274) {
            ctx->pc = 0x16F294u;
            goto label_16f294;
        }
    }
    ctx->pc = 0x16F27Cu;
label_16f27c:
    // 0x16f27c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x16f27cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_16f280:
    // 0x16f280: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x16f280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16f284:
    // 0x16f284: 0x26640058  addiu       $a0, $s3, 0x58
    ctx->pc = 0x16f284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
label_16f288:
    // 0x16f288: 0x28c20041  slti        $v0, $a2, 0x41
    ctx->pc = 0x16f288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)65) ? 1 : 0);
label_16f28c:
    // 0x16f28c: 0xc04a508  jal         func_129420
label_16f290:
    if (ctx->pc == 0x16F290u) {
        ctx->pc = 0x16F290u;
            // 0x16f290: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->pc = 0x16F294u;
        goto label_16f294;
    }
    ctx->pc = 0x16F28Cu;
    SET_GPR_U32(ctx, 31, 0x16F294u);
    ctx->pc = 0x16F290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F28Cu;
            // 0x16f290: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F294u; }
        if (ctx->pc != 0x16F294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F294u; }
        if (ctx->pc != 0x16F294u) { return; }
    }
    ctx->pc = 0x16F294u;
label_16f294:
    // 0x16f294: 0xc059386  jal         func_164E18
label_16f298:
    if (ctx->pc == 0x16F298u) {
        ctx->pc = 0x16F298u;
            // 0x16f298: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F29Cu;
        goto label_16f29c;
    }
    ctx->pc = 0x16F294u;
    SET_GPR_U32(ctx, 31, 0x16F29Cu);
    ctx->pc = 0x16F298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F294u;
            // 0x16f298: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164E18u;
    if (runtime->hasFunction(0x164E18u)) {
        auto targetFn = runtime->lookupFunction(0x164E18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F29Cu; }
        if (ctx->pc != 0x16F29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164E18_0x164e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F29Cu; }
        if (ctx->pc != 0x16F29Cu) { return; }
    }
    ctx->pc = 0x16F29Cu;
label_16f29c:
    // 0x16f29c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16f29cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16f2a0:
    // 0x16f2a0: 0x2462fff6  addiu       $v0, $v1, -0xA
    ctx->pc = 0x16f2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
label_16f2a4:
    // 0x16f2a4: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x16f2a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_16f2a8:
    // 0x16f2a8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_16f2ac:
    if (ctx->pc == 0x16F2ACu) {
        ctx->pc = 0x16F2ACu;
            // 0x16f2ac: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x16F2B0u;
        goto label_16f2b0;
    }
    ctx->pc = 0x16F2A8u;
    {
        const bool branch_taken_0x16f2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f2a8) {
            ctx->pc = 0x16F2ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16F2A8u;
            // 0x16f2ac: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16F2C8u;
            goto label_16f2c8;
        }
    }
    ctx->pc = 0x16F2B0u;
label_16f2b0:
    // 0x16f2b0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x16f2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_16f2b4:
    // 0x16f2b4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_16f2b8:
    if (ctx->pc == 0x16F2B8u) {
        ctx->pc = 0x16F2B8u;
            // 0x16f2b8: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x16F2BCu;
        goto label_16f2bc;
    }
    ctx->pc = 0x16F2B4u;
    {
        const bool branch_taken_0x16f2b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16F2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F2B4u;
            // 0x16f2b8: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f2b4) {
            ctx->pc = 0x16F2C4u;
            goto label_16f2c4;
        }
    }
    ctx->pc = 0x16F2BCu;
label_16f2bc:
    // 0x16f2bc: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_16f2c0:
    if (ctx->pc == 0x16F2C0u) {
        ctx->pc = 0x16F2C0u;
            // 0x16f2c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F2C4u;
        goto label_16f2c4;
    }
    ctx->pc = 0x16F2BCu;
    {
        const bool branch_taken_0x16f2bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16F2C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F2BCu;
            // 0x16f2c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f2bc) {
            ctx->pc = 0x16F2E8u;
            goto label_16f2e8;
        }
    }
    ctx->pc = 0x16F2C4u;
label_16f2c4:
    // 0x16f2c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16f2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16f2c8:
    // 0x16f2c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16f2cc:
    // 0x16f2cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16f2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f2d0:
    // 0x16f2d0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x16f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_16f2d4:
    // 0x16f2d4: 0x40f809  jalr        $v0
label_16f2d8:
    if (ctx->pc == 0x16F2D8u) {
        ctx->pc = 0x16F2D8u;
            // 0x16f2d8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F2DCu;
        goto label_16f2dc;
    }
    ctx->pc = 0x16F2D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16F2DCu);
        ctx->pc = 0x16F2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F2D4u;
            // 0x16f2d8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F2DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F2DCu; }
            if (ctx->pc != 0x16F2DCu) { return; }
        }
        }
    }
    ctx->pc = 0x16F2DCu;
label_16f2dc:
    // 0x16f2dc: 0x10000013  b           . + 4 + (0x13 << 2)
label_16f2e0:
    if (ctx->pc == 0x16F2E0u) {
        ctx->pc = 0x16F2E0u;
            // 0x16f2e0: 0x8e4200e8  lw          $v0, 0xE8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
        ctx->pc = 0x16F2E4u;
        goto label_16f2e4;
    }
    ctx->pc = 0x16F2DCu;
    {
        const bool branch_taken_0x16f2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F2DCu;
            // 0x16f2e0: 0x8e4200e8  lw          $v0, 0xE8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f2dc) {
            ctx->pc = 0x16F32Cu;
            goto label_16f32c;
        }
    }
    ctx->pc = 0x16F2E4u;
label_16f2e4:
    // 0x16f2e4: 0x0  nop
    ctx->pc = 0x16f2e4u;
    // NOP
label_16f2e8:
    // 0x16f2e8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x16f2e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16f2ec:
    // 0x16f2ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16f2ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16f2f0:
    // 0x16f2f0: 0xc061c20  jal         func_187080
label_16f2f4:
    if (ctx->pc == 0x16F2F4u) {
        ctx->pc = 0x16F2F4u;
            // 0x16f2f4: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F2F8u;
        goto label_16f2f8;
    }
    ctx->pc = 0x16F2F0u;
    SET_GPR_U32(ctx, 31, 0x16F2F8u);
    ctx->pc = 0x16F2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F2F0u;
            // 0x16f2f4: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187080u;
    if (runtime->hasFunction(0x187080u)) {
        auto targetFn = runtime->lookupFunction(0x187080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F2F8u; }
        if (ctx->pc != 0x16F2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187080_0x187080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F2F8u; }
        if (ctx->pc != 0x16F2F8u) { return; }
    }
    ctx->pc = 0x16F2F8u;
label_16f2f8:
    // 0x16f2f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16f2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16f2fc:
    // 0x16f2fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16f300:
    // 0x16f300: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16f300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f304:
    // 0x16f304: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x16f304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_16f308:
    // 0x16f308: 0x40f809  jalr        $v0
label_16f30c:
    if (ctx->pc == 0x16F30Cu) {
        ctx->pc = 0x16F30Cu;
            // 0x16f30c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F310u;
        goto label_16f310;
    }
    ctx->pc = 0x16F308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16F310u);
        ctx->pc = 0x16F30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F308u;
            // 0x16f30c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F310u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F310u; }
            if (ctx->pc != 0x16F310u) { return; }
        }
        }
    }
    ctx->pc = 0x16F310u;
label_16f310:
    // 0x16f310: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16f310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16f314:
    // 0x16f314: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16f318:
    // 0x16f318: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x16f318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16f31c:
    // 0x16f31c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x16f31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_16f320:
    // 0x16f320: 0x40f809  jalr        $v0
label_16f324:
    if (ctx->pc == 0x16F324u) {
        ctx->pc = 0x16F324u;
            // 0x16f324: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16F328u;
        goto label_16f328;
    }
    ctx->pc = 0x16F320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16F328u);
        ctx->pc = 0x16F324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F320u;
            // 0x16f324: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F328u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F328u; }
            if (ctx->pc != 0x16F328u) { return; }
        }
        }
    }
    ctx->pc = 0x16F328u;
label_16f328:
    // 0x16f328: 0x8e4200e8  lw          $v0, 0xE8($s2)
    ctx->pc = 0x16f328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
label_16f32c:
    // 0x16f32c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_16f330:
    if (ctx->pc == 0x16F330u) {
        ctx->pc = 0x16F330u;
            // 0x16f330: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->pc = 0x16F334u;
        goto label_16f334;
    }
    ctx->pc = 0x16F32Cu;
    {
        const bool branch_taken_0x16f32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F32Cu;
            // 0x16f330: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f32c) {
            ctx->pc = 0x16F348u;
            goto label_16f348;
        }
    }
    ctx->pc = 0x16F334u;
label_16f334:
    // 0x16f334: 0x8c422394  lw          $v0, 0x2394($v0)
    ctx->pc = 0x16f334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9108)));
label_16f338:
    // 0x16f338: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_16f33c:
    if (ctx->pc == 0x16F33Cu) {
        ctx->pc = 0x16F33Cu;
            // 0x16f33c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F340u;
        goto label_16f340;
    }
    ctx->pc = 0x16F338u;
    {
        const bool branch_taken_0x16f338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F338u;
            // 0x16f33c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f338) {
            ctx->pc = 0x16F348u;
            goto label_16f348;
        }
    }
    ctx->pc = 0x16F340u;
label_16f340:
    // 0x16f340: 0x40f809  jalr        $v0
label_16f344:
    if (ctx->pc == 0x16F344u) {
        ctx->pc = 0x16F344u;
            // 0x16f344: 0x8c850014  lw          $a1, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->pc = 0x16F348u;
        goto label_16f348;
    }
    ctx->pc = 0x16F340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16F348u);
        ctx->pc = 0x16F344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F340u;
            // 0x16f344: 0x8c850014  lw          $a1, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F348u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F348u; }
            if (ctx->pc != 0x16F348u) { return; }
        }
        }
    }
    ctx->pc = 0x16F348u;
label_16f348:
    // 0x16f348: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16f348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16f34c:
    // 0x16f34c: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x16f34cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
label_16f350:
    // 0x16f350: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x16f350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16f354:
    // 0x16f354: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x16f354u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_16f358:
    // 0x16f358: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x16f358u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16f35c:
    // 0x16f35c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x16f35cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_16f360:
    // 0x16f360: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x16f360u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16f364:
    // 0x16f364: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x16f364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_16f368:
    // 0x16f368: 0x3e00008  jr          $ra
label_16f36c:
    if (ctx->pc == 0x16F36Cu) {
        ctx->pc = 0x16F36Cu;
            // 0x16f36c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x16F370u;
        goto label_16f370;
    }
    ctx->pc = 0x16F368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F368u;
            // 0x16f36c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16F370u;
label_16f370:
    // 0x16f370: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16f370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_16f374:
    // 0x16f374: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16f374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16f378:
    // 0x16f378: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16f378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_16f37c:
    // 0x16f37c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16f37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_16f380:
    // 0x16f380: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16f380u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16f384:
    // 0x16f384: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16f384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_16f388:
    // 0x16f388: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16f388u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f38c:
    // 0x16f38c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x16f38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_16f390:
    // 0x16f390: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x16f390u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16f394:
    // 0x16f394: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x16f394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_16f398:
    // 0x16f398: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x16f398u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16f39c:
    // 0x16f39c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x16f39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_16f3a0:
    // 0x16f3a0: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x16f3a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16f3a4:
    // 0x16f3a4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16f3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_16f3a8:
    // 0x16f3a8: 0x2651001c  addiu       $s1, $s2, 0x1C
    ctx->pc = 0x16f3a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_16f3ac:
    // 0x16f3ac: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16f3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_16f3b0:
    // 0x16f3b0: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x16f3b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_16f3b4:
    // 0x16f3b4: 0x10000008  b           . + 4 + (0x8 << 2)
label_16f3b8:
    if (ctx->pc == 0x16F3B8u) {
        ctx->pc = 0x16F3B8u;
            // 0x16f3b8: 0x8e54000c  lw          $s4, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->pc = 0x16F3BCu;
        goto label_16f3bc;
    }
    ctx->pc = 0x16F3B4u;
    {
        const bool branch_taken_0x16f3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F3B4u;
            // 0x16f3b8: 0x8e54000c  lw          $s4, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f3b4) {
            ctx->pc = 0x16F3D8u;
            goto label_16f3d8;
        }
    }
    ctx->pc = 0x16F3BCu;
label_16f3bc:
    // 0x16f3bc: 0x0  nop
    ctx->pc = 0x16f3bcu;
    // NOP
label_16f3c0:
    // 0x16f3c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16f3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16f3c4:
    // 0x16f3c4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x16f3c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_16f3c8:
    // 0x16f3c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16f3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16f3cc:
    // 0x16f3cc: 0x8c680018  lw          $t0, 0x18($v1)
    ctx->pc = 0x16f3ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_16f3d0:
    // 0x16f3d0: 0x100f809  jalr        $t0
label_16f3d4:
    if (ctx->pc == 0x16F3D4u) {
        ctx->pc = 0x16F3D4u;
            // 0x16f3d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F3D8u;
        goto label_16f3d8;
    }
    ctx->pc = 0x16F3D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x16F3D8u);
        ctx->pc = 0x16F3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F3D0u;
            // 0x16f3d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F3D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F3D8u; }
            if (ctx->pc != 0x16F3D8u) { return; }
        }
        }
    }
    ctx->pc = 0x16F3D8u;
label_16f3d8:
    // 0x16f3d8: 0xc05938a  jal         func_164E28
label_16f3dc:
    if (ctx->pc == 0x16F3DCu) {
        ctx->pc = 0x16F3DCu;
            // 0x16f3dc: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x16F3E0u;
        goto label_16f3e0;
    }
    ctx->pc = 0x16F3D8u;
    SET_GPR_U32(ctx, 31, 0x16F3E0u);
    ctx->pc = 0x16F3DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F3D8u;
            // 0x16f3dc: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164E28u;
    if (runtime->hasFunction(0x164E28u)) {
        auto targetFn = runtime->lookupFunction(0x164E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F3E0u; }
        if (ctx->pc != 0x16F3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164E28_0x164e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F3E0u; }
        if (ctx->pc != 0x16F3E0u) { return; }
    }
    ctx->pc = 0x16F3E0u;
label_16f3e0:
    // 0x16f3e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16f3e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f3e4:
    // 0x16f3e4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x16f3e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_16f3e8:
    // 0x16f3e8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x16f3e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_16f3ec:
    // 0x16f3ec: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x16f3ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16f3f0:
    // 0x16f3f0: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x16f3f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_16f3f4:
    // 0x16f3f4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_16f3f8:
    if (ctx->pc == 0x16F3F8u) {
        ctx->pc = 0x16F3F8u;
            // 0x16f3f8: 0x24064000  addiu       $a2, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->pc = 0x16F3FCu;
        goto label_16f3fc;
    }
    ctx->pc = 0x16F3F4u;
    {
        const bool branch_taken_0x16f3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F3F4u;
            // 0x16f3f8: 0x24064000  addiu       $a2, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f3f4) {
            ctx->pc = 0x16F3C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16f3c0;
        }
    }
    ctx->pc = 0x16F3FCu;
label_16f3fc:
    // 0x16f3fc: 0xc06188e  jal         func_186238
label_16f400:
    if (ctx->pc == 0x16F400u) {
        ctx->pc = 0x16F400u;
            // 0x16f400: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F404u;
        goto label_16f404;
    }
    ctx->pc = 0x16F3FCu;
    SET_GPR_U32(ctx, 31, 0x16F404u);
    ctx->pc = 0x16F400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F3FCu;
            // 0x16f400: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186238u;
    if (runtime->hasFunction(0x186238u)) {
        auto targetFn = runtime->lookupFunction(0x186238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F404u; }
        if (ctx->pc != 0x16F404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186238_0x186238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F404u; }
        if (ctx->pc != 0x16F404u) { return; }
    }
    ctx->pc = 0x16F404u;
label_16f404:
    // 0x16f404: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x16f404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_16f408:
    // 0x16f408: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x16f408u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16f40c:
    // 0x16f40c: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x16f40cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_16f410:
    // 0x16f410: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16f410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16f414:
    // 0x16f414: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x16f414u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_16f418:
    // 0x16f418: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x16f418u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_16f41c:
    // 0x16f41c: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x16f41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_16f420:
    // 0x16f420: 0x8e440038  lw          $a0, 0x38($s2)
    ctx->pc = 0x16f420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_16f424:
    // 0x16f424: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x16f424u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_16f428:
    // 0x16f428: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16f428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16f42c:
    // 0x16f42c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x16f42cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_16f430:
    // 0x16f430: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x16f430u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_16f434:
    // 0x16f434: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x16f434u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_16f438:
    // 0x16f438: 0xaee40000  sw          $a0, 0x0($s7)
    ctx->pc = 0x16f438u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 4));
label_16f43c:
    // 0x16f43c: 0x8e43003c  lw          $v1, 0x3C($s2)
    ctx->pc = 0x16f43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_16f440:
    // 0x16f440: 0x4620005  bltzl       $v1, . + 4 + (0x5 << 2)
label_16f444:
    if (ctx->pc == 0x16F444u) {
        ctx->pc = 0x16F444u;
            // 0x16f444: 0x3c021fff  lui         $v0, 0x1FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8191 << 16));
        ctx->pc = 0x16F448u;
        goto label_16f448;
    }
    ctx->pc = 0x16F440u;
    {
        const bool branch_taken_0x16f440 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x16f440) {
            ctx->pc = 0x16F444u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16F440u;
            // 0x16f444: 0x3c021fff  lui         $v0, 0x1FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8191 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16F458u;
            goto label_16f458;
        }
    }
    ctx->pc = 0x16F448u;
label_16f448:
    // 0x16f448: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x16f448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_16f44c:
    // 0x16f44c: 0x10000003  b           . + 4 + (0x3 << 2)
label_16f450:
    if (ctx->pc == 0x16F450u) {
        ctx->pc = 0x16F450u;
            // 0x16f450: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x16F454u;
        goto label_16f454;
    }
    ctx->pc = 0x16F44Cu;
    {
        const bool branch_taken_0x16f44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F44Cu;
            // 0x16f450: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f44c) {
            ctx->pc = 0x16F45Cu;
            goto label_16f45c;
        }
    }
    ctx->pc = 0x16F454u;
label_16f454:
    // 0x16f454: 0x0  nop
    ctx->pc = 0x16f454u;
    // NOP
label_16f458:
    // 0x16f458: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x16f458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_16f45c:
    // 0x16f45c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x16f45cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_16f460:
    // 0x16f460: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x16f460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_16f464:
    // 0x16f464: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16f464u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16f468:
    // 0x16f468: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16f468u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16f46c:
    // 0x16f46c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16f46cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16f470:
    // 0x16f470: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16f470u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_16f474:
    // 0x16f474: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16f474u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16f478:
    // 0x16f478: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x16f478u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_16f47c:
    // 0x16f47c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x16f47cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16f480:
    // 0x16f480: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x16f480u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_16f484:
    // 0x16f484: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16f484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16f488:
    // 0x16f488: 0x8059384  j           func_164E10
label_16f48c:
    if (ctx->pc == 0x16F48Cu) {
        ctx->pc = 0x16F48Cu;
            // 0x16f48c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x16F490u;
        goto label_fallthrough_0x16f488;
    }
    ctx->pc = 0x16F488u;
    ctx->pc = 0x16F48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F488u;
            // 0x16f48c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164E10u;
    {
        auto targetFn = runtime->lookupFunction(0x164E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
label_fallthrough_0x16f488:
    ctx->pc = 0x16F490u;
}
