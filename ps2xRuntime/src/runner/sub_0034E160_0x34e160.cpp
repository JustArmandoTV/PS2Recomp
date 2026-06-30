#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034E160
// Address: 0x34e160 - 0x34e740
void sub_0034E160_0x34e160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034E160_0x34e160");
#endif

    switch (ctx->pc) {
        case 0x34e160u: goto label_34e160;
        case 0x34e164u: goto label_34e164;
        case 0x34e168u: goto label_34e168;
        case 0x34e16cu: goto label_34e16c;
        case 0x34e170u: goto label_34e170;
        case 0x34e174u: goto label_34e174;
        case 0x34e178u: goto label_34e178;
        case 0x34e17cu: goto label_34e17c;
        case 0x34e180u: goto label_34e180;
        case 0x34e184u: goto label_34e184;
        case 0x34e188u: goto label_34e188;
        case 0x34e18cu: goto label_34e18c;
        case 0x34e190u: goto label_34e190;
        case 0x34e194u: goto label_34e194;
        case 0x34e198u: goto label_34e198;
        case 0x34e19cu: goto label_34e19c;
        case 0x34e1a0u: goto label_34e1a0;
        case 0x34e1a4u: goto label_34e1a4;
        case 0x34e1a8u: goto label_34e1a8;
        case 0x34e1acu: goto label_34e1ac;
        case 0x34e1b0u: goto label_34e1b0;
        case 0x34e1b4u: goto label_34e1b4;
        case 0x34e1b8u: goto label_34e1b8;
        case 0x34e1bcu: goto label_34e1bc;
        case 0x34e1c0u: goto label_34e1c0;
        case 0x34e1c4u: goto label_34e1c4;
        case 0x34e1c8u: goto label_34e1c8;
        case 0x34e1ccu: goto label_34e1cc;
        case 0x34e1d0u: goto label_34e1d0;
        case 0x34e1d4u: goto label_34e1d4;
        case 0x34e1d8u: goto label_34e1d8;
        case 0x34e1dcu: goto label_34e1dc;
        case 0x34e1e0u: goto label_34e1e0;
        case 0x34e1e4u: goto label_34e1e4;
        case 0x34e1e8u: goto label_34e1e8;
        case 0x34e1ecu: goto label_34e1ec;
        case 0x34e1f0u: goto label_34e1f0;
        case 0x34e1f4u: goto label_34e1f4;
        case 0x34e1f8u: goto label_34e1f8;
        case 0x34e1fcu: goto label_34e1fc;
        case 0x34e200u: goto label_34e200;
        case 0x34e204u: goto label_34e204;
        case 0x34e208u: goto label_34e208;
        case 0x34e20cu: goto label_34e20c;
        case 0x34e210u: goto label_34e210;
        case 0x34e214u: goto label_34e214;
        case 0x34e218u: goto label_34e218;
        case 0x34e21cu: goto label_34e21c;
        case 0x34e220u: goto label_34e220;
        case 0x34e224u: goto label_34e224;
        case 0x34e228u: goto label_34e228;
        case 0x34e22cu: goto label_34e22c;
        case 0x34e230u: goto label_34e230;
        case 0x34e234u: goto label_34e234;
        case 0x34e238u: goto label_34e238;
        case 0x34e23cu: goto label_34e23c;
        case 0x34e240u: goto label_34e240;
        case 0x34e244u: goto label_34e244;
        case 0x34e248u: goto label_34e248;
        case 0x34e24cu: goto label_34e24c;
        case 0x34e250u: goto label_34e250;
        case 0x34e254u: goto label_34e254;
        case 0x34e258u: goto label_34e258;
        case 0x34e25cu: goto label_34e25c;
        case 0x34e260u: goto label_34e260;
        case 0x34e264u: goto label_34e264;
        case 0x34e268u: goto label_34e268;
        case 0x34e26cu: goto label_34e26c;
        case 0x34e270u: goto label_34e270;
        case 0x34e274u: goto label_34e274;
        case 0x34e278u: goto label_34e278;
        case 0x34e27cu: goto label_34e27c;
        case 0x34e280u: goto label_34e280;
        case 0x34e284u: goto label_34e284;
        case 0x34e288u: goto label_34e288;
        case 0x34e28cu: goto label_34e28c;
        case 0x34e290u: goto label_34e290;
        case 0x34e294u: goto label_34e294;
        case 0x34e298u: goto label_34e298;
        case 0x34e29cu: goto label_34e29c;
        case 0x34e2a0u: goto label_34e2a0;
        case 0x34e2a4u: goto label_34e2a4;
        case 0x34e2a8u: goto label_34e2a8;
        case 0x34e2acu: goto label_34e2ac;
        case 0x34e2b0u: goto label_34e2b0;
        case 0x34e2b4u: goto label_34e2b4;
        case 0x34e2b8u: goto label_34e2b8;
        case 0x34e2bcu: goto label_34e2bc;
        case 0x34e2c0u: goto label_34e2c0;
        case 0x34e2c4u: goto label_34e2c4;
        case 0x34e2c8u: goto label_34e2c8;
        case 0x34e2ccu: goto label_34e2cc;
        case 0x34e2d0u: goto label_34e2d0;
        case 0x34e2d4u: goto label_34e2d4;
        case 0x34e2d8u: goto label_34e2d8;
        case 0x34e2dcu: goto label_34e2dc;
        case 0x34e2e0u: goto label_34e2e0;
        case 0x34e2e4u: goto label_34e2e4;
        case 0x34e2e8u: goto label_34e2e8;
        case 0x34e2ecu: goto label_34e2ec;
        case 0x34e2f0u: goto label_34e2f0;
        case 0x34e2f4u: goto label_34e2f4;
        case 0x34e2f8u: goto label_34e2f8;
        case 0x34e2fcu: goto label_34e2fc;
        case 0x34e300u: goto label_34e300;
        case 0x34e304u: goto label_34e304;
        case 0x34e308u: goto label_34e308;
        case 0x34e30cu: goto label_34e30c;
        case 0x34e310u: goto label_34e310;
        case 0x34e314u: goto label_34e314;
        case 0x34e318u: goto label_34e318;
        case 0x34e31cu: goto label_34e31c;
        case 0x34e320u: goto label_34e320;
        case 0x34e324u: goto label_34e324;
        case 0x34e328u: goto label_34e328;
        case 0x34e32cu: goto label_34e32c;
        case 0x34e330u: goto label_34e330;
        case 0x34e334u: goto label_34e334;
        case 0x34e338u: goto label_34e338;
        case 0x34e33cu: goto label_34e33c;
        case 0x34e340u: goto label_34e340;
        case 0x34e344u: goto label_34e344;
        case 0x34e348u: goto label_34e348;
        case 0x34e34cu: goto label_34e34c;
        case 0x34e350u: goto label_34e350;
        case 0x34e354u: goto label_34e354;
        case 0x34e358u: goto label_34e358;
        case 0x34e35cu: goto label_34e35c;
        case 0x34e360u: goto label_34e360;
        case 0x34e364u: goto label_34e364;
        case 0x34e368u: goto label_34e368;
        case 0x34e36cu: goto label_34e36c;
        case 0x34e370u: goto label_34e370;
        case 0x34e374u: goto label_34e374;
        case 0x34e378u: goto label_34e378;
        case 0x34e37cu: goto label_34e37c;
        case 0x34e380u: goto label_34e380;
        case 0x34e384u: goto label_34e384;
        case 0x34e388u: goto label_34e388;
        case 0x34e38cu: goto label_34e38c;
        case 0x34e390u: goto label_34e390;
        case 0x34e394u: goto label_34e394;
        case 0x34e398u: goto label_34e398;
        case 0x34e39cu: goto label_34e39c;
        case 0x34e3a0u: goto label_34e3a0;
        case 0x34e3a4u: goto label_34e3a4;
        case 0x34e3a8u: goto label_34e3a8;
        case 0x34e3acu: goto label_34e3ac;
        case 0x34e3b0u: goto label_34e3b0;
        case 0x34e3b4u: goto label_34e3b4;
        case 0x34e3b8u: goto label_34e3b8;
        case 0x34e3bcu: goto label_34e3bc;
        case 0x34e3c0u: goto label_34e3c0;
        case 0x34e3c4u: goto label_34e3c4;
        case 0x34e3c8u: goto label_34e3c8;
        case 0x34e3ccu: goto label_34e3cc;
        case 0x34e3d0u: goto label_34e3d0;
        case 0x34e3d4u: goto label_34e3d4;
        case 0x34e3d8u: goto label_34e3d8;
        case 0x34e3dcu: goto label_34e3dc;
        case 0x34e3e0u: goto label_34e3e0;
        case 0x34e3e4u: goto label_34e3e4;
        case 0x34e3e8u: goto label_34e3e8;
        case 0x34e3ecu: goto label_34e3ec;
        case 0x34e3f0u: goto label_34e3f0;
        case 0x34e3f4u: goto label_34e3f4;
        case 0x34e3f8u: goto label_34e3f8;
        case 0x34e3fcu: goto label_34e3fc;
        case 0x34e400u: goto label_34e400;
        case 0x34e404u: goto label_34e404;
        case 0x34e408u: goto label_34e408;
        case 0x34e40cu: goto label_34e40c;
        case 0x34e410u: goto label_34e410;
        case 0x34e414u: goto label_34e414;
        case 0x34e418u: goto label_34e418;
        case 0x34e41cu: goto label_34e41c;
        case 0x34e420u: goto label_34e420;
        case 0x34e424u: goto label_34e424;
        case 0x34e428u: goto label_34e428;
        case 0x34e42cu: goto label_34e42c;
        case 0x34e430u: goto label_34e430;
        case 0x34e434u: goto label_34e434;
        case 0x34e438u: goto label_34e438;
        case 0x34e43cu: goto label_34e43c;
        case 0x34e440u: goto label_34e440;
        case 0x34e444u: goto label_34e444;
        case 0x34e448u: goto label_34e448;
        case 0x34e44cu: goto label_34e44c;
        case 0x34e450u: goto label_34e450;
        case 0x34e454u: goto label_34e454;
        case 0x34e458u: goto label_34e458;
        case 0x34e45cu: goto label_34e45c;
        case 0x34e460u: goto label_34e460;
        case 0x34e464u: goto label_34e464;
        case 0x34e468u: goto label_34e468;
        case 0x34e46cu: goto label_34e46c;
        case 0x34e470u: goto label_34e470;
        case 0x34e474u: goto label_34e474;
        case 0x34e478u: goto label_34e478;
        case 0x34e47cu: goto label_34e47c;
        case 0x34e480u: goto label_34e480;
        case 0x34e484u: goto label_34e484;
        case 0x34e488u: goto label_34e488;
        case 0x34e48cu: goto label_34e48c;
        case 0x34e490u: goto label_34e490;
        case 0x34e494u: goto label_34e494;
        case 0x34e498u: goto label_34e498;
        case 0x34e49cu: goto label_34e49c;
        case 0x34e4a0u: goto label_34e4a0;
        case 0x34e4a4u: goto label_34e4a4;
        case 0x34e4a8u: goto label_34e4a8;
        case 0x34e4acu: goto label_34e4ac;
        case 0x34e4b0u: goto label_34e4b0;
        case 0x34e4b4u: goto label_34e4b4;
        case 0x34e4b8u: goto label_34e4b8;
        case 0x34e4bcu: goto label_34e4bc;
        case 0x34e4c0u: goto label_34e4c0;
        case 0x34e4c4u: goto label_34e4c4;
        case 0x34e4c8u: goto label_34e4c8;
        case 0x34e4ccu: goto label_34e4cc;
        case 0x34e4d0u: goto label_34e4d0;
        case 0x34e4d4u: goto label_34e4d4;
        case 0x34e4d8u: goto label_34e4d8;
        case 0x34e4dcu: goto label_34e4dc;
        case 0x34e4e0u: goto label_34e4e0;
        case 0x34e4e4u: goto label_34e4e4;
        case 0x34e4e8u: goto label_34e4e8;
        case 0x34e4ecu: goto label_34e4ec;
        case 0x34e4f0u: goto label_34e4f0;
        case 0x34e4f4u: goto label_34e4f4;
        case 0x34e4f8u: goto label_34e4f8;
        case 0x34e4fcu: goto label_34e4fc;
        case 0x34e500u: goto label_34e500;
        case 0x34e504u: goto label_34e504;
        case 0x34e508u: goto label_34e508;
        case 0x34e50cu: goto label_34e50c;
        case 0x34e510u: goto label_34e510;
        case 0x34e514u: goto label_34e514;
        case 0x34e518u: goto label_34e518;
        case 0x34e51cu: goto label_34e51c;
        case 0x34e520u: goto label_34e520;
        case 0x34e524u: goto label_34e524;
        case 0x34e528u: goto label_34e528;
        case 0x34e52cu: goto label_34e52c;
        case 0x34e530u: goto label_34e530;
        case 0x34e534u: goto label_34e534;
        case 0x34e538u: goto label_34e538;
        case 0x34e53cu: goto label_34e53c;
        case 0x34e540u: goto label_34e540;
        case 0x34e544u: goto label_34e544;
        case 0x34e548u: goto label_34e548;
        case 0x34e54cu: goto label_34e54c;
        case 0x34e550u: goto label_34e550;
        case 0x34e554u: goto label_34e554;
        case 0x34e558u: goto label_34e558;
        case 0x34e55cu: goto label_34e55c;
        case 0x34e560u: goto label_34e560;
        case 0x34e564u: goto label_34e564;
        case 0x34e568u: goto label_34e568;
        case 0x34e56cu: goto label_34e56c;
        case 0x34e570u: goto label_34e570;
        case 0x34e574u: goto label_34e574;
        case 0x34e578u: goto label_34e578;
        case 0x34e57cu: goto label_34e57c;
        case 0x34e580u: goto label_34e580;
        case 0x34e584u: goto label_34e584;
        case 0x34e588u: goto label_34e588;
        case 0x34e58cu: goto label_34e58c;
        case 0x34e590u: goto label_34e590;
        case 0x34e594u: goto label_34e594;
        case 0x34e598u: goto label_34e598;
        case 0x34e59cu: goto label_34e59c;
        case 0x34e5a0u: goto label_34e5a0;
        case 0x34e5a4u: goto label_34e5a4;
        case 0x34e5a8u: goto label_34e5a8;
        case 0x34e5acu: goto label_34e5ac;
        case 0x34e5b0u: goto label_34e5b0;
        case 0x34e5b4u: goto label_34e5b4;
        case 0x34e5b8u: goto label_34e5b8;
        case 0x34e5bcu: goto label_34e5bc;
        case 0x34e5c0u: goto label_34e5c0;
        case 0x34e5c4u: goto label_34e5c4;
        case 0x34e5c8u: goto label_34e5c8;
        case 0x34e5ccu: goto label_34e5cc;
        case 0x34e5d0u: goto label_34e5d0;
        case 0x34e5d4u: goto label_34e5d4;
        case 0x34e5d8u: goto label_34e5d8;
        case 0x34e5dcu: goto label_34e5dc;
        case 0x34e5e0u: goto label_34e5e0;
        case 0x34e5e4u: goto label_34e5e4;
        case 0x34e5e8u: goto label_34e5e8;
        case 0x34e5ecu: goto label_34e5ec;
        case 0x34e5f0u: goto label_34e5f0;
        case 0x34e5f4u: goto label_34e5f4;
        case 0x34e5f8u: goto label_34e5f8;
        case 0x34e5fcu: goto label_34e5fc;
        case 0x34e600u: goto label_34e600;
        case 0x34e604u: goto label_34e604;
        case 0x34e608u: goto label_34e608;
        case 0x34e60cu: goto label_34e60c;
        case 0x34e610u: goto label_34e610;
        case 0x34e614u: goto label_34e614;
        case 0x34e618u: goto label_34e618;
        case 0x34e61cu: goto label_34e61c;
        case 0x34e620u: goto label_34e620;
        case 0x34e624u: goto label_34e624;
        case 0x34e628u: goto label_34e628;
        case 0x34e62cu: goto label_34e62c;
        case 0x34e630u: goto label_34e630;
        case 0x34e634u: goto label_34e634;
        case 0x34e638u: goto label_34e638;
        case 0x34e63cu: goto label_34e63c;
        case 0x34e640u: goto label_34e640;
        case 0x34e644u: goto label_34e644;
        case 0x34e648u: goto label_34e648;
        case 0x34e64cu: goto label_34e64c;
        case 0x34e650u: goto label_34e650;
        case 0x34e654u: goto label_34e654;
        case 0x34e658u: goto label_34e658;
        case 0x34e65cu: goto label_34e65c;
        case 0x34e660u: goto label_34e660;
        case 0x34e664u: goto label_34e664;
        case 0x34e668u: goto label_34e668;
        case 0x34e66cu: goto label_34e66c;
        case 0x34e670u: goto label_34e670;
        case 0x34e674u: goto label_34e674;
        case 0x34e678u: goto label_34e678;
        case 0x34e67cu: goto label_34e67c;
        case 0x34e680u: goto label_34e680;
        case 0x34e684u: goto label_34e684;
        case 0x34e688u: goto label_34e688;
        case 0x34e68cu: goto label_34e68c;
        case 0x34e690u: goto label_34e690;
        case 0x34e694u: goto label_34e694;
        case 0x34e698u: goto label_34e698;
        case 0x34e69cu: goto label_34e69c;
        case 0x34e6a0u: goto label_34e6a0;
        case 0x34e6a4u: goto label_34e6a4;
        case 0x34e6a8u: goto label_34e6a8;
        case 0x34e6acu: goto label_34e6ac;
        case 0x34e6b0u: goto label_34e6b0;
        case 0x34e6b4u: goto label_34e6b4;
        case 0x34e6b8u: goto label_34e6b8;
        case 0x34e6bcu: goto label_34e6bc;
        case 0x34e6c0u: goto label_34e6c0;
        case 0x34e6c4u: goto label_34e6c4;
        case 0x34e6c8u: goto label_34e6c8;
        case 0x34e6ccu: goto label_34e6cc;
        case 0x34e6d0u: goto label_34e6d0;
        case 0x34e6d4u: goto label_34e6d4;
        case 0x34e6d8u: goto label_34e6d8;
        case 0x34e6dcu: goto label_34e6dc;
        case 0x34e6e0u: goto label_34e6e0;
        case 0x34e6e4u: goto label_34e6e4;
        case 0x34e6e8u: goto label_34e6e8;
        case 0x34e6ecu: goto label_34e6ec;
        case 0x34e6f0u: goto label_34e6f0;
        case 0x34e6f4u: goto label_34e6f4;
        case 0x34e6f8u: goto label_34e6f8;
        case 0x34e6fcu: goto label_34e6fc;
        case 0x34e700u: goto label_34e700;
        case 0x34e704u: goto label_34e704;
        case 0x34e708u: goto label_34e708;
        case 0x34e70cu: goto label_34e70c;
        case 0x34e710u: goto label_34e710;
        case 0x34e714u: goto label_34e714;
        case 0x34e718u: goto label_34e718;
        case 0x34e71cu: goto label_34e71c;
        case 0x34e720u: goto label_34e720;
        case 0x34e724u: goto label_34e724;
        case 0x34e728u: goto label_34e728;
        case 0x34e72cu: goto label_34e72c;
        case 0x34e730u: goto label_34e730;
        case 0x34e734u: goto label_34e734;
        case 0x34e738u: goto label_34e738;
        case 0x34e73cu: goto label_34e73c;
        default: break;
    }

    ctx->pc = 0x34e160u;

label_34e160:
    // 0x34e160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34e160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_34e164:
    // 0x34e164: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34e164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_34e168:
    // 0x34e168: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34e168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_34e16c:
    // 0x34e16c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34e16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_34e170:
    // 0x34e170: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34e170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34e174:
    // 0x34e174: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_34e178:
    if (ctx->pc == 0x34E178u) {
        ctx->pc = 0x34E178u;
            // 0x34e178: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34E17Cu;
        goto label_34e17c;
    }
    ctx->pc = 0x34E174u;
    {
        const bool branch_taken_0x34e174 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E174u;
            // 0x34e178: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e174) {
            ctx->pc = 0x34E2A8u;
            goto label_34e2a8;
        }
    }
    ctx->pc = 0x34E17Cu;
label_34e17c:
    // 0x34e17c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x34e17cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_34e180:
    // 0x34e180: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34e180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_34e184:
    // 0x34e184: 0x24635b80  addiu       $v1, $v1, 0x5B80
    ctx->pc = 0x34e184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23424));
label_34e188:
    // 0x34e188: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x34e188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
label_34e18c:
    // 0x34e18c: 0x24425bb8  addiu       $v0, $v0, 0x5BB8
    ctx->pc = 0x34e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23480));
label_34e190:
    // 0x34e190: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x34e190u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_34e194:
    // 0x34e194: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x34e194u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_34e198:
    // 0x34e198: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x34e198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_34e19c:
    // 0x34e19c: 0xc0407c0  jal         func_101F00
label_34e1a0:
    if (ctx->pc == 0x34E1A0u) {
        ctx->pc = 0x34E1A0u;
            // 0x34e1a0: 0x24a5e2c0  addiu       $a1, $a1, -0x1D40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959808));
        ctx->pc = 0x34E1A4u;
        goto label_34e1a4;
    }
    ctx->pc = 0x34E19Cu;
    SET_GPR_U32(ctx, 31, 0x34E1A4u);
    ctx->pc = 0x34E1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E19Cu;
            // 0x34e1a0: 0x24a5e2c0  addiu       $a1, $a1, -0x1D40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E1A4u; }
        if (ctx->pc != 0x34E1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E1A4u; }
        if (ctx->pc != 0x34E1A4u) { return; }
    }
    ctx->pc = 0x34E1A4u;
label_34e1a4:
    // 0x34e1a4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x34e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_34e1a8:
    // 0x34e1a8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_34e1ac:
    if (ctx->pc == 0x34E1ACu) {
        ctx->pc = 0x34E1ACu;
            // 0x34e1ac: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x34E1B0u;
        goto label_34e1b0;
    }
    ctx->pc = 0x34E1A8u;
    {
        const bool branch_taken_0x34e1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e1a8) {
            ctx->pc = 0x34E1ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34E1A8u;
            // 0x34e1ac: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34E1BCu;
            goto label_34e1bc;
        }
    }
    ctx->pc = 0x34E1B0u;
label_34e1b0:
    // 0x34e1b0: 0xc07507c  jal         func_1D41F0
label_34e1b4:
    if (ctx->pc == 0x34E1B4u) {
        ctx->pc = 0x34E1B4u;
            // 0x34e1b4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x34E1B8u;
        goto label_34e1b8;
    }
    ctx->pc = 0x34E1B0u;
    SET_GPR_U32(ctx, 31, 0x34E1B8u);
    ctx->pc = 0x34E1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E1B0u;
            // 0x34e1b4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E1B8u; }
        if (ctx->pc != 0x34E1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E1B8u; }
        if (ctx->pc != 0x34E1B8u) { return; }
    }
    ctx->pc = 0x34E1B8u;
label_34e1b8:
    // 0x34e1b8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x34e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_34e1bc:
    // 0x34e1bc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_34e1c0:
    if (ctx->pc == 0x34E1C0u) {
        ctx->pc = 0x34E1C0u;
            // 0x34e1c0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x34E1C4u;
        goto label_34e1c4;
    }
    ctx->pc = 0x34E1BCu;
    {
        const bool branch_taken_0x34e1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e1bc) {
            ctx->pc = 0x34E1C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34E1BCu;
            // 0x34e1c0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34E1ECu;
            goto label_34e1ec;
        }
    }
    ctx->pc = 0x34E1C4u;
label_34e1c4:
    // 0x34e1c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_34e1c8:
    if (ctx->pc == 0x34E1C8u) {
        ctx->pc = 0x34E1CCu;
        goto label_34e1cc;
    }
    ctx->pc = 0x34E1C4u;
    {
        const bool branch_taken_0x34e1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e1c4) {
            ctx->pc = 0x34E1E8u;
            goto label_34e1e8;
        }
    }
    ctx->pc = 0x34E1CCu;
label_34e1cc:
    // 0x34e1cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_34e1d0:
    if (ctx->pc == 0x34E1D0u) {
        ctx->pc = 0x34E1D4u;
        goto label_34e1d4;
    }
    ctx->pc = 0x34E1CCu;
    {
        const bool branch_taken_0x34e1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e1cc) {
            ctx->pc = 0x34E1E8u;
            goto label_34e1e8;
        }
    }
    ctx->pc = 0x34E1D4u;
label_34e1d4:
    // 0x34e1d4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x34e1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_34e1d8:
    // 0x34e1d8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_34e1dc:
    if (ctx->pc == 0x34E1DCu) {
        ctx->pc = 0x34E1E0u;
        goto label_34e1e0;
    }
    ctx->pc = 0x34E1D8u;
    {
        const bool branch_taken_0x34e1d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e1d8) {
            ctx->pc = 0x34E1E8u;
            goto label_34e1e8;
        }
    }
    ctx->pc = 0x34E1E0u;
label_34e1e0:
    // 0x34e1e0: 0xc0400a8  jal         func_1002A0
label_34e1e4:
    if (ctx->pc == 0x34E1E4u) {
        ctx->pc = 0x34E1E8u;
        goto label_34e1e8;
    }
    ctx->pc = 0x34E1E0u;
    SET_GPR_U32(ctx, 31, 0x34E1E8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E1E8u; }
        if (ctx->pc != 0x34E1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E1E8u; }
        if (ctx->pc != 0x34E1E8u) { return; }
    }
    ctx->pc = 0x34E1E8u;
label_34e1e8:
    // 0x34e1e8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x34e1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_34e1ec:
    // 0x34e1ec: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_34e1f0:
    if (ctx->pc == 0x34E1F0u) {
        ctx->pc = 0x34E1F0u;
            // 0x34e1f0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x34E1F4u;
        goto label_34e1f4;
    }
    ctx->pc = 0x34E1ECu;
    {
        const bool branch_taken_0x34e1ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e1ec) {
            ctx->pc = 0x34E1F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34E1ECu;
            // 0x34e1f0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34E21Cu;
            goto label_34e21c;
        }
    }
    ctx->pc = 0x34E1F4u;
label_34e1f4:
    // 0x34e1f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_34e1f8:
    if (ctx->pc == 0x34E1F8u) {
        ctx->pc = 0x34E1FCu;
        goto label_34e1fc;
    }
    ctx->pc = 0x34E1F4u;
    {
        const bool branch_taken_0x34e1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e1f4) {
            ctx->pc = 0x34E218u;
            goto label_34e218;
        }
    }
    ctx->pc = 0x34E1FCu;
label_34e1fc:
    // 0x34e1fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_34e200:
    if (ctx->pc == 0x34E200u) {
        ctx->pc = 0x34E204u;
        goto label_34e204;
    }
    ctx->pc = 0x34E1FCu;
    {
        const bool branch_taken_0x34e1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e1fc) {
            ctx->pc = 0x34E218u;
            goto label_34e218;
        }
    }
    ctx->pc = 0x34E204u;
label_34e204:
    // 0x34e204: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x34e204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_34e208:
    // 0x34e208: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_34e20c:
    if (ctx->pc == 0x34E20Cu) {
        ctx->pc = 0x34E210u;
        goto label_34e210;
    }
    ctx->pc = 0x34E208u;
    {
        const bool branch_taken_0x34e208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e208) {
            ctx->pc = 0x34E218u;
            goto label_34e218;
        }
    }
    ctx->pc = 0x34E210u;
label_34e210:
    // 0x34e210: 0xc0400a8  jal         func_1002A0
label_34e214:
    if (ctx->pc == 0x34E214u) {
        ctx->pc = 0x34E218u;
        goto label_34e218;
    }
    ctx->pc = 0x34E210u;
    SET_GPR_U32(ctx, 31, 0x34E218u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E218u; }
        if (ctx->pc != 0x34E218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E218u; }
        if (ctx->pc != 0x34E218u) { return; }
    }
    ctx->pc = 0x34E218u;
label_34e218:
    // 0x34e218: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x34e218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_34e21c:
    // 0x34e21c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_34e220:
    if (ctx->pc == 0x34E220u) {
        ctx->pc = 0x34E224u;
        goto label_34e224;
    }
    ctx->pc = 0x34E21Cu;
    {
        const bool branch_taken_0x34e21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e21c) {
            ctx->pc = 0x34E238u;
            goto label_34e238;
        }
    }
    ctx->pc = 0x34E224u;
label_34e224:
    // 0x34e224: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x34e224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_34e228:
    // 0x34e228: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x34e228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_34e22c:
    // 0x34e22c: 0x24635b70  addiu       $v1, $v1, 0x5B70
    ctx->pc = 0x34e22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23408));
label_34e230:
    // 0x34e230: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x34e230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_34e234:
    // 0x34e234: 0xac403fd0  sw          $zero, 0x3FD0($v0)
    ctx->pc = 0x34e234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16336), GPR_U32(ctx, 0));
label_34e238:
    // 0x34e238: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_34e23c:
    if (ctx->pc == 0x34E23Cu) {
        ctx->pc = 0x34E23Cu;
            // 0x34e23c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x34E240u;
        goto label_34e240;
    }
    ctx->pc = 0x34E238u;
    {
        const bool branch_taken_0x34e238 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e238) {
            ctx->pc = 0x34E23Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34E238u;
            // 0x34e23c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34E294u;
            goto label_34e294;
        }
    }
    ctx->pc = 0x34E240u;
label_34e240:
    // 0x34e240: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34e240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_34e244:
    // 0x34e244: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x34e244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_34e248:
    // 0x34e248: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x34e248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_34e24c:
    // 0x34e24c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x34e24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_34e250:
    // 0x34e250: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_34e254:
    if (ctx->pc == 0x34E254u) {
        ctx->pc = 0x34E254u;
            // 0x34e254: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x34E258u;
        goto label_34e258;
    }
    ctx->pc = 0x34E250u;
    {
        const bool branch_taken_0x34e250 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e250) {
            ctx->pc = 0x34E254u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34E250u;
            // 0x34e254: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34E26Cu;
            goto label_34e26c;
        }
    }
    ctx->pc = 0x34E258u;
label_34e258:
    // 0x34e258: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x34e258u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_34e25c:
    // 0x34e25c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x34e25cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_34e260:
    // 0x34e260: 0x320f809  jalr        $t9
label_34e264:
    if (ctx->pc == 0x34E264u) {
        ctx->pc = 0x34E264u;
            // 0x34e264: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x34E268u;
        goto label_34e268;
    }
    ctx->pc = 0x34E260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34E268u);
        ctx->pc = 0x34E264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E260u;
            // 0x34e264: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x34E268u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34E268u; }
            if (ctx->pc != 0x34E268u) { return; }
        }
        }
    }
    ctx->pc = 0x34E268u;
label_34e268:
    // 0x34e268: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x34e268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_34e26c:
    // 0x34e26c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_34e270:
    if (ctx->pc == 0x34E270u) {
        ctx->pc = 0x34E270u;
            // 0x34e270: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34E274u;
        goto label_34e274;
    }
    ctx->pc = 0x34E26Cu;
    {
        const bool branch_taken_0x34e26c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e26c) {
            ctx->pc = 0x34E270u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34E26Cu;
            // 0x34e270: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34E288u;
            goto label_34e288;
        }
    }
    ctx->pc = 0x34E274u;
label_34e274:
    // 0x34e274: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x34e274u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_34e278:
    // 0x34e278: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x34e278u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_34e27c:
    // 0x34e27c: 0x320f809  jalr        $t9
label_34e280:
    if (ctx->pc == 0x34E280u) {
        ctx->pc = 0x34E280u;
            // 0x34e280: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x34E284u;
        goto label_34e284;
    }
    ctx->pc = 0x34E27Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34E284u);
        ctx->pc = 0x34E280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E27Cu;
            // 0x34e280: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x34E284u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34E284u; }
            if (ctx->pc != 0x34E284u) { return; }
        }
        }
    }
    ctx->pc = 0x34E284u;
label_34e284:
    // 0x34e284: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34e284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34e288:
    // 0x34e288: 0xc075bf8  jal         func_1D6FE0
label_34e28c:
    if (ctx->pc == 0x34E28Cu) {
        ctx->pc = 0x34E28Cu;
            // 0x34e28c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34E290u;
        goto label_34e290;
    }
    ctx->pc = 0x34E288u;
    SET_GPR_U32(ctx, 31, 0x34E290u);
    ctx->pc = 0x34E28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E288u;
            // 0x34e28c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E290u; }
        if (ctx->pc != 0x34E290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E290u; }
        if (ctx->pc != 0x34E290u) { return; }
    }
    ctx->pc = 0x34E290u;
label_34e290:
    // 0x34e290: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x34e290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_34e294:
    // 0x34e294: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x34e294u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_34e298:
    // 0x34e298: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_34e29c:
    if (ctx->pc == 0x34E29Cu) {
        ctx->pc = 0x34E29Cu;
            // 0x34e29c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34E2A0u;
        goto label_34e2a0;
    }
    ctx->pc = 0x34E298u;
    {
        const bool branch_taken_0x34e298 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x34e298) {
            ctx->pc = 0x34E29Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34E298u;
            // 0x34e29c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34E2ACu;
            goto label_34e2ac;
        }
    }
    ctx->pc = 0x34E2A0u;
label_34e2a0:
    // 0x34e2a0: 0xc0400a8  jal         func_1002A0
label_34e2a4:
    if (ctx->pc == 0x34E2A4u) {
        ctx->pc = 0x34E2A4u;
            // 0x34e2a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34E2A8u;
        goto label_34e2a8;
    }
    ctx->pc = 0x34E2A0u;
    SET_GPR_U32(ctx, 31, 0x34E2A8u);
    ctx->pc = 0x34E2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E2A0u;
            // 0x34e2a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E2A8u; }
        if (ctx->pc != 0x34E2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E2A8u; }
        if (ctx->pc != 0x34E2A8u) { return; }
    }
    ctx->pc = 0x34E2A8u;
label_34e2a8:
    // 0x34e2a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x34e2a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34e2ac:
    // 0x34e2ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34e2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34e2b0:
    // 0x34e2b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34e2b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_34e2b4:
    // 0x34e2b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34e2b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_34e2b8:
    // 0x34e2b8: 0x3e00008  jr          $ra
label_34e2bc:
    if (ctx->pc == 0x34E2BCu) {
        ctx->pc = 0x34E2BCu;
            // 0x34e2bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x34E2C0u;
        goto label_34e2c0;
    }
    ctx->pc = 0x34E2B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E2B8u;
            // 0x34e2bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34E2C0u;
label_34e2c0:
    // 0x34e2c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34e2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_34e2c4:
    // 0x34e2c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34e2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_34e2c8:
    // 0x34e2c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34e2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_34e2cc:
    // 0x34e2cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34e2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_34e2d0:
    // 0x34e2d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34e2d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34e2d4:
    // 0x34e2d4: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
label_34e2d8:
    if (ctx->pc == 0x34E2D8u) {
        ctx->pc = 0x34E2D8u;
            // 0x34e2d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34E2DCu;
        goto label_34e2dc;
    }
    ctx->pc = 0x34E2D4u;
    {
        const bool branch_taken_0x34e2d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E2D4u;
            // 0x34e2d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e2d4) {
            ctx->pc = 0x34E358u;
            goto label_34e358;
        }
    }
    ctx->pc = 0x34E2DCu;
label_34e2dc:
    // 0x34e2dc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x34e2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_34e2e0:
    // 0x34e2e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34e2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_34e2e4:
    // 0x34e2e4: 0x24635b20  addiu       $v1, $v1, 0x5B20
    ctx->pc = 0x34e2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23328));
label_34e2e8:
    // 0x34e2e8: 0x24425b60  addiu       $v0, $v0, 0x5B60
    ctx->pc = 0x34e2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23392));
label_34e2ec:
    // 0x34e2ec: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x34e2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_34e2f0:
    // 0x34e2f0: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x34e2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
label_34e2f4:
    // 0x34e2f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x34e2f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_34e2f8:
    // 0x34e2f8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x34e2f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_34e2fc:
    // 0x34e2fc: 0x320f809  jalr        $t9
label_34e300:
    if (ctx->pc == 0x34E300u) {
        ctx->pc = 0x34E304u;
        goto label_34e304;
    }
    ctx->pc = 0x34E2FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34E304u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x34E304u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34E304u; }
            if (ctx->pc != 0x34E304u) { return; }
        }
        }
    }
    ctx->pc = 0x34E304u;
label_34e304:
    // 0x34e304: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x34e304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_34e308:
    // 0x34e308: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_34e30c:
    if (ctx->pc == 0x34E30Cu) {
        ctx->pc = 0x34E310u;
        goto label_34e310;
    }
    ctx->pc = 0x34E308u;
    {
        const bool branch_taken_0x34e308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e308) {
            ctx->pc = 0x34E31Cu;
            goto label_34e31c;
        }
    }
    ctx->pc = 0x34E310u;
label_34e310:
    // 0x34e310: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34e310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_34e314:
    // 0x34e314: 0x24425b08  addiu       $v0, $v0, 0x5B08
    ctx->pc = 0x34e314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23304));
label_34e318:
    // 0x34e318: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x34e318u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
label_34e31c:
    // 0x34e31c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_34e320:
    if (ctx->pc == 0x34E320u) {
        ctx->pc = 0x34E320u;
            // 0x34e320: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x34E324u;
        goto label_34e324;
    }
    ctx->pc = 0x34E31Cu;
    {
        const bool branch_taken_0x34e31c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e31c) {
            ctx->pc = 0x34E320u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34E31Cu;
            // 0x34e320: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34E344u;
            goto label_34e344;
        }
    }
    ctx->pc = 0x34E324u;
label_34e324:
    // 0x34e324: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34e324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_34e328:
    // 0x34e328: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x34e328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_34e32c:
    // 0x34e32c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_34e330:
    if (ctx->pc == 0x34E330u) {
        ctx->pc = 0x34E330u;
            // 0x34e330: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x34E334u;
        goto label_34e334;
    }
    ctx->pc = 0x34E32Cu;
    {
        const bool branch_taken_0x34e32c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E32Cu;
            // 0x34e330: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e32c) {
            ctx->pc = 0x34E340u;
            goto label_34e340;
        }
    }
    ctx->pc = 0x34E334u;
label_34e334:
    // 0x34e334: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34e334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_34e338:
    // 0x34e338: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x34e338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_34e33c:
    // 0x34e33c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x34e33cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_34e340:
    // 0x34e340: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x34e340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_34e344:
    // 0x34e344: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x34e344u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_34e348:
    // 0x34e348: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_34e34c:
    if (ctx->pc == 0x34E34Cu) {
        ctx->pc = 0x34E34Cu;
            // 0x34e34c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34E350u;
        goto label_34e350;
    }
    ctx->pc = 0x34E348u;
    {
        const bool branch_taken_0x34e348 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x34e348) {
            ctx->pc = 0x34E34Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34E348u;
            // 0x34e34c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34E35Cu;
            goto label_34e35c;
        }
    }
    ctx->pc = 0x34E350u;
label_34e350:
    // 0x34e350: 0xc0400a8  jal         func_1002A0
label_34e354:
    if (ctx->pc == 0x34E354u) {
        ctx->pc = 0x34E354u;
            // 0x34e354: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34E358u;
        goto label_34e358;
    }
    ctx->pc = 0x34E350u;
    SET_GPR_U32(ctx, 31, 0x34E358u);
    ctx->pc = 0x34E354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E350u;
            // 0x34e354: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E358u; }
        if (ctx->pc != 0x34E358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E358u; }
        if (ctx->pc != 0x34E358u) { return; }
    }
    ctx->pc = 0x34E358u;
label_34e358:
    // 0x34e358: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x34e358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34e35c:
    // 0x34e35c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34e35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34e360:
    // 0x34e360: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34e360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_34e364:
    // 0x34e364: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34e364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_34e368:
    // 0x34e368: 0x3e00008  jr          $ra
label_34e36c:
    if (ctx->pc == 0x34E36Cu) {
        ctx->pc = 0x34E36Cu;
            // 0x34e36c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x34E370u;
        goto label_34e370;
    }
    ctx->pc = 0x34E368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E368u;
            // 0x34e36c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34E370u;
label_34e370:
    // 0x34e370: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x34e370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_34e374:
    // 0x34e374: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x34e374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_34e378:
    // 0x34e378: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x34e378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_34e37c:
    // 0x34e37c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x34e37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_34e380:
    // 0x34e380: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x34e380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_34e384:
    // 0x34e384: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x34e384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_34e388:
    // 0x34e388: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x34e388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_34e38c:
    // 0x34e38c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x34e38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_34e390:
    // 0x34e390: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34e390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_34e394:
    // 0x34e394: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34e394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_34e398:
    // 0x34e398: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34e398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_34e39c:
    // 0x34e39c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34e39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_34e3a0:
    // 0x34e3a0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x34e3a0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_34e3a4:
    // 0x34e3a4: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_34e3a8:
    if (ctx->pc == 0x34E3A8u) {
        ctx->pc = 0x34E3A8u;
            // 0x34e3a8: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34E3ACu;
        goto label_34e3ac;
    }
    ctx->pc = 0x34E3A4u;
    {
        const bool branch_taken_0x34e3a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x34E3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E3A4u;
            // 0x34e3a8: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e3a4) {
            ctx->pc = 0x34E3F4u;
            goto label_34e3f4;
        }
    }
    ctx->pc = 0x34E3ACu;
label_34e3ac:
    // 0x34e3ac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34e3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_34e3b0:
    // 0x34e3b0: 0x50a3005c  beql        $a1, $v1, . + 4 + (0x5C << 2)
label_34e3b4:
    if (ctx->pc == 0x34E3B4u) {
        ctx->pc = 0x34E3B4u;
            // 0x34e3b4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x34E3B8u;
        goto label_34e3b8;
    }
    ctx->pc = 0x34E3B0u;
    {
        const bool branch_taken_0x34e3b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x34e3b0) {
            ctx->pc = 0x34E3B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34E3B0u;
            // 0x34e3b4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34E524u;
            goto label_34e524;
        }
    }
    ctx->pc = 0x34E3B8u;
label_34e3b8:
    // 0x34e3b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34e3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_34e3bc:
    // 0x34e3bc: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_34e3c0:
    if (ctx->pc == 0x34E3C0u) {
        ctx->pc = 0x34E3C4u;
        goto label_34e3c4;
    }
    ctx->pc = 0x34E3BCu;
    {
        const bool branch_taken_0x34e3bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x34e3bc) {
            ctx->pc = 0x34E3CCu;
            goto label_34e3cc;
        }
    }
    ctx->pc = 0x34E3C4u;
label_34e3c4:
    // 0x34e3c4: 0x10000056  b           . + 4 + (0x56 << 2)
label_34e3c8:
    if (ctx->pc == 0x34E3C8u) {
        ctx->pc = 0x34E3CCu;
        goto label_34e3cc;
    }
    ctx->pc = 0x34E3C4u;
    {
        const bool branch_taken_0x34e3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e3c4) {
            ctx->pc = 0x34E520u;
            goto label_34e520;
        }
    }
    ctx->pc = 0x34E3CCu;
label_34e3cc:
    // 0x34e3cc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x34e3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_34e3d0:
    // 0x34e3d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x34e3d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_34e3d4:
    // 0x34e3d4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x34e3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_34e3d8:
    // 0x34e3d8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x34e3d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_34e3dc:
    // 0x34e3dc: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x34e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_34e3e0:
    // 0x34e3e0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x34e3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_34e3e4:
    // 0x34e3e4: 0x320f809  jalr        $t9
label_34e3e8:
    if (ctx->pc == 0x34E3E8u) {
        ctx->pc = 0x34E3E8u;
            // 0x34e3e8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x34E3ECu;
        goto label_34e3ec;
    }
    ctx->pc = 0x34E3E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34E3ECu);
        ctx->pc = 0x34E3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E3E4u;
            // 0x34e3e8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x34E3ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34E3ECu; }
            if (ctx->pc != 0x34E3ECu) { return; }
        }
        }
    }
    ctx->pc = 0x34E3ECu;
label_34e3ec:
    // 0x34e3ec: 0x1000004c  b           . + 4 + (0x4C << 2)
label_34e3f0:
    if (ctx->pc == 0x34E3F0u) {
        ctx->pc = 0x34E3F4u;
        goto label_34e3f4;
    }
    ctx->pc = 0x34E3ECu;
    {
        const bool branch_taken_0x34e3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e3ec) {
            ctx->pc = 0x34E520u;
            goto label_34e520;
        }
    }
    ctx->pc = 0x34E3F4u;
label_34e3f4:
    // 0x34e3f4: 0x8eb60070  lw          $s6, 0x70($s5)
    ctx->pc = 0x34e3f4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_34e3f8:
    // 0x34e3f8: 0x12c00049  beqz        $s6, . + 4 + (0x49 << 2)
label_34e3fc:
    if (ctx->pc == 0x34E3FCu) {
        ctx->pc = 0x34E400u;
        goto label_34e400;
    }
    ctx->pc = 0x34E3F8u;
    {
        const bool branch_taken_0x34e3f8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e3f8) {
            ctx->pc = 0x34E520u;
            goto label_34e520;
        }
    }
    ctx->pc = 0x34E400u;
label_34e400:
    // 0x34e400: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x34e400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_34e404:
    // 0x34e404: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x34e404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_34e408:
    // 0x34e408: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x34e408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_34e40c:
    // 0x34e40c: 0x26b30084  addiu       $s3, $s5, 0x84
    ctx->pc = 0x34e40cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_34e410:
    // 0x34e410: 0x8c77e378  lw          $s7, -0x1C88($v1)
    ctx->pc = 0x34e410u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_34e414:
    // 0x34e414: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x34e414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_34e418:
    // 0x34e418: 0x8c940130  lw          $s4, 0x130($a0)
    ctx->pc = 0x34e418u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_34e41c:
    // 0x34e41c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x34e41cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_34e420:
    // 0x34e420: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x34e420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_34e424:
    // 0x34e424: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x34e424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_34e428:
    // 0x34e428: 0x8ea40088  lw          $a0, 0x88($s5)
    ctx->pc = 0x34e428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_34e42c:
    // 0x34e42c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x34e42cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_34e430:
    // 0x34e430: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x34e430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_34e434:
    // 0x34e434: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x34e434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_34e438:
    // 0x34e438: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34e438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_34e43c:
    // 0x34e43c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34e43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34e440:
    // 0x34e440: 0xc04e738  jal         func_139CE0
label_34e444:
    if (ctx->pc == 0x34E444u) {
        ctx->pc = 0x34E444u;
            // 0x34e444: 0x245e0010  addiu       $fp, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x34E448u;
        goto label_34e448;
    }
    ctx->pc = 0x34E440u;
    SET_GPR_U32(ctx, 31, 0x34E448u);
    ctx->pc = 0x34E444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E440u;
            // 0x34e444: 0x245e0010  addiu       $fp, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E448u; }
        if (ctx->pc != 0x34E448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E448u; }
        if (ctx->pc != 0x34E448u) { return; }
    }
    ctx->pc = 0x34E448u;
label_34e448:
    // 0x34e448: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x34e448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_34e44c:
    // 0x34e44c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x34e44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_34e450:
    // 0x34e450: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x34e450u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_34e454:
    // 0x34e454: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x34e454u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34e458:
    // 0x34e458: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x34e458u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_34e45c:
    // 0x34e45c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x34e45cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34e460:
    // 0x34e460: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x34e460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_34e464:
    // 0x34e464: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x34e464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_34e468:
    // 0x34e468: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x34e468u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_34e46c:
    // 0x34e46c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x34e46cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_34e470:
    // 0x34e470: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x34e470u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_34e474:
    // 0x34e474: 0x27a900b0  addiu       $t1, $sp, 0xB0
    ctx->pc = 0x34e474u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_34e478:
    // 0x34e478: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x34e478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_34e47c:
    // 0x34e47c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x34e47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34e480:
    // 0x34e480: 0xc0d3b1c  jal         func_34EC70
label_34e484:
    if (ctx->pc == 0x34E484u) {
        ctx->pc = 0x34E484u;
            // 0x34e484: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34E488u;
        goto label_34e488;
    }
    ctx->pc = 0x34E480u;
    SET_GPR_U32(ctx, 31, 0x34E488u);
    ctx->pc = 0x34E484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E480u;
            // 0x34e484: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34EC70u;
    if (runtime->hasFunction(0x34EC70u)) {
        auto targetFn = runtime->lookupFunction(0x34EC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E488u; }
        if (ctx->pc != 0x34E488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034EC70_0x34ec70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E488u; }
        if (ctx->pc != 0x34E488u) { return; }
    }
    ctx->pc = 0x34E488u;
label_34e488:
    // 0x34e488: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_34e48c:
    if (ctx->pc == 0x34E48Cu) {
        ctx->pc = 0x34E490u;
        goto label_34e490;
    }
    ctx->pc = 0x34E488u;
    {
        const bool branch_taken_0x34e488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e488) {
            ctx->pc = 0x34E4E0u;
            goto label_34e4e0;
        }
    }
    ctx->pc = 0x34E490u;
label_34e490:
    // 0x34e490: 0x8eb0008c  lw          $s0, 0x8C($s5)
    ctx->pc = 0x34e490u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
label_34e494:
    // 0x34e494: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x34e494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_34e498:
    // 0x34e498: 0x86030066  lh          $v1, 0x66($s0)
    ctx->pc = 0x34e498u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
label_34e49c:
    // 0x34e49c: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x34e49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_34e4a0:
    // 0x34e4a0: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x34e4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_34e4a4:
    // 0x34e4a4: 0xc04cce8  jal         func_1333A0
label_34e4a8:
    if (ctx->pc == 0x34E4A8u) {
        ctx->pc = 0x34E4A8u;
            // 0x34e4a8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x34E4ACu;
        goto label_34e4ac;
    }
    ctx->pc = 0x34E4A4u;
    SET_GPR_U32(ctx, 31, 0x34E4ACu);
    ctx->pc = 0x34E4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E4A4u;
            // 0x34e4a8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E4ACu; }
        if (ctx->pc != 0x34E4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E4ACu; }
        if (ctx->pc != 0x34E4ACu) { return; }
    }
    ctx->pc = 0x34E4ACu;
label_34e4ac:
    // 0x34e4ac: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x34e4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_34e4b0:
    // 0x34e4b0: 0x86050066  lh          $a1, 0x66($s0)
    ctx->pc = 0x34e4b0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
label_34e4b4:
    // 0x34e4b4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x34e4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_34e4b8:
    // 0x34e4b8: 0x86040064  lh          $a0, 0x64($s0)
    ctx->pc = 0x34e4b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
label_34e4bc:
    // 0x34e4bc: 0x9063007e  lbu         $v1, 0x7E($v1)
    ctx->pc = 0x34e4bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 126)));
label_34e4c0:
    // 0x34e4c0: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x34e4c0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_34e4c4:
    // 0x34e4c4: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x34e4c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_34e4c8:
    // 0x34e4c8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34e4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_34e4cc:
    // 0x34e4cc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x34e4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_34e4d0:
    // 0x34e4d0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x34e4d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_34e4d4:
    // 0x34e4d4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x34e4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_34e4d8:
    // 0x34e4d8: 0xa6030066  sh          $v1, 0x66($s0)
    ctx->pc = 0x34e4d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 102), (uint16_t)GPR_U32(ctx, 3));
label_34e4dc:
    // 0x34e4dc: 0x0  nop
    ctx->pc = 0x34e4dcu;
    // NOP
label_34e4e0:
    // 0x34e4e0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x34e4e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_34e4e4:
    // 0x34e4e4: 0x256182b  sltu        $v1, $s2, $s6
    ctx->pc = 0x34e4e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_34e4e8:
    // 0x34e4e8: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
label_34e4ec:
    if (ctx->pc == 0x34E4ECu) {
        ctx->pc = 0x34E4ECu;
            // 0x34e4ec: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x34E4F0u;
        goto label_34e4f0;
    }
    ctx->pc = 0x34E4E8u;
    {
        const bool branch_taken_0x34e4e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34E4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E4E8u;
            // 0x34e4ec: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e4e8) {
            ctx->pc = 0x34E460u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34e460;
        }
    }
    ctx->pc = 0x34E4F0u;
label_34e4f0:
    // 0x34e4f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x34e4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_34e4f4:
    // 0x34e4f4: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x34e4f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_34e4f8:
    // 0x34e4f8: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_34e4fc:
    if (ctx->pc == 0x34E4FCu) {
        ctx->pc = 0x34E4FCu;
            // 0x34e4fc: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x34E500u;
        goto label_34e500;
    }
    ctx->pc = 0x34E4F8u;
    {
        const bool branch_taken_0x34e4f8 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x34E4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E4F8u;
            // 0x34e4fc: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e4f8) {
            ctx->pc = 0x34E520u;
            goto label_34e520;
        }
    }
    ctx->pc = 0x34E500u;
label_34e500:
    // 0x34e500: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x34e500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_34e504:
    // 0x34e504: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x34e504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_34e508:
    // 0x34e508: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x34e508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_34e50c:
    // 0x34e50c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x34e50cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_34e510:
    // 0x34e510: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x34e510u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_34e514:
    // 0x34e514: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34e514u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34e518:
    // 0x34e518: 0xc055d28  jal         func_1574A0
label_34e51c:
    if (ctx->pc == 0x34E51Cu) {
        ctx->pc = 0x34E51Cu;
            // 0x34e51c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34E520u;
        goto label_34e520;
    }
    ctx->pc = 0x34E518u;
    SET_GPR_U32(ctx, 31, 0x34E520u);
    ctx->pc = 0x34E51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E518u;
            // 0x34e51c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E520u; }
        if (ctx->pc != 0x34E520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E520u; }
        if (ctx->pc != 0x34E520u) { return; }
    }
    ctx->pc = 0x34E520u;
label_34e520:
    // 0x34e520: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x34e520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_34e524:
    // 0x34e524: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x34e524u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_34e528:
    // 0x34e528: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x34e528u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_34e52c:
    // 0x34e52c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x34e52cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_34e530:
    // 0x34e530: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x34e530u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_34e534:
    // 0x34e534: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x34e534u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_34e538:
    // 0x34e538: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34e538u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_34e53c:
    // 0x34e53c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34e53cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_34e540:
    // 0x34e540: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34e540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_34e544:
    // 0x34e544: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34e544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_34e548:
    // 0x34e548: 0x3e00008  jr          $ra
label_34e54c:
    if (ctx->pc == 0x34E54Cu) {
        ctx->pc = 0x34E54Cu;
            // 0x34e54c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x34E550u;
        goto label_34e550;
    }
    ctx->pc = 0x34E548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E548u;
            // 0x34e54c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34E550u;
label_34e550:
    // 0x34e550: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34e550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_34e554:
    // 0x34e554: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x34e554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_34e558:
    // 0x34e558: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x34e558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_34e55c:
    // 0x34e55c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34e55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_34e560:
    // 0x34e560: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34e560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_34e564:
    // 0x34e564: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34e564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_34e568:
    // 0x34e568: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34e568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_34e56c:
    // 0x34e56c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x34e56cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_34e570:
    // 0x34e570: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_34e574:
    if (ctx->pc == 0x34E574u) {
        ctx->pc = 0x34E574u;
            // 0x34e574: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34E578u;
        goto label_34e578;
    }
    ctx->pc = 0x34E570u;
    {
        const bool branch_taken_0x34e570 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x34E574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E570u;
            // 0x34e574: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e570) {
            ctx->pc = 0x34E5A4u;
            goto label_34e5a4;
        }
    }
    ctx->pc = 0x34E578u;
label_34e578:
    // 0x34e578: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34e578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_34e57c:
    // 0x34e57c: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_34e580:
    if (ctx->pc == 0x34E580u) {
        ctx->pc = 0x34E580u;
            // 0x34e580: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x34E584u;
        goto label_34e584;
    }
    ctx->pc = 0x34E57Cu;
    {
        const bool branch_taken_0x34e57c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x34e57c) {
            ctx->pc = 0x34E580u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34E57Cu;
            // 0x34e580: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34E598u;
            goto label_34e598;
        }
    }
    ctx->pc = 0x34E584u;
label_34e584:
    // 0x34e584: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34e584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_34e588:
    // 0x34e588: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_34e58c:
    if (ctx->pc == 0x34E58Cu) {
        ctx->pc = 0x34E590u;
        goto label_34e590;
    }
    ctx->pc = 0x34E588u;
    {
        const bool branch_taken_0x34e588 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x34e588) {
            ctx->pc = 0x34E5D8u;
            goto label_34e5d8;
        }
    }
    ctx->pc = 0x34E590u;
label_34e590:
    // 0x34e590: 0x10000011  b           . + 4 + (0x11 << 2)
label_34e594:
    if (ctx->pc == 0x34E594u) {
        ctx->pc = 0x34E598u;
        goto label_34e598;
    }
    ctx->pc = 0x34E590u;
    {
        const bool branch_taken_0x34e590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e590) {
            ctx->pc = 0x34E5D8u;
            goto label_34e5d8;
        }
    }
    ctx->pc = 0x34E598u;
label_34e598:
    // 0x34e598: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x34e598u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_34e59c:
    // 0x34e59c: 0x320f809  jalr        $t9
label_34e5a0:
    if (ctx->pc == 0x34E5A0u) {
        ctx->pc = 0x34E5A4u;
        goto label_34e5a4;
    }
    ctx->pc = 0x34E59Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34E5A4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x34E5A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34E5A4u; }
            if (ctx->pc != 0x34E5A4u) { return; }
        }
        }
    }
    ctx->pc = 0x34E5A4u;
label_34e5a4:
    // 0x34e5a4: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x34e5a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_34e5a8:
    // 0x34e5a8: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_34e5ac:
    if (ctx->pc == 0x34E5ACu) {
        ctx->pc = 0x34E5B0u;
        goto label_34e5b0;
    }
    ctx->pc = 0x34E5A8u;
    {
        const bool branch_taken_0x34e5a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e5a8) {
            ctx->pc = 0x34E5D8u;
            goto label_34e5d8;
        }
    }
    ctx->pc = 0x34E5B0u;
label_34e5b0:
    // 0x34e5b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x34e5b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34e5b4:
    // 0x34e5b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x34e5b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34e5b8:
    // 0x34e5b8: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x34e5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_34e5bc:
    // 0x34e5bc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x34e5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_34e5c0:
    // 0x34e5c0: 0xc0d3bb4  jal         func_34EED0
label_34e5c4:
    if (ctx->pc == 0x34E5C4u) {
        ctx->pc = 0x34E5C4u;
            // 0x34e5c4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x34E5C8u;
        goto label_34e5c8;
    }
    ctx->pc = 0x34E5C0u;
    SET_GPR_U32(ctx, 31, 0x34E5C8u);
    ctx->pc = 0x34E5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E5C0u;
            // 0x34e5c4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34EED0u;
    if (runtime->hasFunction(0x34EED0u)) {
        auto targetFn = runtime->lookupFunction(0x34EED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E5C8u; }
        if (ctx->pc != 0x34E5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034EED0_0x34eed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E5C8u; }
        if (ctx->pc != 0x34E5C8u) { return; }
    }
    ctx->pc = 0x34E5C8u;
label_34e5c8:
    // 0x34e5c8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x34e5c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_34e5cc:
    // 0x34e5cc: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x34e5ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_34e5d0:
    // 0x34e5d0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_34e5d4:
    if (ctx->pc == 0x34E5D4u) {
        ctx->pc = 0x34E5D4u;
            // 0x34e5d4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x34E5D8u;
        goto label_34e5d8;
    }
    ctx->pc = 0x34E5D0u;
    {
        const bool branch_taken_0x34e5d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34E5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E5D0u;
            // 0x34e5d4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e5d0) {
            ctx->pc = 0x34E5B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34e5b8;
        }
    }
    ctx->pc = 0x34E5D8u;
label_34e5d8:
    // 0x34e5d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34e5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_34e5dc:
    // 0x34e5dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34e5dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_34e5e0:
    // 0x34e5e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34e5e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_34e5e4:
    // 0x34e5e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34e5e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_34e5e8:
    // 0x34e5e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34e5e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_34e5ec:
    // 0x34e5ec: 0x3e00008  jr          $ra
label_34e5f0:
    if (ctx->pc == 0x34E5F0u) {
        ctx->pc = 0x34E5F0u;
            // 0x34e5f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x34E5F4u;
        goto label_34e5f4;
    }
    ctx->pc = 0x34E5ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E5ECu;
            // 0x34e5f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34E5F4u;
label_34e5f4:
    // 0x34e5f4: 0x0  nop
    ctx->pc = 0x34e5f4u;
    // NOP
label_34e5f8:
    // 0x34e5f8: 0x0  nop
    ctx->pc = 0x34e5f8u;
    // NOP
label_34e5fc:
    // 0x34e5fc: 0x0  nop
    ctx->pc = 0x34e5fcu;
    // NOP
label_34e600:
    // 0x34e600: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x34e600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_34e604:
    // 0x34e604: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x34e604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_34e608:
    // 0x34e608: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x34e608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_34e60c:
    // 0x34e60c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34e60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_34e610:
    // 0x34e610: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34e610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_34e614:
    // 0x34e614: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34e614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_34e618:
    // 0x34e618: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34e618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_34e61c:
    // 0x34e61c: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x34e61cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_34e620:
    // 0x34e620: 0x1220003f  beqz        $s1, . + 4 + (0x3F << 2)
label_34e624:
    if (ctx->pc == 0x34E624u) {
        ctx->pc = 0x34E624u;
            // 0x34e624: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34E628u;
        goto label_34e628;
    }
    ctx->pc = 0x34E620u;
    {
        const bool branch_taken_0x34e620 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E620u;
            // 0x34e624: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e620) {
            ctx->pc = 0x34E720u;
            goto label_34e720;
        }
    }
    ctx->pc = 0x34E628u;
label_34e628:
    // 0x34e628: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x34e628u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34e62c:
    // 0x34e62c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x34e62cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34e630:
    // 0x34e630: 0x8e850074  lw          $a1, 0x74($s4)
    ctx->pc = 0x34e630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_34e634:
    // 0x34e634: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x34e634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_34e638:
    // 0x34e638: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x34e638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_34e63c:
    // 0x34e63c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x34e63cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_34e640:
    // 0x34e640: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x34e640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_34e644:
    // 0x34e644: 0x24631650  addiu       $v1, $v1, 0x1650
    ctx->pc = 0x34e644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5712));
label_34e648:
    // 0x34e648: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x34e648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_34e64c:
    // 0x34e64c: 0x3444f000  ori         $a0, $v0, 0xF000
    ctx->pc = 0x34e64cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_34e650:
    // 0x34e650: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x34e650u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_34e654:
    // 0x34e654: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x34e654u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_34e658:
    // 0x34e658: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x34e658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_34e65c:
    // 0x34e65c: 0x244234f0  addiu       $v0, $v0, 0x34F0
    ctx->pc = 0x34e65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13552));
label_34e660:
    // 0x34e660: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x34e660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_34e664:
    // 0x34e664: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x34e664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34e668:
    // 0x34e668: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x34e668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
label_34e66c:
    // 0x34e66c: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x34e66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34e670:
    // 0x34e670: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x34e670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
label_34e674:
    // 0x34e674: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x34e674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34e678:
    // 0x34e678: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x34e678u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_34e67c:
    // 0x34e67c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x34e67cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_34e680:
    // 0x34e680: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x34e680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
label_34e684:
    // 0x34e684: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x34e684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34e688:
    // 0x34e688: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x34e688u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_34e68c:
    // 0x34e68c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x34e68cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_34e690:
    // 0x34e690: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x34e690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
label_34e694:
    // 0x34e694: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x34e694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_34e698:
    // 0x34e698: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x34e698u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_34e69c:
    // 0x34e69c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x34e69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_34e6a0:
    // 0x34e6a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x34e6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_34e6a4:
    // 0x34e6a4: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x34e6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
label_34e6a8:
    // 0x34e6a8: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x34e6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_34e6ac:
    // 0x34e6ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34e6acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_34e6b0:
    // 0x34e6b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34e6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_34e6b4:
    // 0x34e6b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34e6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34e6b8:
    // 0x34e6b8: 0xa20200a1  sb          $v0, 0xA1($s0)
    ctx->pc = 0x34e6b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 161), (uint8_t)GPR_U32(ctx, 2));
label_34e6bc:
    // 0x34e6bc: 0x820300a2  lb          $v1, 0xA2($s0)
    ctx->pc = 0x34e6bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 162)));
label_34e6c0:
    // 0x34e6c0: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x34e6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_34e6c4:
    // 0x34e6c4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x34e6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_34e6c8:
    // 0x34e6c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34e6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_34e6cc:
    // 0x34e6cc: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x34e6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_34e6d0:
    // 0x34e6d0: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x34e6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_34e6d4:
    // 0x34e6d4: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x34e6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_34e6d8:
    // 0x34e6d8: 0xc04cbd8  jal         func_132F60
label_34e6dc:
    if (ctx->pc == 0x34E6DCu) {
        ctx->pc = 0x34E6DCu;
            // 0x34e6dc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x34E6E0u;
        goto label_34e6e0;
    }
    ctx->pc = 0x34E6D8u;
    SET_GPR_U32(ctx, 31, 0x34E6E0u);
    ctx->pc = 0x34E6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E6D8u;
            // 0x34e6dc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E6E0u; }
        if (ctx->pc != 0x34E6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E6E0u; }
        if (ctx->pc != 0x34E6E0u) { return; }
    }
    ctx->pc = 0x34E6E0u;
label_34e6e0:
    // 0x34e6e0: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x34e6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_34e6e4:
    // 0x34e6e4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x34e6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_34e6e8:
    // 0x34e6e8: 0x8c860e84  lw          $a2, 0xE84($a0)
    ctx->pc = 0x34e6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3716)));
label_34e6ec:
    // 0x34e6ec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x34e6ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_34e6f0:
    // 0x34e6f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x34e6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_34e6f4:
    // 0x34e6f4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x34e6f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_34e6f8:
    // 0x34e6f8: 0xae06005c  sw          $a2, 0x5C($s0)
    ctx->pc = 0x34e6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 6));
label_34e6fc:
    // 0x34e6fc: 0x271202b  sltu        $a0, $s3, $s1
    ctx->pc = 0x34e6fcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_34e700:
    // 0x34e700: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x34e700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_34e704:
    // 0x34e704: 0x8c630780  lw          $v1, 0x780($v1)
    ctx->pc = 0x34e704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1920)));
label_34e708:
    // 0x34e708: 0xa20300a3  sb          $v1, 0xA3($s0)
    ctx->pc = 0x34e708u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 163), (uint8_t)GPR_U32(ctx, 3));
label_34e70c:
    // 0x34e70c: 0xae050080  sw          $a1, 0x80($s0)
    ctx->pc = 0x34e70cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 5));
label_34e710:
    // 0x34e710: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x34e710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_34e714:
    // 0x34e714: 0x1480ffc6  bnez        $a0, . + 4 + (-0x3A << 2)
label_34e718:
    if (ctx->pc == 0x34E718u) {
        ctx->pc = 0x34E718u;
            // 0x34e718: 0xae000090  sw          $zero, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
        ctx->pc = 0x34E71Cu;
        goto label_34e71c;
    }
    ctx->pc = 0x34E714u;
    {
        const bool branch_taken_0x34e714 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x34E718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E714u;
            // 0x34e718: 0xae000090  sw          $zero, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e714) {
            ctx->pc = 0x34E630u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34e630;
        }
    }
    ctx->pc = 0x34E71Cu;
label_34e71c:
    // 0x34e71c: 0x0  nop
    ctx->pc = 0x34e71cu;
    // NOP
label_34e720:
    // 0x34e720: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x34e720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_34e724:
    // 0x34e724: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x34e724u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_34e728:
    // 0x34e728: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34e728u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_34e72c:
    // 0x34e72c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34e72cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_34e730:
    // 0x34e730: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34e730u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_34e734:
    // 0x34e734: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34e734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_34e738:
    // 0x34e738: 0x3e00008  jr          $ra
label_34e73c:
    if (ctx->pc == 0x34E73Cu) {
        ctx->pc = 0x34E73Cu;
            // 0x34e73c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x34E740u;
        goto label_fallthrough_0x34e738;
    }
    ctx->pc = 0x34E738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E738u;
            // 0x34e73c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x34e738:
    ctx->pc = 0x34E740u;
}
