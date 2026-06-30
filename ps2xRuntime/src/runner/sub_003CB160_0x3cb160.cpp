#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003CB160
// Address: 0x3cb160 - 0x3cb6e0
void sub_003CB160_0x3cb160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CB160_0x3cb160");
#endif

    switch (ctx->pc) {
        case 0x3cb160u: goto label_3cb160;
        case 0x3cb164u: goto label_3cb164;
        case 0x3cb168u: goto label_3cb168;
        case 0x3cb16cu: goto label_3cb16c;
        case 0x3cb170u: goto label_3cb170;
        case 0x3cb174u: goto label_3cb174;
        case 0x3cb178u: goto label_3cb178;
        case 0x3cb17cu: goto label_3cb17c;
        case 0x3cb180u: goto label_3cb180;
        case 0x3cb184u: goto label_3cb184;
        case 0x3cb188u: goto label_3cb188;
        case 0x3cb18cu: goto label_3cb18c;
        case 0x3cb190u: goto label_3cb190;
        case 0x3cb194u: goto label_3cb194;
        case 0x3cb198u: goto label_3cb198;
        case 0x3cb19cu: goto label_3cb19c;
        case 0x3cb1a0u: goto label_3cb1a0;
        case 0x3cb1a4u: goto label_3cb1a4;
        case 0x3cb1a8u: goto label_3cb1a8;
        case 0x3cb1acu: goto label_3cb1ac;
        case 0x3cb1b0u: goto label_3cb1b0;
        case 0x3cb1b4u: goto label_3cb1b4;
        case 0x3cb1b8u: goto label_3cb1b8;
        case 0x3cb1bcu: goto label_3cb1bc;
        case 0x3cb1c0u: goto label_3cb1c0;
        case 0x3cb1c4u: goto label_3cb1c4;
        case 0x3cb1c8u: goto label_3cb1c8;
        case 0x3cb1ccu: goto label_3cb1cc;
        case 0x3cb1d0u: goto label_3cb1d0;
        case 0x3cb1d4u: goto label_3cb1d4;
        case 0x3cb1d8u: goto label_3cb1d8;
        case 0x3cb1dcu: goto label_3cb1dc;
        case 0x3cb1e0u: goto label_3cb1e0;
        case 0x3cb1e4u: goto label_3cb1e4;
        case 0x3cb1e8u: goto label_3cb1e8;
        case 0x3cb1ecu: goto label_3cb1ec;
        case 0x3cb1f0u: goto label_3cb1f0;
        case 0x3cb1f4u: goto label_3cb1f4;
        case 0x3cb1f8u: goto label_3cb1f8;
        case 0x3cb1fcu: goto label_3cb1fc;
        case 0x3cb200u: goto label_3cb200;
        case 0x3cb204u: goto label_3cb204;
        case 0x3cb208u: goto label_3cb208;
        case 0x3cb20cu: goto label_3cb20c;
        case 0x3cb210u: goto label_3cb210;
        case 0x3cb214u: goto label_3cb214;
        case 0x3cb218u: goto label_3cb218;
        case 0x3cb21cu: goto label_3cb21c;
        case 0x3cb220u: goto label_3cb220;
        case 0x3cb224u: goto label_3cb224;
        case 0x3cb228u: goto label_3cb228;
        case 0x3cb22cu: goto label_3cb22c;
        case 0x3cb230u: goto label_3cb230;
        case 0x3cb234u: goto label_3cb234;
        case 0x3cb238u: goto label_3cb238;
        case 0x3cb23cu: goto label_3cb23c;
        case 0x3cb240u: goto label_3cb240;
        case 0x3cb244u: goto label_3cb244;
        case 0x3cb248u: goto label_3cb248;
        case 0x3cb24cu: goto label_3cb24c;
        case 0x3cb250u: goto label_3cb250;
        case 0x3cb254u: goto label_3cb254;
        case 0x3cb258u: goto label_3cb258;
        case 0x3cb25cu: goto label_3cb25c;
        case 0x3cb260u: goto label_3cb260;
        case 0x3cb264u: goto label_3cb264;
        case 0x3cb268u: goto label_3cb268;
        case 0x3cb26cu: goto label_3cb26c;
        case 0x3cb270u: goto label_3cb270;
        case 0x3cb274u: goto label_3cb274;
        case 0x3cb278u: goto label_3cb278;
        case 0x3cb27cu: goto label_3cb27c;
        case 0x3cb280u: goto label_3cb280;
        case 0x3cb284u: goto label_3cb284;
        case 0x3cb288u: goto label_3cb288;
        case 0x3cb28cu: goto label_3cb28c;
        case 0x3cb290u: goto label_3cb290;
        case 0x3cb294u: goto label_3cb294;
        case 0x3cb298u: goto label_3cb298;
        case 0x3cb29cu: goto label_3cb29c;
        case 0x3cb2a0u: goto label_3cb2a0;
        case 0x3cb2a4u: goto label_3cb2a4;
        case 0x3cb2a8u: goto label_3cb2a8;
        case 0x3cb2acu: goto label_3cb2ac;
        case 0x3cb2b0u: goto label_3cb2b0;
        case 0x3cb2b4u: goto label_3cb2b4;
        case 0x3cb2b8u: goto label_3cb2b8;
        case 0x3cb2bcu: goto label_3cb2bc;
        case 0x3cb2c0u: goto label_3cb2c0;
        case 0x3cb2c4u: goto label_3cb2c4;
        case 0x3cb2c8u: goto label_3cb2c8;
        case 0x3cb2ccu: goto label_3cb2cc;
        case 0x3cb2d0u: goto label_3cb2d0;
        case 0x3cb2d4u: goto label_3cb2d4;
        case 0x3cb2d8u: goto label_3cb2d8;
        case 0x3cb2dcu: goto label_3cb2dc;
        case 0x3cb2e0u: goto label_3cb2e0;
        case 0x3cb2e4u: goto label_3cb2e4;
        case 0x3cb2e8u: goto label_3cb2e8;
        case 0x3cb2ecu: goto label_3cb2ec;
        case 0x3cb2f0u: goto label_3cb2f0;
        case 0x3cb2f4u: goto label_3cb2f4;
        case 0x3cb2f8u: goto label_3cb2f8;
        case 0x3cb2fcu: goto label_3cb2fc;
        case 0x3cb300u: goto label_3cb300;
        case 0x3cb304u: goto label_3cb304;
        case 0x3cb308u: goto label_3cb308;
        case 0x3cb30cu: goto label_3cb30c;
        case 0x3cb310u: goto label_3cb310;
        case 0x3cb314u: goto label_3cb314;
        case 0x3cb318u: goto label_3cb318;
        case 0x3cb31cu: goto label_3cb31c;
        case 0x3cb320u: goto label_3cb320;
        case 0x3cb324u: goto label_3cb324;
        case 0x3cb328u: goto label_3cb328;
        case 0x3cb32cu: goto label_3cb32c;
        case 0x3cb330u: goto label_3cb330;
        case 0x3cb334u: goto label_3cb334;
        case 0x3cb338u: goto label_3cb338;
        case 0x3cb33cu: goto label_3cb33c;
        case 0x3cb340u: goto label_3cb340;
        case 0x3cb344u: goto label_3cb344;
        case 0x3cb348u: goto label_3cb348;
        case 0x3cb34cu: goto label_3cb34c;
        case 0x3cb350u: goto label_3cb350;
        case 0x3cb354u: goto label_3cb354;
        case 0x3cb358u: goto label_3cb358;
        case 0x3cb35cu: goto label_3cb35c;
        case 0x3cb360u: goto label_3cb360;
        case 0x3cb364u: goto label_3cb364;
        case 0x3cb368u: goto label_3cb368;
        case 0x3cb36cu: goto label_3cb36c;
        case 0x3cb370u: goto label_3cb370;
        case 0x3cb374u: goto label_3cb374;
        case 0x3cb378u: goto label_3cb378;
        case 0x3cb37cu: goto label_3cb37c;
        case 0x3cb380u: goto label_3cb380;
        case 0x3cb384u: goto label_3cb384;
        case 0x3cb388u: goto label_3cb388;
        case 0x3cb38cu: goto label_3cb38c;
        case 0x3cb390u: goto label_3cb390;
        case 0x3cb394u: goto label_3cb394;
        case 0x3cb398u: goto label_3cb398;
        case 0x3cb39cu: goto label_3cb39c;
        case 0x3cb3a0u: goto label_3cb3a0;
        case 0x3cb3a4u: goto label_3cb3a4;
        case 0x3cb3a8u: goto label_3cb3a8;
        case 0x3cb3acu: goto label_3cb3ac;
        case 0x3cb3b0u: goto label_3cb3b0;
        case 0x3cb3b4u: goto label_3cb3b4;
        case 0x3cb3b8u: goto label_3cb3b8;
        case 0x3cb3bcu: goto label_3cb3bc;
        case 0x3cb3c0u: goto label_3cb3c0;
        case 0x3cb3c4u: goto label_3cb3c4;
        case 0x3cb3c8u: goto label_3cb3c8;
        case 0x3cb3ccu: goto label_3cb3cc;
        case 0x3cb3d0u: goto label_3cb3d0;
        case 0x3cb3d4u: goto label_3cb3d4;
        case 0x3cb3d8u: goto label_3cb3d8;
        case 0x3cb3dcu: goto label_3cb3dc;
        case 0x3cb3e0u: goto label_3cb3e0;
        case 0x3cb3e4u: goto label_3cb3e4;
        case 0x3cb3e8u: goto label_3cb3e8;
        case 0x3cb3ecu: goto label_3cb3ec;
        case 0x3cb3f0u: goto label_3cb3f0;
        case 0x3cb3f4u: goto label_3cb3f4;
        case 0x3cb3f8u: goto label_3cb3f8;
        case 0x3cb3fcu: goto label_3cb3fc;
        case 0x3cb400u: goto label_3cb400;
        case 0x3cb404u: goto label_3cb404;
        case 0x3cb408u: goto label_3cb408;
        case 0x3cb40cu: goto label_3cb40c;
        case 0x3cb410u: goto label_3cb410;
        case 0x3cb414u: goto label_3cb414;
        case 0x3cb418u: goto label_3cb418;
        case 0x3cb41cu: goto label_3cb41c;
        case 0x3cb420u: goto label_3cb420;
        case 0x3cb424u: goto label_3cb424;
        case 0x3cb428u: goto label_3cb428;
        case 0x3cb42cu: goto label_3cb42c;
        case 0x3cb430u: goto label_3cb430;
        case 0x3cb434u: goto label_3cb434;
        case 0x3cb438u: goto label_3cb438;
        case 0x3cb43cu: goto label_3cb43c;
        case 0x3cb440u: goto label_3cb440;
        case 0x3cb444u: goto label_3cb444;
        case 0x3cb448u: goto label_3cb448;
        case 0x3cb44cu: goto label_3cb44c;
        case 0x3cb450u: goto label_3cb450;
        case 0x3cb454u: goto label_3cb454;
        case 0x3cb458u: goto label_3cb458;
        case 0x3cb45cu: goto label_3cb45c;
        case 0x3cb460u: goto label_3cb460;
        case 0x3cb464u: goto label_3cb464;
        case 0x3cb468u: goto label_3cb468;
        case 0x3cb46cu: goto label_3cb46c;
        case 0x3cb470u: goto label_3cb470;
        case 0x3cb474u: goto label_3cb474;
        case 0x3cb478u: goto label_3cb478;
        case 0x3cb47cu: goto label_3cb47c;
        case 0x3cb480u: goto label_3cb480;
        case 0x3cb484u: goto label_3cb484;
        case 0x3cb488u: goto label_3cb488;
        case 0x3cb48cu: goto label_3cb48c;
        case 0x3cb490u: goto label_3cb490;
        case 0x3cb494u: goto label_3cb494;
        case 0x3cb498u: goto label_3cb498;
        case 0x3cb49cu: goto label_3cb49c;
        case 0x3cb4a0u: goto label_3cb4a0;
        case 0x3cb4a4u: goto label_3cb4a4;
        case 0x3cb4a8u: goto label_3cb4a8;
        case 0x3cb4acu: goto label_3cb4ac;
        case 0x3cb4b0u: goto label_3cb4b0;
        case 0x3cb4b4u: goto label_3cb4b4;
        case 0x3cb4b8u: goto label_3cb4b8;
        case 0x3cb4bcu: goto label_3cb4bc;
        case 0x3cb4c0u: goto label_3cb4c0;
        case 0x3cb4c4u: goto label_3cb4c4;
        case 0x3cb4c8u: goto label_3cb4c8;
        case 0x3cb4ccu: goto label_3cb4cc;
        case 0x3cb4d0u: goto label_3cb4d0;
        case 0x3cb4d4u: goto label_3cb4d4;
        case 0x3cb4d8u: goto label_3cb4d8;
        case 0x3cb4dcu: goto label_3cb4dc;
        case 0x3cb4e0u: goto label_3cb4e0;
        case 0x3cb4e4u: goto label_3cb4e4;
        case 0x3cb4e8u: goto label_3cb4e8;
        case 0x3cb4ecu: goto label_3cb4ec;
        case 0x3cb4f0u: goto label_3cb4f0;
        case 0x3cb4f4u: goto label_3cb4f4;
        case 0x3cb4f8u: goto label_3cb4f8;
        case 0x3cb4fcu: goto label_3cb4fc;
        case 0x3cb500u: goto label_3cb500;
        case 0x3cb504u: goto label_3cb504;
        case 0x3cb508u: goto label_3cb508;
        case 0x3cb50cu: goto label_3cb50c;
        case 0x3cb510u: goto label_3cb510;
        case 0x3cb514u: goto label_3cb514;
        case 0x3cb518u: goto label_3cb518;
        case 0x3cb51cu: goto label_3cb51c;
        case 0x3cb520u: goto label_3cb520;
        case 0x3cb524u: goto label_3cb524;
        case 0x3cb528u: goto label_3cb528;
        case 0x3cb52cu: goto label_3cb52c;
        case 0x3cb530u: goto label_3cb530;
        case 0x3cb534u: goto label_3cb534;
        case 0x3cb538u: goto label_3cb538;
        case 0x3cb53cu: goto label_3cb53c;
        case 0x3cb540u: goto label_3cb540;
        case 0x3cb544u: goto label_3cb544;
        case 0x3cb548u: goto label_3cb548;
        case 0x3cb54cu: goto label_3cb54c;
        case 0x3cb550u: goto label_3cb550;
        case 0x3cb554u: goto label_3cb554;
        case 0x3cb558u: goto label_3cb558;
        case 0x3cb55cu: goto label_3cb55c;
        case 0x3cb560u: goto label_3cb560;
        case 0x3cb564u: goto label_3cb564;
        case 0x3cb568u: goto label_3cb568;
        case 0x3cb56cu: goto label_3cb56c;
        case 0x3cb570u: goto label_3cb570;
        case 0x3cb574u: goto label_3cb574;
        case 0x3cb578u: goto label_3cb578;
        case 0x3cb57cu: goto label_3cb57c;
        case 0x3cb580u: goto label_3cb580;
        case 0x3cb584u: goto label_3cb584;
        case 0x3cb588u: goto label_3cb588;
        case 0x3cb58cu: goto label_3cb58c;
        case 0x3cb590u: goto label_3cb590;
        case 0x3cb594u: goto label_3cb594;
        case 0x3cb598u: goto label_3cb598;
        case 0x3cb59cu: goto label_3cb59c;
        case 0x3cb5a0u: goto label_3cb5a0;
        case 0x3cb5a4u: goto label_3cb5a4;
        case 0x3cb5a8u: goto label_3cb5a8;
        case 0x3cb5acu: goto label_3cb5ac;
        case 0x3cb5b0u: goto label_3cb5b0;
        case 0x3cb5b4u: goto label_3cb5b4;
        case 0x3cb5b8u: goto label_3cb5b8;
        case 0x3cb5bcu: goto label_3cb5bc;
        case 0x3cb5c0u: goto label_3cb5c0;
        case 0x3cb5c4u: goto label_3cb5c4;
        case 0x3cb5c8u: goto label_3cb5c8;
        case 0x3cb5ccu: goto label_3cb5cc;
        case 0x3cb5d0u: goto label_3cb5d0;
        case 0x3cb5d4u: goto label_3cb5d4;
        case 0x3cb5d8u: goto label_3cb5d8;
        case 0x3cb5dcu: goto label_3cb5dc;
        case 0x3cb5e0u: goto label_3cb5e0;
        case 0x3cb5e4u: goto label_3cb5e4;
        case 0x3cb5e8u: goto label_3cb5e8;
        case 0x3cb5ecu: goto label_3cb5ec;
        case 0x3cb5f0u: goto label_3cb5f0;
        case 0x3cb5f4u: goto label_3cb5f4;
        case 0x3cb5f8u: goto label_3cb5f8;
        case 0x3cb5fcu: goto label_3cb5fc;
        case 0x3cb600u: goto label_3cb600;
        case 0x3cb604u: goto label_3cb604;
        case 0x3cb608u: goto label_3cb608;
        case 0x3cb60cu: goto label_3cb60c;
        case 0x3cb610u: goto label_3cb610;
        case 0x3cb614u: goto label_3cb614;
        case 0x3cb618u: goto label_3cb618;
        case 0x3cb61cu: goto label_3cb61c;
        case 0x3cb620u: goto label_3cb620;
        case 0x3cb624u: goto label_3cb624;
        case 0x3cb628u: goto label_3cb628;
        case 0x3cb62cu: goto label_3cb62c;
        case 0x3cb630u: goto label_3cb630;
        case 0x3cb634u: goto label_3cb634;
        case 0x3cb638u: goto label_3cb638;
        case 0x3cb63cu: goto label_3cb63c;
        case 0x3cb640u: goto label_3cb640;
        case 0x3cb644u: goto label_3cb644;
        case 0x3cb648u: goto label_3cb648;
        case 0x3cb64cu: goto label_3cb64c;
        case 0x3cb650u: goto label_3cb650;
        case 0x3cb654u: goto label_3cb654;
        case 0x3cb658u: goto label_3cb658;
        case 0x3cb65cu: goto label_3cb65c;
        case 0x3cb660u: goto label_3cb660;
        case 0x3cb664u: goto label_3cb664;
        case 0x3cb668u: goto label_3cb668;
        case 0x3cb66cu: goto label_3cb66c;
        case 0x3cb670u: goto label_3cb670;
        case 0x3cb674u: goto label_3cb674;
        case 0x3cb678u: goto label_3cb678;
        case 0x3cb67cu: goto label_3cb67c;
        case 0x3cb680u: goto label_3cb680;
        case 0x3cb684u: goto label_3cb684;
        case 0x3cb688u: goto label_3cb688;
        case 0x3cb68cu: goto label_3cb68c;
        case 0x3cb690u: goto label_3cb690;
        case 0x3cb694u: goto label_3cb694;
        case 0x3cb698u: goto label_3cb698;
        case 0x3cb69cu: goto label_3cb69c;
        case 0x3cb6a0u: goto label_3cb6a0;
        case 0x3cb6a4u: goto label_3cb6a4;
        case 0x3cb6a8u: goto label_3cb6a8;
        case 0x3cb6acu: goto label_3cb6ac;
        case 0x3cb6b0u: goto label_3cb6b0;
        case 0x3cb6b4u: goto label_3cb6b4;
        case 0x3cb6b8u: goto label_3cb6b8;
        case 0x3cb6bcu: goto label_3cb6bc;
        case 0x3cb6c0u: goto label_3cb6c0;
        case 0x3cb6c4u: goto label_3cb6c4;
        case 0x3cb6c8u: goto label_3cb6c8;
        case 0x3cb6ccu: goto label_3cb6cc;
        case 0x3cb6d0u: goto label_3cb6d0;
        case 0x3cb6d4u: goto label_3cb6d4;
        case 0x3cb6d8u: goto label_3cb6d8;
        case 0x3cb6dcu: goto label_3cb6dc;
        default: break;
    }

    ctx->pc = 0x3cb160u;

label_3cb160:
    // 0x3cb160: 0x3e00008  jr          $ra
label_3cb164:
    if (ctx->pc == 0x3CB164u) {
        ctx->pc = 0x3CB164u;
            // 0x3cb164: 0xac8500e0  sw          $a1, 0xE0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 5));
        ctx->pc = 0x3CB168u;
        goto label_3cb168;
    }
    ctx->pc = 0x3CB160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CB164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB160u;
            // 0x3cb164: 0xac8500e0  sw          $a1, 0xE0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CB168u;
label_3cb168:
    // 0x3cb168: 0x0  nop
    ctx->pc = 0x3cb168u;
    // NOP
label_3cb16c:
    // 0x3cb16c: 0x0  nop
    ctx->pc = 0x3cb16cu;
    // NOP
label_3cb170:
    // 0x3cb170: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3cb170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3cb174:
    // 0x3cb174: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cb174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cb178:
    // 0x3cb178: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3cb178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3cb17c:
    // 0x3cb17c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3cb17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3cb180:
    // 0x3cb180: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3cb180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3cb184:
    // 0x3cb184: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3cb184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3cb188:
    // 0x3cb188: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3cb188u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3cb18c:
    // 0x3cb18c: 0x8c8500d0  lw          $a1, 0xD0($a0)
    ctx->pc = 0x3cb18cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_3cb190:
    // 0x3cb190: 0x10a3000f  beq         $a1, $v1, . + 4 + (0xF << 2)
label_3cb194:
    if (ctx->pc == 0x3CB194u) {
        ctx->pc = 0x3CB194u;
            // 0x3cb194: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CB198u;
        goto label_3cb198;
    }
    ctx->pc = 0x3CB190u;
    {
        const bool branch_taken_0x3cb190 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3CB194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB190u;
            // 0x3cb194: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb190) {
            ctx->pc = 0x3CB1D0u;
            goto label_3cb1d0;
        }
    }
    ctx->pc = 0x3CB198u;
label_3cb198:
    // 0x3cb198: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_3cb19c:
    if (ctx->pc == 0x3CB19Cu) {
        ctx->pc = 0x3CB19Cu;
            // 0x3cb19c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3CB1A0u;
        goto label_3cb1a0;
    }
    ctx->pc = 0x3CB198u;
    {
        const bool branch_taken_0x3cb198 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cb198) {
            ctx->pc = 0x3CB19Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB198u;
            // 0x3cb19c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CB1A8u;
            goto label_3cb1a8;
        }
    }
    ctx->pc = 0x3CB1A0u;
label_3cb1a0:
    // 0x3cb1a0: 0x10000149  b           . + 4 + (0x149 << 2)
label_3cb1a4:
    if (ctx->pc == 0x3CB1A4u) {
        ctx->pc = 0x3CB1A4u;
            // 0x3cb1a4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x3CB1A8u;
        goto label_3cb1a8;
    }
    ctx->pc = 0x3CB1A0u;
    {
        const bool branch_taken_0x3cb1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB1A0u;
            // 0x3cb1a4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb1a0) {
            ctx->pc = 0x3CB6C8u;
            goto label_3cb6c8;
        }
    }
    ctx->pc = 0x3CB1A8u;
label_3cb1a8:
    // 0x3cb1a8: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x3cb1a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_3cb1ac:
    // 0x3cb1ac: 0x320f809  jalr        $t9
label_3cb1b0:
    if (ctx->pc == 0x3CB1B0u) {
        ctx->pc = 0x3CB1B4u;
        goto label_3cb1b4;
    }
    ctx->pc = 0x3CB1ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CB1B4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CB1B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CB1B4u; }
            if (ctx->pc != 0x3CB1B4u) { return; }
        }
        }
    }
    ctx->pc = 0x3CB1B4u;
label_3cb1b4:
    // 0x3cb1b4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3cb1b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3cb1b8:
    // 0x3cb1b8: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x3cb1b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_3cb1bc:
    // 0x3cb1bc: 0x320f809  jalr        $t9
label_3cb1c0:
    if (ctx->pc == 0x3CB1C0u) {
        ctx->pc = 0x3CB1C0u;
            // 0x3cb1c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CB1C4u;
        goto label_3cb1c4;
    }
    ctx->pc = 0x3CB1BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CB1C4u);
        ctx->pc = 0x3CB1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB1BCu;
            // 0x3cb1c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CB1C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CB1C4u; }
            if (ctx->pc != 0x3CB1C4u) { return; }
        }
        }
    }
    ctx->pc = 0x3CB1C4u;
label_3cb1c4:
    // 0x3cb1c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cb1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cb1c8:
    // 0x3cb1c8: 0x1000013e  b           . + 4 + (0x13E << 2)
label_3cb1cc:
    if (ctx->pc == 0x3CB1CCu) {
        ctx->pc = 0x3CB1CCu;
            // 0x3cb1cc: 0xae0300d0  sw          $v1, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
        ctx->pc = 0x3CB1D0u;
        goto label_3cb1d0;
    }
    ctx->pc = 0x3CB1C8u;
    {
        const bool branch_taken_0x3cb1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB1C8u;
            // 0x3cb1cc: 0xae0300d0  sw          $v1, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb1c8) {
            ctx->pc = 0x3CB6C4u;
            goto label_3cb6c4;
        }
    }
    ctx->pc = 0x3CB1D0u;
label_3cb1d0:
    // 0x3cb1d0: 0xc0b6e68  jal         func_2DB9A0
label_3cb1d4:
    if (ctx->pc == 0x3CB1D4u) {
        ctx->pc = 0x3CB1D4u;
            // 0x3cb1d4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3CB1D8u;
        goto label_3cb1d8;
    }
    ctx->pc = 0x3CB1D0u;
    SET_GPR_U32(ctx, 31, 0x3CB1D8u);
    ctx->pc = 0x3CB1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB1D0u;
            // 0x3cb1d4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB1D8u; }
        if (ctx->pc != 0x3CB1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB1D8u; }
        if (ctx->pc != 0x3CB1D8u) { return; }
    }
    ctx->pc = 0x3CB1D8u;
label_3cb1d8:
    // 0x3cb1d8: 0xc0f2dbc  jal         func_3CB6F0
label_3cb1dc:
    if (ctx->pc == 0x3CB1DCu) {
        ctx->pc = 0x3CB1DCu;
            // 0x3cb1dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CB1E0u;
        goto label_3cb1e0;
    }
    ctx->pc = 0x3CB1D8u;
    SET_GPR_U32(ctx, 31, 0x3CB1E0u);
    ctx->pc = 0x3CB1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB1D8u;
            // 0x3cb1dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3CB6F0u;
    if (runtime->hasFunction(0x3CB6F0u)) {
        auto targetFn = runtime->lookupFunction(0x3CB6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB1E0u; }
        if (ctx->pc != 0x3CB1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003CB6F0_0x3cb6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB1E0u; }
        if (ctx->pc != 0x3CB1E0u) { return; }
    }
    ctx->pc = 0x3CB1E0u;
label_3cb1e0:
    // 0x3cb1e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3cb1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cb1e4:
    // 0x3cb1e4: 0x504300c5  beql        $v0, $v1, . + 4 + (0xC5 << 2)
label_3cb1e8:
    if (ctx->pc == 0x3CB1E8u) {
        ctx->pc = 0x3CB1E8u;
            // 0x3cb1e8: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x3CB1ECu;
        goto label_3cb1ec;
    }
    ctx->pc = 0x3CB1E4u;
    {
        const bool branch_taken_0x3cb1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cb1e4) {
            ctx->pc = 0x3CB1E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB1E4u;
            // 0x3cb1e8: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CB4FCu;
            goto label_3cb4fc;
        }
    }
    ctx->pc = 0x3CB1ECu;
label_3cb1ec:
    // 0x3cb1ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3cb1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3cb1f0:
    // 0x3cb1f0: 0x5043008c  beql        $v0, $v1, . + 4 + (0x8C << 2)
label_3cb1f4:
    if (ctx->pc == 0x3CB1F4u) {
        ctx->pc = 0x3CB1F4u;
            // 0x3cb1f4: 0x8e020144  lw          $v0, 0x144($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
        ctx->pc = 0x3CB1F8u;
        goto label_3cb1f8;
    }
    ctx->pc = 0x3CB1F0u;
    {
        const bool branch_taken_0x3cb1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cb1f0) {
            ctx->pc = 0x3CB1F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB1F0u;
            // 0x3cb1f4: 0x8e020144  lw          $v0, 0x144($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CB424u;
            goto label_3cb424;
        }
    }
    ctx->pc = 0x3CB1F8u;
label_3cb1f8:
    // 0x3cb1f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cb1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cb1fc:
    // 0x3cb1fc: 0x5043002f  beql        $v0, $v1, . + 4 + (0x2F << 2)
label_3cb200:
    if (ctx->pc == 0x3CB200u) {
        ctx->pc = 0x3CB200u;
            // 0x3cb200: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x3CB204u;
        goto label_3cb204;
    }
    ctx->pc = 0x3CB1FCu;
    {
        const bool branch_taken_0x3cb1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cb1fc) {
            ctx->pc = 0x3CB200u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB1FCu;
            // 0x3cb200: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CB2BCu;
            goto label_3cb2bc;
        }
    }
    ctx->pc = 0x3CB204u;
label_3cb204:
    // 0x3cb204: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_3cb208:
    if (ctx->pc == 0x3CB208u) {
        ctx->pc = 0x3CB208u;
            // 0x3cb208: 0x8e020144  lw          $v0, 0x144($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
        ctx->pc = 0x3CB20Cu;
        goto label_3cb20c;
    }
    ctx->pc = 0x3CB204u;
    {
        const bool branch_taken_0x3cb204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cb204) {
            ctx->pc = 0x3CB208u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB204u;
            // 0x3cb208: 0x8e020144  lw          $v0, 0x144($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CB214u;
            goto label_3cb214;
        }
    }
    ctx->pc = 0x3CB20Cu;
label_3cb20c:
    // 0x3cb20c: 0x100000fe  b           . + 4 + (0xFE << 2)
label_3cb210:
    if (ctx->pc == 0x3CB210u) {
        ctx->pc = 0x3CB210u;
            // 0x3cb210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CB214u;
        goto label_3cb214;
    }
    ctx->pc = 0x3CB20Cu;
    {
        const bool branch_taken_0x3cb20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB20Cu;
            // 0x3cb210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb20c) {
            ctx->pc = 0x3CB608u;
            goto label_3cb608;
        }
    }
    ctx->pc = 0x3CB214u;
label_3cb214:
    // 0x3cb214: 0x184000fb  blez        $v0, . + 4 + (0xFB << 2)
label_3cb218:
    if (ctx->pc == 0x3CB218u) {
        ctx->pc = 0x3CB21Cu;
        goto label_3cb21c;
    }
    ctx->pc = 0x3CB214u;
    {
        const bool branch_taken_0x3cb214 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3cb214) {
            ctx->pc = 0x3CB604u;
            goto label_3cb604;
        }
    }
    ctx->pc = 0x3CB21Cu;
label_3cb21c:
    // 0x3cb21c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3cb21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3cb220:
    // 0x3cb220: 0xc0b6de4  jal         func_2DB790
label_3cb224:
    if (ctx->pc == 0x3CB224u) {
        ctx->pc = 0x3CB224u;
            // 0x3cb224: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x3CB228u;
        goto label_3cb228;
    }
    ctx->pc = 0x3CB220u;
    SET_GPR_U32(ctx, 31, 0x3CB228u);
    ctx->pc = 0x3CB224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB220u;
            // 0x3cb224: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB790u;
    if (runtime->hasFunction(0x2DB790u)) {
        auto targetFn = runtime->lookupFunction(0x2DB790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB228u; }
        if (ctx->pc != 0x3CB228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB790_0x2db790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB228u; }
        if (ctx->pc != 0x3CB228u) { return; }
    }
    ctx->pc = 0x3CB228u;
label_3cb228:
    // 0x3cb228: 0xc0b6e84  jal         func_2DBA10
label_3cb22c:
    if (ctx->pc == 0x3CB22Cu) {
        ctx->pc = 0x3CB230u;
        goto label_3cb230;
    }
    ctx->pc = 0x3CB228u;
    SET_GPR_U32(ctx, 31, 0x3CB230u);
    ctx->pc = 0x2DBA10u;
    if (runtime->hasFunction(0x2DBA10u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB230u; }
        if (ctx->pc != 0x3CB230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA10_0x2dba10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB230u; }
        if (ctx->pc != 0x3CB230u) { return; }
    }
    ctx->pc = 0x3CB230u;
label_3cb230:
    // 0x3cb230: 0xc0b6e60  jal         func_2DB980
label_3cb234:
    if (ctx->pc == 0x3CB234u) {
        ctx->pc = 0x3CB234u;
            // 0x3cb234: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CB238u;
        goto label_3cb238;
    }
    ctx->pc = 0x3CB230u;
    SET_GPR_U32(ctx, 31, 0x3CB238u);
    ctx->pc = 0x3CB234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB230u;
            // 0x3cb234: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB980u;
    if (runtime->hasFunction(0x2DB980u)) {
        auto targetFn = runtime->lookupFunction(0x2DB980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB238u; }
        if (ctx->pc != 0x3CB238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB980_0x2db980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB238u; }
        if (ctx->pc != 0x3CB238u) { return; }
    }
    ctx->pc = 0x3CB238u;
label_3cb238:
    // 0x3cb238: 0xc0b6e38  jal         func_2DB8E0
label_3cb23c:
    if (ctx->pc == 0x3CB23Cu) {
        ctx->pc = 0x3CB23Cu;
            // 0x3cb23c: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x3CB240u;
        goto label_3cb240;
    }
    ctx->pc = 0x3CB238u;
    SET_GPR_U32(ctx, 31, 0x3CB240u);
    ctx->pc = 0x3CB23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB238u;
            // 0x3cb23c: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8E0u;
    if (runtime->hasFunction(0x2DB8E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB240u; }
        if (ctx->pc != 0x3CB240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8E0_0x2db8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB240u; }
        if (ctx->pc != 0x3CB240u) { return; }
    }
    ctx->pc = 0x3CB240u;
label_3cb240:
    // 0x3cb240: 0xc0775b8  jal         func_1DD6E0
label_3cb244:
    if (ctx->pc == 0x3CB244u) {
        ctx->pc = 0x3CB244u;
            // 0x3cb244: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x3CB248u;
        goto label_3cb248;
    }
    ctx->pc = 0x3CB240u;
    SET_GPR_U32(ctx, 31, 0x3CB248u);
    ctx->pc = 0x3CB244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB240u;
            // 0x3cb244: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB248u; }
        if (ctx->pc != 0x3CB248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB248u; }
        if (ctx->pc != 0x3CB248u) { return; }
    }
    ctx->pc = 0x3CB248u;
label_3cb248:
    // 0x3cb248: 0xc0775b4  jal         func_1DD6D0
label_3cb24c:
    if (ctx->pc == 0x3CB24Cu) {
        ctx->pc = 0x3CB24Cu;
            // 0x3cb24c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3CB250u;
        goto label_3cb250;
    }
    ctx->pc = 0x3CB248u;
    SET_GPR_U32(ctx, 31, 0x3CB250u);
    ctx->pc = 0x3CB24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB248u;
            // 0x3cb24c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB250u; }
        if (ctx->pc != 0x3CB250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB250u; }
        if (ctx->pc != 0x3CB250u) { return; }
    }
    ctx->pc = 0x3CB250u;
label_3cb250:
    // 0x3cb250: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x3cb250u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3cb254:
    // 0x3cb254: 0xc0b6e28  jal         func_2DB8A0
label_3cb258:
    if (ctx->pc == 0x3CB258u) {
        ctx->pc = 0x3CB258u;
            // 0x3cb258: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3CB25Cu;
        goto label_3cb25c;
    }
    ctx->pc = 0x3CB254u;
    SET_GPR_U32(ctx, 31, 0x3CB25Cu);
    ctx->pc = 0x3CB258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB254u;
            // 0x3cb258: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8A0u;
    if (runtime->hasFunction(0x2DB8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB25Cu; }
        if (ctx->pc != 0x3CB25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8A0_0x2db8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB25Cu; }
        if (ctx->pc != 0x3CB25Cu) { return; }
    }
    ctx->pc = 0x3CB25Cu;
label_3cb25c:
    // 0x3cb25c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3cb25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3cb260:
    // 0x3cb260: 0xc0dc3f4  jal         func_370FD0
label_3cb264:
    if (ctx->pc == 0x3CB264u) {
        ctx->pc = 0x3CB264u;
            // 0x3cb264: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3CB268u;
        goto label_3cb268;
    }
    ctx->pc = 0x3CB260u;
    SET_GPR_U32(ctx, 31, 0x3CB268u);
    ctx->pc = 0x3CB264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB260u;
            // 0x3cb264: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB268u; }
        if (ctx->pc != 0x3CB268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB268u; }
        if (ctx->pc != 0x3CB268u) { return; }
    }
    ctx->pc = 0x3CB268u;
label_3cb268:
    // 0x3cb268: 0xc0f2db8  jal         func_3CB6E0
label_3cb26c:
    if (ctx->pc == 0x3CB26Cu) {
        ctx->pc = 0x3CB26Cu;
            // 0x3cb26c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CB270u;
        goto label_3cb270;
    }
    ctx->pc = 0x3CB268u;
    SET_GPR_U32(ctx, 31, 0x3CB270u);
    ctx->pc = 0x3CB26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB268u;
            // 0x3cb26c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3CB6E0u;
    if (runtime->hasFunction(0x3CB6E0u)) {
        auto targetFn = runtime->lookupFunction(0x3CB6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB270u; }
        if (ctx->pc != 0x3CB270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003CB6E0_0x3cb6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB270u; }
        if (ctx->pc != 0x3CB270u) { return; }
    }
    ctx->pc = 0x3CB270u;
label_3cb270:
    // 0x3cb270: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_3cb274:
    if (ctx->pc == 0x3CB274u) {
        ctx->pc = 0x3CB274u;
            // 0x3cb274: 0x3c0241f0  lui         $v0, 0x41F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
        ctx->pc = 0x3CB278u;
        goto label_3cb278;
    }
    ctx->pc = 0x3CB270u;
    {
        const bool branch_taken_0x3cb270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cb270) {
            ctx->pc = 0x3CB274u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB270u;
            // 0x3cb274: 0x3c0241f0  lui         $v0, 0x41F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CB294u;
            goto label_3cb294;
        }
    }
    ctx->pc = 0x3CB278u;
label_3cb278:
    // 0x3cb278: 0xc0c05c4  jal         func_301710
label_3cb27c:
    if (ctx->pc == 0x3CB27Cu) {
        ctx->pc = 0x3CB280u;
        goto label_3cb280;
    }
    ctx->pc = 0x3CB278u;
    SET_GPR_U32(ctx, 31, 0x3CB280u);
    ctx->pc = 0x301710u;
    if (runtime->hasFunction(0x301710u)) {
        auto targetFn = runtime->lookupFunction(0x301710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB280u; }
        if (ctx->pc != 0x3CB280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301710_0x301710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB280u; }
        if (ctx->pc != 0x3CB280u) { return; }
    }
    ctx->pc = 0x3CB280u;
label_3cb280:
    // 0x3cb280: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x3cb280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3cb284:
    // 0x3cb284: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x3cb284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
label_3cb288:
    // 0x3cb288: 0xc0ec314  jal         func_3B0C50
label_3cb28c:
    if (ctx->pc == 0x3CB28Cu) {
        ctx->pc = 0x3CB28Cu;
            // 0x3cb28c: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x3CB290u;
        goto label_3cb290;
    }
    ctx->pc = 0x3CB288u;
    SET_GPR_U32(ctx, 31, 0x3CB290u);
    ctx->pc = 0x3CB28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB288u;
            // 0x3cb28c: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B0C50u;
    if (runtime->hasFunction(0x3B0C50u)) {
        auto targetFn = runtime->lookupFunction(0x3B0C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB290u; }
        if (ctx->pc != 0x3CB290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B0C50_0x3b0c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB290u; }
        if (ctx->pc != 0x3CB290u) { return; }
    }
    ctx->pc = 0x3CB290u;
label_3cb290:
    // 0x3cb290: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3cb290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_3cb294:
    // 0x3cb294: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cb294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb298:
    // 0x3cb298: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x3cb298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
label_3cb29c:
    // 0x3cb29c: 0xc0f2c58  jal         func_3CB160
label_3cb2a0:
    if (ctx->pc == 0x3CB2A0u) {
        ctx->pc = 0x3CB2A0u;
            // 0x3cb2a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3CB2A4u;
        goto label_3cb2a4;
    }
    ctx->pc = 0x3CB29Cu;
    SET_GPR_U32(ctx, 31, 0x3CB2A4u);
    ctx->pc = 0x3CB2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB29Cu;
            // 0x3cb2a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3CB160u;
    goto label_3cb160;
    ctx->pc = 0x3CB2A4u;
label_3cb2a4:
    // 0x3cb2a4: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3cb2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3cb2a8:
    // 0x3cb2a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3cb2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cb2ac:
    // 0x3cb2ac: 0xc0e1b0c  jal         func_386C30
label_3cb2b0:
    if (ctx->pc == 0x3CB2B0u) {
        ctx->pc = 0x3CB2B0u;
            // 0x3cb2b0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CB2B4u;
        goto label_3cb2b4;
    }
    ctx->pc = 0x3CB2ACu;
    SET_GPR_U32(ctx, 31, 0x3CB2B4u);
    ctx->pc = 0x3CB2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB2ACu;
            // 0x3cb2b0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C30u;
    if (runtime->hasFunction(0x386C30u)) {
        auto targetFn = runtime->lookupFunction(0x386C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB2B4u; }
        if (ctx->pc != 0x3CB2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C30_0x386c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB2B4u; }
        if (ctx->pc != 0x3CB2B4u) { return; }
    }
    ctx->pc = 0x3CB2B4u;
label_3cb2b4:
    // 0x3cb2b4: 0x100000d3  b           . + 4 + (0xD3 << 2)
label_3cb2b8:
    if (ctx->pc == 0x3CB2B8u) {
        ctx->pc = 0x3CB2BCu;
        goto label_3cb2bc;
    }
    ctx->pc = 0x3CB2B4u;
    {
        const bool branch_taken_0x3cb2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cb2b4) {
            ctx->pc = 0x3CB604u;
            goto label_3cb604;
        }
    }
    ctx->pc = 0x3CB2BCu;
label_3cb2bc:
    // 0x3cb2bc: 0xc088b74  jal         func_222DD0
label_3cb2c0:
    if (ctx->pc == 0x3CB2C0u) {
        ctx->pc = 0x3CB2C4u;
        goto label_3cb2c4;
    }
    ctx->pc = 0x3CB2BCu;
    SET_GPR_U32(ctx, 31, 0x3CB2C4u);
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB2C4u; }
        if (ctx->pc != 0x3CB2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB2C4u; }
        if (ctx->pc != 0x3CB2C4u) { return; }
    }
    ctx->pc = 0x3CB2C4u;
label_3cb2c4:
    // 0x3cb2c4: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x3cb2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_3cb2c8:
    // 0x3cb2c8: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
label_3cb2cc:
    if (ctx->pc == 0x3CB2CCu) {
        ctx->pc = 0x3CB2D0u;
        goto label_3cb2d0;
    }
    ctx->pc = 0x3CB2C8u;
    {
        const bool branch_taken_0x3cb2c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cb2c8) {
            ctx->pc = 0x3CB37Cu;
            goto label_3cb37c;
        }
    }
    ctx->pc = 0x3CB2D0u;
label_3cb2d0:
    // 0x3cb2d0: 0xc6010158  lwc1        $f1, 0x158($s0)
    ctx->pc = 0x3cb2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cb2d4:
    // 0x3cb2d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3cb2d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cb2d8:
    // 0x3cb2d8: 0x0  nop
    ctx->pc = 0x3cb2d8u;
    // NOP
label_3cb2dc:
    // 0x3cb2dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3cb2dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cb2e0:
    // 0x3cb2e0: 0x45000026  bc1f        . + 4 + (0x26 << 2)
label_3cb2e4:
    if (ctx->pc == 0x3CB2E4u) {
        ctx->pc = 0x3CB2E8u;
        goto label_3cb2e8;
    }
    ctx->pc = 0x3CB2E0u;
    {
        const bool branch_taken_0x3cb2e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cb2e0) {
            ctx->pc = 0x3CB37Cu;
            goto label_3cb37c;
        }
    }
    ctx->pc = 0x3CB2E8u;
label_3cb2e8:
    // 0x3cb2e8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3cb2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3cb2ec:
    // 0x3cb2ec: 0xc0b6de4  jal         func_2DB790
label_3cb2f0:
    if (ctx->pc == 0x3CB2F0u) {
        ctx->pc = 0x3CB2F0u;
            // 0x3cb2f0: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x3CB2F4u;
        goto label_3cb2f4;
    }
    ctx->pc = 0x3CB2ECu;
    SET_GPR_U32(ctx, 31, 0x3CB2F4u);
    ctx->pc = 0x3CB2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB2ECu;
            // 0x3cb2f0: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB790u;
    if (runtime->hasFunction(0x2DB790u)) {
        auto targetFn = runtime->lookupFunction(0x2DB790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB2F4u; }
        if (ctx->pc != 0x3CB2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB790_0x2db790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB2F4u; }
        if (ctx->pc != 0x3CB2F4u) { return; }
    }
    ctx->pc = 0x3CB2F4u;
label_3cb2f4:
    // 0x3cb2f4: 0xc0b6e84  jal         func_2DBA10
label_3cb2f8:
    if (ctx->pc == 0x3CB2F8u) {
        ctx->pc = 0x3CB2FCu;
        goto label_3cb2fc;
    }
    ctx->pc = 0x3CB2F4u;
    SET_GPR_U32(ctx, 31, 0x3CB2FCu);
    ctx->pc = 0x2DBA10u;
    if (runtime->hasFunction(0x2DBA10u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB2FCu; }
        if (ctx->pc != 0x3CB2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA10_0x2dba10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB2FCu; }
        if (ctx->pc != 0x3CB2FCu) { return; }
    }
    ctx->pc = 0x3CB2FCu;
label_3cb2fc:
    // 0x3cb2fc: 0xc0b6e60  jal         func_2DB980
label_3cb300:
    if (ctx->pc == 0x3CB300u) {
        ctx->pc = 0x3CB300u;
            // 0x3cb300: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CB304u;
        goto label_3cb304;
    }
    ctx->pc = 0x3CB2FCu;
    SET_GPR_U32(ctx, 31, 0x3CB304u);
    ctx->pc = 0x3CB300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB2FCu;
            // 0x3cb300: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB980u;
    if (runtime->hasFunction(0x2DB980u)) {
        auto targetFn = runtime->lookupFunction(0x2DB980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB304u; }
        if (ctx->pc != 0x3CB304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB980_0x2db980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB304u; }
        if (ctx->pc != 0x3CB304u) { return; }
    }
    ctx->pc = 0x3CB304u;
label_3cb304:
    // 0x3cb304: 0xc0b6e38  jal         func_2DB8E0
label_3cb308:
    if (ctx->pc == 0x3CB308u) {
        ctx->pc = 0x3CB308u;
            // 0x3cb308: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x3CB30Cu;
        goto label_3cb30c;
    }
    ctx->pc = 0x3CB304u;
    SET_GPR_U32(ctx, 31, 0x3CB30Cu);
    ctx->pc = 0x3CB308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB304u;
            // 0x3cb308: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8E0u;
    if (runtime->hasFunction(0x2DB8E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB30Cu; }
        if (ctx->pc != 0x3CB30Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8E0_0x2db8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB30Cu; }
        if (ctx->pc != 0x3CB30Cu) { return; }
    }
    ctx->pc = 0x3CB30Cu;
label_3cb30c:
    // 0x3cb30c: 0xc0775b8  jal         func_1DD6E0
label_3cb310:
    if (ctx->pc == 0x3CB310u) {
        ctx->pc = 0x3CB310u;
            // 0x3cb310: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x3CB314u;
        goto label_3cb314;
    }
    ctx->pc = 0x3CB30Cu;
    SET_GPR_U32(ctx, 31, 0x3CB314u);
    ctx->pc = 0x3CB310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB30Cu;
            // 0x3cb310: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB314u; }
        if (ctx->pc != 0x3CB314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB314u; }
        if (ctx->pc != 0x3CB314u) { return; }
    }
    ctx->pc = 0x3CB314u;
label_3cb314:
    // 0x3cb314: 0xc0775b4  jal         func_1DD6D0
label_3cb318:
    if (ctx->pc == 0x3CB318u) {
        ctx->pc = 0x3CB318u;
            // 0x3cb318: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3CB31Cu;
        goto label_3cb31c;
    }
    ctx->pc = 0x3CB314u;
    SET_GPR_U32(ctx, 31, 0x3CB31Cu);
    ctx->pc = 0x3CB318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB314u;
            // 0x3cb318: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB31Cu; }
        if (ctx->pc != 0x3CB31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB31Cu; }
        if (ctx->pc != 0x3CB31Cu) { return; }
    }
    ctx->pc = 0x3CB31Cu;
label_3cb31c:
    // 0x3cb31c: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x3cb31cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3cb320:
    // 0x3cb320: 0xc0b6e28  jal         func_2DB8A0
label_3cb324:
    if (ctx->pc == 0x3CB324u) {
        ctx->pc = 0x3CB324u;
            // 0x3cb324: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3CB328u;
        goto label_3cb328;
    }
    ctx->pc = 0x3CB320u;
    SET_GPR_U32(ctx, 31, 0x3CB328u);
    ctx->pc = 0x3CB324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB320u;
            // 0x3cb324: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8A0u;
    if (runtime->hasFunction(0x2DB8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB328u; }
        if (ctx->pc != 0x3CB328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8A0_0x2db8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB328u; }
        if (ctx->pc != 0x3CB328u) { return; }
    }
    ctx->pc = 0x3CB328u;
label_3cb328:
    // 0x3cb328: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3cb328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3cb32c:
    // 0x3cb32c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3cb32cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3cb330:
    // 0x3cb330: 0xc0b6e28  jal         func_2DB8A0
label_3cb334:
    if (ctx->pc == 0x3CB334u) {
        ctx->pc = 0x3CB334u;
            // 0x3cb334: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3CB338u;
        goto label_3cb338;
    }
    ctx->pc = 0x3CB330u;
    SET_GPR_U32(ctx, 31, 0x3CB338u);
    ctx->pc = 0x3CB334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB330u;
            // 0x3cb334: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8A0u;
    if (runtime->hasFunction(0x2DB8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB338u; }
        if (ctx->pc != 0x3CB338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8A0_0x2db8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB338u; }
        if (ctx->pc != 0x3CB338u) { return; }
    }
    ctx->pc = 0x3CB338u;
label_3cb338:
    // 0x3cb338: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3cb338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3cb33c:
    // 0x3cb33c: 0xc0dc3f4  jal         func_370FD0
label_3cb340:
    if (ctx->pc == 0x3CB340u) {
        ctx->pc = 0x3CB340u;
            // 0x3cb340: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3CB344u;
        goto label_3cb344;
    }
    ctx->pc = 0x3CB33Cu;
    SET_GPR_U32(ctx, 31, 0x3CB344u);
    ctx->pc = 0x3CB340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB33Cu;
            // 0x3cb340: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB344u; }
        if (ctx->pc != 0x3CB344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB344u; }
        if (ctx->pc != 0x3CB344u) { return; }
    }
    ctx->pc = 0x3CB344u;
label_3cb344:
    // 0x3cb344: 0xc60200e4  lwc1        $f2, 0xE4($s0)
    ctx->pc = 0x3cb344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cb348:
    // 0x3cb348: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3cb348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_3cb34c:
    // 0x3cb34c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3cb34cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3cb350:
    // 0x3cb350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cb350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb354:
    // 0x3cb354: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3cb354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3cb358:
    // 0x3cb358: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3cb358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cb35c:
    // 0x3cb35c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3cb35cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3cb360:
    // 0x3cb360: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cb360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cb364:
    // 0x3cb364: 0x0  nop
    ctx->pc = 0x3cb364u;
    // NOP
label_3cb368:
    // 0x3cb368: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3cb368u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3cb36c:
    // 0x3cb36c: 0xc0f2c58  jal         func_3CB160
label_3cb370:
    if (ctx->pc == 0x3CB370u) {
        ctx->pc = 0x3CB370u;
            // 0x3cb370: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->pc = 0x3CB374u;
        goto label_3cb374;
    }
    ctx->pc = 0x3CB36Cu;
    SET_GPR_U32(ctx, 31, 0x3CB374u);
    ctx->pc = 0x3CB370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB36Cu;
            // 0x3cb370: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3CB160u;
    goto label_3cb160;
    ctx->pc = 0x3CB374u;
label_3cb374:
    // 0x3cb374: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_3cb378:
    if (ctx->pc == 0x3CB378u) {
        ctx->pc = 0x3CB37Cu;
        goto label_3cb37c;
    }
    ctx->pc = 0x3CB374u;
    {
        const bool branch_taken_0x3cb374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cb374) {
            ctx->pc = 0x3CB604u;
            goto label_3cb604;
        }
    }
    ctx->pc = 0x3CB37Cu;
label_3cb37c:
    // 0x3cb37c: 0xc0775b8  jal         func_1DD6E0
label_3cb380:
    if (ctx->pc == 0x3CB380u) {
        ctx->pc = 0x3CB384u;
        goto label_3cb384;
    }
    ctx->pc = 0x3CB37Cu;
    SET_GPR_U32(ctx, 31, 0x3CB384u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB384u; }
        if (ctx->pc != 0x3CB384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB384u; }
        if (ctx->pc != 0x3CB384u) { return; }
    }
    ctx->pc = 0x3CB384u;
label_3cb384:
    // 0x3cb384: 0xc0775b4  jal         func_1DD6D0
label_3cb388:
    if (ctx->pc == 0x3CB388u) {
        ctx->pc = 0x3CB388u;
            // 0x3cb388: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3CB38Cu;
        goto label_3cb38c;
    }
    ctx->pc = 0x3CB384u;
    SET_GPR_U32(ctx, 31, 0x3CB38Cu);
    ctx->pc = 0x3CB388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB384u;
            // 0x3cb388: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB38Cu; }
        if (ctx->pc != 0x3CB38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB38Cu; }
        if (ctx->pc != 0x3CB38Cu) { return; }
    }
    ctx->pc = 0x3CB38Cu;
label_3cb38c:
    // 0x3cb38c: 0xc60200e4  lwc1        $f2, 0xE4($s0)
    ctx->pc = 0x3cb38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cb390:
    // 0x3cb390: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3cb390u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3cb394:
    // 0x3cb394: 0x0  nop
    ctx->pc = 0x3cb394u;
    // NOP
label_3cb398:
    // 0x3cb398: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x3cb398u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3cb39c:
    // 0x3cb39c: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x3cb39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
label_3cb3a0:
    // 0x3cb3a0: 0xc6000158  lwc1        $f0, 0x158($s0)
    ctx->pc = 0x3cb3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb3a4:
    // 0x3cb3a4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3cb3a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cb3a8:
    // 0x3cb3a8: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_3cb3ac:
    if (ctx->pc == 0x3CB3ACu) {
        ctx->pc = 0x3CB3ACu;
            // 0x3cb3ac: 0xc60000e4  lwc1        $f0, 0xE4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x3CB3B0u;
        goto label_3cb3b0;
    }
    ctx->pc = 0x3CB3A8u;
    {
        const bool branch_taken_0x3cb3a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cb3a8) {
            ctx->pc = 0x3CB3ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB3A8u;
            // 0x3cb3ac: 0xc60000e4  lwc1        $f0, 0xE4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CB3D0u;
            goto label_3cb3d0;
        }
    }
    ctx->pc = 0x3CB3B0u;
label_3cb3b0:
    // 0x3cb3b0: 0xc0775b8  jal         func_1DD6E0
label_3cb3b4:
    if (ctx->pc == 0x3CB3B4u) {
        ctx->pc = 0x3CB3B8u;
        goto label_3cb3b8;
    }
    ctx->pc = 0x3CB3B0u;
    SET_GPR_U32(ctx, 31, 0x3CB3B8u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB3B8u; }
        if (ctx->pc != 0x3CB3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB3B8u; }
        if (ctx->pc != 0x3CB3B8u) { return; }
    }
    ctx->pc = 0x3CB3B8u;
label_3cb3b8:
    // 0x3cb3b8: 0xc0775b4  jal         func_1DD6D0
label_3cb3bc:
    if (ctx->pc == 0x3CB3BCu) {
        ctx->pc = 0x3CB3BCu;
            // 0x3cb3bc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3CB3C0u;
        goto label_3cb3c0;
    }
    ctx->pc = 0x3CB3B8u;
    SET_GPR_U32(ctx, 31, 0x3CB3C0u);
    ctx->pc = 0x3CB3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB3B8u;
            // 0x3cb3bc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB3C0u; }
        if (ctx->pc != 0x3CB3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB3C0u; }
        if (ctx->pc != 0x3CB3C0u) { return; }
    }
    ctx->pc = 0x3CB3C0u;
label_3cb3c0:
    // 0x3cb3c0: 0xc6010158  lwc1        $f1, 0x158($s0)
    ctx->pc = 0x3cb3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cb3c4:
    // 0x3cb3c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3cb3c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3cb3c8:
    // 0x3cb3c8: 0xe6000158  swc1        $f0, 0x158($s0)
    ctx->pc = 0x3cb3c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 344), bits); }
label_3cb3cc:
    // 0x3cb3cc: 0xc60000e4  lwc1        $f0, 0xE4($s0)
    ctx->pc = 0x3cb3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb3d0:
    // 0x3cb3d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3cb3d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3cb3d4:
    // 0x3cb3d4: 0x0  nop
    ctx->pc = 0x3cb3d4u;
    // NOP
label_3cb3d8:
    // 0x3cb3d8: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x3cb3d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cb3dc:
    // 0x3cb3dc: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
label_3cb3e0:
    if (ctx->pc == 0x3CB3E0u) {
        ctx->pc = 0x3CB3E0u;
            // 0x3cb3e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CB3E4u;
        goto label_3cb3e4;
    }
    ctx->pc = 0x3CB3DCu;
    {
        const bool branch_taken_0x3cb3dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cb3dc) {
            ctx->pc = 0x3CB3E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB3DCu;
            // 0x3cb3e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CB414u;
            goto label_3cb414;
        }
    }
    ctx->pc = 0x3CB3E4u;
label_3cb3e4:
    // 0x3cb3e4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3cb3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3cb3e8:
    // 0x3cb3e8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3cb3e8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3cb3ec:
    // 0x3cb3ec: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x3cb3ecu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_3cb3f0:
    // 0x3cb3f0: 0xc0b6df0  jal         func_2DB7C0
label_3cb3f4:
    if (ctx->pc == 0x3CB3F4u) {
        ctx->pc = 0x3CB3F4u;
            // 0x3cb3f4: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3CB3F8u;
        goto label_3cb3f8;
    }
    ctx->pc = 0x3CB3F0u;
    SET_GPR_U32(ctx, 31, 0x3CB3F8u);
    ctx->pc = 0x3CB3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB3F0u;
            // 0x3cb3f4: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB3F8u; }
        if (ctx->pc != 0x3CB3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB3F8u; }
        if (ctx->pc != 0x3CB3F8u) { return; }
    }
    ctx->pc = 0x3CB3F8u;
label_3cb3f8:
    // 0x3cb3f8: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3cb3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3cb3fc:
    // 0x3cb3fc: 0xc0dc3f4  jal         func_370FD0
label_3cb400:
    if (ctx->pc == 0x3CB400u) {
        ctx->pc = 0x3CB400u;
            // 0x3cb400: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3CB404u;
        goto label_3cb404;
    }
    ctx->pc = 0x3CB3FCu;
    SET_GPR_U32(ctx, 31, 0x3CB404u);
    ctx->pc = 0x3CB400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB3FCu;
            // 0x3cb400: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB404u; }
        if (ctx->pc != 0x3CB404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB404u; }
        if (ctx->pc != 0x3CB404u) { return; }
    }
    ctx->pc = 0x3CB404u;
label_3cb404:
    // 0x3cb404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cb404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb408:
    // 0x3cb408: 0xc0f2c58  jal         func_3CB160
label_3cb40c:
    if (ctx->pc == 0x3CB40Cu) {
        ctx->pc = 0x3CB40Cu;
            // 0x3cb40c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3CB410u;
        goto label_3cb410;
    }
    ctx->pc = 0x3CB408u;
    SET_GPR_U32(ctx, 31, 0x3CB410u);
    ctx->pc = 0x3CB40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB408u;
            // 0x3cb40c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3CB160u;
    goto label_3cb160;
    ctx->pc = 0x3CB410u;
label_3cb410:
    // 0x3cb410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cb410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb414:
    // 0x3cb414: 0xc0f2934  jal         func_3CA4D0
label_3cb418:
    if (ctx->pc == 0x3CB418u) {
        ctx->pc = 0x3CB41Cu;
        goto label_3cb41c;
    }
    ctx->pc = 0x3CB414u;
    SET_GPR_U32(ctx, 31, 0x3CB41Cu);
    ctx->pc = 0x3CA4D0u;
    if (runtime->hasFunction(0x3CA4D0u)) {
        auto targetFn = runtime->lookupFunction(0x3CA4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB41Cu; }
        if (ctx->pc != 0x3CB41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003CA4D0_0x3ca4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB41Cu; }
        if (ctx->pc != 0x3CB41Cu) { return; }
    }
    ctx->pc = 0x3CB41Cu;
label_3cb41c:
    // 0x3cb41c: 0x10000079  b           . + 4 + (0x79 << 2)
label_3cb420:
    if (ctx->pc == 0x3CB420u) {
        ctx->pc = 0x3CB424u;
        goto label_3cb424;
    }
    ctx->pc = 0x3CB41Cu;
    {
        const bool branch_taken_0x3cb41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cb41c) {
            ctx->pc = 0x3CB604u;
            goto label_3cb604;
        }
    }
    ctx->pc = 0x3CB424u;
label_3cb424:
    // 0x3cb424: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
label_3cb428:
    if (ctx->pc == 0x3CB428u) {
        ctx->pc = 0x3CB428u;
            // 0x3cb428: 0xc6010158  lwc1        $f1, 0x158($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3CB42Cu;
        goto label_3cb42c;
    }
    ctx->pc = 0x3CB424u;
    {
        const bool branch_taken_0x3cb424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cb424) {
            ctx->pc = 0x3CB428u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB424u;
            // 0x3cb428: 0xc6010158  lwc1        $f1, 0x158($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CB4B8u;
            goto label_3cb4b8;
        }
    }
    ctx->pc = 0x3CB42Cu;
label_3cb42c:
    // 0x3cb42c: 0xc6010158  lwc1        $f1, 0x158($s0)
    ctx->pc = 0x3cb42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cb430:
    // 0x3cb430: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3cb430u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cb434:
    // 0x3cb434: 0x0  nop
    ctx->pc = 0x3cb434u;
    // NOP
label_3cb438:
    // 0x3cb438: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3cb438u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cb43c:
    // 0x3cb43c: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
label_3cb440:
    if (ctx->pc == 0x3CB440u) {
        ctx->pc = 0x3CB444u;
        goto label_3cb444;
    }
    ctx->pc = 0x3CB43Cu;
    {
        const bool branch_taken_0x3cb43c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cb43c) {
            ctx->pc = 0x3CB4B4u;
            goto label_3cb4b4;
        }
    }
    ctx->pc = 0x3CB444u;
label_3cb444:
    // 0x3cb444: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3cb444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3cb448:
    // 0x3cb448: 0xc0b6de4  jal         func_2DB790
label_3cb44c:
    if (ctx->pc == 0x3CB44Cu) {
        ctx->pc = 0x3CB44Cu;
            // 0x3cb44c: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x3CB450u;
        goto label_3cb450;
    }
    ctx->pc = 0x3CB448u;
    SET_GPR_U32(ctx, 31, 0x3CB450u);
    ctx->pc = 0x3CB44Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB448u;
            // 0x3cb44c: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB790u;
    if (runtime->hasFunction(0x2DB790u)) {
        auto targetFn = runtime->lookupFunction(0x2DB790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB450u; }
        if (ctx->pc != 0x3CB450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB790_0x2db790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB450u; }
        if (ctx->pc != 0x3CB450u) { return; }
    }
    ctx->pc = 0x3CB450u;
label_3cb450:
    // 0x3cb450: 0xc0b6e84  jal         func_2DBA10
label_3cb454:
    if (ctx->pc == 0x3CB454u) {
        ctx->pc = 0x3CB458u;
        goto label_3cb458;
    }
    ctx->pc = 0x3CB450u;
    SET_GPR_U32(ctx, 31, 0x3CB458u);
    ctx->pc = 0x2DBA10u;
    if (runtime->hasFunction(0x2DBA10u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB458u; }
        if (ctx->pc != 0x3CB458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA10_0x2dba10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB458u; }
        if (ctx->pc != 0x3CB458u) { return; }
    }
    ctx->pc = 0x3CB458u;
label_3cb458:
    // 0x3cb458: 0xc0b6e60  jal         func_2DB980
label_3cb45c:
    if (ctx->pc == 0x3CB45Cu) {
        ctx->pc = 0x3CB45Cu;
            // 0x3cb45c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CB460u;
        goto label_3cb460;
    }
    ctx->pc = 0x3CB458u;
    SET_GPR_U32(ctx, 31, 0x3CB460u);
    ctx->pc = 0x3CB45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB458u;
            // 0x3cb45c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB980u;
    if (runtime->hasFunction(0x2DB980u)) {
        auto targetFn = runtime->lookupFunction(0x2DB980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB460u; }
        if (ctx->pc != 0x3CB460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB980_0x2db980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB460u; }
        if (ctx->pc != 0x3CB460u) { return; }
    }
    ctx->pc = 0x3CB460u;
label_3cb460:
    // 0x3cb460: 0xc0b6e38  jal         func_2DB8E0
label_3cb464:
    if (ctx->pc == 0x3CB464u) {
        ctx->pc = 0x3CB464u;
            // 0x3cb464: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x3CB468u;
        goto label_3cb468;
    }
    ctx->pc = 0x3CB460u;
    SET_GPR_U32(ctx, 31, 0x3CB468u);
    ctx->pc = 0x3CB464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB460u;
            // 0x3cb464: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8E0u;
    if (runtime->hasFunction(0x2DB8E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB468u; }
        if (ctx->pc != 0x3CB468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8E0_0x2db8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB468u; }
        if (ctx->pc != 0x3CB468u) { return; }
    }
    ctx->pc = 0x3CB468u;
label_3cb468:
    // 0x3cb468: 0xc0775b8  jal         func_1DD6E0
label_3cb46c:
    if (ctx->pc == 0x3CB46Cu) {
        ctx->pc = 0x3CB46Cu;
            // 0x3cb46c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x3CB470u;
        goto label_3cb470;
    }
    ctx->pc = 0x3CB468u;
    SET_GPR_U32(ctx, 31, 0x3CB470u);
    ctx->pc = 0x3CB46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB468u;
            // 0x3cb46c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB470u; }
        if (ctx->pc != 0x3CB470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB470u; }
        if (ctx->pc != 0x3CB470u) { return; }
    }
    ctx->pc = 0x3CB470u;
label_3cb470:
    // 0x3cb470: 0xc0775b4  jal         func_1DD6D0
label_3cb474:
    if (ctx->pc == 0x3CB474u) {
        ctx->pc = 0x3CB474u;
            // 0x3cb474: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3CB478u;
        goto label_3cb478;
    }
    ctx->pc = 0x3CB470u;
    SET_GPR_U32(ctx, 31, 0x3CB478u);
    ctx->pc = 0x3CB474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB470u;
            // 0x3cb474: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB478u; }
        if (ctx->pc != 0x3CB478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB478u; }
        if (ctx->pc != 0x3CB478u) { return; }
    }
    ctx->pc = 0x3CB478u;
label_3cb478:
    // 0x3cb478: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x3cb478u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3cb47c:
    // 0x3cb47c: 0xc0b6e28  jal         func_2DB8A0
label_3cb480:
    if (ctx->pc == 0x3CB480u) {
        ctx->pc = 0x3CB480u;
            // 0x3cb480: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3CB484u;
        goto label_3cb484;
    }
    ctx->pc = 0x3CB47Cu;
    SET_GPR_U32(ctx, 31, 0x3CB484u);
    ctx->pc = 0x3CB480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB47Cu;
            // 0x3cb480: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8A0u;
    if (runtime->hasFunction(0x2DB8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB484u; }
        if (ctx->pc != 0x3CB484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8A0_0x2db8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB484u; }
        if (ctx->pc != 0x3CB484u) { return; }
    }
    ctx->pc = 0x3CB484u;
label_3cb484:
    // 0x3cb484: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3cb484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3cb488:
    // 0x3cb488: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3cb488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3cb48c:
    // 0x3cb48c: 0xc0b6e28  jal         func_2DB8A0
label_3cb490:
    if (ctx->pc == 0x3CB490u) {
        ctx->pc = 0x3CB490u;
            // 0x3cb490: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3CB494u;
        goto label_3cb494;
    }
    ctx->pc = 0x3CB48Cu;
    SET_GPR_U32(ctx, 31, 0x3CB494u);
    ctx->pc = 0x3CB490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB48Cu;
            // 0x3cb490: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8A0u;
    if (runtime->hasFunction(0x2DB8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB494u; }
        if (ctx->pc != 0x3CB494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8A0_0x2db8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB494u; }
        if (ctx->pc != 0x3CB494u) { return; }
    }
    ctx->pc = 0x3CB494u;
label_3cb494:
    // 0x3cb494: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3cb494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3cb498:
    // 0x3cb498: 0xc0dc3f4  jal         func_370FD0
label_3cb49c:
    if (ctx->pc == 0x3CB49Cu) {
        ctx->pc = 0x3CB49Cu;
            // 0x3cb49c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3CB4A0u;
        goto label_3cb4a0;
    }
    ctx->pc = 0x3CB498u;
    SET_GPR_U32(ctx, 31, 0x3CB4A0u);
    ctx->pc = 0x3CB49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB498u;
            // 0x3cb49c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB4A0u; }
        if (ctx->pc != 0x3CB4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB4A0u; }
        if (ctx->pc != 0x3CB4A0u) { return; }
    }
    ctx->pc = 0x3CB4A0u;
label_3cb4a0:
    // 0x3cb4a0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3cb4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_3cb4a4:
    // 0x3cb4a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cb4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb4a8:
    // 0x3cb4a8: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x3cb4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
label_3cb4ac:
    // 0x3cb4ac: 0xc0f2c58  jal         func_3CB160
label_3cb4b0:
    if (ctx->pc == 0x3CB4B0u) {
        ctx->pc = 0x3CB4B0u;
            // 0x3cb4b0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3CB4B4u;
        goto label_3cb4b4;
    }
    ctx->pc = 0x3CB4ACu;
    SET_GPR_U32(ctx, 31, 0x3CB4B4u);
    ctx->pc = 0x3CB4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB4ACu;
            // 0x3cb4b0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3CB160u;
    goto label_3cb160;
    ctx->pc = 0x3CB4B4u;
label_3cb4b4:
    // 0x3cb4b4: 0xc6010158  lwc1        $f1, 0x158($s0)
    ctx->pc = 0x3cb4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cb4b8:
    // 0x3cb4b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3cb4b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cb4bc:
    // 0x3cb4bc: 0x0  nop
    ctx->pc = 0x3cb4bcu;
    // NOP
label_3cb4c0:
    // 0x3cb4c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3cb4c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cb4c4:
    // 0x3cb4c4: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_3cb4c8:
    if (ctx->pc == 0x3CB4C8u) {
        ctx->pc = 0x3CB4C8u;
            // 0x3cb4c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CB4CCu;
        goto label_3cb4cc;
    }
    ctx->pc = 0x3CB4C4u;
    {
        const bool branch_taken_0x3cb4c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cb4c4) {
            ctx->pc = 0x3CB4C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB4C4u;
            // 0x3cb4c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CB4ECu;
            goto label_3cb4ec;
        }
    }
    ctx->pc = 0x3CB4CCu;
label_3cb4cc:
    // 0x3cb4cc: 0xc0775b8  jal         func_1DD6E0
label_3cb4d0:
    if (ctx->pc == 0x3CB4D0u) {
        ctx->pc = 0x3CB4D4u;
        goto label_3cb4d4;
    }
    ctx->pc = 0x3CB4CCu;
    SET_GPR_U32(ctx, 31, 0x3CB4D4u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB4D4u; }
        if (ctx->pc != 0x3CB4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB4D4u; }
        if (ctx->pc != 0x3CB4D4u) { return; }
    }
    ctx->pc = 0x3CB4D4u;
label_3cb4d4:
    // 0x3cb4d4: 0xc0775b4  jal         func_1DD6D0
label_3cb4d8:
    if (ctx->pc == 0x3CB4D8u) {
        ctx->pc = 0x3CB4D8u;
            // 0x3cb4d8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3CB4DCu;
        goto label_3cb4dc;
    }
    ctx->pc = 0x3CB4D4u;
    SET_GPR_U32(ctx, 31, 0x3CB4DCu);
    ctx->pc = 0x3CB4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB4D4u;
            // 0x3cb4d8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB4DCu; }
        if (ctx->pc != 0x3CB4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB4DCu; }
        if (ctx->pc != 0x3CB4DCu) { return; }
    }
    ctx->pc = 0x3CB4DCu;
label_3cb4dc:
    // 0x3cb4dc: 0xc6010158  lwc1        $f1, 0x158($s0)
    ctx->pc = 0x3cb4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cb4e0:
    // 0x3cb4e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3cb4e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3cb4e4:
    // 0x3cb4e4: 0xe6000158  swc1        $f0, 0x158($s0)
    ctx->pc = 0x3cb4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 344), bits); }
label_3cb4e8:
    // 0x3cb4e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cb4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb4ec:
    // 0x3cb4ec: 0xc0f2934  jal         func_3CA4D0
label_3cb4f0:
    if (ctx->pc == 0x3CB4F0u) {
        ctx->pc = 0x3CB4F4u;
        goto label_3cb4f4;
    }
    ctx->pc = 0x3CB4ECu;
    SET_GPR_U32(ctx, 31, 0x3CB4F4u);
    ctx->pc = 0x3CA4D0u;
    if (runtime->hasFunction(0x3CA4D0u)) {
        auto targetFn = runtime->lookupFunction(0x3CA4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB4F4u; }
        if (ctx->pc != 0x3CB4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003CA4D0_0x3ca4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB4F4u; }
        if (ctx->pc != 0x3CB4F4u) { return; }
    }
    ctx->pc = 0x3CB4F4u;
label_3cb4f4:
    // 0x3cb4f4: 0x10000043  b           . + 4 + (0x43 << 2)
label_3cb4f8:
    if (ctx->pc == 0x3CB4F8u) {
        ctx->pc = 0x3CB4FCu;
        goto label_3cb4fc;
    }
    ctx->pc = 0x3CB4F4u;
    {
        const bool branch_taken_0x3cb4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cb4f4) {
            ctx->pc = 0x3CB604u;
            goto label_3cb604;
        }
    }
    ctx->pc = 0x3CB4FCu;
label_3cb4fc:
    // 0x3cb4fc: 0xc088b74  jal         func_222DD0
label_3cb500:
    if (ctx->pc == 0x3CB500u) {
        ctx->pc = 0x3CB504u;
        goto label_3cb504;
    }
    ctx->pc = 0x3CB4FCu;
    SET_GPR_U32(ctx, 31, 0x3CB504u);
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB504u; }
        if (ctx->pc != 0x3CB504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB504u; }
        if (ctx->pc != 0x3CB504u) { return; }
    }
    ctx->pc = 0x3CB504u;
label_3cb504:
    // 0x3cb504: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x3cb504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_3cb508:
    // 0x3cb508: 0x18400022  blez        $v0, . + 4 + (0x22 << 2)
label_3cb50c:
    if (ctx->pc == 0x3CB50Cu) {
        ctx->pc = 0x3CB510u;
        goto label_3cb510;
    }
    ctx->pc = 0x3CB508u;
    {
        const bool branch_taken_0x3cb508 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3cb508) {
            ctx->pc = 0x3CB594u;
            goto label_3cb594;
        }
    }
    ctx->pc = 0x3CB510u;
label_3cb510:
    // 0x3cb510: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3cb510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3cb514:
    // 0x3cb514: 0xc0b6de4  jal         func_2DB790
label_3cb518:
    if (ctx->pc == 0x3CB518u) {
        ctx->pc = 0x3CB518u;
            // 0x3cb518: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x3CB51Cu;
        goto label_3cb51c;
    }
    ctx->pc = 0x3CB514u;
    SET_GPR_U32(ctx, 31, 0x3CB51Cu);
    ctx->pc = 0x3CB518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB514u;
            // 0x3cb518: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB790u;
    if (runtime->hasFunction(0x2DB790u)) {
        auto targetFn = runtime->lookupFunction(0x2DB790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB51Cu; }
        if (ctx->pc != 0x3CB51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB790_0x2db790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB51Cu; }
        if (ctx->pc != 0x3CB51Cu) { return; }
    }
    ctx->pc = 0x3CB51Cu;
label_3cb51c:
    // 0x3cb51c: 0xc0b6e84  jal         func_2DBA10
label_3cb520:
    if (ctx->pc == 0x3CB520u) {
        ctx->pc = 0x3CB524u;
        goto label_3cb524;
    }
    ctx->pc = 0x3CB51Cu;
    SET_GPR_U32(ctx, 31, 0x3CB524u);
    ctx->pc = 0x2DBA10u;
    if (runtime->hasFunction(0x2DBA10u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB524u; }
        if (ctx->pc != 0x3CB524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA10_0x2dba10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB524u; }
        if (ctx->pc != 0x3CB524u) { return; }
    }
    ctx->pc = 0x3CB524u;
label_3cb524:
    // 0x3cb524: 0xc0b6e60  jal         func_2DB980
label_3cb528:
    if (ctx->pc == 0x3CB528u) {
        ctx->pc = 0x3CB528u;
            // 0x3cb528: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CB52Cu;
        goto label_3cb52c;
    }
    ctx->pc = 0x3CB524u;
    SET_GPR_U32(ctx, 31, 0x3CB52Cu);
    ctx->pc = 0x3CB528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB524u;
            // 0x3cb528: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB980u;
    if (runtime->hasFunction(0x2DB980u)) {
        auto targetFn = runtime->lookupFunction(0x2DB980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB52Cu; }
        if (ctx->pc != 0x3CB52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB980_0x2db980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB52Cu; }
        if (ctx->pc != 0x3CB52Cu) { return; }
    }
    ctx->pc = 0x3CB52Cu;
label_3cb52c:
    // 0x3cb52c: 0xc0b6e38  jal         func_2DB8E0
label_3cb530:
    if (ctx->pc == 0x3CB530u) {
        ctx->pc = 0x3CB530u;
            // 0x3cb530: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x3CB534u;
        goto label_3cb534;
    }
    ctx->pc = 0x3CB52Cu;
    SET_GPR_U32(ctx, 31, 0x3CB534u);
    ctx->pc = 0x3CB530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB52Cu;
            // 0x3cb530: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8E0u;
    if (runtime->hasFunction(0x2DB8E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB534u; }
        if (ctx->pc != 0x3CB534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8E0_0x2db8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB534u; }
        if (ctx->pc != 0x3CB534u) { return; }
    }
    ctx->pc = 0x3CB534u;
label_3cb534:
    // 0x3cb534: 0xc0775b8  jal         func_1DD6E0
label_3cb538:
    if (ctx->pc == 0x3CB538u) {
        ctx->pc = 0x3CB538u;
            // 0x3cb538: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x3CB53Cu;
        goto label_3cb53c;
    }
    ctx->pc = 0x3CB534u;
    SET_GPR_U32(ctx, 31, 0x3CB53Cu);
    ctx->pc = 0x3CB538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB534u;
            // 0x3cb538: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB53Cu; }
        if (ctx->pc != 0x3CB53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB53Cu; }
        if (ctx->pc != 0x3CB53Cu) { return; }
    }
    ctx->pc = 0x3CB53Cu;
label_3cb53c:
    // 0x3cb53c: 0xc0775b4  jal         func_1DD6D0
label_3cb540:
    if (ctx->pc == 0x3CB540u) {
        ctx->pc = 0x3CB540u;
            // 0x3cb540: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3CB544u;
        goto label_3cb544;
    }
    ctx->pc = 0x3CB53Cu;
    SET_GPR_U32(ctx, 31, 0x3CB544u);
    ctx->pc = 0x3CB540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB53Cu;
            // 0x3cb540: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB544u; }
        if (ctx->pc != 0x3CB544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB544u; }
        if (ctx->pc != 0x3CB544u) { return; }
    }
    ctx->pc = 0x3CB544u;
label_3cb544:
    // 0x3cb544: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x3cb544u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3cb548:
    // 0x3cb548: 0xc0b6e28  jal         func_2DB8A0
label_3cb54c:
    if (ctx->pc == 0x3CB54Cu) {
        ctx->pc = 0x3CB54Cu;
            // 0x3cb54c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3CB550u;
        goto label_3cb550;
    }
    ctx->pc = 0x3CB548u;
    SET_GPR_U32(ctx, 31, 0x3CB550u);
    ctx->pc = 0x3CB54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB548u;
            // 0x3cb54c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8A0u;
    if (runtime->hasFunction(0x2DB8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB550u; }
        if (ctx->pc != 0x3CB550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8A0_0x2db8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB550u; }
        if (ctx->pc != 0x3CB550u) { return; }
    }
    ctx->pc = 0x3CB550u;
label_3cb550:
    // 0x3cb550: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3cb550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3cb554:
    // 0x3cb554: 0xc0dc3f4  jal         func_370FD0
label_3cb558:
    if (ctx->pc == 0x3CB558u) {
        ctx->pc = 0x3CB558u;
            // 0x3cb558: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3CB55Cu;
        goto label_3cb55c;
    }
    ctx->pc = 0x3CB554u;
    SET_GPR_U32(ctx, 31, 0x3CB55Cu);
    ctx->pc = 0x3CB558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB554u;
            // 0x3cb558: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB55Cu; }
        if (ctx->pc != 0x3CB55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB55Cu; }
        if (ctx->pc != 0x3CB55Cu) { return; }
    }
    ctx->pc = 0x3CB55Cu;
label_3cb55c:
    // 0x3cb55c: 0xc60200e4  lwc1        $f2, 0xE4($s0)
    ctx->pc = 0x3cb55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cb560:
    // 0x3cb560: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3cb560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_3cb564:
    // 0x3cb564: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3cb564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3cb568:
    // 0x3cb568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cb568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb56c:
    // 0x3cb56c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3cb56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3cb570:
    // 0x3cb570: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3cb570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cb574:
    // 0x3cb574: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3cb574u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3cb578:
    // 0x3cb578: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cb578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cb57c:
    // 0x3cb57c: 0x0  nop
    ctx->pc = 0x3cb57cu;
    // NOP
label_3cb580:
    // 0x3cb580: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3cb580u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3cb584:
    // 0x3cb584: 0xc0f2c58  jal         func_3CB160
label_3cb588:
    if (ctx->pc == 0x3CB588u) {
        ctx->pc = 0x3CB588u;
            // 0x3cb588: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->pc = 0x3CB58Cu;
        goto label_3cb58c;
    }
    ctx->pc = 0x3CB584u;
    SET_GPR_U32(ctx, 31, 0x3CB58Cu);
    ctx->pc = 0x3CB588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB584u;
            // 0x3cb588: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3CB160u;
    goto label_3cb160;
    ctx->pc = 0x3CB58Cu;
label_3cb58c:
    // 0x3cb58c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_3cb590:
    if (ctx->pc == 0x3CB590u) {
        ctx->pc = 0x3CB594u;
        goto label_3cb594;
    }
    ctx->pc = 0x3CB58Cu;
    {
        const bool branch_taken_0x3cb58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cb58c) {
            ctx->pc = 0x3CB604u;
            goto label_3cb604;
        }
    }
    ctx->pc = 0x3CB594u;
label_3cb594:
    // 0x3cb594: 0xc0775b8  jal         func_1DD6E0
label_3cb598:
    if (ctx->pc == 0x3CB598u) {
        ctx->pc = 0x3CB59Cu;
        goto label_3cb59c;
    }
    ctx->pc = 0x3CB594u;
    SET_GPR_U32(ctx, 31, 0x3CB59Cu);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB59Cu; }
        if (ctx->pc != 0x3CB59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB59Cu; }
        if (ctx->pc != 0x3CB59Cu) { return; }
    }
    ctx->pc = 0x3CB59Cu;
label_3cb59c:
    // 0x3cb59c: 0xc0775b4  jal         func_1DD6D0
label_3cb5a0:
    if (ctx->pc == 0x3CB5A0u) {
        ctx->pc = 0x3CB5A0u;
            // 0x3cb5a0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3CB5A4u;
        goto label_3cb5a4;
    }
    ctx->pc = 0x3CB59Cu;
    SET_GPR_U32(ctx, 31, 0x3CB5A4u);
    ctx->pc = 0x3CB5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB59Cu;
            // 0x3cb5a0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB5A4u; }
        if (ctx->pc != 0x3CB5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB5A4u; }
        if (ctx->pc != 0x3CB5A4u) { return; }
    }
    ctx->pc = 0x3CB5A4u;
label_3cb5a4:
    // 0x3cb5a4: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x3cb5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cb5a8:
    // 0x3cb5a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3cb5a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3cb5ac:
    // 0x3cb5ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3cb5acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3cb5b0:
    // 0x3cb5b0: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x3cb5b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cb5b4:
    // 0x3cb5b4: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_3cb5b8:
    if (ctx->pc == 0x3CB5B8u) {
        ctx->pc = 0x3CB5B8u;
            // 0x3cb5b8: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->pc = 0x3CB5BCu;
        goto label_3cb5bc;
    }
    ctx->pc = 0x3CB5B4u;
    {
        const bool branch_taken_0x3cb5b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CB5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB5B4u;
            // 0x3cb5b8: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb5b4) {
            ctx->pc = 0x3CB5F8u;
            goto label_3cb5f8;
        }
    }
    ctx->pc = 0x3CB5BCu;
label_3cb5bc:
    // 0x3cb5bc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3cb5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3cb5c0:
    // 0x3cb5c0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3cb5c0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3cb5c4:
    // 0x3cb5c4: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x3cb5c4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_3cb5c8:
    // 0x3cb5c8: 0xc0b6df0  jal         func_2DB7C0
label_3cb5cc:
    if (ctx->pc == 0x3CB5CCu) {
        ctx->pc = 0x3CB5CCu;
            // 0x3cb5cc: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3CB5D0u;
        goto label_3cb5d0;
    }
    ctx->pc = 0x3CB5C8u;
    SET_GPR_U32(ctx, 31, 0x3CB5D0u);
    ctx->pc = 0x3CB5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB5C8u;
            // 0x3cb5cc: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB5D0u; }
        if (ctx->pc != 0x3CB5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB5D0u; }
        if (ctx->pc != 0x3CB5D0u) { return; }
    }
    ctx->pc = 0x3CB5D0u;
label_3cb5d0:
    // 0x3cb5d0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3cb5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3cb5d4:
    // 0x3cb5d4: 0xc0dc3f4  jal         func_370FD0
label_3cb5d8:
    if (ctx->pc == 0x3CB5D8u) {
        ctx->pc = 0x3CB5D8u;
            // 0x3cb5d8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3CB5DCu;
        goto label_3cb5dc;
    }
    ctx->pc = 0x3CB5D4u;
    SET_GPR_U32(ctx, 31, 0x3CB5DCu);
    ctx->pc = 0x3CB5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB5D4u;
            // 0x3cb5d8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB5DCu; }
        if (ctx->pc != 0x3CB5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB5DCu; }
        if (ctx->pc != 0x3CB5DCu) { return; }
    }
    ctx->pc = 0x3CB5DCu;
label_3cb5dc:
    // 0x3cb5dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cb5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb5e0:
    // 0x3cb5e0: 0xc0f2c58  jal         func_3CB160
label_3cb5e4:
    if (ctx->pc == 0x3CB5E4u) {
        ctx->pc = 0x3CB5E4u;
            // 0x3cb5e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CB5E8u;
        goto label_3cb5e8;
    }
    ctx->pc = 0x3CB5E0u;
    SET_GPR_U32(ctx, 31, 0x3CB5E8u);
    ctx->pc = 0x3CB5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB5E0u;
            // 0x3cb5e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3CB160u;
    goto label_3cb160;
    ctx->pc = 0x3CB5E8u;
label_3cb5e8:
    // 0x3cb5e8: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3cb5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3cb5ec:
    // 0x3cb5ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3cb5ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cb5f0:
    // 0x3cb5f0: 0xc0e1b0c  jal         func_386C30
label_3cb5f4:
    if (ctx->pc == 0x3CB5F4u) {
        ctx->pc = 0x3CB5F4u;
            // 0x3cb5f4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3CB5F8u;
        goto label_3cb5f8;
    }
    ctx->pc = 0x3CB5F0u;
    SET_GPR_U32(ctx, 31, 0x3CB5F8u);
    ctx->pc = 0x3CB5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB5F0u;
            // 0x3cb5f4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C30u;
    if (runtime->hasFunction(0x386C30u)) {
        auto targetFn = runtime->lookupFunction(0x386C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB5F8u; }
        if (ctx->pc != 0x3CB5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C30_0x386c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB5F8u; }
        if (ctx->pc != 0x3CB5F8u) { return; }
    }
    ctx->pc = 0x3CB5F8u;
label_3cb5f8:
    // 0x3cb5f8: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3cb5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3cb5fc:
    // 0x3cb5fc: 0xc0dc9a0  jal         func_372680
label_3cb600:
    if (ctx->pc == 0x3CB600u) {
        ctx->pc = 0x3CB600u;
            // 0x3cb600: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3CB604u;
        goto label_3cb604;
    }
    ctx->pc = 0x3CB5FCu;
    SET_GPR_U32(ctx, 31, 0x3CB604u);
    ctx->pc = 0x3CB600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB5FCu;
            // 0x3cb600: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x372680u;
    if (runtime->hasFunction(0x372680u)) {
        auto targetFn = runtime->lookupFunction(0x372680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB604u; }
        if (ctx->pc != 0x3CB604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00372680_0x372680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB604u; }
        if (ctx->pc != 0x3CB604u) { return; }
    }
    ctx->pc = 0x3CB604u;
label_3cb604:
    // 0x3cb604: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cb604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb608:
    // 0x3cb608: 0xc0f2dbc  jal         func_3CB6F0
label_3cb60c:
    if (ctx->pc == 0x3CB60Cu) {
        ctx->pc = 0x3CB610u;
        goto label_3cb610;
    }
    ctx->pc = 0x3CB608u;
    SET_GPR_U32(ctx, 31, 0x3CB610u);
    ctx->pc = 0x3CB6F0u;
    if (runtime->hasFunction(0x3CB6F0u)) {
        auto targetFn = runtime->lookupFunction(0x3CB6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB610u; }
        if (ctx->pc != 0x3CB610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003CB6F0_0x3cb6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB610u; }
        if (ctx->pc != 0x3CB610u) { return; }
    }
    ctx->pc = 0x3CB610u;
label_3cb610:
    // 0x3cb610: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3cb610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cb614:
    // 0x3cb614: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
label_3cb618:
    if (ctx->pc == 0x3CB618u) {
        ctx->pc = 0x3CB61Cu;
        goto label_3cb61c;
    }
    ctx->pc = 0x3CB614u;
    {
        const bool branch_taken_0x3cb614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cb614) {
            ctx->pc = 0x3CB660u;
            goto label_3cb660;
        }
    }
    ctx->pc = 0x3CB61Cu;
label_3cb61c:
    // 0x3cb61c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cb61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cb620:
    // 0x3cb620: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_3cb624:
    if (ctx->pc == 0x3CB624u) {
        ctx->pc = 0x3CB628u;
        goto label_3cb628;
    }
    ctx->pc = 0x3CB620u;
    {
        const bool branch_taken_0x3cb620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cb620) {
            ctx->pc = 0x3CB630u;
            goto label_3cb630;
        }
    }
    ctx->pc = 0x3CB628u;
label_3cb628:
    // 0x3cb628: 0x10000019  b           . + 4 + (0x19 << 2)
label_3cb62c:
    if (ctx->pc == 0x3CB62Cu) {
        ctx->pc = 0x3CB62Cu;
            // 0x3cb62c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CB630u;
        goto label_3cb630;
    }
    ctx->pc = 0x3CB628u;
    {
        const bool branch_taken_0x3cb628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB628u;
            // 0x3cb62c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb628) {
            ctx->pc = 0x3CB690u;
            goto label_3cb690;
        }
    }
    ctx->pc = 0x3CB630u;
label_3cb630:
    // 0x3cb630: 0xc0775b8  jal         func_1DD6E0
label_3cb634:
    if (ctx->pc == 0x3CB634u) {
        ctx->pc = 0x3CB638u;
        goto label_3cb638;
    }
    ctx->pc = 0x3CB630u;
    SET_GPR_U32(ctx, 31, 0x3CB638u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB638u; }
        if (ctx->pc != 0x3CB638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB638u; }
        if (ctx->pc != 0x3CB638u) { return; }
    }
    ctx->pc = 0x3CB638u;
label_3cb638:
    // 0x3cb638: 0xc0775b4  jal         func_1DD6D0
label_3cb63c:
    if (ctx->pc == 0x3CB63Cu) {
        ctx->pc = 0x3CB63Cu;
            // 0x3cb63c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3CB640u;
        goto label_3cb640;
    }
    ctx->pc = 0x3CB638u;
    SET_GPR_U32(ctx, 31, 0x3CB640u);
    ctx->pc = 0x3CB63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB638u;
            // 0x3cb63c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB640u; }
        if (ctx->pc != 0x3CB640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB640u; }
        if (ctx->pc != 0x3CB640u) { return; }
    }
    ctx->pc = 0x3CB640u;
label_3cb640:
    // 0x3cb640: 0xc602014c  lwc1        $f2, 0x14C($s0)
    ctx->pc = 0x3cb640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cb644:
    // 0x3cb644: 0xc6030148  lwc1        $f3, 0x148($s0)
    ctx->pc = 0x3cb644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cb648:
    // 0x3cb648: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3cb648u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3cb64c:
    // 0x3cb64c: 0x0  nop
    ctx->pc = 0x3cb64cu;
    // NOP
label_3cb650:
    // 0x3cb650: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x3cb650u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3cb654:
    // 0x3cb654: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x3cb654u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_3cb658:
    // 0x3cb658: 0x1000000c  b           . + 4 + (0xC << 2)
label_3cb65c:
    if (ctx->pc == 0x3CB65Cu) {
        ctx->pc = 0x3CB65Cu;
            // 0x3cb65c: 0xe600014c  swc1        $f0, 0x14C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 332), bits); }
        ctx->pc = 0x3CB660u;
        goto label_3cb660;
    }
    ctx->pc = 0x3CB658u;
    {
        const bool branch_taken_0x3cb658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB658u;
            // 0x3cb65c: 0xe600014c  swc1        $f0, 0x14C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 332), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb658) {
            ctx->pc = 0x3CB68Cu;
            goto label_3cb68c;
        }
    }
    ctx->pc = 0x3CB660u;
label_3cb660:
    // 0x3cb660: 0xc0775b8  jal         func_1DD6E0
label_3cb664:
    if (ctx->pc == 0x3CB664u) {
        ctx->pc = 0x3CB668u;
        goto label_3cb668;
    }
    ctx->pc = 0x3CB660u;
    SET_GPR_U32(ctx, 31, 0x3CB668u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB668u; }
        if (ctx->pc != 0x3CB668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB668u; }
        if (ctx->pc != 0x3CB668u) { return; }
    }
    ctx->pc = 0x3CB668u;
label_3cb668:
    // 0x3cb668: 0xc0775b4  jal         func_1DD6D0
label_3cb66c:
    if (ctx->pc == 0x3CB66Cu) {
        ctx->pc = 0x3CB66Cu;
            // 0x3cb66c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3CB670u;
        goto label_3cb670;
    }
    ctx->pc = 0x3CB668u;
    SET_GPR_U32(ctx, 31, 0x3CB670u);
    ctx->pc = 0x3CB66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB668u;
            // 0x3cb66c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB670u; }
        if (ctx->pc != 0x3CB670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB670u; }
        if (ctx->pc != 0x3CB670u) { return; }
    }
    ctx->pc = 0x3CB670u;
label_3cb670:
    // 0x3cb670: 0xc602014c  lwc1        $f2, 0x14C($s0)
    ctx->pc = 0x3cb670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cb674:
    // 0x3cb674: 0xc6030148  lwc1        $f3, 0x148($s0)
    ctx->pc = 0x3cb674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cb678:
    // 0x3cb678: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3cb678u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3cb67c:
    // 0x3cb67c: 0x0  nop
    ctx->pc = 0x3cb67cu;
    // NOP
label_3cb680:
    // 0x3cb680: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x3cb680u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3cb684:
    // 0x3cb684: 0x4600181d  msub.s      $f0, $f3, $f0
    ctx->pc = 0x3cb684u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_3cb688:
    // 0x3cb688: 0xe600014c  swc1        $f0, 0x14C($s0)
    ctx->pc = 0x3cb688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 332), bits); }
label_3cb68c:
    // 0x3cb68c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3cb68cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cb690:
    // 0x3cb690: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x3cb690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb694:
    // 0x3cb694: 0x8e250120  lw          $a1, 0x120($s1)
    ctx->pc = 0x3cb694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
label_3cb698:
    // 0x3cb698: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_3cb69c:
    if (ctx->pc == 0x3CB69Cu) {
        ctx->pc = 0x3CB6A0u;
        goto label_3cb6a0;
    }
    ctx->pc = 0x3CB698u;
    {
        const bool branch_taken_0x3cb698 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cb698) {
            ctx->pc = 0x3CB6B0u;
            goto label_3cb6b0;
        }
    }
    ctx->pc = 0x3CB6A0u;
label_3cb6a0:
    // 0x3cb6a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cb6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb6a4:
    // 0x3cb6a4: 0xc0f2948  jal         func_3CA520
label_3cb6a8:
    if (ctx->pc == 0x3CB6A8u) {
        ctx->pc = 0x3CB6A8u;
            // 0x3cb6a8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CB6ACu;
        goto label_3cb6ac;
    }
    ctx->pc = 0x3CB6A4u;
    SET_GPR_U32(ctx, 31, 0x3CB6ACu);
    ctx->pc = 0x3CB6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB6A4u;
            // 0x3cb6a8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3CA520u;
    if (runtime->hasFunction(0x3CA520u)) {
        auto targetFn = runtime->lookupFunction(0x3CA520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB6ACu; }
        if (ctx->pc != 0x3CB6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003CA520_0x3ca520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB6ACu; }
        if (ctx->pc != 0x3CB6ACu) { return; }
    }
    ctx->pc = 0x3CB6ACu;
label_3cb6ac:
    // 0x3cb6ac: 0x0  nop
    ctx->pc = 0x3cb6acu;
    // NOP
label_3cb6b0:
    // 0x3cb6b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3cb6b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3cb6b4:
    // 0x3cb6b4: 0x2a430008  slti        $v1, $s2, 0x8
    ctx->pc = 0x3cb6b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
label_3cb6b8:
    // 0x3cb6b8: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_3cb6bc:
    if (ctx->pc == 0x3CB6BCu) {
        ctx->pc = 0x3CB6BCu;
            // 0x3cb6bc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x3CB6C0u;
        goto label_3cb6c0;
    }
    ctx->pc = 0x3CB6B8u;
    {
        const bool branch_taken_0x3cb6b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CB6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB6B8u;
            // 0x3cb6bc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb6b8) {
            ctx->pc = 0x3CB694u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3cb694;
        }
    }
    ctx->pc = 0x3CB6C0u;
label_3cb6c0:
    // 0x3cb6c0: 0xae000144  sw          $zero, 0x144($s0)
    ctx->pc = 0x3cb6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 0));
label_3cb6c4:
    // 0x3cb6c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3cb6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3cb6c8:
    // 0x3cb6c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3cb6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3cb6cc:
    // 0x3cb6cc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3cb6ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3cb6d0:
    // 0x3cb6d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3cb6d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3cb6d4:
    // 0x3cb6d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3cb6d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3cb6d8:
    // 0x3cb6d8: 0x3e00008  jr          $ra
label_3cb6dc:
    if (ctx->pc == 0x3CB6DCu) {
        ctx->pc = 0x3CB6DCu;
            // 0x3cb6dc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3CB6E0u;
        goto label_fallthrough_0x3cb6d8;
    }
    ctx->pc = 0x3CB6D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CB6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB6D8u;
            // 0x3cb6dc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3cb6d8:
    ctx->pc = 0x3CB6E0u;
}
