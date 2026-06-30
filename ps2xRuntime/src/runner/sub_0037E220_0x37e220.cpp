#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037E220
// Address: 0x37e220 - 0x37e710
void sub_0037E220_0x37e220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037E220_0x37e220");
#endif

    switch (ctx->pc) {
        case 0x37e220u: goto label_37e220;
        case 0x37e224u: goto label_37e224;
        case 0x37e228u: goto label_37e228;
        case 0x37e22cu: goto label_37e22c;
        case 0x37e230u: goto label_37e230;
        case 0x37e234u: goto label_37e234;
        case 0x37e238u: goto label_37e238;
        case 0x37e23cu: goto label_37e23c;
        case 0x37e240u: goto label_37e240;
        case 0x37e244u: goto label_37e244;
        case 0x37e248u: goto label_37e248;
        case 0x37e24cu: goto label_37e24c;
        case 0x37e250u: goto label_37e250;
        case 0x37e254u: goto label_37e254;
        case 0x37e258u: goto label_37e258;
        case 0x37e25cu: goto label_37e25c;
        case 0x37e260u: goto label_37e260;
        case 0x37e264u: goto label_37e264;
        case 0x37e268u: goto label_37e268;
        case 0x37e26cu: goto label_37e26c;
        case 0x37e270u: goto label_37e270;
        case 0x37e274u: goto label_37e274;
        case 0x37e278u: goto label_37e278;
        case 0x37e27cu: goto label_37e27c;
        case 0x37e280u: goto label_37e280;
        case 0x37e284u: goto label_37e284;
        case 0x37e288u: goto label_37e288;
        case 0x37e28cu: goto label_37e28c;
        case 0x37e290u: goto label_37e290;
        case 0x37e294u: goto label_37e294;
        case 0x37e298u: goto label_37e298;
        case 0x37e29cu: goto label_37e29c;
        case 0x37e2a0u: goto label_37e2a0;
        case 0x37e2a4u: goto label_37e2a4;
        case 0x37e2a8u: goto label_37e2a8;
        case 0x37e2acu: goto label_37e2ac;
        case 0x37e2b0u: goto label_37e2b0;
        case 0x37e2b4u: goto label_37e2b4;
        case 0x37e2b8u: goto label_37e2b8;
        case 0x37e2bcu: goto label_37e2bc;
        case 0x37e2c0u: goto label_37e2c0;
        case 0x37e2c4u: goto label_37e2c4;
        case 0x37e2c8u: goto label_37e2c8;
        case 0x37e2ccu: goto label_37e2cc;
        case 0x37e2d0u: goto label_37e2d0;
        case 0x37e2d4u: goto label_37e2d4;
        case 0x37e2d8u: goto label_37e2d8;
        case 0x37e2dcu: goto label_37e2dc;
        case 0x37e2e0u: goto label_37e2e0;
        case 0x37e2e4u: goto label_37e2e4;
        case 0x37e2e8u: goto label_37e2e8;
        case 0x37e2ecu: goto label_37e2ec;
        case 0x37e2f0u: goto label_37e2f0;
        case 0x37e2f4u: goto label_37e2f4;
        case 0x37e2f8u: goto label_37e2f8;
        case 0x37e2fcu: goto label_37e2fc;
        case 0x37e300u: goto label_37e300;
        case 0x37e304u: goto label_37e304;
        case 0x37e308u: goto label_37e308;
        case 0x37e30cu: goto label_37e30c;
        case 0x37e310u: goto label_37e310;
        case 0x37e314u: goto label_37e314;
        case 0x37e318u: goto label_37e318;
        case 0x37e31cu: goto label_37e31c;
        case 0x37e320u: goto label_37e320;
        case 0x37e324u: goto label_37e324;
        case 0x37e328u: goto label_37e328;
        case 0x37e32cu: goto label_37e32c;
        case 0x37e330u: goto label_37e330;
        case 0x37e334u: goto label_37e334;
        case 0x37e338u: goto label_37e338;
        case 0x37e33cu: goto label_37e33c;
        case 0x37e340u: goto label_37e340;
        case 0x37e344u: goto label_37e344;
        case 0x37e348u: goto label_37e348;
        case 0x37e34cu: goto label_37e34c;
        case 0x37e350u: goto label_37e350;
        case 0x37e354u: goto label_37e354;
        case 0x37e358u: goto label_37e358;
        case 0x37e35cu: goto label_37e35c;
        case 0x37e360u: goto label_37e360;
        case 0x37e364u: goto label_37e364;
        case 0x37e368u: goto label_37e368;
        case 0x37e36cu: goto label_37e36c;
        case 0x37e370u: goto label_37e370;
        case 0x37e374u: goto label_37e374;
        case 0x37e378u: goto label_37e378;
        case 0x37e37cu: goto label_37e37c;
        case 0x37e380u: goto label_37e380;
        case 0x37e384u: goto label_37e384;
        case 0x37e388u: goto label_37e388;
        case 0x37e38cu: goto label_37e38c;
        case 0x37e390u: goto label_37e390;
        case 0x37e394u: goto label_37e394;
        case 0x37e398u: goto label_37e398;
        case 0x37e39cu: goto label_37e39c;
        case 0x37e3a0u: goto label_37e3a0;
        case 0x37e3a4u: goto label_37e3a4;
        case 0x37e3a8u: goto label_37e3a8;
        case 0x37e3acu: goto label_37e3ac;
        case 0x37e3b0u: goto label_37e3b0;
        case 0x37e3b4u: goto label_37e3b4;
        case 0x37e3b8u: goto label_37e3b8;
        case 0x37e3bcu: goto label_37e3bc;
        case 0x37e3c0u: goto label_37e3c0;
        case 0x37e3c4u: goto label_37e3c4;
        case 0x37e3c8u: goto label_37e3c8;
        case 0x37e3ccu: goto label_37e3cc;
        case 0x37e3d0u: goto label_37e3d0;
        case 0x37e3d4u: goto label_37e3d4;
        case 0x37e3d8u: goto label_37e3d8;
        case 0x37e3dcu: goto label_37e3dc;
        case 0x37e3e0u: goto label_37e3e0;
        case 0x37e3e4u: goto label_37e3e4;
        case 0x37e3e8u: goto label_37e3e8;
        case 0x37e3ecu: goto label_37e3ec;
        case 0x37e3f0u: goto label_37e3f0;
        case 0x37e3f4u: goto label_37e3f4;
        case 0x37e3f8u: goto label_37e3f8;
        case 0x37e3fcu: goto label_37e3fc;
        case 0x37e400u: goto label_37e400;
        case 0x37e404u: goto label_37e404;
        case 0x37e408u: goto label_37e408;
        case 0x37e40cu: goto label_37e40c;
        case 0x37e410u: goto label_37e410;
        case 0x37e414u: goto label_37e414;
        case 0x37e418u: goto label_37e418;
        case 0x37e41cu: goto label_37e41c;
        case 0x37e420u: goto label_37e420;
        case 0x37e424u: goto label_37e424;
        case 0x37e428u: goto label_37e428;
        case 0x37e42cu: goto label_37e42c;
        case 0x37e430u: goto label_37e430;
        case 0x37e434u: goto label_37e434;
        case 0x37e438u: goto label_37e438;
        case 0x37e43cu: goto label_37e43c;
        case 0x37e440u: goto label_37e440;
        case 0x37e444u: goto label_37e444;
        case 0x37e448u: goto label_37e448;
        case 0x37e44cu: goto label_37e44c;
        case 0x37e450u: goto label_37e450;
        case 0x37e454u: goto label_37e454;
        case 0x37e458u: goto label_37e458;
        case 0x37e45cu: goto label_37e45c;
        case 0x37e460u: goto label_37e460;
        case 0x37e464u: goto label_37e464;
        case 0x37e468u: goto label_37e468;
        case 0x37e46cu: goto label_37e46c;
        case 0x37e470u: goto label_37e470;
        case 0x37e474u: goto label_37e474;
        case 0x37e478u: goto label_37e478;
        case 0x37e47cu: goto label_37e47c;
        case 0x37e480u: goto label_37e480;
        case 0x37e484u: goto label_37e484;
        case 0x37e488u: goto label_37e488;
        case 0x37e48cu: goto label_37e48c;
        case 0x37e490u: goto label_37e490;
        case 0x37e494u: goto label_37e494;
        case 0x37e498u: goto label_37e498;
        case 0x37e49cu: goto label_37e49c;
        case 0x37e4a0u: goto label_37e4a0;
        case 0x37e4a4u: goto label_37e4a4;
        case 0x37e4a8u: goto label_37e4a8;
        case 0x37e4acu: goto label_37e4ac;
        case 0x37e4b0u: goto label_37e4b0;
        case 0x37e4b4u: goto label_37e4b4;
        case 0x37e4b8u: goto label_37e4b8;
        case 0x37e4bcu: goto label_37e4bc;
        case 0x37e4c0u: goto label_37e4c0;
        case 0x37e4c4u: goto label_37e4c4;
        case 0x37e4c8u: goto label_37e4c8;
        case 0x37e4ccu: goto label_37e4cc;
        case 0x37e4d0u: goto label_37e4d0;
        case 0x37e4d4u: goto label_37e4d4;
        case 0x37e4d8u: goto label_37e4d8;
        case 0x37e4dcu: goto label_37e4dc;
        case 0x37e4e0u: goto label_37e4e0;
        case 0x37e4e4u: goto label_37e4e4;
        case 0x37e4e8u: goto label_37e4e8;
        case 0x37e4ecu: goto label_37e4ec;
        case 0x37e4f0u: goto label_37e4f0;
        case 0x37e4f4u: goto label_37e4f4;
        case 0x37e4f8u: goto label_37e4f8;
        case 0x37e4fcu: goto label_37e4fc;
        case 0x37e500u: goto label_37e500;
        case 0x37e504u: goto label_37e504;
        case 0x37e508u: goto label_37e508;
        case 0x37e50cu: goto label_37e50c;
        case 0x37e510u: goto label_37e510;
        case 0x37e514u: goto label_37e514;
        case 0x37e518u: goto label_37e518;
        case 0x37e51cu: goto label_37e51c;
        case 0x37e520u: goto label_37e520;
        case 0x37e524u: goto label_37e524;
        case 0x37e528u: goto label_37e528;
        case 0x37e52cu: goto label_37e52c;
        case 0x37e530u: goto label_37e530;
        case 0x37e534u: goto label_37e534;
        case 0x37e538u: goto label_37e538;
        case 0x37e53cu: goto label_37e53c;
        case 0x37e540u: goto label_37e540;
        case 0x37e544u: goto label_37e544;
        case 0x37e548u: goto label_37e548;
        case 0x37e54cu: goto label_37e54c;
        case 0x37e550u: goto label_37e550;
        case 0x37e554u: goto label_37e554;
        case 0x37e558u: goto label_37e558;
        case 0x37e55cu: goto label_37e55c;
        case 0x37e560u: goto label_37e560;
        case 0x37e564u: goto label_37e564;
        case 0x37e568u: goto label_37e568;
        case 0x37e56cu: goto label_37e56c;
        case 0x37e570u: goto label_37e570;
        case 0x37e574u: goto label_37e574;
        case 0x37e578u: goto label_37e578;
        case 0x37e57cu: goto label_37e57c;
        case 0x37e580u: goto label_37e580;
        case 0x37e584u: goto label_37e584;
        case 0x37e588u: goto label_37e588;
        case 0x37e58cu: goto label_37e58c;
        case 0x37e590u: goto label_37e590;
        case 0x37e594u: goto label_37e594;
        case 0x37e598u: goto label_37e598;
        case 0x37e59cu: goto label_37e59c;
        case 0x37e5a0u: goto label_37e5a0;
        case 0x37e5a4u: goto label_37e5a4;
        case 0x37e5a8u: goto label_37e5a8;
        case 0x37e5acu: goto label_37e5ac;
        case 0x37e5b0u: goto label_37e5b0;
        case 0x37e5b4u: goto label_37e5b4;
        case 0x37e5b8u: goto label_37e5b8;
        case 0x37e5bcu: goto label_37e5bc;
        case 0x37e5c0u: goto label_37e5c0;
        case 0x37e5c4u: goto label_37e5c4;
        case 0x37e5c8u: goto label_37e5c8;
        case 0x37e5ccu: goto label_37e5cc;
        case 0x37e5d0u: goto label_37e5d0;
        case 0x37e5d4u: goto label_37e5d4;
        case 0x37e5d8u: goto label_37e5d8;
        case 0x37e5dcu: goto label_37e5dc;
        case 0x37e5e0u: goto label_37e5e0;
        case 0x37e5e4u: goto label_37e5e4;
        case 0x37e5e8u: goto label_37e5e8;
        case 0x37e5ecu: goto label_37e5ec;
        case 0x37e5f0u: goto label_37e5f0;
        case 0x37e5f4u: goto label_37e5f4;
        case 0x37e5f8u: goto label_37e5f8;
        case 0x37e5fcu: goto label_37e5fc;
        case 0x37e600u: goto label_37e600;
        case 0x37e604u: goto label_37e604;
        case 0x37e608u: goto label_37e608;
        case 0x37e60cu: goto label_37e60c;
        case 0x37e610u: goto label_37e610;
        case 0x37e614u: goto label_37e614;
        case 0x37e618u: goto label_37e618;
        case 0x37e61cu: goto label_37e61c;
        case 0x37e620u: goto label_37e620;
        case 0x37e624u: goto label_37e624;
        case 0x37e628u: goto label_37e628;
        case 0x37e62cu: goto label_37e62c;
        case 0x37e630u: goto label_37e630;
        case 0x37e634u: goto label_37e634;
        case 0x37e638u: goto label_37e638;
        case 0x37e63cu: goto label_37e63c;
        case 0x37e640u: goto label_37e640;
        case 0x37e644u: goto label_37e644;
        case 0x37e648u: goto label_37e648;
        case 0x37e64cu: goto label_37e64c;
        case 0x37e650u: goto label_37e650;
        case 0x37e654u: goto label_37e654;
        case 0x37e658u: goto label_37e658;
        case 0x37e65cu: goto label_37e65c;
        case 0x37e660u: goto label_37e660;
        case 0x37e664u: goto label_37e664;
        case 0x37e668u: goto label_37e668;
        case 0x37e66cu: goto label_37e66c;
        case 0x37e670u: goto label_37e670;
        case 0x37e674u: goto label_37e674;
        case 0x37e678u: goto label_37e678;
        case 0x37e67cu: goto label_37e67c;
        case 0x37e680u: goto label_37e680;
        case 0x37e684u: goto label_37e684;
        case 0x37e688u: goto label_37e688;
        case 0x37e68cu: goto label_37e68c;
        case 0x37e690u: goto label_37e690;
        case 0x37e694u: goto label_37e694;
        case 0x37e698u: goto label_37e698;
        case 0x37e69cu: goto label_37e69c;
        case 0x37e6a0u: goto label_37e6a0;
        case 0x37e6a4u: goto label_37e6a4;
        case 0x37e6a8u: goto label_37e6a8;
        case 0x37e6acu: goto label_37e6ac;
        case 0x37e6b0u: goto label_37e6b0;
        case 0x37e6b4u: goto label_37e6b4;
        case 0x37e6b8u: goto label_37e6b8;
        case 0x37e6bcu: goto label_37e6bc;
        case 0x37e6c0u: goto label_37e6c0;
        case 0x37e6c4u: goto label_37e6c4;
        case 0x37e6c8u: goto label_37e6c8;
        case 0x37e6ccu: goto label_37e6cc;
        case 0x37e6d0u: goto label_37e6d0;
        case 0x37e6d4u: goto label_37e6d4;
        case 0x37e6d8u: goto label_37e6d8;
        case 0x37e6dcu: goto label_37e6dc;
        case 0x37e6e0u: goto label_37e6e0;
        case 0x37e6e4u: goto label_37e6e4;
        case 0x37e6e8u: goto label_37e6e8;
        case 0x37e6ecu: goto label_37e6ec;
        case 0x37e6f0u: goto label_37e6f0;
        case 0x37e6f4u: goto label_37e6f4;
        case 0x37e6f8u: goto label_37e6f8;
        case 0x37e6fcu: goto label_37e6fc;
        case 0x37e700u: goto label_37e700;
        case 0x37e704u: goto label_37e704;
        case 0x37e708u: goto label_37e708;
        case 0x37e70cu: goto label_37e70c;
        default: break;
    }

    ctx->pc = 0x37e220u;

label_37e220:
    // 0x37e220: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x37e220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_37e224:
    // 0x37e224: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x37e224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_37e228:
    // 0x37e228: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x37e228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_37e22c:
    // 0x37e22c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x37e22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_37e230:
    // 0x37e230: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x37e230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_37e234:
    // 0x37e234: 0x3c160067  lui         $s6, 0x67
    ctx->pc = 0x37e234u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)103 << 16));
label_37e238:
    // 0x37e238: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x37e238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_37e23c:
    // 0x37e23c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x37e23cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37e240:
    // 0x37e240: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x37e240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_37e244:
    // 0x37e244: 0x26d69c10  addiu       $s6, $s6, -0x63F0
    ctx->pc = 0x37e244u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941712));
label_37e248:
    // 0x37e248: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x37e248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_37e24c:
    // 0x37e24c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x37e24cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37e250:
    // 0x37e250: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x37e250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_37e254:
    // 0x37e254: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x37e254u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_37e258:
    // 0x37e258: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37e258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_37e25c:
    // 0x37e25c: 0x3c110064  lui         $s1, 0x64
    ctx->pc = 0x37e25cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
label_37e260:
    // 0x37e260: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x37e260u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_37e264:
    // 0x37e264: 0x26529bc0  addiu       $s2, $s2, -0x6440
    ctx->pc = 0x37e264u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941632));
label_37e268:
    // 0x37e268: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x37e268u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_37e26c:
    // 0x37e26c: 0x26312100  addiu       $s1, $s1, 0x2100
    ctx->pc = 0x37e26cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8448));
label_37e270:
    // 0x37e270: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x37e270u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_37e274:
    // 0x37e274: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x37e274u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_37e278:
    // 0x37e278: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x37e278u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_37e27c:
    // 0x37e27c: 0x8c5389e0  lw          $s3, -0x7620($v0)
    ctx->pc = 0x37e27cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_37e280:
    // 0x37e280: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x37e280u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_37e284:
    // 0x37e284: 0x8c8500e0  lw          $a1, 0xE0($a0)
    ctx->pc = 0x37e284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_37e288:
    // 0x37e288: 0x8c8300dc  lw          $v1, 0xDC($a0)
    ctx->pc = 0x37e288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
label_37e28c:
    // 0x37e28c: 0x8c8200d8  lw          $v0, 0xD8($a0)
    ctx->pc = 0x37e28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
label_37e290:
    // 0x37e290: 0x8cb00ce0  lw          $s0, 0xCE0($a1)
    ctx->pc = 0x37e290u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3296)));
label_37e294:
    // 0x37e294: 0x2463001c  addiu       $v1, $v1, 0x1C
    ctx->pc = 0x37e294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
label_37e298:
    // 0x37e298: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x37e298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_37e29c:
    // 0x37e29c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x37e29cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e2a0:
    // 0x37e2a0: 0x8c8200a0  lw          $v0, 0xA0($a0)
    ctx->pc = 0x37e2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_37e2a4:
    // 0x37e2a4: 0x46800620  cvt.s.w     $f24, $f0
    ctx->pc = 0x37e2a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
label_37e2a8:
    // 0x37e2a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37e2a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e2ac:
    // 0x37e2ac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_37e2b0:
    if (ctx->pc == 0x37E2B0u) {
        ctx->pc = 0x37E2B0u;
            // 0x37e2b0: 0x468005e0  cvt.s.w     $f23, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x37E2B4u;
        goto label_37e2b4;
    }
    ctx->pc = 0x37E2ACu;
    {
        const bool branch_taken_0x37e2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37E2ACu;
            // 0x37e2b0: 0x468005e0  cvt.s.w     $f23, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e2ac) {
            ctx->pc = 0x37E2E8u;
            goto label_37e2e8;
        }
    }
    ctx->pc = 0x37E2B4u;
label_37e2b4:
    // 0x37e2b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37e2b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e2b8:
    // 0x37e2b8: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x37e2b8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37e2bc:
    // 0x37e2bc: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x37e2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_37e2c0:
    // 0x37e2c0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x37e2c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_37e2c4:
    // 0x37e2c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x37e2c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_37e2c8:
    // 0x37e2c8: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x37e2c8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_37e2cc:
    // 0x37e2cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37e2ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e2d0:
    // 0x37e2d0: 0x0  nop
    ctx->pc = 0x37e2d0u;
    // NOP
label_37e2d4:
    // 0x37e2d4: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x37e2d4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_37e2d8:
    // 0x37e2d8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x37e2d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37e2dc:
    // 0x37e2dc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_37e2e0:
    if (ctx->pc == 0x37E2E0u) {
        ctx->pc = 0x37E2E4u;
        goto label_37e2e4;
    }
    ctx->pc = 0x37E2DCu;
    {
        const bool branch_taken_0x37e2dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37e2dc) {
            ctx->pc = 0x37E2E8u;
            goto label_37e2e8;
        }
    }
    ctx->pc = 0x37E2E4u;
label_37e2e4:
    // 0x37e2e4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x37e2e4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_37e2e8:
    // 0x37e2e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37e2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37e2ec:
    // 0x37e2ec: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x37e2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_37e2f0:
    // 0x37e2f0: 0xc0506ac  jal         func_141AB0
label_37e2f4:
    if (ctx->pc == 0x37E2F4u) {
        ctx->pc = 0x37E2F4u;
            // 0x37e2f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37E2F8u;
        goto label_37e2f8;
    }
    ctx->pc = 0x37E2F0u;
    SET_GPR_U32(ctx, 31, 0x37E2F8u);
    ctx->pc = 0x37E2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37E2F0u;
            // 0x37e2f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E2F8u; }
        if (ctx->pc != 0x37E2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E2F8u; }
        if (ctx->pc != 0x37E2F8u) { return; }
    }
    ctx->pc = 0x37E2F8u;
label_37e2f8:
    // 0x37e2f8: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x37e2f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_37e2fc:
    // 0x37e2fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x37e2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_37e300:
    // 0x37e300: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x37e300u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_37e304:
    // 0x37e304: 0x320f809  jalr        $t9
label_37e308:
    if (ctx->pc == 0x37E308u) {
        ctx->pc = 0x37E308u;
            // 0x37e308: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x37E30Cu;
        goto label_37e30c;
    }
    ctx->pc = 0x37E304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37E30Cu);
        ctx->pc = 0x37E308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37E304u;
            // 0x37e308: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37E30Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37E30Cu; }
            if (ctx->pc != 0x37E30Cu) { return; }
        }
        }
    }
    ctx->pc = 0x37E30Cu;
label_37e30c:
    // 0x37e30c: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x37e30cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_37e310:
    // 0x37e310: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x37e310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_37e314:
    // 0x37e314: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x37e314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37e318:
    // 0x37e318: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x37e318u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_37e31c:
    // 0x37e31c: 0x4601bdc0  add.s       $f23, $f23, $f1
    ctx->pc = 0x37e31cu;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[1]);
label_37e320:
    // 0x37e320: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x37e320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_37e324:
    // 0x37e324: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x37e324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37e328:
    // 0x37e328: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x37e328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_37e32c:
    // 0x37e32c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x37e32cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_37e330:
    // 0x37e330: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37e330u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37e334:
    // 0x37e334: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x37e334u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e338:
    // 0x37e338: 0x0  nop
    ctx->pc = 0x37e338u;
    // NOP
label_37e33c:
    // 0x37e33c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x37e33cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_37e340:
    // 0x37e340: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37e340u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e344:
    // 0x37e344: 0x0  nop
    ctx->pc = 0x37e344u;
    // NOP
label_37e348:
    // 0x37e348: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x37e348u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_37e34c:
    // 0x37e34c: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x37e34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37e350:
    // 0x37e350: 0x4601bb41  sub.s       $f13, $f23, $f1
    ctx->pc = 0x37e350u;
    ctx->f[13] = FPU_SUB_S(ctx->f[23], ctx->f[1]);
label_37e354:
    // 0x37e354: 0x4600c300  add.s       $f12, $f24, $f0
    ctx->pc = 0x37e354u;
    ctx->f[12] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
label_37e358:
    // 0x37e358: 0x4601bbc0  add.s       $f15, $f23, $f1
    ctx->pc = 0x37e358u;
    ctx->f[15] = FPU_ADD_S(ctx->f[23], ctx->f[1]);
label_37e35c:
    // 0x37e35c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x37e35cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_37e360:
    // 0x37e360: 0xc0bc284  jal         func_2F0A10
label_37e364:
    if (ctx->pc == 0x37E364u) {
        ctx->pc = 0x37E364u;
            // 0x37e364: 0x4600c386  mov.s       $f14, $f24 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x37E368u;
        goto label_37e368;
    }
    ctx->pc = 0x37E360u;
    SET_GPR_U32(ctx, 31, 0x37E368u);
    ctx->pc = 0x37E364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37E360u;
            // 0x37e364: 0x4600c386  mov.s       $f14, $f24 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E368u; }
        if (ctx->pc != 0x37E368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E368u; }
        if (ctx->pc != 0x37E368u) { return; }
    }
    ctx->pc = 0x37E368u;
label_37e368:
    // 0x37e368: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x37e368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37e36c:
    // 0x37e36c: 0x3c024130  lui         $v0, 0x4130
    ctx->pc = 0x37e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16688 << 16));
label_37e370:
    // 0x37e370: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x37e370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37e374:
    // 0x37e374: 0x86290000  lh          $t1, 0x0($s1)
    ctx->pc = 0x37e374u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_37e378:
    // 0x37e378: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x37e378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_37e37c:
    // 0x37e37c: 0x86280002  lh          $t0, 0x2($s1)
    ctx->pc = 0x37e37cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_37e380:
    // 0x37e380: 0x4600c600  add.s       $f24, $f24, $f0
    ctx->pc = 0x37e380u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
label_37e384:
    // 0x37e384: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x37e384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
label_37e388:
    // 0x37e388: 0x26450270  addiu       $a1, $s2, 0x270
    ctx->pc = 0x37e388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 624));
label_37e38c:
    // 0x37e38c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x37e38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37e390:
    // 0x37e390: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x37e390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_37e394:
    // 0x37e394: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37e394u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37e398:
    // 0x37e398: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x37e398u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e39c:
    // 0x37e39c: 0x0  nop
    ctx->pc = 0x37e39cu;
    // NOP
label_37e3a0:
    // 0x37e3a0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x37e3a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_37e3a4:
    // 0x37e3a4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x37e3a4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e3a8:
    // 0x37e3a8: 0x0  nop
    ctx->pc = 0x37e3a8u;
    // NOP
label_37e3ac:
    // 0x37e3ac: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x37e3acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_37e3b0:
    // 0x37e3b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37e3b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e3b4:
    // 0x37e3b4: 0x0  nop
    ctx->pc = 0x37e3b4u;
    // NOP
label_37e3b8:
    // 0x37e3b8: 0x4600c380  add.s       $f14, $f24, $f0
    ctx->pc = 0x37e3b8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
label_37e3bc:
    // 0x37e3bc: 0x4601bb41  sub.s       $f13, $f23, $f1
    ctx->pc = 0x37e3bcu;
    ctx->f[13] = FPU_SUB_S(ctx->f[23], ctx->f[1]);
label_37e3c0:
    // 0x37e3c0: 0x4601bbc0  add.s       $f15, $f23, $f1
    ctx->pc = 0x37e3c0u;
    ctx->f[15] = FPU_ADD_S(ctx->f[23], ctx->f[1]);
label_37e3c4:
    // 0x37e3c4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x37e3c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_37e3c8:
    // 0x37e3c8: 0xc0bc284  jal         func_2F0A10
label_37e3cc:
    if (ctx->pc == 0x37E3CCu) {
        ctx->pc = 0x37E3CCu;
            // 0x37e3cc: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x37E3D0u;
        goto label_37e3d0;
    }
    ctx->pc = 0x37E3C8u;
    SET_GPR_U32(ctx, 31, 0x37E3D0u);
    ctx->pc = 0x37E3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37E3C8u;
            // 0x37e3cc: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E3D0u; }
        if (ctx->pc != 0x37E3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E3D0u; }
        if (ctx->pc != 0x37E3D0u) { return; }
    }
    ctx->pc = 0x37E3D0u;
label_37e3d0:
    // 0x37e3d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x37e3d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e3d4:
    // 0x37e3d4: 0x0  nop
    ctx->pc = 0x37e3d4u;
    // NOP
label_37e3d8:
    // 0x37e3d8: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x37e3d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37e3dc:
    // 0x37e3dc: 0x45030019  bc1tl       . + 4 + (0x19 << 2)
label_37e3e0:
    if (ctx->pc == 0x37E3E0u) {
        ctx->pc = 0x37E3E0u;
            // 0x37e3e0: 0x86230000  lh          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x37E3E4u;
        goto label_37e3e4;
    }
    ctx->pc = 0x37E3DCu;
    {
        const bool branch_taken_0x37e3dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37e3dc) {
            ctx->pc = 0x37E3E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37E3DCu;
            // 0x37e3e0: 0x86230000  lh          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37E444u;
            goto label_37e444;
        }
    }
    ctx->pc = 0x37E3E4u;
label_37e3e4:
    // 0x37e3e4: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x37e3e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_37e3e8:
    // 0x37e3e8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x37e3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_37e3ec:
    // 0x37e3ec: 0x86290002  lh          $t1, 0x2($s1)
    ctx->pc = 0x37e3ecu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_37e3f0:
    // 0x37e3f0: 0x3c0840c0  lui         $t0, 0x40C0
    ctx->pc = 0x37e3f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16576 << 16));
label_37e3f4:
    // 0x37e3f4: 0x4614c380  add.s       $f14, $f24, $f20
    ctx->pc = 0x37e3f4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[20]);
label_37e3f8:
    // 0x37e3f8: 0x26450040  addiu       $a1, $s2, 0x40
    ctx->pc = 0x37e3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_37e3fc:
    // 0x37e3fc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x37e3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37e400:
    // 0x37e400: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37e400u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37e404:
    // 0x37e404: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37e404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e408:
    // 0x37e408: 0x0  nop
    ctx->pc = 0x37e408u;
    // NOP
label_37e40c:
    // 0x37e40c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x37e40cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_37e410:
    // 0x37e410: 0x3c02ff80  lui         $v0, 0xFF80
    ctx->pc = 0x37e410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65408 << 16));
label_37e414:
    // 0x37e414: 0x344600ff  ori         $a2, $v0, 0xFF
    ctx->pc = 0x37e414u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
label_37e418:
    // 0x37e418: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x37e418u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e41c:
    // 0x37e41c: 0x0  nop
    ctx->pc = 0x37e41cu;
    // NOP
label_37e420:
    // 0x37e420: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x37e420u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_37e424:
    // 0x37e424: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x37e424u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e428:
    // 0x37e428: 0x0  nop
    ctx->pc = 0x37e428u;
    // NOP
label_37e42c:
    // 0x37e42c: 0x4600bb41  sub.s       $f13, $f23, $f0
    ctx->pc = 0x37e42cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
label_37e430:
    // 0x37e430: 0x4600bbc0  add.s       $f15, $f23, $f0
    ctx->pc = 0x37e430u;
    ctx->f[15] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_37e434:
    // 0x37e434: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x37e434u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_37e438:
    // 0x37e438: 0xc0bc284  jal         func_2F0A10
label_37e43c:
    if (ctx->pc == 0x37E43Cu) {
        ctx->pc = 0x37E43Cu;
            // 0x37e43c: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x37E440u;
        goto label_37e440;
    }
    ctx->pc = 0x37E438u;
    SET_GPR_U32(ctx, 31, 0x37E440u);
    ctx->pc = 0x37E43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37E438u;
            // 0x37e43c: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E440u; }
        if (ctx->pc != 0x37E440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E440u; }
        if (ctx->pc != 0x37E440u) { return; }
    }
    ctx->pc = 0x37E440u;
label_37e440:
    // 0x37e440: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x37e440u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_37e444:
    // 0x37e444: 0x3c024130  lui         $v0, 0x4130
    ctx->pc = 0x37e444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16688 << 16));
label_37e448:
    // 0x37e448: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37e448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e44c:
    // 0x37e44c: 0x26560030  addiu       $s6, $s2, 0x30
    ctx->pc = 0x37e44cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_37e450:
    // 0x37e450: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x37e450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_37e454:
    // 0x37e454: 0x3c084316  lui         $t0, 0x4316
    ctx->pc = 0x37e454u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17174 << 16));
label_37e458:
    // 0x37e458: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x37e458u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37e45c:
    // 0x37e45c: 0x86290002  lh          $t1, 0x2($s1)
    ctx->pc = 0x37e45cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_37e460:
    // 0x37e460: 0x4600bb41  sub.s       $f13, $f23, $f0
    ctx->pc = 0x37e460u;
    ctx->f[13] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
label_37e464:
    // 0x37e464: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x37e464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_37e468:
    // 0x37e468: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x37e468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37e46c:
    // 0x37e46c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x37e46cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_37e470:
    // 0x37e470: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x37e470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_37e474:
    // 0x37e474: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37e474u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37e478:
    // 0x37e478: 0x46800c20  cvt.s.w     $f16, $f1
    ctx->pc = 0x37e478u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_37e47c:
    // 0x37e47c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x37e47cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e480:
    // 0x37e480: 0x0  nop
    ctx->pc = 0x37e480u;
    // NOP
label_37e484:
    // 0x37e484: 0x4600c380  add.s       $f14, $f24, $f0
    ctx->pc = 0x37e484u;
    ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
label_37e488:
    // 0x37e488: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x37e488u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37e48c:
    // 0x37e48c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37e48cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e490:
    // 0x37e490: 0x0  nop
    ctx->pc = 0x37e490u;
    // NOP
label_37e494:
    // 0x37e494: 0x46800c60  cvt.s.w     $f17, $f1
    ctx->pc = 0x37e494u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_37e498:
    // 0x37e498: 0x460d03c0  add.s       $f15, $f0, $f13
    ctx->pc = 0x37e498u;
    ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
label_37e49c:
    // 0x37e49c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x37e49cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_37e4a0:
    // 0x37e4a0: 0xc0bc284  jal         func_2F0A10
label_37e4a4:
    if (ctx->pc == 0x37E4A4u) {
        ctx->pc = 0x37E4A4u;
            // 0x37e4a4: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x37E4A8u;
        goto label_37e4a8;
    }
    ctx->pc = 0x37E4A0u;
    SET_GPR_U32(ctx, 31, 0x37E4A8u);
    ctx->pc = 0x37E4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37E4A0u;
            // 0x37e4a4: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E4A8u; }
        if (ctx->pc != 0x37E4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E4A8u; }
        if (ctx->pc != 0x37E4A8u) { return; }
    }
    ctx->pc = 0x37E4A8u;
label_37e4a8:
    // 0x37e4a8: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x37e4a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_37e4ac:
    // 0x37e4ac: 0x3c024130  lui         $v0, 0x4130
    ctx->pc = 0x37e4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16688 << 16));
label_37e4b0:
    // 0x37e4b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37e4b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e4b4:
    // 0x37e4b4: 0x3c0840a0  lui         $t0, 0x40A0
    ctx->pc = 0x37e4b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16544 << 16));
label_37e4b8:
    // 0x37e4b8: 0x4600bbc0  add.s       $f15, $f23, $f0
    ctx->pc = 0x37e4b8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_37e4bc:
    // 0x37e4bc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x37e4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_37e4c0:
    // 0x37e4c0: 0x86290002  lh          $t1, 0x2($s1)
    ctx->pc = 0x37e4c0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_37e4c4:
    // 0x37e4c4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x37e4c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_37e4c8:
    // 0x37e4c8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x37e4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37e4cc:
    // 0x37e4cc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x37e4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_37e4d0:
    // 0x37e4d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37e4d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37e4d4:
    // 0x37e4d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x37e4d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37e4d8:
    // 0x37e4d8: 0x0  nop
    ctx->pc = 0x37e4d8u;
    // NOP
label_37e4dc:
    // 0x37e4dc: 0x46800c20  cvt.s.w     $f16, $f1
    ctx->pc = 0x37e4dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_37e4e0:
    // 0x37e4e0: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x37e4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
label_37e4e4:
    // 0x37e4e4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x37e4e4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e4e8:
    // 0x37e4e8: 0x0  nop
    ctx->pc = 0x37e4e8u;
    // NOP
label_37e4ec:
    // 0x37e4ec: 0x46007b41  sub.s       $f13, $f15, $f0
    ctx->pc = 0x37e4ecu;
    ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[0]);
label_37e4f0:
    // 0x37e4f0: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x37e4f0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37e4f4:
    // 0x37e4f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37e4f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e4f8:
    // 0x37e4f8: 0x0  nop
    ctx->pc = 0x37e4f8u;
    // NOP
label_37e4fc:
    // 0x37e4fc: 0x46800c60  cvt.s.w     $f17, $f1
    ctx->pc = 0x37e4fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_37e500:
    // 0x37e500: 0x4600c380  add.s       $f14, $f24, $f0
    ctx->pc = 0x37e500u;
    ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
label_37e504:
    // 0x37e504: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x37e504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_37e508:
    // 0x37e508: 0xc0bc284  jal         func_2F0A10
label_37e50c:
    if (ctx->pc == 0x37E50Cu) {
        ctx->pc = 0x37E50Cu;
            // 0x37e50c: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x37E510u;
        goto label_37e510;
    }
    ctx->pc = 0x37E508u;
    SET_GPR_U32(ctx, 31, 0x37E510u);
    ctx->pc = 0x37E50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37E508u;
            // 0x37e50c: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E510u; }
        if (ctx->pc != 0x37E510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E510u; }
        if (ctx->pc != 0x37E510u) { return; }
    }
    ctx->pc = 0x37E510u;
label_37e510:
    // 0x37e510: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x37e510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_37e514:
    // 0x37e514: 0x3c034130  lui         $v1, 0x4130
    ctx->pc = 0x37e514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16688 << 16));
label_37e518:
    // 0x37e518: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37e518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e51c:
    // 0x37e51c: 0x86290000  lh          $t1, 0x0($s1)
    ctx->pc = 0x37e51cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_37e520:
    // 0x37e520: 0x4600c300  add.s       $f12, $f24, $f0
    ctx->pc = 0x37e520u;
    ctx->f[12] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
label_37e524:
    // 0x37e524: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x37e524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_37e528:
    // 0x37e528: 0x86280002  lh          $t0, 0x2($s1)
    ctx->pc = 0x37e528u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_37e52c:
    // 0x37e52c: 0x26450050  addiu       $a1, $s2, 0x50
    ctx->pc = 0x37e52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_37e530:
    // 0x37e530: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x37e530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37e534:
    // 0x37e534: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x37e534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_37e538:
    // 0x37e538: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37e538u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37e53c:
    // 0x37e53c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x37e53cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e540:
    // 0x37e540: 0x0  nop
    ctx->pc = 0x37e540u;
    // NOP
label_37e544:
    // 0x37e544: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x37e544u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_37e548:
    // 0x37e548: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x37e548u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e54c:
    // 0x37e54c: 0x0  nop
    ctx->pc = 0x37e54cu;
    // NOP
label_37e550:
    // 0x37e550: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x37e550u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_37e554:
    // 0x37e554: 0xc6400058  lwc1        $f0, 0x58($s2)
    ctx->pc = 0x37e554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37e558:
    // 0x37e558: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x37e558u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37e55c:
    // 0x37e55c: 0x0  nop
    ctx->pc = 0x37e55cu;
    // NOP
label_37e560:
    // 0x37e560: 0x4601bb41  sub.s       $f13, $f23, $f1
    ctx->pc = 0x37e560u;
    ctx->f[13] = FPU_SUB_S(ctx->f[23], ctx->f[1]);
label_37e564:
    // 0x37e564: 0x46006380  add.s       $f14, $f12, $f0
    ctx->pc = 0x37e564u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_37e568:
    // 0x37e568: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x37e568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_37e56c:
    // 0x37e56c: 0xc0bc284  jal         func_2F0A10
label_37e570:
    if (ctx->pc == 0x37E570u) {
        ctx->pc = 0x37E570u;
            // 0x37e570: 0x4601bbc0  add.s       $f15, $f23, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[23], ctx->f[1]);
        ctx->pc = 0x37E574u;
        goto label_37e574;
    }
    ctx->pc = 0x37E56Cu;
    SET_GPR_U32(ctx, 31, 0x37E574u);
    ctx->pc = 0x37E570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37E56Cu;
            // 0x37e570: 0x4601bbc0  add.s       $f15, $f23, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[23], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E574u; }
        if (ctx->pc != 0x37E574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E574u; }
        if (ctx->pc != 0x37E574u) { return; }
    }
    ctx->pc = 0x37E574u;
label_37e574:
    // 0x37e574: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x37e574u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_37e578:
    // 0x37e578: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x37e578u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_37e57c:
    // 0x37e57c: 0x320f809  jalr        $t9
label_37e580:
    if (ctx->pc == 0x37E580u) {
        ctx->pc = 0x37E580u;
            // 0x37e580: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37E584u;
        goto label_37e584;
    }
    ctx->pc = 0x37E57Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37E584u);
        ctx->pc = 0x37E580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37E57Cu;
            // 0x37e580: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37E584u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37E584u; }
            if (ctx->pc != 0x37E584u) { return; }
        }
        }
    }
    ctx->pc = 0x37E584u;
label_37e584:
    // 0x37e584: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37e584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37e588:
    // 0x37e588: 0x3c110065  lui         $s1, 0x65
    ctx->pc = 0x37e588u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)101 << 16));
label_37e58c:
    // 0x37e58c: 0x8c4460a8  lw          $a0, 0x60A8($v0)
    ctx->pc = 0x37e58cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24744)));
label_37e590:
    // 0x37e590: 0x3c120065  lui         $s2, 0x65
    ctx->pc = 0x37e590u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)101 << 16));
label_37e594:
    // 0x37e594: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37e594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37e598:
    // 0x37e598: 0x26315730  addiu       $s1, $s1, 0x5730
    ctx->pc = 0x37e598u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 22320));
label_37e59c:
    // 0x37e59c: 0xc0506ac  jal         func_141AB0
label_37e5a0:
    if (ctx->pc == 0x37E5A0u) {
        ctx->pc = 0x37E5A0u;
            // 0x37e5a0: 0x26525850  addiu       $s2, $s2, 0x5850 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 22608));
        ctx->pc = 0x37E5A4u;
        goto label_37e5a4;
    }
    ctx->pc = 0x37E59Cu;
    SET_GPR_U32(ctx, 31, 0x37E5A4u);
    ctx->pc = 0x37E5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37E59Cu;
            // 0x37e5a0: 0x26525850  addiu       $s2, $s2, 0x5850 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 22608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E5A4u; }
        if (ctx->pc != 0x37E5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E5A4u; }
        if (ctx->pc != 0x37E5A4u) { return; }
    }
    ctx->pc = 0x37E5A4u;
label_37e5a4:
    // 0x37e5a4: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x37e5a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_37e5a8:
    // 0x37e5a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x37e5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_37e5ac:
    // 0x37e5ac: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x37e5acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_37e5b0:
    // 0x37e5b0: 0x320f809  jalr        $t9
label_37e5b4:
    if (ctx->pc == 0x37E5B4u) {
        ctx->pc = 0x37E5B4u;
            // 0x37e5b4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x37E5B8u;
        goto label_37e5b8;
    }
    ctx->pc = 0x37E5B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37E5B8u);
        ctx->pc = 0x37E5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37E5B0u;
            // 0x37e5b4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37E5B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37E5B8u; }
            if (ctx->pc != 0x37E5B8u) { return; }
        }
        }
    }
    ctx->pc = 0x37E5B8u;
label_37e5b8:
    // 0x37e5b8: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x37e5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37e5bc:
    // 0x37e5bc: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x37e5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_37e5c0:
    // 0x37e5c0: 0x3c024130  lui         $v0, 0x4130
    ctx->pc = 0x37e5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16688 << 16));
label_37e5c4:
    // 0x37e5c4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x37e5c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_37e5c8:
    // 0x37e5c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37e5c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e5cc:
    // 0x37e5cc: 0x0  nop
    ctx->pc = 0x37e5ccu;
    // NOP
label_37e5d0:
    // 0x37e5d0: 0x46011582  mul.s       $f22, $f2, $f1
    ctx->pc = 0x37e5d0u;
    ctx->f[22] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_37e5d4:
    // 0x37e5d4: 0x4600bd40  add.s       $f21, $f23, $f0
    ctx->pc = 0x37e5d4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_37e5d8:
    // 0x37e5d8: 0x4600bd01  sub.s       $f20, $f23, $f0
    ctx->pc = 0x37e5d8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
label_37e5dc:
    // 0x37e5dc: 0x141e3c  dsll32      $v1, $s4, 24
    ctx->pc = 0x37e5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 24));
label_37e5e0:
    // 0x37e5e0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x37e5e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_37e5e4:
    // 0x37e5e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x37e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37e5e8:
    // 0x37e5e8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_37e5ec:
    if (ctx->pc == 0x37E5ECu) {
        ctx->pc = 0x37E5ECu;
            // 0x37e5ec: 0x8ea400e0  lw          $a0, 0xE0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 224)));
        ctx->pc = 0x37E5F0u;
        goto label_37e5f0;
    }
    ctx->pc = 0x37E5E8u;
    {
        const bool branch_taken_0x37e5e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x37E5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37E5E8u;
            // 0x37e5ec: 0x8ea400e0  lw          $a0, 0xE0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e5e8) {
            ctx->pc = 0x37E620u;
            goto label_37e620;
        }
    }
    ctx->pc = 0x37E5F0u;
label_37e5f0:
    // 0x37e5f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37e5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_37e5f4:
    // 0x37e5f4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_37e5f8:
    if (ctx->pc == 0x37E5F8u) {
        ctx->pc = 0x37E5FCu;
        goto label_37e5fc;
    }
    ctx->pc = 0x37E5F4u;
    {
        const bool branch_taken_0x37e5f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x37e5f4) {
            ctx->pc = 0x37E618u;
            goto label_37e618;
        }
    }
    ctx->pc = 0x37E5FCu;
label_37e5fc:
    // 0x37e5fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37e5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37e600:
    // 0x37e600: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_37e604:
    if (ctx->pc == 0x37E604u) {
        ctx->pc = 0x37E608u;
        goto label_37e608;
    }
    ctx->pc = 0x37E600u;
    {
        const bool branch_taken_0x37e600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x37e600) {
            ctx->pc = 0x37E610u;
            goto label_37e610;
        }
    }
    ctx->pc = 0x37E608u;
label_37e608:
    // 0x37e608: 0x10000007  b           . + 4 + (0x7 << 2)
label_37e60c:
    if (ctx->pc == 0x37E60Cu) {
        ctx->pc = 0x37E610u;
        goto label_37e610;
    }
    ctx->pc = 0x37E608u;
    {
        const bool branch_taken_0x37e608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e608) {
            ctx->pc = 0x37E628u;
            goto label_37e628;
        }
    }
    ctx->pc = 0x37E610u;
label_37e610:
    // 0x37e610: 0x10000007  b           . + 4 + (0x7 << 2)
label_37e614:
    if (ctx->pc == 0x37E614u) {
        ctx->pc = 0x37E614u;
            // 0x37e614: 0x8c820cd8  lw          $v0, 0xCD8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3288)));
        ctx->pc = 0x37E618u;
        goto label_37e618;
    }
    ctx->pc = 0x37E610u;
    {
        const bool branch_taken_0x37e610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37E610u;
            // 0x37e614: 0x8c820cd8  lw          $v0, 0xCD8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e610) {
            ctx->pc = 0x37E630u;
            goto label_37e630;
        }
    }
    ctx->pc = 0x37E618u;
label_37e618:
    // 0x37e618: 0x10000005  b           . + 4 + (0x5 << 2)
label_37e61c:
    if (ctx->pc == 0x37E61Cu) {
        ctx->pc = 0x37E61Cu;
            // 0x37e61c: 0x8c820cdc  lw          $v0, 0xCDC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3292)));
        ctx->pc = 0x37E620u;
        goto label_37e620;
    }
    ctx->pc = 0x37E618u;
    {
        const bool branch_taken_0x37e618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37E618u;
            // 0x37e61c: 0x8c820cdc  lw          $v0, 0xCDC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e618) {
            ctx->pc = 0x37E630u;
            goto label_37e630;
        }
    }
    ctx->pc = 0x37E620u;
label_37e620:
    // 0x37e620: 0x10000003  b           . + 4 + (0x3 << 2)
label_37e624:
    if (ctx->pc == 0x37E624u) {
        ctx->pc = 0x37E624u;
            // 0x37e624: 0x8c820ce0  lw          $v0, 0xCE0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3296)));
        ctx->pc = 0x37E628u;
        goto label_37e628;
    }
    ctx->pc = 0x37E620u;
    {
        const bool branch_taken_0x37e620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37E620u;
            // 0x37e624: 0x8c820ce0  lw          $v0, 0xCE0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e620) {
            ctx->pc = 0x37E630u;
            goto label_37e630;
        }
    }
    ctx->pc = 0x37E628u;
label_37e628:
    // 0x37e628: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x37e628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_37e62c:
    // 0x37e62c: 0x0  nop
    ctx->pc = 0x37e62cu;
    // NOP
label_37e630:
    // 0x37e630: 0x3c094316  lui         $t1, 0x4316
    ctx->pc = 0x37e630u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17174 << 16));
label_37e634:
    // 0x37e634: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37e634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e638:
    // 0x37e638: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x37e638u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_37e63c:
    // 0x37e63c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x37e63cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_37e640:
    // 0x37e640: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x37e640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_37e644:
    // 0x37e644: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x37e644u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_37e648:
    // 0x37e648: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x37e648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37e64c:
    // 0x37e64c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x37e64cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37e650:
    // 0x37e650: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x37e650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_37e654:
    // 0x37e654: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37e654u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37e658:
    // 0x37e658: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x37e658u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e65c:
    // 0x37e65c: 0x0  nop
    ctx->pc = 0x37e65cu;
    // NOP
label_37e660:
    // 0x37e660: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x37e660u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_37e664:
    // 0x37e664: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37e664u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e668:
    // 0x37e668: 0x0  nop
    ctx->pc = 0x37e668u;
    // NOP
label_37e66c:
    // 0x37e66c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x37e66cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_37e670:
    // 0x37e670: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x37e670u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e674:
    // 0x37e674: 0x0  nop
    ctx->pc = 0x37e674u;
    // NOP
label_37e678:
    // 0x37e678: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37e678u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_37e67c:
    // 0x37e67c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x37e67cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
label_37e680:
    // 0x37e680: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x37e680u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37e684:
    // 0x37e684: 0x0  nop
    ctx->pc = 0x37e684u;
    // NOP
label_37e688:
    // 0x37e688: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x37e688u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_37e68c:
    // 0x37e68c: 0x4600c000  add.s       $f0, $f24, $f0
    ctx->pc = 0x37e68cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
label_37e690:
    // 0x37e690: 0x46160301  sub.s       $f12, $f0, $f22
    ctx->pc = 0x37e690u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
label_37e694:
    // 0x37e694: 0x46160380  add.s       $f14, $f0, $f22
    ctx->pc = 0x37e694u;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_37e698:
    // 0x37e698: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x37e698u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_37e69c:
    // 0x37e69c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x37e69cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_37e6a0:
    // 0x37e6a0: 0xc0bc284  jal         func_2F0A10
label_37e6a4:
    if (ctx->pc == 0x37E6A4u) {
        ctx->pc = 0x37E6A4u;
            // 0x37e6a4: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x37E6A8u;
        goto label_37e6a8;
    }
    ctx->pc = 0x37E6A0u;
    SET_GPR_U32(ctx, 31, 0x37E6A8u);
    ctx->pc = 0x37E6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37E6A0u;
            // 0x37e6a4: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E6A8u; }
        if (ctx->pc != 0x37E6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E6A8u; }
        if (ctx->pc != 0x37E6A8u) { return; }
    }
    ctx->pc = 0x37E6A8u;
label_37e6a8:
    // 0x37e6a8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x37e6a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_37e6ac:
    // 0x37e6ac: 0x2a810003  slti        $at, $s4, 0x3
    ctx->pc = 0x37e6acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
label_37e6b0:
    // 0x37e6b0: 0x5420ffcb  bnel        $at, $zero, . + 4 + (-0x35 << 2)
label_37e6b4:
    if (ctx->pc == 0x37E6B4u) {
        ctx->pc = 0x37E6B4u;
            // 0x37e6b4: 0x141e3c  dsll32      $v1, $s4, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 24));
        ctx->pc = 0x37E6B8u;
        goto label_37e6b8;
    }
    ctx->pc = 0x37E6B0u;
    {
        const bool branch_taken_0x37e6b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x37e6b0) {
            ctx->pc = 0x37E6B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37E6B0u;
            // 0x37e6b4: 0x141e3c  dsll32      $v1, $s4, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37E5E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_37e5e0;
        }
    }
    ctx->pc = 0x37E6B8u;
label_37e6b8:
    // 0x37e6b8: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x37e6b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_37e6bc:
    // 0x37e6bc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x37e6bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_37e6c0:
    // 0x37e6c0: 0x320f809  jalr        $t9
label_37e6c4:
    if (ctx->pc == 0x37E6C4u) {
        ctx->pc = 0x37E6C4u;
            // 0x37e6c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37E6C8u;
        goto label_37e6c8;
    }
    ctx->pc = 0x37E6C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37E6C8u);
        ctx->pc = 0x37E6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37E6C0u;
            // 0x37e6c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37E6C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37E6C8u; }
            if (ctx->pc != 0x37E6C8u) { return; }
        }
        }
    }
    ctx->pc = 0x37E6C8u;
label_37e6c8:
    // 0x37e6c8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x37e6c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_37e6cc:
    // 0x37e6cc: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x37e6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_37e6d0:
    // 0x37e6d0: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x37e6d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_37e6d4:
    // 0x37e6d4: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x37e6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_37e6d8:
    // 0x37e6d8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x37e6d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_37e6dc:
    // 0x37e6dc: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x37e6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_37e6e0:
    // 0x37e6e0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x37e6e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_37e6e4:
    // 0x37e6e4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x37e6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_37e6e8:
    // 0x37e6e8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x37e6e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_37e6ec:
    // 0x37e6ec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x37e6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_37e6f0:
    // 0x37e6f0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x37e6f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_37e6f4:
    // 0x37e6f4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x37e6f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37e6f8:
    // 0x37e6f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37e6f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37e6fc:
    // 0x37e6fc: 0x3e00008  jr          $ra
label_37e700:
    if (ctx->pc == 0x37E700u) {
        ctx->pc = 0x37E700u;
            // 0x37e700: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x37E704u;
        goto label_37e704;
    }
    ctx->pc = 0x37E6FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37E700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37E6FCu;
            // 0x37e700: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37E704u;
label_37e704:
    // 0x37e704: 0x0  nop
    ctx->pc = 0x37e704u;
    // NOP
label_37e708:
    // 0x37e708: 0x0  nop
    ctx->pc = 0x37e708u;
    // NOP
label_37e70c:
    // 0x37e70c: 0x0  nop
    ctx->pc = 0x37e70cu;
    // NOP
}
