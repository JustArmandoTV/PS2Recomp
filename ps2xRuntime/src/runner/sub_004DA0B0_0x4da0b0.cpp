#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004DA0B0
// Address: 0x4da0b0 - 0x4da5a0
void sub_004DA0B0_0x4da0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DA0B0_0x4da0b0");
#endif

    switch (ctx->pc) {
        case 0x4da0b0u: goto label_4da0b0;
        case 0x4da0b4u: goto label_4da0b4;
        case 0x4da0b8u: goto label_4da0b8;
        case 0x4da0bcu: goto label_4da0bc;
        case 0x4da0c0u: goto label_4da0c0;
        case 0x4da0c4u: goto label_4da0c4;
        case 0x4da0c8u: goto label_4da0c8;
        case 0x4da0ccu: goto label_4da0cc;
        case 0x4da0d0u: goto label_4da0d0;
        case 0x4da0d4u: goto label_4da0d4;
        case 0x4da0d8u: goto label_4da0d8;
        case 0x4da0dcu: goto label_4da0dc;
        case 0x4da0e0u: goto label_4da0e0;
        case 0x4da0e4u: goto label_4da0e4;
        case 0x4da0e8u: goto label_4da0e8;
        case 0x4da0ecu: goto label_4da0ec;
        case 0x4da0f0u: goto label_4da0f0;
        case 0x4da0f4u: goto label_4da0f4;
        case 0x4da0f8u: goto label_4da0f8;
        case 0x4da0fcu: goto label_4da0fc;
        case 0x4da100u: goto label_4da100;
        case 0x4da104u: goto label_4da104;
        case 0x4da108u: goto label_4da108;
        case 0x4da10cu: goto label_4da10c;
        case 0x4da110u: goto label_4da110;
        case 0x4da114u: goto label_4da114;
        case 0x4da118u: goto label_4da118;
        case 0x4da11cu: goto label_4da11c;
        case 0x4da120u: goto label_4da120;
        case 0x4da124u: goto label_4da124;
        case 0x4da128u: goto label_4da128;
        case 0x4da12cu: goto label_4da12c;
        case 0x4da130u: goto label_4da130;
        case 0x4da134u: goto label_4da134;
        case 0x4da138u: goto label_4da138;
        case 0x4da13cu: goto label_4da13c;
        case 0x4da140u: goto label_4da140;
        case 0x4da144u: goto label_4da144;
        case 0x4da148u: goto label_4da148;
        case 0x4da14cu: goto label_4da14c;
        case 0x4da150u: goto label_4da150;
        case 0x4da154u: goto label_4da154;
        case 0x4da158u: goto label_4da158;
        case 0x4da15cu: goto label_4da15c;
        case 0x4da160u: goto label_4da160;
        case 0x4da164u: goto label_4da164;
        case 0x4da168u: goto label_4da168;
        case 0x4da16cu: goto label_4da16c;
        case 0x4da170u: goto label_4da170;
        case 0x4da174u: goto label_4da174;
        case 0x4da178u: goto label_4da178;
        case 0x4da17cu: goto label_4da17c;
        case 0x4da180u: goto label_4da180;
        case 0x4da184u: goto label_4da184;
        case 0x4da188u: goto label_4da188;
        case 0x4da18cu: goto label_4da18c;
        case 0x4da190u: goto label_4da190;
        case 0x4da194u: goto label_4da194;
        case 0x4da198u: goto label_4da198;
        case 0x4da19cu: goto label_4da19c;
        case 0x4da1a0u: goto label_4da1a0;
        case 0x4da1a4u: goto label_4da1a4;
        case 0x4da1a8u: goto label_4da1a8;
        case 0x4da1acu: goto label_4da1ac;
        case 0x4da1b0u: goto label_4da1b0;
        case 0x4da1b4u: goto label_4da1b4;
        case 0x4da1b8u: goto label_4da1b8;
        case 0x4da1bcu: goto label_4da1bc;
        case 0x4da1c0u: goto label_4da1c0;
        case 0x4da1c4u: goto label_4da1c4;
        case 0x4da1c8u: goto label_4da1c8;
        case 0x4da1ccu: goto label_4da1cc;
        case 0x4da1d0u: goto label_4da1d0;
        case 0x4da1d4u: goto label_4da1d4;
        case 0x4da1d8u: goto label_4da1d8;
        case 0x4da1dcu: goto label_4da1dc;
        case 0x4da1e0u: goto label_4da1e0;
        case 0x4da1e4u: goto label_4da1e4;
        case 0x4da1e8u: goto label_4da1e8;
        case 0x4da1ecu: goto label_4da1ec;
        case 0x4da1f0u: goto label_4da1f0;
        case 0x4da1f4u: goto label_4da1f4;
        case 0x4da1f8u: goto label_4da1f8;
        case 0x4da1fcu: goto label_4da1fc;
        case 0x4da200u: goto label_4da200;
        case 0x4da204u: goto label_4da204;
        case 0x4da208u: goto label_4da208;
        case 0x4da20cu: goto label_4da20c;
        case 0x4da210u: goto label_4da210;
        case 0x4da214u: goto label_4da214;
        case 0x4da218u: goto label_4da218;
        case 0x4da21cu: goto label_4da21c;
        case 0x4da220u: goto label_4da220;
        case 0x4da224u: goto label_4da224;
        case 0x4da228u: goto label_4da228;
        case 0x4da22cu: goto label_4da22c;
        case 0x4da230u: goto label_4da230;
        case 0x4da234u: goto label_4da234;
        case 0x4da238u: goto label_4da238;
        case 0x4da23cu: goto label_4da23c;
        case 0x4da240u: goto label_4da240;
        case 0x4da244u: goto label_4da244;
        case 0x4da248u: goto label_4da248;
        case 0x4da24cu: goto label_4da24c;
        case 0x4da250u: goto label_4da250;
        case 0x4da254u: goto label_4da254;
        case 0x4da258u: goto label_4da258;
        case 0x4da25cu: goto label_4da25c;
        case 0x4da260u: goto label_4da260;
        case 0x4da264u: goto label_4da264;
        case 0x4da268u: goto label_4da268;
        case 0x4da26cu: goto label_4da26c;
        case 0x4da270u: goto label_4da270;
        case 0x4da274u: goto label_4da274;
        case 0x4da278u: goto label_4da278;
        case 0x4da27cu: goto label_4da27c;
        case 0x4da280u: goto label_4da280;
        case 0x4da284u: goto label_4da284;
        case 0x4da288u: goto label_4da288;
        case 0x4da28cu: goto label_4da28c;
        case 0x4da290u: goto label_4da290;
        case 0x4da294u: goto label_4da294;
        case 0x4da298u: goto label_4da298;
        case 0x4da29cu: goto label_4da29c;
        case 0x4da2a0u: goto label_4da2a0;
        case 0x4da2a4u: goto label_4da2a4;
        case 0x4da2a8u: goto label_4da2a8;
        case 0x4da2acu: goto label_4da2ac;
        case 0x4da2b0u: goto label_4da2b0;
        case 0x4da2b4u: goto label_4da2b4;
        case 0x4da2b8u: goto label_4da2b8;
        case 0x4da2bcu: goto label_4da2bc;
        case 0x4da2c0u: goto label_4da2c0;
        case 0x4da2c4u: goto label_4da2c4;
        case 0x4da2c8u: goto label_4da2c8;
        case 0x4da2ccu: goto label_4da2cc;
        case 0x4da2d0u: goto label_4da2d0;
        case 0x4da2d4u: goto label_4da2d4;
        case 0x4da2d8u: goto label_4da2d8;
        case 0x4da2dcu: goto label_4da2dc;
        case 0x4da2e0u: goto label_4da2e0;
        case 0x4da2e4u: goto label_4da2e4;
        case 0x4da2e8u: goto label_4da2e8;
        case 0x4da2ecu: goto label_4da2ec;
        case 0x4da2f0u: goto label_4da2f0;
        case 0x4da2f4u: goto label_4da2f4;
        case 0x4da2f8u: goto label_4da2f8;
        case 0x4da2fcu: goto label_4da2fc;
        case 0x4da300u: goto label_4da300;
        case 0x4da304u: goto label_4da304;
        case 0x4da308u: goto label_4da308;
        case 0x4da30cu: goto label_4da30c;
        case 0x4da310u: goto label_4da310;
        case 0x4da314u: goto label_4da314;
        case 0x4da318u: goto label_4da318;
        case 0x4da31cu: goto label_4da31c;
        case 0x4da320u: goto label_4da320;
        case 0x4da324u: goto label_4da324;
        case 0x4da328u: goto label_4da328;
        case 0x4da32cu: goto label_4da32c;
        case 0x4da330u: goto label_4da330;
        case 0x4da334u: goto label_4da334;
        case 0x4da338u: goto label_4da338;
        case 0x4da33cu: goto label_4da33c;
        case 0x4da340u: goto label_4da340;
        case 0x4da344u: goto label_4da344;
        case 0x4da348u: goto label_4da348;
        case 0x4da34cu: goto label_4da34c;
        case 0x4da350u: goto label_4da350;
        case 0x4da354u: goto label_4da354;
        case 0x4da358u: goto label_4da358;
        case 0x4da35cu: goto label_4da35c;
        case 0x4da360u: goto label_4da360;
        case 0x4da364u: goto label_4da364;
        case 0x4da368u: goto label_4da368;
        case 0x4da36cu: goto label_4da36c;
        case 0x4da370u: goto label_4da370;
        case 0x4da374u: goto label_4da374;
        case 0x4da378u: goto label_4da378;
        case 0x4da37cu: goto label_4da37c;
        case 0x4da380u: goto label_4da380;
        case 0x4da384u: goto label_4da384;
        case 0x4da388u: goto label_4da388;
        case 0x4da38cu: goto label_4da38c;
        case 0x4da390u: goto label_4da390;
        case 0x4da394u: goto label_4da394;
        case 0x4da398u: goto label_4da398;
        case 0x4da39cu: goto label_4da39c;
        case 0x4da3a0u: goto label_4da3a0;
        case 0x4da3a4u: goto label_4da3a4;
        case 0x4da3a8u: goto label_4da3a8;
        case 0x4da3acu: goto label_4da3ac;
        case 0x4da3b0u: goto label_4da3b0;
        case 0x4da3b4u: goto label_4da3b4;
        case 0x4da3b8u: goto label_4da3b8;
        case 0x4da3bcu: goto label_4da3bc;
        case 0x4da3c0u: goto label_4da3c0;
        case 0x4da3c4u: goto label_4da3c4;
        case 0x4da3c8u: goto label_4da3c8;
        case 0x4da3ccu: goto label_4da3cc;
        case 0x4da3d0u: goto label_4da3d0;
        case 0x4da3d4u: goto label_4da3d4;
        case 0x4da3d8u: goto label_4da3d8;
        case 0x4da3dcu: goto label_4da3dc;
        case 0x4da3e0u: goto label_4da3e0;
        case 0x4da3e4u: goto label_4da3e4;
        case 0x4da3e8u: goto label_4da3e8;
        case 0x4da3ecu: goto label_4da3ec;
        case 0x4da3f0u: goto label_4da3f0;
        case 0x4da3f4u: goto label_4da3f4;
        case 0x4da3f8u: goto label_4da3f8;
        case 0x4da3fcu: goto label_4da3fc;
        case 0x4da400u: goto label_4da400;
        case 0x4da404u: goto label_4da404;
        case 0x4da408u: goto label_4da408;
        case 0x4da40cu: goto label_4da40c;
        case 0x4da410u: goto label_4da410;
        case 0x4da414u: goto label_4da414;
        case 0x4da418u: goto label_4da418;
        case 0x4da41cu: goto label_4da41c;
        case 0x4da420u: goto label_4da420;
        case 0x4da424u: goto label_4da424;
        case 0x4da428u: goto label_4da428;
        case 0x4da42cu: goto label_4da42c;
        case 0x4da430u: goto label_4da430;
        case 0x4da434u: goto label_4da434;
        case 0x4da438u: goto label_4da438;
        case 0x4da43cu: goto label_4da43c;
        case 0x4da440u: goto label_4da440;
        case 0x4da444u: goto label_4da444;
        case 0x4da448u: goto label_4da448;
        case 0x4da44cu: goto label_4da44c;
        case 0x4da450u: goto label_4da450;
        case 0x4da454u: goto label_4da454;
        case 0x4da458u: goto label_4da458;
        case 0x4da45cu: goto label_4da45c;
        case 0x4da460u: goto label_4da460;
        case 0x4da464u: goto label_4da464;
        case 0x4da468u: goto label_4da468;
        case 0x4da46cu: goto label_4da46c;
        case 0x4da470u: goto label_4da470;
        case 0x4da474u: goto label_4da474;
        case 0x4da478u: goto label_4da478;
        case 0x4da47cu: goto label_4da47c;
        case 0x4da480u: goto label_4da480;
        case 0x4da484u: goto label_4da484;
        case 0x4da488u: goto label_4da488;
        case 0x4da48cu: goto label_4da48c;
        case 0x4da490u: goto label_4da490;
        case 0x4da494u: goto label_4da494;
        case 0x4da498u: goto label_4da498;
        case 0x4da49cu: goto label_4da49c;
        case 0x4da4a0u: goto label_4da4a0;
        case 0x4da4a4u: goto label_4da4a4;
        case 0x4da4a8u: goto label_4da4a8;
        case 0x4da4acu: goto label_4da4ac;
        case 0x4da4b0u: goto label_4da4b0;
        case 0x4da4b4u: goto label_4da4b4;
        case 0x4da4b8u: goto label_4da4b8;
        case 0x4da4bcu: goto label_4da4bc;
        case 0x4da4c0u: goto label_4da4c0;
        case 0x4da4c4u: goto label_4da4c4;
        case 0x4da4c8u: goto label_4da4c8;
        case 0x4da4ccu: goto label_4da4cc;
        case 0x4da4d0u: goto label_4da4d0;
        case 0x4da4d4u: goto label_4da4d4;
        case 0x4da4d8u: goto label_4da4d8;
        case 0x4da4dcu: goto label_4da4dc;
        case 0x4da4e0u: goto label_4da4e0;
        case 0x4da4e4u: goto label_4da4e4;
        case 0x4da4e8u: goto label_4da4e8;
        case 0x4da4ecu: goto label_4da4ec;
        case 0x4da4f0u: goto label_4da4f0;
        case 0x4da4f4u: goto label_4da4f4;
        case 0x4da4f8u: goto label_4da4f8;
        case 0x4da4fcu: goto label_4da4fc;
        case 0x4da500u: goto label_4da500;
        case 0x4da504u: goto label_4da504;
        case 0x4da508u: goto label_4da508;
        case 0x4da50cu: goto label_4da50c;
        case 0x4da510u: goto label_4da510;
        case 0x4da514u: goto label_4da514;
        case 0x4da518u: goto label_4da518;
        case 0x4da51cu: goto label_4da51c;
        case 0x4da520u: goto label_4da520;
        case 0x4da524u: goto label_4da524;
        case 0x4da528u: goto label_4da528;
        case 0x4da52cu: goto label_4da52c;
        case 0x4da530u: goto label_4da530;
        case 0x4da534u: goto label_4da534;
        case 0x4da538u: goto label_4da538;
        case 0x4da53cu: goto label_4da53c;
        case 0x4da540u: goto label_4da540;
        case 0x4da544u: goto label_4da544;
        case 0x4da548u: goto label_4da548;
        case 0x4da54cu: goto label_4da54c;
        case 0x4da550u: goto label_4da550;
        case 0x4da554u: goto label_4da554;
        case 0x4da558u: goto label_4da558;
        case 0x4da55cu: goto label_4da55c;
        case 0x4da560u: goto label_4da560;
        case 0x4da564u: goto label_4da564;
        case 0x4da568u: goto label_4da568;
        case 0x4da56cu: goto label_4da56c;
        case 0x4da570u: goto label_4da570;
        case 0x4da574u: goto label_4da574;
        case 0x4da578u: goto label_4da578;
        case 0x4da57cu: goto label_4da57c;
        case 0x4da580u: goto label_4da580;
        case 0x4da584u: goto label_4da584;
        case 0x4da588u: goto label_4da588;
        case 0x4da58cu: goto label_4da58c;
        case 0x4da590u: goto label_4da590;
        case 0x4da594u: goto label_4da594;
        case 0x4da598u: goto label_4da598;
        case 0x4da59cu: goto label_4da59c;
        default: break;
    }

    ctx->pc = 0x4da0b0u;

label_4da0b0:
    // 0x4da0b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4da0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4da0b4:
    // 0x4da0b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4da0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4da0b8:
    // 0x4da0b8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4da0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4da0bc:
    // 0x4da0bc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4da0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4da0c0:
    // 0x4da0c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4da0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4da0c4:
    // 0x4da0c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4da0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4da0c8:
    // 0x4da0c8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4da0c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4da0cc:
    // 0x4da0cc: 0x8c8300e8  lw          $v1, 0xE8($a0)
    ctx->pc = 0x4da0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
label_4da0d0:
    // 0x4da0d0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_4da0d4:
    if (ctx->pc == 0x4DA0D4u) {
        ctx->pc = 0x4DA0D4u;
            // 0x4da0d4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DA0D8u;
        goto label_4da0d8;
    }
    ctx->pc = 0x4DA0D0u;
    {
        const bool branch_taken_0x4da0d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DA0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA0D0u;
            // 0x4da0d4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4da0d0) {
            ctx->pc = 0x4DA0F4u;
            goto label_4da0f4;
        }
    }
    ctx->pc = 0x4DA0D8u;
label_4da0d8:
    // 0x4da0d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4da0d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4da0dc:
    // 0x4da0dc: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x4da0dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_4da0e0:
    // 0x4da0e0: 0x320f809  jalr        $t9
label_4da0e4:
    if (ctx->pc == 0x4DA0E4u) {
        ctx->pc = 0x4DA0E8u;
        goto label_4da0e8;
    }
    ctx->pc = 0x4DA0E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DA0E8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DA0E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DA0E8u; }
            if (ctx->pc != 0x4DA0E8u) { return; }
        }
        }
    }
    ctx->pc = 0x4DA0E8u;
label_4da0e8:
    // 0x4da0e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4da0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4da0ec:
    // 0x4da0ec: 0x10000048  b           . + 4 + (0x48 << 2)
label_4da0f0:
    if (ctx->pc == 0x4DA0F0u) {
        ctx->pc = 0x4DA0F0u;
            // 0x4da0f0: 0xae6300e8  sw          $v1, 0xE8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 232), GPR_U32(ctx, 3));
        ctx->pc = 0x4DA0F4u;
        goto label_4da0f4;
    }
    ctx->pc = 0x4DA0ECu;
    {
        const bool branch_taken_0x4da0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DA0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA0ECu;
            // 0x4da0f0: 0xae6300e8  sw          $v1, 0xE8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4da0ec) {
            ctx->pc = 0x4DA210u;
            goto label_4da210;
        }
    }
    ctx->pc = 0x4DA0F4u;
label_4da0f4:
    // 0x4da0f4: 0xc66200ec  lwc1        $f2, 0xEC($s3)
    ctx->pc = 0x4da0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4da0f8:
    // 0x4da0f8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4da0f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4da0fc:
    // 0x4da0fc: 0x0  nop
    ctx->pc = 0x4da0fcu;
    // NOP
label_4da100:
    // 0x4da100: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x4da100u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4da104:
    // 0x4da104: 0x45030043  bc1tl       . + 4 + (0x43 << 2)
label_4da108:
    if (ctx->pc == 0x4DA108u) {
        ctx->pc = 0x4DA108u;
            // 0x4da108: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x4DA10Cu;
        goto label_4da10c;
    }
    ctx->pc = 0x4DA104u;
    {
        const bool branch_taken_0x4da104 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4da104) {
            ctx->pc = 0x4DA108u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA104u;
            // 0x4da108: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DA214u;
            goto label_4da214;
        }
    }
    ctx->pc = 0x4DA10Cu;
label_4da10c:
    // 0x4da10c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4da10cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4da110:
    // 0x4da110: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4da110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4da114:
    // 0x4da114: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x4da114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4da118:
    // 0x4da118: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x4da118u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_4da11c:
    // 0x4da11c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4da11cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4da120:
    // 0x4da120: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
label_4da124:
    if (ctx->pc == 0x4DA124u) {
        ctx->pc = 0x4DA124u;
            // 0x4da124: 0xe66000ec  swc1        $f0, 0xEC($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 236), bits); }
        ctx->pc = 0x4DA128u;
        goto label_4da128;
    }
    ctx->pc = 0x4DA120u;
    {
        const bool branch_taken_0x4da120 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4DA124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA120u;
            // 0x4da124: 0xe66000ec  swc1        $f0, 0xEC($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4da120) {
            ctx->pc = 0x4DA210u;
            goto label_4da210;
        }
    }
    ctx->pc = 0x4DA128u;
label_4da128:
    // 0x4da128: 0x8e6600f0  lw          $a2, 0xF0($s3)
    ctx->pc = 0x4da128u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
label_4da12c:
    // 0x4da12c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4da12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4da130:
    // 0x4da130: 0x50c30036  beql        $a2, $v1, . + 4 + (0x36 << 2)
label_4da134:
    if (ctx->pc == 0x4DA134u) {
        ctx->pc = 0x4DA134u;
            // 0x4da134: 0xe66100ec  swc1        $f1, 0xEC($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 236), bits); }
        ctx->pc = 0x4DA138u;
        goto label_4da138;
    }
    ctx->pc = 0x4DA130u;
    {
        const bool branch_taken_0x4da130 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x4da130) {
            ctx->pc = 0x4DA134u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA130u;
            // 0x4da134: 0xe66100ec  swc1        $f1, 0xEC($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 236), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DA20Cu;
            goto label_4da20c;
        }
    }
    ctx->pc = 0x4DA138u;
label_4da138:
    // 0x4da138: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4da138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4da13c:
    // 0x4da13c: 0x50c5000b  beql        $a2, $a1, . + 4 + (0xB << 2)
label_4da140:
    if (ctx->pc == 0x4DA140u) {
        ctx->pc = 0x4DA140u;
            // 0x4da140: 0x3c024334  lui         $v0, 0x4334 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
        ctx->pc = 0x4DA144u;
        goto label_4da144;
    }
    ctx->pc = 0x4DA13Cu;
    {
        const bool branch_taken_0x4da13c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x4da13c) {
            ctx->pc = 0x4DA140u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA13Cu;
            // 0x4da140: 0x3c024334  lui         $v0, 0x4334 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DA16Cu;
            goto label_4da16c;
        }
    }
    ctx->pc = 0x4DA144u;
label_4da144:
    // 0x4da144: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4da144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4da148:
    // 0x4da148: 0x50c30003  beql        $a2, $v1, . + 4 + (0x3 << 2)
label_4da14c:
    if (ctx->pc == 0x4DA14Cu) {
        ctx->pc = 0x4DA14Cu;
            // 0x4da14c: 0x3c024396  lui         $v0, 0x4396 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
        ctx->pc = 0x4DA150u;
        goto label_4da150;
    }
    ctx->pc = 0x4DA148u;
    {
        const bool branch_taken_0x4da148 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x4da148) {
            ctx->pc = 0x4DA14Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA148u;
            // 0x4da14c: 0x3c024396  lui         $v0, 0x4396 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DA158u;
            goto label_4da158;
        }
    }
    ctx->pc = 0x4DA150u;
label_4da150:
    // 0x4da150: 0x1000002f  b           . + 4 + (0x2F << 2)
label_4da154:
    if (ctx->pc == 0x4DA154u) {
        ctx->pc = 0x4DA158u;
        goto label_4da158;
    }
    ctx->pc = 0x4DA150u;
    {
        const bool branch_taken_0x4da150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4da150) {
            ctx->pc = 0x4DA210u;
            goto label_4da210;
        }
    }
    ctx->pc = 0x4DA158u;
label_4da158:
    // 0x4da158: 0xae6200ec  sw          $v0, 0xEC($s3)
    ctx->pc = 0x4da158u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 236), GPR_U32(ctx, 2));
label_4da15c:
    // 0x4da15c: 0xc1362cc  jal         func_4D8B30
label_4da160:
    if (ctx->pc == 0x4DA160u) {
        ctx->pc = 0x4DA160u;
            // 0x4da160: 0xae6500f0  sw          $a1, 0xF0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 240), GPR_U32(ctx, 5));
        ctx->pc = 0x4DA164u;
        goto label_4da164;
    }
    ctx->pc = 0x4DA15Cu;
    SET_GPR_U32(ctx, 31, 0x4DA164u);
    ctx->pc = 0x4DA160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA15Cu;
            // 0x4da160: 0xae6500f0  sw          $a1, 0xF0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 240), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D8B30u;
    if (runtime->hasFunction(0x4D8B30u)) {
        auto targetFn = runtime->lookupFunction(0x4D8B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA164u; }
        if (ctx->pc != 0x4DA164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D8B30_0x4d8b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA164u; }
        if (ctx->pc != 0x4DA164u) { return; }
    }
    ctx->pc = 0x4DA164u;
label_4da164:
    // 0x4da164: 0x1000002a  b           . + 4 + (0x2A << 2)
label_4da168:
    if (ctx->pc == 0x4DA168u) {
        ctx->pc = 0x4DA16Cu;
        goto label_4da16c;
    }
    ctx->pc = 0x4DA164u;
    {
        const bool branch_taken_0x4da164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4da164) {
            ctx->pc = 0x4DA210u;
            goto label_4da210;
        }
    }
    ctx->pc = 0x4DA16Cu;
label_4da16c:
    // 0x4da16c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4da16cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4da170:
    // 0x4da170: 0xae6200ec  sw          $v0, 0xEC($s3)
    ctx->pc = 0x4da170u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 236), GPR_U32(ctx, 2));
label_4da174:
    // 0x4da174: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4da174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4da178:
    // 0x4da178: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4da178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4da17c:
    // 0x4da17c: 0x8c42aa30  lw          $v0, -0x55D0($v0)
    ctx->pc = 0x4da17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945328)));
label_4da180:
    // 0x4da180: 0xc6740030  lwc1        $f20, 0x30($s3)
    ctx->pc = 0x4da180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4da184:
    // 0x4da184: 0x8c500070  lw          $s0, 0x70($v0)
    ctx->pc = 0x4da184u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_4da188:
    // 0x4da188: 0x8e6300f4  lw          $v1, 0xF4($s3)
    ctx->pc = 0x4da188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_4da18c:
    // 0x4da18c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4da18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4da190:
    // 0x4da190: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_4da194:
    if (ctx->pc == 0x4DA194u) {
        ctx->pc = 0x4DA198u;
        goto label_4da198;
    }
    ctx->pc = 0x4DA190u;
    {
        const bool branch_taken_0x4da190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4da190) {
            ctx->pc = 0x4DA1C0u;
            goto label_4da1c0;
        }
    }
    ctx->pc = 0x4DA198u;
label_4da198:
    // 0x4da198: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4da198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4da19c:
    // 0x4da19c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4da19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4da1a0:
    // 0x4da1a0: 0x8c42aa30  lw          $v0, -0x55D0($v0)
    ctx->pc = 0x4da1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945328)));
label_4da1a4:
    // 0x4da1a4: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x4da1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_4da1a8:
    // 0x4da1a8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4da1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4da1ac:
    // 0x4da1ac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4da1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4da1b0:
    // 0x4da1b0: 0xc134694  jal         func_4D1A50
label_4da1b4:
    if (ctx->pc == 0x4DA1B4u) {
        ctx->pc = 0x4DA1B4u;
            // 0x4da1b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4DA1B8u;
        goto label_4da1b8;
    }
    ctx->pc = 0x4DA1B0u;
    SET_GPR_U32(ctx, 31, 0x4DA1B8u);
    ctx->pc = 0x4DA1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA1B0u;
            // 0x4da1b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D1A50u;
    if (runtime->hasFunction(0x4D1A50u)) {
        auto targetFn = runtime->lookupFunction(0x4D1A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA1B8u; }
        if (ctx->pc != 0x4DA1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D1A50_0x4d1a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA1B8u; }
        if (ctx->pc != 0x4DA1B8u) { return; }
    }
    ctx->pc = 0x4DA1B8u;
label_4da1b8:
    // 0x4da1b8: 0x1000000b  b           . + 4 + (0xB << 2)
label_4da1bc:
    if (ctx->pc == 0x4DA1BCu) {
        ctx->pc = 0x4DA1C0u;
        goto label_4da1c0;
    }
    ctx->pc = 0x4DA1B8u;
    {
        const bool branch_taken_0x4da1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4da1b8) {
            ctx->pc = 0x4DA1E8u;
            goto label_4da1e8;
        }
    }
    ctx->pc = 0x4DA1C0u;
label_4da1c0:
    // 0x4da1c0: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4da1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4da1c4:
    // 0x4da1c4: 0x8c42aa30  lw          $v0, -0x55D0($v0)
    ctx->pc = 0x4da1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945328)));
label_4da1c8:
    // 0x4da1c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4da1c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_4da1cc:
    // 0x4da1cc: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x4da1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_4da1d0:
    // 0x4da1d0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4da1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4da1d4:
    // 0x4da1d4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4da1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4da1d8:
    // 0x4da1d8: 0xc134694  jal         func_4D1A50
label_4da1dc:
    if (ctx->pc == 0x4DA1DCu) {
        ctx->pc = 0x4DA1DCu;
            // 0x4da1dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DA1E0u;
        goto label_4da1e0;
    }
    ctx->pc = 0x4DA1D8u;
    SET_GPR_U32(ctx, 31, 0x4DA1E0u);
    ctx->pc = 0x4DA1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA1D8u;
            // 0x4da1dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D1A50u;
    if (runtime->hasFunction(0x4D1A50u)) {
        auto targetFn = runtime->lookupFunction(0x4D1A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA1E0u; }
        if (ctx->pc != 0x4DA1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D1A50_0x4d1a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA1E0u; }
        if (ctx->pc != 0x4DA1E0u) { return; }
    }
    ctx->pc = 0x4DA1E0u;
label_4da1e0:
    // 0x4da1e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_4da1e4:
    if (ctx->pc == 0x4DA1E4u) {
        ctx->pc = 0x4DA1E8u;
        goto label_4da1e8;
    }
    ctx->pc = 0x4DA1E0u;
    {
        const bool branch_taken_0x4da1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4da1e0) {
            ctx->pc = 0x4DA1F8u;
            goto label_4da1f8;
        }
    }
    ctx->pc = 0x4DA1E8u;
label_4da1e8:
    // 0x4da1e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4da1e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4da1ec:
    // 0x4da1ec: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4da1ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4da1f0:
    // 0x4da1f0: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_4da1f4:
    if (ctx->pc == 0x4DA1F4u) {
        ctx->pc = 0x4DA1F4u;
            // 0x4da1f4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4DA1F8u;
        goto label_4da1f8;
    }
    ctx->pc = 0x4DA1F0u;
    {
        const bool branch_taken_0x4da1f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DA1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA1F0u;
            // 0x4da1f4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4da1f0) {
            ctx->pc = 0x4DA188u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4da188;
        }
    }
    ctx->pc = 0x4DA1F8u;
label_4da1f8:
    // 0x4da1f8: 0xc1361e4  jal         func_4D8790
label_4da1fc:
    if (ctx->pc == 0x4DA1FCu) {
        ctx->pc = 0x4DA1FCu;
            // 0x4da1fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DA200u;
        goto label_4da200;
    }
    ctx->pc = 0x4DA1F8u;
    SET_GPR_U32(ctx, 31, 0x4DA200u);
    ctx->pc = 0x4DA1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA1F8u;
            // 0x4da1fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D8790u;
    if (runtime->hasFunction(0x4D8790u)) {
        auto targetFn = runtime->lookupFunction(0x4D8790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA200u; }
        if (ctx->pc != 0x4DA200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D8790_0x4d8790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA200u; }
        if (ctx->pc != 0x4DA200u) { return; }
    }
    ctx->pc = 0x4DA200u;
label_4da200:
    // 0x4da200: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4da200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4da204:
    // 0x4da204: 0x10000002  b           . + 4 + (0x2 << 2)
label_4da208:
    if (ctx->pc == 0x4DA208u) {
        ctx->pc = 0x4DA208u;
            // 0x4da208: 0xae6300f0  sw          $v1, 0xF0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 240), GPR_U32(ctx, 3));
        ctx->pc = 0x4DA20Cu;
        goto label_4da20c;
    }
    ctx->pc = 0x4DA204u;
    {
        const bool branch_taken_0x4da204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DA208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA204u;
            // 0x4da208: 0xae6300f0  sw          $v1, 0xF0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4da204) {
            ctx->pc = 0x4DA210u;
            goto label_4da210;
        }
    }
    ctx->pc = 0x4DA20Cu;
label_4da20c:
    // 0x4da20c: 0xae6000f0  sw          $zero, 0xF0($s3)
    ctx->pc = 0x4da20cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 240), GPR_U32(ctx, 0));
label_4da210:
    // 0x4da210: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4da210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4da214:
    // 0x4da214: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4da214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4da218:
    // 0x4da218: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4da218u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4da21c:
    // 0x4da21c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4da21cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4da220:
    // 0x4da220: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4da220u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4da224:
    // 0x4da224: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4da224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4da228:
    // 0x4da228: 0x3e00008  jr          $ra
label_4da22c:
    if (ctx->pc == 0x4DA22Cu) {
        ctx->pc = 0x4DA22Cu;
            // 0x4da22c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4DA230u;
        goto label_4da230;
    }
    ctx->pc = 0x4DA228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DA22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA228u;
            // 0x4da22c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DA230u;
label_4da230:
    // 0x4da230: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4da230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4da234:
    // 0x4da234: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4da234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4da238:
    // 0x4da238: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4da238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4da23c:
    // 0x4da23c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4da23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4da240:
    // 0x4da240: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4da240u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4da244:
    // 0x4da244: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4da244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4da248:
    // 0x4da248: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4da248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4da24c:
    // 0x4da24c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4da24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4da250:
    // 0x4da250: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4da250u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4da254:
    // 0x4da254: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4da258:
    if (ctx->pc == 0x4DA258u) {
        ctx->pc = 0x4DA258u;
            // 0x4da258: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DA25Cu;
        goto label_4da25c;
    }
    ctx->pc = 0x4DA254u;
    {
        const bool branch_taken_0x4da254 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DA258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA254u;
            // 0x4da258: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4da254) {
            ctx->pc = 0x4DA298u;
            goto label_4da298;
        }
    }
    ctx->pc = 0x4DA25Cu;
label_4da25c:
    // 0x4da25c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4da25cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4da260:
    // 0x4da260: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4da260u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4da264:
    // 0x4da264: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4da264u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4da268:
    // 0x4da268: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4da268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4da26c:
    // 0x4da26c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4da26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4da270:
    // 0x4da270: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4da270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4da274:
    // 0x4da274: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4da274u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4da278:
    // 0x4da278: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4da278u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4da27c:
    // 0x4da27c: 0x320f809  jalr        $t9
label_4da280:
    if (ctx->pc == 0x4DA280u) {
        ctx->pc = 0x4DA284u;
        goto label_4da284;
    }
    ctx->pc = 0x4DA27Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DA284u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DA284u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DA284u; }
            if (ctx->pc != 0x4DA284u) { return; }
        }
        }
    }
    ctx->pc = 0x4DA284u;
label_4da284:
    // 0x4da284: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4da284u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4da288:
    // 0x4da288: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4da288u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4da28c:
    // 0x4da28c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4da28cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4da290:
    // 0x4da290: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4da294:
    if (ctx->pc == 0x4DA294u) {
        ctx->pc = 0x4DA294u;
            // 0x4da294: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4DA298u;
        goto label_4da298;
    }
    ctx->pc = 0x4DA290u;
    {
        const bool branch_taken_0x4da290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DA294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA290u;
            // 0x4da294: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4da290) {
            ctx->pc = 0x4DA268u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4da268;
        }
    }
    ctx->pc = 0x4DA298u;
label_4da298:
    // 0x4da298: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4da298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4da29c:
    // 0x4da29c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4da29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4da2a0:
    // 0x4da2a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4da2a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4da2a4:
    // 0x4da2a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4da2a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4da2a8:
    // 0x4da2a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4da2a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4da2ac:
    // 0x4da2ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4da2acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4da2b0:
    // 0x4da2b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4da2b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4da2b4:
    // 0x4da2b4: 0x3e00008  jr          $ra
label_4da2b8:
    if (ctx->pc == 0x4DA2B8u) {
        ctx->pc = 0x4DA2B8u;
            // 0x4da2b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4DA2BCu;
        goto label_4da2bc;
    }
    ctx->pc = 0x4DA2B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DA2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA2B4u;
            // 0x4da2b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DA2BCu;
label_4da2bc:
    // 0x4da2bc: 0x0  nop
    ctx->pc = 0x4da2bcu;
    // NOP
label_4da2c0:
    // 0x4da2c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4da2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4da2c4:
    // 0x4da2c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4da2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4da2c8:
    // 0x4da2c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4da2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4da2cc:
    // 0x4da2cc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4da2ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4da2d0:
    // 0x4da2d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4da2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4da2d4:
    // 0x4da2d4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4da2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4da2d8:
    // 0x4da2d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4da2d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4da2dc:
    // 0x4da2dc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4da2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4da2e0:
    // 0x4da2e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4da2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4da2e4:
    // 0x4da2e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4da2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4da2e8:
    // 0x4da2e8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4da2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4da2ec:
    // 0x4da2ec: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4da2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4da2f0:
    // 0x4da2f0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4da2f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4da2f4:
    // 0x4da2f4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4da2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4da2f8:
    // 0x4da2f8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x4da2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_4da2fc:
    // 0x4da2fc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4da2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4da300:
    // 0x4da300: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x4da300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4da304:
    // 0x4da304: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4da304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4da308:
    // 0x4da308: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x4da308u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_4da30c:
    // 0x4da30c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4da30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4da310:
    // 0x4da310: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4da310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4da314:
    // 0x4da314: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4da314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4da318:
    // 0x4da318: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4da318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4da31c:
    // 0x4da31c: 0xc0a997c  jal         func_2A65F0
label_4da320:
    if (ctx->pc == 0x4DA320u) {
        ctx->pc = 0x4DA320u;
            // 0x4da320: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x4DA324u;
        goto label_4da324;
    }
    ctx->pc = 0x4DA31Cu;
    SET_GPR_U32(ctx, 31, 0x4DA324u);
    ctx->pc = 0x4DA320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA31Cu;
            // 0x4da320: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA324u; }
        if (ctx->pc != 0x4DA324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA324u; }
        if (ctx->pc != 0x4DA324u) { return; }
    }
    ctx->pc = 0x4DA324u;
label_4da324:
    // 0x4da324: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4da324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4da328:
    // 0x4da328: 0xc0d879c  jal         func_361E70
label_4da32c:
    if (ctx->pc == 0x4DA32Cu) {
        ctx->pc = 0x4DA32Cu;
            // 0x4da32c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DA330u;
        goto label_4da330;
    }
    ctx->pc = 0x4DA328u;
    SET_GPR_U32(ctx, 31, 0x4DA330u);
    ctx->pc = 0x4DA32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA328u;
            // 0x4da32c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA330u; }
        if (ctx->pc != 0x4DA330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA330u; }
        if (ctx->pc != 0x4DA330u) { return; }
    }
    ctx->pc = 0x4DA330u;
label_4da330:
    // 0x4da330: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4da330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4da334:
    // 0x4da334: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4da334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4da338:
    // 0x4da338: 0x3e00008  jr          $ra
label_4da33c:
    if (ctx->pc == 0x4DA33Cu) {
        ctx->pc = 0x4DA33Cu;
            // 0x4da33c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4DA340u;
        goto label_4da340;
    }
    ctx->pc = 0x4DA338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DA33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA338u;
            // 0x4da33c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DA340u;
label_4da340:
    // 0x4da340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4da340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4da344:
    // 0x4da344: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4da344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4da348:
    // 0x4da348: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4da348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4da34c:
    // 0x4da34c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4da34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4da350:
    // 0x4da350: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_4da354:
    if (ctx->pc == 0x4DA354u) {
        ctx->pc = 0x4DA354u;
            // 0x4da354: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DA358u;
        goto label_4da358;
    }
    ctx->pc = 0x4DA350u;
    {
        const bool branch_taken_0x4da350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DA354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA350u;
            // 0x4da354: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4da350) {
            ctx->pc = 0x4DA470u;
            goto label_4da470;
        }
    }
    ctx->pc = 0x4DA358u;
label_4da358:
    // 0x4da358: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4da358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4da35c:
    // 0x4da35c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4da35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4da360:
    // 0x4da360: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4da360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4da364:
    // 0x4da364: 0xc075128  jal         func_1D44A0
label_4da368:
    if (ctx->pc == 0x4DA368u) {
        ctx->pc = 0x4DA368u;
            // 0x4da368: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4DA36Cu;
        goto label_4da36c;
    }
    ctx->pc = 0x4DA364u;
    SET_GPR_U32(ctx, 31, 0x4DA36Cu);
    ctx->pc = 0x4DA368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA364u;
            // 0x4da368: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA36Cu; }
        if (ctx->pc != 0x4DA36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA36Cu; }
        if (ctx->pc != 0x4DA36Cu) { return; }
    }
    ctx->pc = 0x4DA36Cu;
label_4da36c:
    // 0x4da36c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x4da36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4da370:
    // 0x4da370: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4da370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4da374:
    // 0x4da374: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4da374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4da378:
    // 0x4da378: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4da378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4da37c:
    // 0x4da37c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4da37cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4da380:
    // 0x4da380: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4da384:
    if (ctx->pc == 0x4DA384u) {
        ctx->pc = 0x4DA384u;
            // 0x4da384: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x4DA388u;
        goto label_4da388;
    }
    ctx->pc = 0x4DA380u;
    {
        const bool branch_taken_0x4da380 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DA384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA380u;
            // 0x4da384: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4da380) {
            ctx->pc = 0x4DA390u;
            goto label_4da390;
        }
    }
    ctx->pc = 0x4DA388u;
label_4da388:
    // 0x4da388: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4da388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4da38c:
    // 0x4da38c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4da38cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4da390:
    // 0x4da390: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4da390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4da394:
    // 0x4da394: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4da394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4da398:
    // 0x4da398: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4da398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4da39c:
    // 0x4da39c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4da39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4da3a0:
    // 0x4da3a0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4da3a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4da3a4:
    // 0x4da3a4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4da3a8:
    if (ctx->pc == 0x4DA3A8u) {
        ctx->pc = 0x4DA3A8u;
            // 0x4da3a8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4DA3ACu;
        goto label_4da3ac;
    }
    ctx->pc = 0x4DA3A4u;
    {
        const bool branch_taken_0x4da3a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4da3a4) {
            ctx->pc = 0x4DA3A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA3A4u;
            // 0x4da3a8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DA3B8u;
            goto label_4da3b8;
        }
    }
    ctx->pc = 0x4DA3ACu;
label_4da3ac:
    // 0x4da3ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4da3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4da3b0:
    // 0x4da3b0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4da3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4da3b4:
    // 0x4da3b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4da3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4da3b8:
    // 0x4da3b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4da3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4da3bc:
    // 0x4da3bc: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4da3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4da3c0:
    // 0x4da3c0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4da3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4da3c4:
    // 0x4da3c4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4da3c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4da3c8:
    // 0x4da3c8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4da3cc:
    if (ctx->pc == 0x4DA3CCu) {
        ctx->pc = 0x4DA3CCu;
            // 0x4da3cc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4DA3D0u;
        goto label_4da3d0;
    }
    ctx->pc = 0x4DA3C8u;
    {
        const bool branch_taken_0x4da3c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4da3c8) {
            ctx->pc = 0x4DA3CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA3C8u;
            // 0x4da3cc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DA3DCu;
            goto label_4da3dc;
        }
    }
    ctx->pc = 0x4DA3D0u;
label_4da3d0:
    // 0x4da3d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4da3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4da3d4:
    // 0x4da3d4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4da3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4da3d8:
    // 0x4da3d8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4da3d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4da3dc:
    // 0x4da3dc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4da3dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4da3e0:
    // 0x4da3e0: 0x320f809  jalr        $t9
label_4da3e4:
    if (ctx->pc == 0x4DA3E4u) {
        ctx->pc = 0x4DA3E4u;
            // 0x4da3e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DA3E8u;
        goto label_4da3e8;
    }
    ctx->pc = 0x4DA3E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DA3E8u);
        ctx->pc = 0x4DA3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA3E0u;
            // 0x4da3e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DA3E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DA3E8u; }
            if (ctx->pc != 0x4DA3E8u) { return; }
        }
        }
    }
    ctx->pc = 0x4DA3E8u;
label_4da3e8:
    // 0x4da3e8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4da3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4da3ec:
    // 0x4da3ec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4da3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4da3f0:
    // 0x4da3f0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4da3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4da3f4:
    // 0x4da3f4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4da3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4da3f8:
    // 0x4da3f8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4da3f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4da3fc:
    // 0x4da3fc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4da3fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4da400:
    // 0x4da400: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4da404:
    if (ctx->pc == 0x4DA404u) {
        ctx->pc = 0x4DA404u;
            // 0x4da404: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x4DA408u;
        goto label_4da408;
    }
    ctx->pc = 0x4DA400u;
    {
        const bool branch_taken_0x4da400 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4da400) {
            ctx->pc = 0x4DA404u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA400u;
            // 0x4da404: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DA414u;
            goto label_4da414;
        }
    }
    ctx->pc = 0x4DA408u;
label_4da408:
    // 0x4da408: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4da408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4da40c:
    // 0x4da40c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4da40cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4da410:
    // 0x4da410: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4da410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4da414:
    // 0x4da414: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4da414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4da418:
    // 0x4da418: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4da418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4da41c:
    // 0x4da41c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4da41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4da420:
    // 0x4da420: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4da420u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4da424:
    // 0x4da424: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4da424u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4da428:
    // 0x4da428: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4da42c:
    if (ctx->pc == 0x4DA42Cu) {
        ctx->pc = 0x4DA430u;
        goto label_4da430;
    }
    ctx->pc = 0x4DA428u;
    {
        const bool branch_taken_0x4da428 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4da428) {
            ctx->pc = 0x4DA438u;
            goto label_4da438;
        }
    }
    ctx->pc = 0x4DA430u;
label_4da430:
    // 0x4da430: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4da430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4da434:
    // 0x4da434: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4da434u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4da438:
    // 0x4da438: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4da438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4da43c:
    // 0x4da43c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4da43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4da440:
    // 0x4da440: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4da440u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4da444:
    // 0x4da444: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4da448:
    if (ctx->pc == 0x4DA448u) {
        ctx->pc = 0x4DA44Cu;
        goto label_4da44c;
    }
    ctx->pc = 0x4DA444u;
    {
        const bool branch_taken_0x4da444 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4da444) {
            ctx->pc = 0x4DA454u;
            goto label_4da454;
        }
    }
    ctx->pc = 0x4DA44Cu;
label_4da44c:
    // 0x4da44c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4da44cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4da450:
    // 0x4da450: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x4da450u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_4da454:
    // 0x4da454: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4da454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4da458:
    // 0x4da458: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x4da458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_4da45c:
    // 0x4da45c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4da45cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4da460:
    // 0x4da460: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4da464:
    if (ctx->pc == 0x4DA464u) {
        ctx->pc = 0x4DA464u;
            // 0x4da464: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4DA468u;
        goto label_4da468;
    }
    ctx->pc = 0x4DA460u;
    {
        const bool branch_taken_0x4da460 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4da460) {
            ctx->pc = 0x4DA464u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA460u;
            // 0x4da464: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DA474u;
            goto label_4da474;
        }
    }
    ctx->pc = 0x4DA468u;
label_4da468:
    // 0x4da468: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4da468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4da46c:
    // 0x4da46c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x4da46cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_4da470:
    // 0x4da470: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4da470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4da474:
    // 0x4da474: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4da474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4da478:
    // 0x4da478: 0x3e00008  jr          $ra
label_4da47c:
    if (ctx->pc == 0x4DA47Cu) {
        ctx->pc = 0x4DA47Cu;
            // 0x4da47c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4DA480u;
        goto label_4da480;
    }
    ctx->pc = 0x4DA478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DA47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA478u;
            // 0x4da47c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DA480u;
label_4da480:
    // 0x4da480: 0x8135cf4  j           func_4D73D0
label_4da484:
    if (ctx->pc == 0x4DA484u) {
        ctx->pc = 0x4DA484u;
            // 0x4da484: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x4DA488u;
        goto label_4da488;
    }
    ctx->pc = 0x4DA480u;
    ctx->pc = 0x4DA484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA480u;
            // 0x4da484: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D73D0u;
    {
        auto targetFn = runtime->lookupFunction(0x4D73D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4DA488u;
label_4da488:
    // 0x4da488: 0x0  nop
    ctx->pc = 0x4da488u;
    // NOP
label_4da48c:
    // 0x4da48c: 0x0  nop
    ctx->pc = 0x4da48cu;
    // NOP
label_4da490:
    // 0x4da490: 0x8135ec8  j           func_4D7B20
label_4da494:
    if (ctx->pc == 0x4DA494u) {
        ctx->pc = 0x4DA494u;
            // 0x4da494: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4DA498u;
        goto label_4da498;
    }
    ctx->pc = 0x4DA490u;
    ctx->pc = 0x4DA494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA490u;
            // 0x4da494: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D7B20u;
    {
        auto targetFn = runtime->lookupFunction(0x4D7B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4DA498u;
label_4da498:
    // 0x4da498: 0x0  nop
    ctx->pc = 0x4da498u;
    // NOP
label_4da49c:
    // 0x4da49c: 0x0  nop
    ctx->pc = 0x4da49cu;
    // NOP
label_4da4a0:
    // 0x4da4a0: 0x8135c9c  j           func_4D7270
label_4da4a4:
    if (ctx->pc == 0x4DA4A4u) {
        ctx->pc = 0x4DA4A4u;
            // 0x4da4a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4DA4A8u;
        goto label_4da4a8;
    }
    ctx->pc = 0x4DA4A0u;
    ctx->pc = 0x4DA4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA4A0u;
            // 0x4da4a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D7270u;
    if (runtime->hasFunction(0x4D7270u)) {
        auto targetFn = runtime->lookupFunction(0x4D7270u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004D7270_0x4d7270(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4DA4A8u;
label_4da4a8:
    // 0x4da4a8: 0x0  nop
    ctx->pc = 0x4da4a8u;
    // NOP
label_4da4ac:
    // 0x4da4ac: 0x0  nop
    ctx->pc = 0x4da4acu;
    // NOP
label_4da4b0:
    // 0x4da4b0: 0x8135c78  j           func_4D71E0
label_4da4b4:
    if (ctx->pc == 0x4DA4B4u) {
        ctx->pc = 0x4DA4B4u;
            // 0x4da4b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4DA4B8u;
        goto label_4da4b8;
    }
    ctx->pc = 0x4DA4B0u;
    ctx->pc = 0x4DA4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA4B0u;
            // 0x4da4b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D71E0u;
    {
        auto targetFn = runtime->lookupFunction(0x4D71E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4DA4B8u;
label_4da4b8:
    // 0x4da4b8: 0x0  nop
    ctx->pc = 0x4da4b8u;
    // NOP
label_4da4bc:
    // 0x4da4bc: 0x0  nop
    ctx->pc = 0x4da4bcu;
    // NOP
label_4da4c0:
    // 0x4da4c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4da4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4da4c4:
    // 0x4da4c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4da4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4da4c8:
    // 0x4da4c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4da4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4da4cc:
    // 0x4da4cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4da4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4da4d0:
    // 0x4da4d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4da4d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4da4d4:
    // 0x4da4d4: 0x12200029  beqz        $s1, . + 4 + (0x29 << 2)
label_4da4d8:
    if (ctx->pc == 0x4DA4D8u) {
        ctx->pc = 0x4DA4D8u;
            // 0x4da4d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DA4DCu;
        goto label_4da4dc;
    }
    ctx->pc = 0x4DA4D4u;
    {
        const bool branch_taken_0x4da4d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DA4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA4D4u;
            // 0x4da4d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4da4d4) {
            ctx->pc = 0x4DA57Cu;
            goto label_4da57c;
        }
    }
    ctx->pc = 0x4DA4DCu;
label_4da4dc:
    // 0x4da4dc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4da4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4da4e0:
    // 0x4da4e0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4da4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4da4e4:
    // 0x4da4e4: 0x24632a90  addiu       $v1, $v1, 0x2A90
    ctx->pc = 0x4da4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10896));
label_4da4e8:
    // 0x4da4e8: 0x24422ac8  addiu       $v0, $v0, 0x2AC8
    ctx->pc = 0x4da4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10952));
label_4da4ec:
    // 0x4da4ec: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4da4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4da4f0:
    // 0x4da4f0: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4da4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4da4f4:
    // 0x4da4f4: 0x8e2400a8  lw          $a0, 0xA8($s1)
    ctx->pc = 0x4da4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
label_4da4f8:
    // 0x4da4f8: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x4da4f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_4da4fc:
    // 0x4da4fc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_4da500:
    if (ctx->pc == 0x4DA500u) {
        ctx->pc = 0x4DA504u;
        goto label_4da504;
    }
    ctx->pc = 0x4DA4FCu;
    {
        const bool branch_taken_0x4da4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4da4fc) {
            ctx->pc = 0x4DA538u;
            goto label_4da538;
        }
    }
    ctx->pc = 0x4DA504u;
label_4da504:
    // 0x4da504: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x4da504u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_4da508:
    // 0x4da508: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4da508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4da50c:
    // 0x4da50c: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x4da50cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_4da510:
    // 0x4da510: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x4da510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_4da514:
    // 0x4da514: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4da514u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4da518:
    // 0x4da518: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_4da51c:
    if (ctx->pc == 0x4DA51Cu) {
        ctx->pc = 0x4DA520u;
        goto label_4da520;
    }
    ctx->pc = 0x4DA518u;
    {
        const bool branch_taken_0x4da518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4da518) {
            ctx->pc = 0x4DA538u;
            goto label_4da538;
        }
    }
    ctx->pc = 0x4DA520u;
label_4da520:
    // 0x4da520: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_4da524:
    if (ctx->pc == 0x4DA524u) {
        ctx->pc = 0x4DA528u;
        goto label_4da528;
    }
    ctx->pc = 0x4DA520u;
    {
        const bool branch_taken_0x4da520 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4da520) {
            ctx->pc = 0x4DA538u;
            goto label_4da538;
        }
    }
    ctx->pc = 0x4DA528u;
label_4da528:
    // 0x4da528: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4da528u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4da52c:
    // 0x4da52c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4da52cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4da530:
    // 0x4da530: 0x320f809  jalr        $t9
label_4da534:
    if (ctx->pc == 0x4DA534u) {
        ctx->pc = 0x4DA534u;
            // 0x4da534: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4DA538u;
        goto label_4da538;
    }
    ctx->pc = 0x4DA530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DA538u);
        ctx->pc = 0x4DA534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA530u;
            // 0x4da534: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DA538u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DA538u; }
            if (ctx->pc != 0x4DA538u) { return; }
        }
        }
    }
    ctx->pc = 0x4DA538u;
label_4da538:
    // 0x4da538: 0x5220000b  beql        $s1, $zero, . + 4 + (0xB << 2)
label_4da53c:
    if (ctx->pc == 0x4DA53Cu) {
        ctx->pc = 0x4DA53Cu;
            // 0x4da53c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4DA540u;
        goto label_4da540;
    }
    ctx->pc = 0x4DA538u;
    {
        const bool branch_taken_0x4da538 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4da538) {
            ctx->pc = 0x4DA53Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA538u;
            // 0x4da53c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DA568u;
            goto label_4da568;
        }
    }
    ctx->pc = 0x4DA540u;
label_4da540:
    // 0x4da540: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4da540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4da544:
    // 0x4da544: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4da544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4da548:
    // 0x4da548: 0x24632b40  addiu       $v1, $v1, 0x2B40
    ctx->pc = 0x4da548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11072));
label_4da54c:
    // 0x4da54c: 0x24422b78  addiu       $v0, $v0, 0x2B78
    ctx->pc = 0x4da54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11128));
label_4da550:
    // 0x4da550: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4da550u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4da554:
    // 0x4da554: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4da554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4da558:
    // 0x4da558: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4da558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4da55c:
    // 0x4da55c: 0xc136968  jal         func_4DA5A0
label_4da560:
    if (ctx->pc == 0x4DA560u) {
        ctx->pc = 0x4DA560u;
            // 0x4da560: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DA564u;
        goto label_4da564;
    }
    ctx->pc = 0x4DA55Cu;
    SET_GPR_U32(ctx, 31, 0x4DA564u);
    ctx->pc = 0x4DA560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA55Cu;
            // 0x4da560: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DA5A0u;
    if (runtime->hasFunction(0x4DA5A0u)) {
        auto targetFn = runtime->lookupFunction(0x4DA5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA564u; }
        if (ctx->pc != 0x4DA564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DA5A0_0x4da5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA564u; }
        if (ctx->pc != 0x4DA564u) { return; }
    }
    ctx->pc = 0x4DA564u;
label_4da564:
    // 0x4da564: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4da564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4da568:
    // 0x4da568: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4da568u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4da56c:
    // 0x4da56c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4da570:
    if (ctx->pc == 0x4DA570u) {
        ctx->pc = 0x4DA570u;
            // 0x4da570: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DA574u;
        goto label_4da574;
    }
    ctx->pc = 0x4DA56Cu;
    {
        const bool branch_taken_0x4da56c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4da56c) {
            ctx->pc = 0x4DA570u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA56Cu;
            // 0x4da570: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DA580u;
            goto label_4da580;
        }
    }
    ctx->pc = 0x4DA574u;
label_4da574:
    // 0x4da574: 0xc0400a8  jal         func_1002A0
label_4da578:
    if (ctx->pc == 0x4DA578u) {
        ctx->pc = 0x4DA578u;
            // 0x4da578: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DA57Cu;
        goto label_4da57c;
    }
    ctx->pc = 0x4DA574u;
    SET_GPR_U32(ctx, 31, 0x4DA57Cu);
    ctx->pc = 0x4DA578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA574u;
            // 0x4da578: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA57Cu; }
        if (ctx->pc != 0x4DA57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA57Cu; }
        if (ctx->pc != 0x4DA57Cu) { return; }
    }
    ctx->pc = 0x4DA57Cu;
label_4da57c:
    // 0x4da57c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4da57cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4da580:
    // 0x4da580: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4da580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4da584:
    // 0x4da584: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4da584u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4da588:
    // 0x4da588: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4da588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4da58c:
    // 0x4da58c: 0x3e00008  jr          $ra
label_4da590:
    if (ctx->pc == 0x4DA590u) {
        ctx->pc = 0x4DA590u;
            // 0x4da590: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4DA594u;
        goto label_4da594;
    }
    ctx->pc = 0x4DA58Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DA590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA58Cu;
            // 0x4da590: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DA594u;
label_4da594:
    // 0x4da594: 0x0  nop
    ctx->pc = 0x4da594u;
    // NOP
label_4da598:
    // 0x4da598: 0x0  nop
    ctx->pc = 0x4da598u;
    // NOP
label_4da59c:
    // 0x4da59c: 0x0  nop
    ctx->pc = 0x4da59cu;
    // NOP
}
