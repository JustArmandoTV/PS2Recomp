#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021E210
// Address: 0x21e210 - 0x21e710
void sub_0021E210_0x21e210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E210_0x21e210");
#endif

    switch (ctx->pc) {
        case 0x21e210u: goto label_21e210;
        case 0x21e214u: goto label_21e214;
        case 0x21e218u: goto label_21e218;
        case 0x21e21cu: goto label_21e21c;
        case 0x21e220u: goto label_21e220;
        case 0x21e224u: goto label_21e224;
        case 0x21e228u: goto label_21e228;
        case 0x21e22cu: goto label_21e22c;
        case 0x21e230u: goto label_21e230;
        case 0x21e234u: goto label_21e234;
        case 0x21e238u: goto label_21e238;
        case 0x21e23cu: goto label_21e23c;
        case 0x21e240u: goto label_21e240;
        case 0x21e244u: goto label_21e244;
        case 0x21e248u: goto label_21e248;
        case 0x21e24cu: goto label_21e24c;
        case 0x21e250u: goto label_21e250;
        case 0x21e254u: goto label_21e254;
        case 0x21e258u: goto label_21e258;
        case 0x21e25cu: goto label_21e25c;
        case 0x21e260u: goto label_21e260;
        case 0x21e264u: goto label_21e264;
        case 0x21e268u: goto label_21e268;
        case 0x21e26cu: goto label_21e26c;
        case 0x21e270u: goto label_21e270;
        case 0x21e274u: goto label_21e274;
        case 0x21e278u: goto label_21e278;
        case 0x21e27cu: goto label_21e27c;
        case 0x21e280u: goto label_21e280;
        case 0x21e284u: goto label_21e284;
        case 0x21e288u: goto label_21e288;
        case 0x21e28cu: goto label_21e28c;
        case 0x21e290u: goto label_21e290;
        case 0x21e294u: goto label_21e294;
        case 0x21e298u: goto label_21e298;
        case 0x21e29cu: goto label_21e29c;
        case 0x21e2a0u: goto label_21e2a0;
        case 0x21e2a4u: goto label_21e2a4;
        case 0x21e2a8u: goto label_21e2a8;
        case 0x21e2acu: goto label_21e2ac;
        case 0x21e2b0u: goto label_21e2b0;
        case 0x21e2b4u: goto label_21e2b4;
        case 0x21e2b8u: goto label_21e2b8;
        case 0x21e2bcu: goto label_21e2bc;
        case 0x21e2c0u: goto label_21e2c0;
        case 0x21e2c4u: goto label_21e2c4;
        case 0x21e2c8u: goto label_21e2c8;
        case 0x21e2ccu: goto label_21e2cc;
        case 0x21e2d0u: goto label_21e2d0;
        case 0x21e2d4u: goto label_21e2d4;
        case 0x21e2d8u: goto label_21e2d8;
        case 0x21e2dcu: goto label_21e2dc;
        case 0x21e2e0u: goto label_21e2e0;
        case 0x21e2e4u: goto label_21e2e4;
        case 0x21e2e8u: goto label_21e2e8;
        case 0x21e2ecu: goto label_21e2ec;
        case 0x21e2f0u: goto label_21e2f0;
        case 0x21e2f4u: goto label_21e2f4;
        case 0x21e2f8u: goto label_21e2f8;
        case 0x21e2fcu: goto label_21e2fc;
        case 0x21e300u: goto label_21e300;
        case 0x21e304u: goto label_21e304;
        case 0x21e308u: goto label_21e308;
        case 0x21e30cu: goto label_21e30c;
        case 0x21e310u: goto label_21e310;
        case 0x21e314u: goto label_21e314;
        case 0x21e318u: goto label_21e318;
        case 0x21e31cu: goto label_21e31c;
        case 0x21e320u: goto label_21e320;
        case 0x21e324u: goto label_21e324;
        case 0x21e328u: goto label_21e328;
        case 0x21e32cu: goto label_21e32c;
        case 0x21e330u: goto label_21e330;
        case 0x21e334u: goto label_21e334;
        case 0x21e338u: goto label_21e338;
        case 0x21e33cu: goto label_21e33c;
        case 0x21e340u: goto label_21e340;
        case 0x21e344u: goto label_21e344;
        case 0x21e348u: goto label_21e348;
        case 0x21e34cu: goto label_21e34c;
        case 0x21e350u: goto label_21e350;
        case 0x21e354u: goto label_21e354;
        case 0x21e358u: goto label_21e358;
        case 0x21e35cu: goto label_21e35c;
        case 0x21e360u: goto label_21e360;
        case 0x21e364u: goto label_21e364;
        case 0x21e368u: goto label_21e368;
        case 0x21e36cu: goto label_21e36c;
        case 0x21e370u: goto label_21e370;
        case 0x21e374u: goto label_21e374;
        case 0x21e378u: goto label_21e378;
        case 0x21e37cu: goto label_21e37c;
        case 0x21e380u: goto label_21e380;
        case 0x21e384u: goto label_21e384;
        case 0x21e388u: goto label_21e388;
        case 0x21e38cu: goto label_21e38c;
        case 0x21e390u: goto label_21e390;
        case 0x21e394u: goto label_21e394;
        case 0x21e398u: goto label_21e398;
        case 0x21e39cu: goto label_21e39c;
        case 0x21e3a0u: goto label_21e3a0;
        case 0x21e3a4u: goto label_21e3a4;
        case 0x21e3a8u: goto label_21e3a8;
        case 0x21e3acu: goto label_21e3ac;
        case 0x21e3b0u: goto label_21e3b0;
        case 0x21e3b4u: goto label_21e3b4;
        case 0x21e3b8u: goto label_21e3b8;
        case 0x21e3bcu: goto label_21e3bc;
        case 0x21e3c0u: goto label_21e3c0;
        case 0x21e3c4u: goto label_21e3c4;
        case 0x21e3c8u: goto label_21e3c8;
        case 0x21e3ccu: goto label_21e3cc;
        case 0x21e3d0u: goto label_21e3d0;
        case 0x21e3d4u: goto label_21e3d4;
        case 0x21e3d8u: goto label_21e3d8;
        case 0x21e3dcu: goto label_21e3dc;
        case 0x21e3e0u: goto label_21e3e0;
        case 0x21e3e4u: goto label_21e3e4;
        case 0x21e3e8u: goto label_21e3e8;
        case 0x21e3ecu: goto label_21e3ec;
        case 0x21e3f0u: goto label_21e3f0;
        case 0x21e3f4u: goto label_21e3f4;
        case 0x21e3f8u: goto label_21e3f8;
        case 0x21e3fcu: goto label_21e3fc;
        case 0x21e400u: goto label_21e400;
        case 0x21e404u: goto label_21e404;
        case 0x21e408u: goto label_21e408;
        case 0x21e40cu: goto label_21e40c;
        case 0x21e410u: goto label_21e410;
        case 0x21e414u: goto label_21e414;
        case 0x21e418u: goto label_21e418;
        case 0x21e41cu: goto label_21e41c;
        case 0x21e420u: goto label_21e420;
        case 0x21e424u: goto label_21e424;
        case 0x21e428u: goto label_21e428;
        case 0x21e42cu: goto label_21e42c;
        case 0x21e430u: goto label_21e430;
        case 0x21e434u: goto label_21e434;
        case 0x21e438u: goto label_21e438;
        case 0x21e43cu: goto label_21e43c;
        case 0x21e440u: goto label_21e440;
        case 0x21e444u: goto label_21e444;
        case 0x21e448u: goto label_21e448;
        case 0x21e44cu: goto label_21e44c;
        case 0x21e450u: goto label_21e450;
        case 0x21e454u: goto label_21e454;
        case 0x21e458u: goto label_21e458;
        case 0x21e45cu: goto label_21e45c;
        case 0x21e460u: goto label_21e460;
        case 0x21e464u: goto label_21e464;
        case 0x21e468u: goto label_21e468;
        case 0x21e46cu: goto label_21e46c;
        case 0x21e470u: goto label_21e470;
        case 0x21e474u: goto label_21e474;
        case 0x21e478u: goto label_21e478;
        case 0x21e47cu: goto label_21e47c;
        case 0x21e480u: goto label_21e480;
        case 0x21e484u: goto label_21e484;
        case 0x21e488u: goto label_21e488;
        case 0x21e48cu: goto label_21e48c;
        case 0x21e490u: goto label_21e490;
        case 0x21e494u: goto label_21e494;
        case 0x21e498u: goto label_21e498;
        case 0x21e49cu: goto label_21e49c;
        case 0x21e4a0u: goto label_21e4a0;
        case 0x21e4a4u: goto label_21e4a4;
        case 0x21e4a8u: goto label_21e4a8;
        case 0x21e4acu: goto label_21e4ac;
        case 0x21e4b0u: goto label_21e4b0;
        case 0x21e4b4u: goto label_21e4b4;
        case 0x21e4b8u: goto label_21e4b8;
        case 0x21e4bcu: goto label_21e4bc;
        case 0x21e4c0u: goto label_21e4c0;
        case 0x21e4c4u: goto label_21e4c4;
        case 0x21e4c8u: goto label_21e4c8;
        case 0x21e4ccu: goto label_21e4cc;
        case 0x21e4d0u: goto label_21e4d0;
        case 0x21e4d4u: goto label_21e4d4;
        case 0x21e4d8u: goto label_21e4d8;
        case 0x21e4dcu: goto label_21e4dc;
        case 0x21e4e0u: goto label_21e4e0;
        case 0x21e4e4u: goto label_21e4e4;
        case 0x21e4e8u: goto label_21e4e8;
        case 0x21e4ecu: goto label_21e4ec;
        case 0x21e4f0u: goto label_21e4f0;
        case 0x21e4f4u: goto label_21e4f4;
        case 0x21e4f8u: goto label_21e4f8;
        case 0x21e4fcu: goto label_21e4fc;
        case 0x21e500u: goto label_21e500;
        case 0x21e504u: goto label_21e504;
        case 0x21e508u: goto label_21e508;
        case 0x21e50cu: goto label_21e50c;
        case 0x21e510u: goto label_21e510;
        case 0x21e514u: goto label_21e514;
        case 0x21e518u: goto label_21e518;
        case 0x21e51cu: goto label_21e51c;
        case 0x21e520u: goto label_21e520;
        case 0x21e524u: goto label_21e524;
        case 0x21e528u: goto label_21e528;
        case 0x21e52cu: goto label_21e52c;
        case 0x21e530u: goto label_21e530;
        case 0x21e534u: goto label_21e534;
        case 0x21e538u: goto label_21e538;
        case 0x21e53cu: goto label_21e53c;
        case 0x21e540u: goto label_21e540;
        case 0x21e544u: goto label_21e544;
        case 0x21e548u: goto label_21e548;
        case 0x21e54cu: goto label_21e54c;
        case 0x21e550u: goto label_21e550;
        case 0x21e554u: goto label_21e554;
        case 0x21e558u: goto label_21e558;
        case 0x21e55cu: goto label_21e55c;
        case 0x21e560u: goto label_21e560;
        case 0x21e564u: goto label_21e564;
        case 0x21e568u: goto label_21e568;
        case 0x21e56cu: goto label_21e56c;
        case 0x21e570u: goto label_21e570;
        case 0x21e574u: goto label_21e574;
        case 0x21e578u: goto label_21e578;
        case 0x21e57cu: goto label_21e57c;
        case 0x21e580u: goto label_21e580;
        case 0x21e584u: goto label_21e584;
        case 0x21e588u: goto label_21e588;
        case 0x21e58cu: goto label_21e58c;
        case 0x21e590u: goto label_21e590;
        case 0x21e594u: goto label_21e594;
        case 0x21e598u: goto label_21e598;
        case 0x21e59cu: goto label_21e59c;
        case 0x21e5a0u: goto label_21e5a0;
        case 0x21e5a4u: goto label_21e5a4;
        case 0x21e5a8u: goto label_21e5a8;
        case 0x21e5acu: goto label_21e5ac;
        case 0x21e5b0u: goto label_21e5b0;
        case 0x21e5b4u: goto label_21e5b4;
        case 0x21e5b8u: goto label_21e5b8;
        case 0x21e5bcu: goto label_21e5bc;
        case 0x21e5c0u: goto label_21e5c0;
        case 0x21e5c4u: goto label_21e5c4;
        case 0x21e5c8u: goto label_21e5c8;
        case 0x21e5ccu: goto label_21e5cc;
        case 0x21e5d0u: goto label_21e5d0;
        case 0x21e5d4u: goto label_21e5d4;
        case 0x21e5d8u: goto label_21e5d8;
        case 0x21e5dcu: goto label_21e5dc;
        case 0x21e5e0u: goto label_21e5e0;
        case 0x21e5e4u: goto label_21e5e4;
        case 0x21e5e8u: goto label_21e5e8;
        case 0x21e5ecu: goto label_21e5ec;
        case 0x21e5f0u: goto label_21e5f0;
        case 0x21e5f4u: goto label_21e5f4;
        case 0x21e5f8u: goto label_21e5f8;
        case 0x21e5fcu: goto label_21e5fc;
        case 0x21e600u: goto label_21e600;
        case 0x21e604u: goto label_21e604;
        case 0x21e608u: goto label_21e608;
        case 0x21e60cu: goto label_21e60c;
        case 0x21e610u: goto label_21e610;
        case 0x21e614u: goto label_21e614;
        case 0x21e618u: goto label_21e618;
        case 0x21e61cu: goto label_21e61c;
        case 0x21e620u: goto label_21e620;
        case 0x21e624u: goto label_21e624;
        case 0x21e628u: goto label_21e628;
        case 0x21e62cu: goto label_21e62c;
        case 0x21e630u: goto label_21e630;
        case 0x21e634u: goto label_21e634;
        case 0x21e638u: goto label_21e638;
        case 0x21e63cu: goto label_21e63c;
        case 0x21e640u: goto label_21e640;
        case 0x21e644u: goto label_21e644;
        case 0x21e648u: goto label_21e648;
        case 0x21e64cu: goto label_21e64c;
        case 0x21e650u: goto label_21e650;
        case 0x21e654u: goto label_21e654;
        case 0x21e658u: goto label_21e658;
        case 0x21e65cu: goto label_21e65c;
        case 0x21e660u: goto label_21e660;
        case 0x21e664u: goto label_21e664;
        case 0x21e668u: goto label_21e668;
        case 0x21e66cu: goto label_21e66c;
        case 0x21e670u: goto label_21e670;
        case 0x21e674u: goto label_21e674;
        case 0x21e678u: goto label_21e678;
        case 0x21e67cu: goto label_21e67c;
        case 0x21e680u: goto label_21e680;
        case 0x21e684u: goto label_21e684;
        case 0x21e688u: goto label_21e688;
        case 0x21e68cu: goto label_21e68c;
        case 0x21e690u: goto label_21e690;
        case 0x21e694u: goto label_21e694;
        case 0x21e698u: goto label_21e698;
        case 0x21e69cu: goto label_21e69c;
        case 0x21e6a0u: goto label_21e6a0;
        case 0x21e6a4u: goto label_21e6a4;
        case 0x21e6a8u: goto label_21e6a8;
        case 0x21e6acu: goto label_21e6ac;
        case 0x21e6b0u: goto label_21e6b0;
        case 0x21e6b4u: goto label_21e6b4;
        case 0x21e6b8u: goto label_21e6b8;
        case 0x21e6bcu: goto label_21e6bc;
        case 0x21e6c0u: goto label_21e6c0;
        case 0x21e6c4u: goto label_21e6c4;
        case 0x21e6c8u: goto label_21e6c8;
        case 0x21e6ccu: goto label_21e6cc;
        case 0x21e6d0u: goto label_21e6d0;
        case 0x21e6d4u: goto label_21e6d4;
        case 0x21e6d8u: goto label_21e6d8;
        case 0x21e6dcu: goto label_21e6dc;
        case 0x21e6e0u: goto label_21e6e0;
        case 0x21e6e4u: goto label_21e6e4;
        case 0x21e6e8u: goto label_21e6e8;
        case 0x21e6ecu: goto label_21e6ec;
        case 0x21e6f0u: goto label_21e6f0;
        case 0x21e6f4u: goto label_21e6f4;
        case 0x21e6f8u: goto label_21e6f8;
        case 0x21e6fcu: goto label_21e6fc;
        case 0x21e700u: goto label_21e700;
        case 0x21e704u: goto label_21e704;
        case 0x21e708u: goto label_21e708;
        case 0x21e70cu: goto label_21e70c;
        default: break;
    }

    ctx->pc = 0x21e210u;

label_21e210:
    // 0x21e210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21e210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_21e214:
    // 0x21e214: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21e214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_21e218:
    // 0x21e218: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21e218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_21e21c:
    // 0x21e21c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21e21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_21e220:
    // 0x21e220: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21e220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21e224:
    // 0x21e224: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x21e224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_21e228:
    // 0x21e228: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x21e228u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_21e22c:
    // 0x21e22c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_21e230:
    if (ctx->pc == 0x21E230u) {
        ctx->pc = 0x21E230u;
            // 0x21e230: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21E234u;
        goto label_21e234;
    }
    ctx->pc = 0x21E22Cu;
    {
        const bool branch_taken_0x21e22c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E22Cu;
            // 0x21e230: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e22c) {
            ctx->pc = 0x21E258u;
            goto label_21e258;
        }
    }
    ctx->pc = 0x21E234u;
label_21e234:
    // 0x21e234: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21e234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_21e238:
    // 0x21e238: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x21e238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_21e23c:
    // 0x21e23c: 0x24430014  addiu       $v1, $v0, 0x14
    ctx->pc = 0x21e23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_21e240:
    // 0x21e240: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x21e240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_21e244:
    // 0x21e244: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_21e248:
    if (ctx->pc == 0x21E248u) {
        ctx->pc = 0x21E248u;
            // 0x21e248: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->pc = 0x21E24Cu;
        goto label_21e24c;
    }
    ctx->pc = 0x21E244u;
    {
        const bool branch_taken_0x21e244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e244) {
            ctx->pc = 0x21E248u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21E244u;
            // 0x21e248: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21E25Cu;
            goto label_21e25c;
        }
    }
    ctx->pc = 0x21E24Cu;
label_21e24c:
    // 0x21e24c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x21e24cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_21e250:
    // 0x21e250: 0xc08d40c  jal         func_235030
label_21e254:
    if (ctx->pc == 0x21E254u) {
        ctx->pc = 0x21E254u;
            // 0x21e254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21E258u;
        goto label_21e258;
    }
    ctx->pc = 0x21E250u;
    SET_GPR_U32(ctx, 31, 0x21E258u);
    ctx->pc = 0x21E254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E250u;
            // 0x21e254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235030u;
    if (runtime->hasFunction(0x235030u)) {
        auto targetFn = runtime->lookupFunction(0x235030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E258u; }
        if (ctx->pc != 0x21E258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235030_0x235030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E258u; }
        if (ctx->pc != 0x21E258u) { return; }
    }
    ctx->pc = 0x21E258u;
label_21e258:
    // 0x21e258: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x21e258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_21e25c:
    // 0x21e25c: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x21e25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_21e260:
    // 0x21e260: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x21e260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_21e264:
    // 0x21e264: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x21e264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_21e268:
    // 0x21e268: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_21e26c:
    if (ctx->pc == 0x21E26Cu) {
        ctx->pc = 0x21E26Cu;
            // 0x21e26c: 0x8e230030  lw          $v1, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->pc = 0x21E270u;
        goto label_21e270;
    }
    ctx->pc = 0x21E268u;
    {
        const bool branch_taken_0x21e268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21e268) {
            ctx->pc = 0x21E26Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21E268u;
            // 0x21e26c: 0x8e230030  lw          $v1, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21E280u;
            goto label_21e280;
        }
    }
    ctx->pc = 0x21E270u;
label_21e270:
    // 0x21e270: 0x2624002c  addiu       $a0, $s1, 0x2C
    ctx->pc = 0x21e270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
label_21e274:
    // 0x21e274: 0xc0a728c  jal         func_29CA30
label_21e278:
    if (ctx->pc == 0x21E278u) {
        ctx->pc = 0x21E278u;
            // 0x21e278: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x21E27Cu;
        goto label_21e27c;
    }
    ctx->pc = 0x21E274u;
    SET_GPR_U32(ctx, 31, 0x21E27Cu);
    ctx->pc = 0x21E278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E274u;
            // 0x21e278: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E27Cu; }
        if (ctx->pc != 0x21E27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E27Cu; }
        if (ctx->pc != 0x21E27Cu) { return; }
    }
    ctx->pc = 0x21E27Cu;
label_21e27c:
    // 0x21e27c: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x21e27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_21e280:
    // 0x21e280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21e284:
    // 0x21e284: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x21e284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_21e288:
    // 0x21e288: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x21e288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_21e28c:
    // 0x21e28c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21e28cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21e290:
    // 0x21e290: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x21e290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_21e294:
    // 0x21e294: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21e294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21e298:
    // 0x21e298: 0xc08d40c  jal         func_235030
label_21e29c:
    if (ctx->pc == 0x21E29Cu) {
        ctx->pc = 0x21E29Cu;
            // 0x21e29c: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->pc = 0x21E2A0u;
        goto label_21e2a0;
    }
    ctx->pc = 0x21E298u;
    SET_GPR_U32(ctx, 31, 0x21E2A0u);
    ctx->pc = 0x21E29Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E298u;
            // 0x21e29c: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235030u;
    if (runtime->hasFunction(0x235030u)) {
        auto targetFn = runtime->lookupFunction(0x235030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E2A0u; }
        if (ctx->pc != 0x21E2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235030_0x235030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E2A0u; }
        if (ctx->pc != 0x21E2A0u) { return; }
    }
    ctx->pc = 0x21E2A0u;
label_21e2a0:
    // 0x21e2a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21e2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_21e2a4:
    // 0x21e2a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21e2a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21e2a8:
    // 0x21e2a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21e2a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21e2ac:
    // 0x21e2ac: 0x3e00008  jr          $ra
label_21e2b0:
    if (ctx->pc == 0x21E2B0u) {
        ctx->pc = 0x21E2B0u;
            // 0x21e2b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x21E2B4u;
        goto label_21e2b4;
    }
    ctx->pc = 0x21E2ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E2ACu;
            // 0x21e2b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21E2B4u;
label_21e2b4:
    // 0x21e2b4: 0x0  nop
    ctx->pc = 0x21e2b4u;
    // NOP
label_21e2b8:
    // 0x21e2b8: 0x0  nop
    ctx->pc = 0x21e2b8u;
    // NOP
label_21e2bc:
    // 0x21e2bc: 0x0  nop
    ctx->pc = 0x21e2bcu;
    // NOP
label_21e2c0:
    // 0x21e2c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21e2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_21e2c4:
    // 0x21e2c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21e2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_21e2c8:
    // 0x21e2c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21e2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_21e2cc:
    // 0x21e2cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21e2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_21e2d0:
    // 0x21e2d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21e2d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21e2d4:
    // 0x21e2d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21e2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_21e2d8:
    // 0x21e2d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21e2d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21e2dc:
    // 0x21e2dc: 0x12600041  beqz        $s3, . + 4 + (0x41 << 2)
label_21e2e0:
    if (ctx->pc == 0x21E2E0u) {
        ctx->pc = 0x21E2E0u;
            // 0x21e2e0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x21E2E4u;
        goto label_21e2e4;
    }
    ctx->pc = 0x21E2DCu;
    {
        const bool branch_taken_0x21e2dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E2DCu;
            // 0x21e2e0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e2dc) {
            ctx->pc = 0x21E3E4u;
            goto label_21e3e4;
        }
    }
    ctx->pc = 0x21E2E4u;
label_21e2e4:
    // 0x21e2e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21e2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21e2e8:
    // 0x21e2e8: 0x2442e8c0  addiu       $v0, $v0, -0x1740
    ctx->pc = 0x21e2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961344));
label_21e2ec:
    // 0x21e2ec: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x21e2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_21e2f0:
    // 0x21e2f0: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x21e2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_21e2f4:
    // 0x21e2f4: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
label_21e2f8:
    if (ctx->pc == 0x21E2F8u) {
        ctx->pc = 0x21E2F8u;
            // 0x21e2f8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21E2FCu;
        goto label_21e2fc;
    }
    ctx->pc = 0x21E2F4u;
    {
        const bool branch_taken_0x21e2f4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21E2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E2F4u;
            // 0x21e2f8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e2f4) {
            ctx->pc = 0x21E328u;
            goto label_21e328;
        }
    }
    ctx->pc = 0x21E2FCu;
label_21e2fc:
    // 0x21e2fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21e2fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21e300:
    // 0x21e300: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x21e300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_21e304:
    // 0x21e304: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x21e304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_21e308:
    // 0x21e308: 0xc08d414  jal         func_235050
label_21e30c:
    if (ctx->pc == 0x21E30Cu) {
        ctx->pc = 0x21E30Cu;
            // 0x21e30c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x21E310u;
        goto label_21e310;
    }
    ctx->pc = 0x21E308u;
    SET_GPR_U32(ctx, 31, 0x21E310u);
    ctx->pc = 0x21E30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E308u;
            // 0x21e30c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235050u;
    if (runtime->hasFunction(0x235050u)) {
        auto targetFn = runtime->lookupFunction(0x235050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E310u; }
        if (ctx->pc != 0x21E310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235050_0x235050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E310u; }
        if (ctx->pc != 0x21E310u) { return; }
    }
    ctx->pc = 0x21E310u;
label_21e310:
    // 0x21e310: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x21e310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_21e314:
    // 0x21e314: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21e314u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_21e318:
    // 0x21e318: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x21e318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21e31c:
    // 0x21e31c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_21e320:
    if (ctx->pc == 0x21E320u) {
        ctx->pc = 0x21E320u;
            // 0x21e320: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x21E324u;
        goto label_21e324;
    }
    ctx->pc = 0x21E31Cu;
    {
        const bool branch_taken_0x21e31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E31Cu;
            // 0x21e320: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e31c) {
            ctx->pc = 0x21E300u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21e300;
        }
    }
    ctx->pc = 0x21E324u;
label_21e324:
    // 0x21e324: 0x0  nop
    ctx->pc = 0x21e324u;
    // NOP
label_21e328:
    // 0x21e328: 0x8e640038  lw          $a0, 0x38($s3)
    ctx->pc = 0x21e328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_21e32c:
    // 0x21e32c: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x21e32cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_21e330:
    // 0x21e330: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_21e334:
    if (ctx->pc == 0x21E334u) {
        ctx->pc = 0x21E334u;
            // 0x21e334: 0x2662002c  addiu       $v0, $s3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
        ctx->pc = 0x21E338u;
        goto label_21e338;
    }
    ctx->pc = 0x21E330u;
    {
        const bool branch_taken_0x21e330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e330) {
            ctx->pc = 0x21E334u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21E330u;
            // 0x21e334: 0x2662002c  addiu       $v0, $s3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21E370u;
            goto label_21e370;
        }
    }
    ctx->pc = 0x21E338u;
label_21e338:
    // 0x21e338: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x21e338u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_21e33c:
    // 0x21e33c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x21e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_21e340:
    // 0x21e340: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x21e340u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_21e344:
    // 0x21e344: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x21e344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_21e348:
    // 0x21e348: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x21e348u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_21e34c:
    // 0x21e34c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_21e350:
    if (ctx->pc == 0x21E350u) {
        ctx->pc = 0x21E354u;
        goto label_21e354;
    }
    ctx->pc = 0x21E34Cu;
    {
        const bool branch_taken_0x21e34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e34c) {
            ctx->pc = 0x21E36Cu;
            goto label_21e36c;
        }
    }
    ctx->pc = 0x21E354u;
label_21e354:
    // 0x21e354: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_21e358:
    if (ctx->pc == 0x21E358u) {
        ctx->pc = 0x21E35Cu;
        goto label_21e35c;
    }
    ctx->pc = 0x21E354u;
    {
        const bool branch_taken_0x21e354 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e354) {
            ctx->pc = 0x21E36Cu;
            goto label_21e36c;
        }
    }
    ctx->pc = 0x21E35Cu;
label_21e35c:
    // 0x21e35c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x21e35cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_21e360:
    // 0x21e360: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x21e360u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_21e364:
    // 0x21e364: 0x320f809  jalr        $t9
label_21e368:
    if (ctx->pc == 0x21E368u) {
        ctx->pc = 0x21E368u;
            // 0x21e368: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x21E36Cu;
        goto label_21e36c;
    }
    ctx->pc = 0x21E364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x21E36Cu);
        ctx->pc = 0x21E368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E364u;
            // 0x21e368: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x21E36Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21E36Cu; }
            if (ctx->pc != 0x21E36Cu) { return; }
        }
        }
    }
    ctx->pc = 0x21E36Cu;
label_21e36c:
    // 0x21e36c: 0x2662002c  addiu       $v0, $s3, 0x2C
    ctx->pc = 0x21e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
label_21e370:
    // 0x21e370: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_21e374:
    if (ctx->pc == 0x21E374u) {
        ctx->pc = 0x21E374u;
            // 0x21e374: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21E378u;
        goto label_21e378;
    }
    ctx->pc = 0x21E370u;
    {
        const bool branch_taken_0x21e370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e370) {
            ctx->pc = 0x21E374u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21E370u;
            // 0x21e374: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21E3B4u;
            goto label_21e3b4;
        }
    }
    ctx->pc = 0x21E378u;
label_21e378:
    // 0x21e378: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x21e378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_21e37c:
    // 0x21e37c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x21e37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_21e380:
    // 0x21e380: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x21e380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_21e384:
    // 0x21e384: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_21e388:
    if (ctx->pc == 0x21E388u) {
        ctx->pc = 0x21E38Cu;
        goto label_21e38c;
    }
    ctx->pc = 0x21E384u;
    {
        const bool branch_taken_0x21e384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e384) {
            ctx->pc = 0x21E3B0u;
            goto label_21e3b0;
        }
    }
    ctx->pc = 0x21E38Cu;
label_21e38c:
    // 0x21e38c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x21e38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_21e390:
    // 0x21e390: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x21e390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_21e394:
    // 0x21e394: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x21e394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_21e398:
    // 0x21e398: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x21e398u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_21e39c:
    // 0x21e39c: 0x8e65002c  lw          $a1, 0x2C($s3)
    ctx->pc = 0x21e39cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_21e3a0:
    // 0x21e3a0: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x21e3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_21e3a4:
    // 0x21e3a4: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x21e3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_21e3a8:
    // 0x21e3a8: 0xc0a7ab4  jal         func_29EAD0
label_21e3ac:
    if (ctx->pc == 0x21E3ACu) {
        ctx->pc = 0x21E3ACu;
            // 0x21e3ac: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x21E3B0u;
        goto label_21e3b0;
    }
    ctx->pc = 0x21E3A8u;
    SET_GPR_U32(ctx, 31, 0x21E3B0u);
    ctx->pc = 0x21E3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E3A8u;
            // 0x21e3ac: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E3B0u; }
        if (ctx->pc != 0x21E3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E3B0u; }
        if (ctx->pc != 0x21E3B0u) { return; }
    }
    ctx->pc = 0x21E3B0u;
label_21e3b0:
    // 0x21e3b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21e3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21e3b4:
    // 0x21e3b4: 0xc087e80  jal         func_21FA00
label_21e3b8:
    if (ctx->pc == 0x21E3B8u) {
        ctx->pc = 0x21E3B8u;
            // 0x21e3b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21E3BCu;
        goto label_21e3bc;
    }
    ctx->pc = 0x21E3B4u;
    SET_GPR_U32(ctx, 31, 0x21E3BCu);
    ctx->pc = 0x21E3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E3B4u;
            // 0x21e3b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FA00u;
    if (runtime->hasFunction(0x21FA00u)) {
        auto targetFn = runtime->lookupFunction(0x21FA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E3BCu; }
        if (ctx->pc != 0x21E3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FA00_0x21fa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E3BCu; }
        if (ctx->pc != 0x21E3BCu) { return; }
    }
    ctx->pc = 0x21E3BCu;
label_21e3bc:
    // 0x21e3bc: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x21e3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
label_21e3c0:
    // 0x21e3c0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x21e3c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_21e3c4:
    // 0x21e3c4: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_21e3c8:
    if (ctx->pc == 0x21E3C8u) {
        ctx->pc = 0x21E3C8u;
            // 0x21e3c8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21E3CCu;
        goto label_21e3cc;
    }
    ctx->pc = 0x21E3C4u;
    {
        const bool branch_taken_0x21e3c4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x21e3c4) {
            ctx->pc = 0x21E3C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21E3C4u;
            // 0x21e3c8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21E3E8u;
            goto label_21e3e8;
        }
    }
    ctx->pc = 0x21E3CCu;
label_21e3cc:
    // 0x21e3cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x21e3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_21e3d0:
    // 0x21e3d0: 0x96660004  lhu         $a2, 0x4($s3)
    ctx->pc = 0x21e3d0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
label_21e3d4:
    // 0x21e3d4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x21e3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_21e3d8:
    // 0x21e3d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21e3d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21e3dc:
    // 0x21e3dc: 0xc0a7ab4  jal         func_29EAD0
label_21e3e0:
    if (ctx->pc == 0x21E3E0u) {
        ctx->pc = 0x21E3E0u;
            // 0x21e3e0: 0x2407002a  addiu       $a3, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->pc = 0x21E3E4u;
        goto label_21e3e4;
    }
    ctx->pc = 0x21E3DCu;
    SET_GPR_U32(ctx, 31, 0x21E3E4u);
    ctx->pc = 0x21E3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E3DCu;
            // 0x21e3e0: 0x2407002a  addiu       $a3, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E3E4u; }
        if (ctx->pc != 0x21E3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E3E4u; }
        if (ctx->pc != 0x21E3E4u) { return; }
    }
    ctx->pc = 0x21E3E4u;
label_21e3e4:
    // 0x21e3e4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x21e3e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21e3e8:
    // 0x21e3e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21e3e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_21e3ec:
    // 0x21e3ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21e3ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21e3f0:
    // 0x21e3f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21e3f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21e3f4:
    // 0x21e3f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21e3f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21e3f8:
    // 0x21e3f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21e3f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21e3fc:
    // 0x21e3fc: 0x3e00008  jr          $ra
label_21e400:
    if (ctx->pc == 0x21E400u) {
        ctx->pc = 0x21E400u;
            // 0x21e400: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x21E404u;
        goto label_21e404;
    }
    ctx->pc = 0x21E3FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E3FCu;
            // 0x21e400: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21E404u;
label_21e404:
    // 0x21e404: 0x0  nop
    ctx->pc = 0x21e404u;
    // NOP
label_21e408:
    // 0x21e408: 0x0  nop
    ctx->pc = 0x21e408u;
    // NOP
label_21e40c:
    // 0x21e40c: 0x0  nop
    ctx->pc = 0x21e40cu;
    // NOP
label_21e410:
    // 0x21e410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21e410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_21e414:
    // 0x21e414: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21e414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_21e418:
    // 0x21e418: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21e418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_21e41c:
    // 0x21e41c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21e41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_21e420:
    // 0x21e420: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21e420u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21e424:
    // 0x21e424: 0x8cb00008  lw          $s0, 0x8($a1)
    ctx->pc = 0x21e424u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_21e428:
    // 0x21e428: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x21e428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_21e42c:
    // 0x21e42c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21e42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_21e430:
    // 0x21e430: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x21e430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_21e434:
    // 0x21e434: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x21e434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_21e438:
    // 0x21e438: 0xc08c6f0  jal         func_231BC0
label_21e43c:
    if (ctx->pc == 0x21E43Cu) {
        ctx->pc = 0x21E43Cu;
            // 0x21e43c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21E440u;
        goto label_21e440;
    }
    ctx->pc = 0x21E438u;
    SET_GPR_U32(ctx, 31, 0x21E440u);
    ctx->pc = 0x21E43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E438u;
            // 0x21e43c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231BC0u;
    if (runtime->hasFunction(0x231BC0u)) {
        auto targetFn = runtime->lookupFunction(0x231BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E440u; }
        if (ctx->pc != 0x21E440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231BC0_0x231bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E440u; }
        if (ctx->pc != 0x21E440u) { return; }
    }
    ctx->pc = 0x21E440u;
label_21e440:
    // 0x21e440: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21e440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21e444:
    // 0x21e444: 0xc08fb00  jal         func_23EC00
label_21e448:
    if (ctx->pc == 0x21E448u) {
        ctx->pc = 0x21E448u;
            // 0x21e448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21E44Cu;
        goto label_21e44c;
    }
    ctx->pc = 0x21E444u;
    SET_GPR_U32(ctx, 31, 0x21E44Cu);
    ctx->pc = 0x21E448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E444u;
            // 0x21e448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EC00u;
    if (runtime->hasFunction(0x23EC00u)) {
        auto targetFn = runtime->lookupFunction(0x23EC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E44Cu; }
        if (ctx->pc != 0x21E44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023EC00_0x23ec00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E44Cu; }
        if (ctx->pc != 0x21E44Cu) { return; }
    }
    ctx->pc = 0x21E44Cu;
label_21e44c:
    // 0x21e44c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x21e44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_21e450:
    // 0x21e450: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x21e450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_21e454:
    // 0x21e454: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_21e458:
    if (ctx->pc == 0x21E458u) {
        ctx->pc = 0x21E458u;
            // 0x21e458: 0xae030084  sw          $v1, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
        ctx->pc = 0x21E45Cu;
        goto label_21e45c;
    }
    ctx->pc = 0x21E454u;
    {
        const bool branch_taken_0x21e454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E454u;
            // 0x21e458: 0xae030084  sw          $v1, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e454) {
            ctx->pc = 0x21E47Cu;
            goto label_21e47c;
        }
    }
    ctx->pc = 0x21E45Cu;
label_21e45c:
    // 0x21e45c: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x21e45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_21e460:
    // 0x21e460: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_21e464:
    if (ctx->pc == 0x21E464u) {
        ctx->pc = 0x21E464u;
            // 0x21e464: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x21E468u;
        goto label_21e468;
    }
    ctx->pc = 0x21E460u;
    {
        const bool branch_taken_0x21e460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e460) {
            ctx->pc = 0x21E464u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21E460u;
            // 0x21e464: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21E480u;
            goto label_21e480;
        }
    }
    ctx->pc = 0x21E468u;
label_21e468:
    // 0x21e468: 0x8203008c  lb          $v1, 0x8C($s0)
    ctx->pc = 0x21e468u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
label_21e46c:
    // 0x21e46c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_21e470:
    if (ctx->pc == 0x21E470u) {
        ctx->pc = 0x21E474u;
        goto label_21e474;
    }
    ctx->pc = 0x21E46Cu;
    {
        const bool branch_taken_0x21e46c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e46c) {
            ctx->pc = 0x21E47Cu;
            goto label_21e47c;
        }
    }
    ctx->pc = 0x21E474u;
label_21e474:
    // 0x21e474: 0xc08d1c4  jal         func_234710
label_21e478:
    if (ctx->pc == 0x21E478u) {
        ctx->pc = 0x21E478u;
            // 0x21e478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21E47Cu;
        goto label_21e47c;
    }
    ctx->pc = 0x21E474u;
    SET_GPR_U32(ctx, 31, 0x21E47Cu);
    ctx->pc = 0x21E478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E474u;
            // 0x21e478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E47Cu; }
        if (ctx->pc != 0x21E47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E47Cu; }
        if (ctx->pc != 0x21E47Cu) { return; }
    }
    ctx->pc = 0x21E47Cu;
label_21e47c:
    // 0x21e47c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21e47cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_21e480:
    // 0x21e480: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21e480u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21e484:
    // 0x21e484: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21e484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21e488:
    // 0x21e488: 0x3e00008  jr          $ra
label_21e48c:
    if (ctx->pc == 0x21E48Cu) {
        ctx->pc = 0x21E48Cu;
            // 0x21e48c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x21E490u;
        goto label_21e490;
    }
    ctx->pc = 0x21E488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E488u;
            // 0x21e48c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21E490u;
label_21e490:
    // 0x21e490: 0x3e00008  jr          $ra
label_21e494:
    if (ctx->pc == 0x21E494u) {
        ctx->pc = 0x21E494u;
            // 0x21e494: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x21E498u;
        goto label_21e498;
    }
    ctx->pc = 0x21E490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E490u;
            // 0x21e494: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21E498u;
label_21e498:
    // 0x21e498: 0x0  nop
    ctx->pc = 0x21e498u;
    // NOP
label_21e49c:
    // 0x21e49c: 0x0  nop
    ctx->pc = 0x21e49cu;
    // NOP
label_21e4a0:
    // 0x21e4a0: 0x3e00008  jr          $ra
label_21e4a4:
    if (ctx->pc == 0x21E4A4u) {
        ctx->pc = 0x21E4A8u;
        goto label_21e4a8;
    }
    ctx->pc = 0x21E4A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21E4A8u;
label_21e4a8:
    // 0x21e4a8: 0x0  nop
    ctx->pc = 0x21e4a8u;
    // NOP
label_21e4ac:
    // 0x21e4ac: 0x0  nop
    ctx->pc = 0x21e4acu;
    // NOP
label_21e4b0:
    // 0x21e4b0: 0x3e00008  jr          $ra
label_21e4b4:
    if (ctx->pc == 0x21E4B4u) {
        ctx->pc = 0x21E4B4u;
            // 0x21e4b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21E4B8u;
        goto label_21e4b8;
    }
    ctx->pc = 0x21E4B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E4B0u;
            // 0x21e4b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21E4B8u;
label_21e4b8:
    // 0x21e4b8: 0x0  nop
    ctx->pc = 0x21e4b8u;
    // NOP
label_21e4bc:
    // 0x21e4bc: 0x0  nop
    ctx->pc = 0x21e4bcu;
    // NOP
label_21e4c0:
    // 0x21e4c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21e4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_21e4c4:
    // 0x21e4c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21e4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_21e4c8:
    // 0x21e4c8: 0x8c840018  lw          $a0, 0x18($a0)
    ctx->pc = 0x21e4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_21e4cc:
    // 0x21e4cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x21e4ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_21e4d0:
    // 0x21e4d0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x21e4d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_21e4d4:
    // 0x21e4d4: 0x320f809  jalr        $t9
label_21e4d8:
    if (ctx->pc == 0x21E4D8u) {
        ctx->pc = 0x21E4DCu;
        goto label_21e4dc;
    }
    ctx->pc = 0x21E4D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x21E4DCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x21E4DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21E4DCu; }
            if (ctx->pc != 0x21E4DCu) { return; }
        }
        }
    }
    ctx->pc = 0x21E4DCu;
label_21e4dc:
    // 0x21e4dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21e4dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21e4e0:
    // 0x21e4e0: 0x3e00008  jr          $ra
label_21e4e4:
    if (ctx->pc == 0x21E4E4u) {
        ctx->pc = 0x21E4E4u;
            // 0x21e4e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x21E4E8u;
        goto label_21e4e8;
    }
    ctx->pc = 0x21E4E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E4E0u;
            // 0x21e4e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21E4E8u;
label_21e4e8:
    // 0x21e4e8: 0x0  nop
    ctx->pc = 0x21e4e8u;
    // NOP
label_21e4ec:
    // 0x21e4ec: 0x0  nop
    ctx->pc = 0x21e4ecu;
    // NOP
label_21e4f0:
    // 0x21e4f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21e4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_21e4f4:
    // 0x21e4f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21e4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_21e4f8:
    // 0x21e4f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21e4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_21e4fc:
    // 0x21e4fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21e4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_21e500:
    // 0x21e500: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x21e500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_21e504:
    // 0x21e504: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x21e504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_21e508:
    // 0x21e508: 0x2470002c  addiu       $s0, $v1, 0x2C
    ctx->pc = 0x21e508u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
label_21e50c:
    // 0x21e50c: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x21e50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_21e510:
    // 0x21e510: 0x420bc  dsll32      $a0, $a0, 2
    ctx->pc = 0x21e510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 2));
label_21e514:
    // 0x21e514: 0x420be  dsrl32      $a0, $a0, 2
    ctx->pc = 0x21e514u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 2));
label_21e518:
    // 0x21e518: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x21e518u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_21e51c:
    // 0x21e51c: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
label_21e520:
    if (ctx->pc == 0x21E520u) {
        ctx->pc = 0x21E520u;
            // 0x21e520: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21E524u;
        goto label_21e524;
    }
    ctx->pc = 0x21E51Cu;
    {
        const bool branch_taken_0x21e51c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E51Cu;
            // 0x21e520: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e51c) {
            ctx->pc = 0x21E584u;
            goto label_21e584;
        }
    }
    ctx->pc = 0x21E524u;
label_21e524:
    // 0x21e524: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x21e524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_21e528:
    // 0x21e528: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x21e528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_21e52c:
    // 0x21e52c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x21e52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_21e530:
    // 0x21e530: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_21e534:
    if (ctx->pc == 0x21E534u) {
        ctx->pc = 0x21E534u;
            // 0x21e534: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x21E538u;
        goto label_21e538;
    }
    ctx->pc = 0x21E530u;
    {
        const bool branch_taken_0x21e530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e530) {
            ctx->pc = 0x21E534u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21E530u;
            // 0x21e534: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21E554u;
            goto label_21e554;
        }
    }
    ctx->pc = 0x21E538u;
label_21e538:
    // 0x21e538: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x21e538u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_21e53c:
    // 0x21e53c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x21e53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_21e540:
    // 0x21e540: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x21e540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_21e544:
    // 0x21e544: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x21e544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21e548:
    // 0x21e548: 0xc0a7ab4  jal         func_29EAD0
label_21e54c:
    if (ctx->pc == 0x21E54Cu) {
        ctx->pc = 0x21E54Cu;
            // 0x21e54c: 0x24070015  addiu       $a3, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->pc = 0x21E550u;
        goto label_21e550;
    }
    ctx->pc = 0x21E548u;
    SET_GPR_U32(ctx, 31, 0x21E550u);
    ctx->pc = 0x21E54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E548u;
            // 0x21e54c: 0x24070015  addiu       $a3, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E550u; }
        if (ctx->pc != 0x21E550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E550u; }
        if (ctx->pc != 0x21E550u) { return; }
    }
    ctx->pc = 0x21E550u;
label_21e550:
    // 0x21e550: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x21e550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_21e554:
    // 0x21e554: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x21e554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_21e558:
    // 0x21e558: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x21e558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_21e55c:
    // 0x21e55c: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x21e55cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_21e560:
    // 0x21e560: 0xc0a7a88  jal         func_29EA20
label_21e564:
    if (ctx->pc == 0x21E564u) {
        ctx->pc = 0x21E564u;
            // 0x21e564: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x21E568u;
        goto label_21e568;
    }
    ctx->pc = 0x21E560u;
    SET_GPR_U32(ctx, 31, 0x21E568u);
    ctx->pc = 0x21E564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E560u;
            // 0x21e564: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E568u; }
        if (ctx->pc != 0x21E568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E568u; }
        if (ctx->pc != 0x21E568u) { return; }
    }
    ctx->pc = 0x21E568u;
label_21e568:
    // 0x21e568: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21e568u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_21e56c:
    // 0x21e56c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x21e56cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_21e570:
    // 0x21e570: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x21e570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_21e574:
    // 0x21e574: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x21e574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_21e578:
    // 0x21e578: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x21e578u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_21e57c:
    // 0x21e57c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x21e57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_21e580:
    // 0x21e580: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x21e580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_21e584:
    // 0x21e584: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x21e584u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_21e588:
    // 0x21e588: 0xae260004  sw          $a2, 0x4($s1)
    ctx->pc = 0x21e588u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 6));
label_21e58c:
    // 0x21e58c: 0x8e0a0000  lw          $t2, 0x0($s0)
    ctx->pc = 0x21e58cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21e590:
    // 0x21e590: 0x8e2b0000  lw          $t3, 0x0($s1)
    ctx->pc = 0x21e590u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21e594:
    // 0x21e594: 0x18c00034  blez        $a2, . + 4 + (0x34 << 2)
label_21e598:
    if (ctx->pc == 0x21E598u) {
        ctx->pc = 0x21E598u;
            // 0x21e598: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21E59Cu;
        goto label_21e59c;
    }
    ctx->pc = 0x21E594u;
    {
        const bool branch_taken_0x21e594 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x21E598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E594u;
            // 0x21e598: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e594) {
            ctx->pc = 0x21E668u;
            goto label_21e668;
        }
    }
    ctx->pc = 0x21E59Cu;
label_21e59c:
    // 0x21e59c: 0x28c10009  slti        $at, $a2, 0x9
    ctx->pc = 0x21e59cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
label_21e5a0:
    // 0x21e5a0: 0x14200023  bnez        $at, . + 4 + (0x23 << 2)
label_21e5a4:
    if (ctx->pc == 0x21E5A4u) {
        ctx->pc = 0x21E5A4u;
            // 0x21e5a4: 0x24c5fff8  addiu       $a1, $a2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
        ctx->pc = 0x21E5A8u;
        goto label_21e5a8;
    }
    ctx->pc = 0x21E5A0u;
    {
        const bool branch_taken_0x21e5a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E5A0u;
            // 0x21e5a4: 0x24c5fff8  addiu       $a1, $a2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e5a0) {
            ctx->pc = 0x21E630u;
            goto label_21e630;
        }
    }
    ctx->pc = 0x21E5A8u;
label_21e5a8:
    // 0x21e5a8: 0x4c00007  bltz        $a2, . + 4 + (0x7 << 2)
label_21e5ac:
    if (ctx->pc == 0x21E5ACu) {
        ctx->pc = 0x21E5ACu;
            // 0x21e5ac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21E5B0u;
        goto label_21e5b0;
    }
    ctx->pc = 0x21E5A8u;
    {
        const bool branch_taken_0x21e5a8 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x21E5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E5A8u;
            // 0x21e5ac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e5a8) {
            ctx->pc = 0x21E5C8u;
            goto label_21e5c8;
        }
    }
    ctx->pc = 0x21E5B0u;
label_21e5b0:
    // 0x21e5b0: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x21e5b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
label_21e5b4:
    // 0x21e5b4: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x21e5b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
label_21e5b8:
    // 0x21e5b8: 0xc1082a  slt         $at, $a2, $at
    ctx->pc = 0x21e5b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_21e5bc:
    // 0x21e5bc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_21e5c0:
    if (ctx->pc == 0x21E5C0u) {
        ctx->pc = 0x21E5C4u;
        goto label_21e5c4;
    }
    ctx->pc = 0x21E5BCu;
    {
        const bool branch_taken_0x21e5bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e5bc) {
            ctx->pc = 0x21E5C8u;
            goto label_21e5c8;
        }
    }
    ctx->pc = 0x21E5C4u;
label_21e5c4:
    // 0x21e5c4: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x21e5c4u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_21e5c8:
    // 0x21e5c8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_21e5cc:
    if (ctx->pc == 0x21E5CCu) {
        ctx->pc = 0x21E5D0u;
        goto label_21e5d0;
    }
    ctx->pc = 0x21E5C8u;
    {
        const bool branch_taken_0x21e5c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e5c8) {
            ctx->pc = 0x21E630u;
            goto label_21e630;
        }
    }
    ctx->pc = 0x21E5D0u;
label_21e5d0:
    // 0x21e5d0: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x21e5d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_21e5d4:
    // 0x21e5d4: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x21e5d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_21e5d8:
    // 0x21e5d8: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x21e5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_21e5dc:
    // 0x21e5dc: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x21e5dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_21e5e0:
    // 0x21e5e0: 0x125182a  slt         $v1, $t1, $a1
    ctx->pc = 0x21e5e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_21e5e4:
    // 0x21e5e4: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x21e5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
label_21e5e8:
    // 0x21e5e8: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x21e5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_21e5ec:
    // 0x21e5ec: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x21e5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
label_21e5f0:
    // 0x21e5f0: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x21e5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_21e5f4:
    // 0x21e5f4: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x21e5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
label_21e5f8:
    // 0x21e5f8: 0x8d04000c  lw          $a0, 0xC($t0)
    ctx->pc = 0x21e5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_21e5fc:
    // 0x21e5fc: 0xace4000c  sw          $a0, 0xC($a3)
    ctx->pc = 0x21e5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 4));
label_21e600:
    // 0x21e600: 0x8d040010  lw          $a0, 0x10($t0)
    ctx->pc = 0x21e600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_21e604:
    // 0x21e604: 0xace40010  sw          $a0, 0x10($a3)
    ctx->pc = 0x21e604u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 4));
label_21e608:
    // 0x21e608: 0x8d040014  lw          $a0, 0x14($t0)
    ctx->pc = 0x21e608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_21e60c:
    // 0x21e60c: 0xace40014  sw          $a0, 0x14($a3)
    ctx->pc = 0x21e60cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
label_21e610:
    // 0x21e610: 0x8d040018  lw          $a0, 0x18($t0)
    ctx->pc = 0x21e610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_21e614:
    // 0x21e614: 0xace40018  sw          $a0, 0x18($a3)
    ctx->pc = 0x21e614u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 4));
label_21e618:
    // 0x21e618: 0x8d04001c  lw          $a0, 0x1C($t0)
    ctx->pc = 0x21e618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
label_21e61c:
    // 0x21e61c: 0xace4001c  sw          $a0, 0x1C($a3)
    ctx->pc = 0x21e61cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 4));
label_21e620:
    // 0x21e620: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x21e620u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
label_21e624:
    // 0x21e624: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_21e628:
    if (ctx->pc == 0x21E628u) {
        ctx->pc = 0x21E628u;
            // 0x21e628: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->pc = 0x21E62Cu;
        goto label_21e62c;
    }
    ctx->pc = 0x21E624u;
    {
        const bool branch_taken_0x21e624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E624u;
            // 0x21e628: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e624) {
            ctx->pc = 0x21E5D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21e5d8;
        }
    }
    ctx->pc = 0x21E62Cu;
label_21e62c:
    // 0x21e62c: 0x0  nop
    ctx->pc = 0x21e62cu;
    // NOP
label_21e630:
    // 0x21e630: 0x126082a  slt         $at, $t1, $a2
    ctx->pc = 0x21e630u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_21e634:
    // 0x21e634: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_21e638:
    if (ctx->pc == 0x21E638u) {
        ctx->pc = 0x21E63Cu;
        goto label_21e63c;
    }
    ctx->pc = 0x21E634u;
    {
        const bool branch_taken_0x21e634 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e634) {
            ctx->pc = 0x21E668u;
            goto label_21e668;
        }
    }
    ctx->pc = 0x21E63Cu;
label_21e63c:
    // 0x21e63c: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x21e63cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_21e640:
    // 0x21e640: 0x1433821  addu        $a3, $t2, $v1
    ctx->pc = 0x21e640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_21e644:
    // 0x21e644: 0x1632821  addu        $a1, $t3, $v1
    ctx->pc = 0x21e644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_21e648:
    // 0x21e648: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x21e648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_21e64c:
    // 0x21e64c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x21e64cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_21e650:
    // 0x21e650: 0x126182a  slt         $v1, $t1, $a2
    ctx->pc = 0x21e650u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_21e654:
    // 0x21e654: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x21e654u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_21e658:
    // 0x21e658: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x21e658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_21e65c:
    // 0x21e65c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_21e660:
    if (ctx->pc == 0x21E660u) {
        ctx->pc = 0x21E660u;
            // 0x21e660: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x21E664u;
        goto label_21e664;
    }
    ctx->pc = 0x21E65Cu;
    {
        const bool branch_taken_0x21e65c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E65Cu;
            // 0x21e660: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e65c) {
            ctx->pc = 0x21E648u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21e648;
        }
    }
    ctx->pc = 0x21E664u;
label_21e664:
    // 0x21e664: 0x0  nop
    ctx->pc = 0x21e664u;
    // NOP
label_21e668:
    // 0x21e668: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21e668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_21e66c:
    // 0x21e66c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21e66cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21e670:
    // 0x21e670: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21e670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21e674:
    // 0x21e674: 0x3e00008  jr          $ra
label_21e678:
    if (ctx->pc == 0x21E678u) {
        ctx->pc = 0x21E678u;
            // 0x21e678: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x21E67Cu;
        goto label_21e67c;
    }
    ctx->pc = 0x21E674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E674u;
            // 0x21e678: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21E67Cu;
label_21e67c:
    // 0x21e67c: 0x0  nop
    ctx->pc = 0x21e67cu;
    // NOP
label_21e680:
    // 0x21e680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21e680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_21e684:
    // 0x21e684: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21e684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_21e688:
    // 0x21e688: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21e688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_21e68c:
    // 0x21e68c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21e68cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21e690:
    // 0x21e690: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
label_21e694:
    if (ctx->pc == 0x21E694u) {
        ctx->pc = 0x21E694u;
            // 0x21e694: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21E698u;
        goto label_21e698;
    }
    ctx->pc = 0x21E690u;
    {
        const bool branch_taken_0x21e690 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e690) {
            ctx->pc = 0x21E694u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21E690u;
            // 0x21e694: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21E700u;
            goto label_21e700;
        }
    }
    ctx->pc = 0x21E698u;
label_21e698:
    // 0x21e698: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21e698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21e69c:
    // 0x21e69c: 0x2442e8e0  addiu       $v0, $v0, -0x1720
    ctx->pc = 0x21e69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961376));
label_21e6a0:
    // 0x21e6a0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_21e6a4:
    if (ctx->pc == 0x21E6A4u) {
        ctx->pc = 0x21E6A4u;
            // 0x21e6a4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x21E6A8u;
        goto label_21e6a8;
    }
    ctx->pc = 0x21E6A0u;
    {
        const bool branch_taken_0x21e6a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E6A0u;
            // 0x21e6a4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e6a0) {
            ctx->pc = 0x21E6D4u;
            goto label_21e6d4;
        }
    }
    ctx->pc = 0x21E6A8u;
label_21e6a8:
    // 0x21e6a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21e6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21e6ac:
    // 0x21e6ac: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x21e6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
label_21e6b0:
    // 0x21e6b0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_21e6b4:
    if (ctx->pc == 0x21E6B4u) {
        ctx->pc = 0x21E6B4u;
            // 0x21e6b4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x21E6B8u;
        goto label_21e6b8;
    }
    ctx->pc = 0x21E6B0u;
    {
        const bool branch_taken_0x21e6b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E6B0u;
            // 0x21e6b4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e6b0) {
            ctx->pc = 0x21E6D4u;
            goto label_21e6d4;
        }
    }
    ctx->pc = 0x21E6B8u;
label_21e6b8:
    // 0x21e6b8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21e6bc:
    // 0x21e6bc: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x21e6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_21e6c0:
    // 0x21e6c0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_21e6c4:
    if (ctx->pc == 0x21E6C4u) {
        ctx->pc = 0x21E6C4u;
            // 0x21e6c4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x21E6C8u;
        goto label_21e6c8;
    }
    ctx->pc = 0x21E6C0u;
    {
        const bool branch_taken_0x21e6c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E6C0u;
            // 0x21e6c4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e6c0) {
            ctx->pc = 0x21E6D4u;
            goto label_21e6d4;
        }
    }
    ctx->pc = 0x21E6C8u;
label_21e6c8:
    // 0x21e6c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21e6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21e6cc:
    // 0x21e6cc: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x21e6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_21e6d0:
    // 0x21e6d0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x21e6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_21e6d4:
    // 0x21e6d4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x21e6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_21e6d8:
    // 0x21e6d8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x21e6d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_21e6dc:
    // 0x21e6dc: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_21e6e0:
    if (ctx->pc == 0x21E6E0u) {
        ctx->pc = 0x21E6E4u;
        goto label_21e6e4;
    }
    ctx->pc = 0x21E6DCu;
    {
        const bool branch_taken_0x21e6dc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x21e6dc) {
            ctx->pc = 0x21E6FCu;
            goto label_21e6fc;
        }
    }
    ctx->pc = 0x21E6E4u;
label_21e6e4:
    // 0x21e6e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x21e6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_21e6e8:
    // 0x21e6e8: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x21e6e8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_21e6ec:
    // 0x21e6ec: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x21e6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_21e6f0:
    // 0x21e6f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21e6f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21e6f4:
    // 0x21e6f4: 0xc0a7ab4  jal         func_29EAD0
label_21e6f8:
    if (ctx->pc == 0x21E6F8u) {
        ctx->pc = 0x21E6F8u;
            // 0x21e6f8: 0x24070027  addiu       $a3, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x21E6FCu;
        goto label_21e6fc;
    }
    ctx->pc = 0x21E6F4u;
    SET_GPR_U32(ctx, 31, 0x21E6FCu);
    ctx->pc = 0x21E6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E6F4u;
            // 0x21e6f8: 0x24070027  addiu       $a3, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E6FCu; }
        if (ctx->pc != 0x21E6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E6FCu; }
        if (ctx->pc != 0x21E6FCu) { return; }
    }
    ctx->pc = 0x21E6FCu;
label_21e6fc:
    // 0x21e6fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21e6fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21e700:
    // 0x21e700: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21e700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21e704:
    // 0x21e704: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21e704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21e708:
    // 0x21e708: 0x3e00008  jr          $ra
label_21e70c:
    if (ctx->pc == 0x21E70Cu) {
        ctx->pc = 0x21E70Cu;
            // 0x21e70c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x21E710u;
        goto label_fallthrough_0x21e708;
    }
    ctx->pc = 0x21E708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E708u;
            // 0x21e70c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x21e708:
    ctx->pc = 0x21E710u;
}
