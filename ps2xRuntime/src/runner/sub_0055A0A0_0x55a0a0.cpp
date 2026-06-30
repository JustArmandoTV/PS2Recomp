#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0055A0A0
// Address: 0x55a0a0 - 0x55a600
void sub_0055A0A0_0x55a0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0055A0A0_0x55a0a0");
#endif

    switch (ctx->pc) {
        case 0x55a0a0u: goto label_55a0a0;
        case 0x55a0a4u: goto label_55a0a4;
        case 0x55a0a8u: goto label_55a0a8;
        case 0x55a0acu: goto label_55a0ac;
        case 0x55a0b0u: goto label_55a0b0;
        case 0x55a0b4u: goto label_55a0b4;
        case 0x55a0b8u: goto label_55a0b8;
        case 0x55a0bcu: goto label_55a0bc;
        case 0x55a0c0u: goto label_55a0c0;
        case 0x55a0c4u: goto label_55a0c4;
        case 0x55a0c8u: goto label_55a0c8;
        case 0x55a0ccu: goto label_55a0cc;
        case 0x55a0d0u: goto label_55a0d0;
        case 0x55a0d4u: goto label_55a0d4;
        case 0x55a0d8u: goto label_55a0d8;
        case 0x55a0dcu: goto label_55a0dc;
        case 0x55a0e0u: goto label_55a0e0;
        case 0x55a0e4u: goto label_55a0e4;
        case 0x55a0e8u: goto label_55a0e8;
        case 0x55a0ecu: goto label_55a0ec;
        case 0x55a0f0u: goto label_55a0f0;
        case 0x55a0f4u: goto label_55a0f4;
        case 0x55a0f8u: goto label_55a0f8;
        case 0x55a0fcu: goto label_55a0fc;
        case 0x55a100u: goto label_55a100;
        case 0x55a104u: goto label_55a104;
        case 0x55a108u: goto label_55a108;
        case 0x55a10cu: goto label_55a10c;
        case 0x55a110u: goto label_55a110;
        case 0x55a114u: goto label_55a114;
        case 0x55a118u: goto label_55a118;
        case 0x55a11cu: goto label_55a11c;
        case 0x55a120u: goto label_55a120;
        case 0x55a124u: goto label_55a124;
        case 0x55a128u: goto label_55a128;
        case 0x55a12cu: goto label_55a12c;
        case 0x55a130u: goto label_55a130;
        case 0x55a134u: goto label_55a134;
        case 0x55a138u: goto label_55a138;
        case 0x55a13cu: goto label_55a13c;
        case 0x55a140u: goto label_55a140;
        case 0x55a144u: goto label_55a144;
        case 0x55a148u: goto label_55a148;
        case 0x55a14cu: goto label_55a14c;
        case 0x55a150u: goto label_55a150;
        case 0x55a154u: goto label_55a154;
        case 0x55a158u: goto label_55a158;
        case 0x55a15cu: goto label_55a15c;
        case 0x55a160u: goto label_55a160;
        case 0x55a164u: goto label_55a164;
        case 0x55a168u: goto label_55a168;
        case 0x55a16cu: goto label_55a16c;
        case 0x55a170u: goto label_55a170;
        case 0x55a174u: goto label_55a174;
        case 0x55a178u: goto label_55a178;
        case 0x55a17cu: goto label_55a17c;
        case 0x55a180u: goto label_55a180;
        case 0x55a184u: goto label_55a184;
        case 0x55a188u: goto label_55a188;
        case 0x55a18cu: goto label_55a18c;
        case 0x55a190u: goto label_55a190;
        case 0x55a194u: goto label_55a194;
        case 0x55a198u: goto label_55a198;
        case 0x55a19cu: goto label_55a19c;
        case 0x55a1a0u: goto label_55a1a0;
        case 0x55a1a4u: goto label_55a1a4;
        case 0x55a1a8u: goto label_55a1a8;
        case 0x55a1acu: goto label_55a1ac;
        case 0x55a1b0u: goto label_55a1b0;
        case 0x55a1b4u: goto label_55a1b4;
        case 0x55a1b8u: goto label_55a1b8;
        case 0x55a1bcu: goto label_55a1bc;
        case 0x55a1c0u: goto label_55a1c0;
        case 0x55a1c4u: goto label_55a1c4;
        case 0x55a1c8u: goto label_55a1c8;
        case 0x55a1ccu: goto label_55a1cc;
        case 0x55a1d0u: goto label_55a1d0;
        case 0x55a1d4u: goto label_55a1d4;
        case 0x55a1d8u: goto label_55a1d8;
        case 0x55a1dcu: goto label_55a1dc;
        case 0x55a1e0u: goto label_55a1e0;
        case 0x55a1e4u: goto label_55a1e4;
        case 0x55a1e8u: goto label_55a1e8;
        case 0x55a1ecu: goto label_55a1ec;
        case 0x55a1f0u: goto label_55a1f0;
        case 0x55a1f4u: goto label_55a1f4;
        case 0x55a1f8u: goto label_55a1f8;
        case 0x55a1fcu: goto label_55a1fc;
        case 0x55a200u: goto label_55a200;
        case 0x55a204u: goto label_55a204;
        case 0x55a208u: goto label_55a208;
        case 0x55a20cu: goto label_55a20c;
        case 0x55a210u: goto label_55a210;
        case 0x55a214u: goto label_55a214;
        case 0x55a218u: goto label_55a218;
        case 0x55a21cu: goto label_55a21c;
        case 0x55a220u: goto label_55a220;
        case 0x55a224u: goto label_55a224;
        case 0x55a228u: goto label_55a228;
        case 0x55a22cu: goto label_55a22c;
        case 0x55a230u: goto label_55a230;
        case 0x55a234u: goto label_55a234;
        case 0x55a238u: goto label_55a238;
        case 0x55a23cu: goto label_55a23c;
        case 0x55a240u: goto label_55a240;
        case 0x55a244u: goto label_55a244;
        case 0x55a248u: goto label_55a248;
        case 0x55a24cu: goto label_55a24c;
        case 0x55a250u: goto label_55a250;
        case 0x55a254u: goto label_55a254;
        case 0x55a258u: goto label_55a258;
        case 0x55a25cu: goto label_55a25c;
        case 0x55a260u: goto label_55a260;
        case 0x55a264u: goto label_55a264;
        case 0x55a268u: goto label_55a268;
        case 0x55a26cu: goto label_55a26c;
        case 0x55a270u: goto label_55a270;
        case 0x55a274u: goto label_55a274;
        case 0x55a278u: goto label_55a278;
        case 0x55a27cu: goto label_55a27c;
        case 0x55a280u: goto label_55a280;
        case 0x55a284u: goto label_55a284;
        case 0x55a288u: goto label_55a288;
        case 0x55a28cu: goto label_55a28c;
        case 0x55a290u: goto label_55a290;
        case 0x55a294u: goto label_55a294;
        case 0x55a298u: goto label_55a298;
        case 0x55a29cu: goto label_55a29c;
        case 0x55a2a0u: goto label_55a2a0;
        case 0x55a2a4u: goto label_55a2a4;
        case 0x55a2a8u: goto label_55a2a8;
        case 0x55a2acu: goto label_55a2ac;
        case 0x55a2b0u: goto label_55a2b0;
        case 0x55a2b4u: goto label_55a2b4;
        case 0x55a2b8u: goto label_55a2b8;
        case 0x55a2bcu: goto label_55a2bc;
        case 0x55a2c0u: goto label_55a2c0;
        case 0x55a2c4u: goto label_55a2c4;
        case 0x55a2c8u: goto label_55a2c8;
        case 0x55a2ccu: goto label_55a2cc;
        case 0x55a2d0u: goto label_55a2d0;
        case 0x55a2d4u: goto label_55a2d4;
        case 0x55a2d8u: goto label_55a2d8;
        case 0x55a2dcu: goto label_55a2dc;
        case 0x55a2e0u: goto label_55a2e0;
        case 0x55a2e4u: goto label_55a2e4;
        case 0x55a2e8u: goto label_55a2e8;
        case 0x55a2ecu: goto label_55a2ec;
        case 0x55a2f0u: goto label_55a2f0;
        case 0x55a2f4u: goto label_55a2f4;
        case 0x55a2f8u: goto label_55a2f8;
        case 0x55a2fcu: goto label_55a2fc;
        case 0x55a300u: goto label_55a300;
        case 0x55a304u: goto label_55a304;
        case 0x55a308u: goto label_55a308;
        case 0x55a30cu: goto label_55a30c;
        case 0x55a310u: goto label_55a310;
        case 0x55a314u: goto label_55a314;
        case 0x55a318u: goto label_55a318;
        case 0x55a31cu: goto label_55a31c;
        case 0x55a320u: goto label_55a320;
        case 0x55a324u: goto label_55a324;
        case 0x55a328u: goto label_55a328;
        case 0x55a32cu: goto label_55a32c;
        case 0x55a330u: goto label_55a330;
        case 0x55a334u: goto label_55a334;
        case 0x55a338u: goto label_55a338;
        case 0x55a33cu: goto label_55a33c;
        case 0x55a340u: goto label_55a340;
        case 0x55a344u: goto label_55a344;
        case 0x55a348u: goto label_55a348;
        case 0x55a34cu: goto label_55a34c;
        case 0x55a350u: goto label_55a350;
        case 0x55a354u: goto label_55a354;
        case 0x55a358u: goto label_55a358;
        case 0x55a35cu: goto label_55a35c;
        case 0x55a360u: goto label_55a360;
        case 0x55a364u: goto label_55a364;
        case 0x55a368u: goto label_55a368;
        case 0x55a36cu: goto label_55a36c;
        case 0x55a370u: goto label_55a370;
        case 0x55a374u: goto label_55a374;
        case 0x55a378u: goto label_55a378;
        case 0x55a37cu: goto label_55a37c;
        case 0x55a380u: goto label_55a380;
        case 0x55a384u: goto label_55a384;
        case 0x55a388u: goto label_55a388;
        case 0x55a38cu: goto label_55a38c;
        case 0x55a390u: goto label_55a390;
        case 0x55a394u: goto label_55a394;
        case 0x55a398u: goto label_55a398;
        case 0x55a39cu: goto label_55a39c;
        case 0x55a3a0u: goto label_55a3a0;
        case 0x55a3a4u: goto label_55a3a4;
        case 0x55a3a8u: goto label_55a3a8;
        case 0x55a3acu: goto label_55a3ac;
        case 0x55a3b0u: goto label_55a3b0;
        case 0x55a3b4u: goto label_55a3b4;
        case 0x55a3b8u: goto label_55a3b8;
        case 0x55a3bcu: goto label_55a3bc;
        case 0x55a3c0u: goto label_55a3c0;
        case 0x55a3c4u: goto label_55a3c4;
        case 0x55a3c8u: goto label_55a3c8;
        case 0x55a3ccu: goto label_55a3cc;
        case 0x55a3d0u: goto label_55a3d0;
        case 0x55a3d4u: goto label_55a3d4;
        case 0x55a3d8u: goto label_55a3d8;
        case 0x55a3dcu: goto label_55a3dc;
        case 0x55a3e0u: goto label_55a3e0;
        case 0x55a3e4u: goto label_55a3e4;
        case 0x55a3e8u: goto label_55a3e8;
        case 0x55a3ecu: goto label_55a3ec;
        case 0x55a3f0u: goto label_55a3f0;
        case 0x55a3f4u: goto label_55a3f4;
        case 0x55a3f8u: goto label_55a3f8;
        case 0x55a3fcu: goto label_55a3fc;
        case 0x55a400u: goto label_55a400;
        case 0x55a404u: goto label_55a404;
        case 0x55a408u: goto label_55a408;
        case 0x55a40cu: goto label_55a40c;
        case 0x55a410u: goto label_55a410;
        case 0x55a414u: goto label_55a414;
        case 0x55a418u: goto label_55a418;
        case 0x55a41cu: goto label_55a41c;
        case 0x55a420u: goto label_55a420;
        case 0x55a424u: goto label_55a424;
        case 0x55a428u: goto label_55a428;
        case 0x55a42cu: goto label_55a42c;
        case 0x55a430u: goto label_55a430;
        case 0x55a434u: goto label_55a434;
        case 0x55a438u: goto label_55a438;
        case 0x55a43cu: goto label_55a43c;
        case 0x55a440u: goto label_55a440;
        case 0x55a444u: goto label_55a444;
        case 0x55a448u: goto label_55a448;
        case 0x55a44cu: goto label_55a44c;
        case 0x55a450u: goto label_55a450;
        case 0x55a454u: goto label_55a454;
        case 0x55a458u: goto label_55a458;
        case 0x55a45cu: goto label_55a45c;
        case 0x55a460u: goto label_55a460;
        case 0x55a464u: goto label_55a464;
        case 0x55a468u: goto label_55a468;
        case 0x55a46cu: goto label_55a46c;
        case 0x55a470u: goto label_55a470;
        case 0x55a474u: goto label_55a474;
        case 0x55a478u: goto label_55a478;
        case 0x55a47cu: goto label_55a47c;
        case 0x55a480u: goto label_55a480;
        case 0x55a484u: goto label_55a484;
        case 0x55a488u: goto label_55a488;
        case 0x55a48cu: goto label_55a48c;
        case 0x55a490u: goto label_55a490;
        case 0x55a494u: goto label_55a494;
        case 0x55a498u: goto label_55a498;
        case 0x55a49cu: goto label_55a49c;
        case 0x55a4a0u: goto label_55a4a0;
        case 0x55a4a4u: goto label_55a4a4;
        case 0x55a4a8u: goto label_55a4a8;
        case 0x55a4acu: goto label_55a4ac;
        case 0x55a4b0u: goto label_55a4b0;
        case 0x55a4b4u: goto label_55a4b4;
        case 0x55a4b8u: goto label_55a4b8;
        case 0x55a4bcu: goto label_55a4bc;
        case 0x55a4c0u: goto label_55a4c0;
        case 0x55a4c4u: goto label_55a4c4;
        case 0x55a4c8u: goto label_55a4c8;
        case 0x55a4ccu: goto label_55a4cc;
        case 0x55a4d0u: goto label_55a4d0;
        case 0x55a4d4u: goto label_55a4d4;
        case 0x55a4d8u: goto label_55a4d8;
        case 0x55a4dcu: goto label_55a4dc;
        case 0x55a4e0u: goto label_55a4e0;
        case 0x55a4e4u: goto label_55a4e4;
        case 0x55a4e8u: goto label_55a4e8;
        case 0x55a4ecu: goto label_55a4ec;
        case 0x55a4f0u: goto label_55a4f0;
        case 0x55a4f4u: goto label_55a4f4;
        case 0x55a4f8u: goto label_55a4f8;
        case 0x55a4fcu: goto label_55a4fc;
        case 0x55a500u: goto label_55a500;
        case 0x55a504u: goto label_55a504;
        case 0x55a508u: goto label_55a508;
        case 0x55a50cu: goto label_55a50c;
        case 0x55a510u: goto label_55a510;
        case 0x55a514u: goto label_55a514;
        case 0x55a518u: goto label_55a518;
        case 0x55a51cu: goto label_55a51c;
        case 0x55a520u: goto label_55a520;
        case 0x55a524u: goto label_55a524;
        case 0x55a528u: goto label_55a528;
        case 0x55a52cu: goto label_55a52c;
        case 0x55a530u: goto label_55a530;
        case 0x55a534u: goto label_55a534;
        case 0x55a538u: goto label_55a538;
        case 0x55a53cu: goto label_55a53c;
        case 0x55a540u: goto label_55a540;
        case 0x55a544u: goto label_55a544;
        case 0x55a548u: goto label_55a548;
        case 0x55a54cu: goto label_55a54c;
        case 0x55a550u: goto label_55a550;
        case 0x55a554u: goto label_55a554;
        case 0x55a558u: goto label_55a558;
        case 0x55a55cu: goto label_55a55c;
        case 0x55a560u: goto label_55a560;
        case 0x55a564u: goto label_55a564;
        case 0x55a568u: goto label_55a568;
        case 0x55a56cu: goto label_55a56c;
        case 0x55a570u: goto label_55a570;
        case 0x55a574u: goto label_55a574;
        case 0x55a578u: goto label_55a578;
        case 0x55a57cu: goto label_55a57c;
        case 0x55a580u: goto label_55a580;
        case 0x55a584u: goto label_55a584;
        case 0x55a588u: goto label_55a588;
        case 0x55a58cu: goto label_55a58c;
        case 0x55a590u: goto label_55a590;
        case 0x55a594u: goto label_55a594;
        case 0x55a598u: goto label_55a598;
        case 0x55a59cu: goto label_55a59c;
        case 0x55a5a0u: goto label_55a5a0;
        case 0x55a5a4u: goto label_55a5a4;
        case 0x55a5a8u: goto label_55a5a8;
        case 0x55a5acu: goto label_55a5ac;
        case 0x55a5b0u: goto label_55a5b0;
        case 0x55a5b4u: goto label_55a5b4;
        case 0x55a5b8u: goto label_55a5b8;
        case 0x55a5bcu: goto label_55a5bc;
        case 0x55a5c0u: goto label_55a5c0;
        case 0x55a5c4u: goto label_55a5c4;
        case 0x55a5c8u: goto label_55a5c8;
        case 0x55a5ccu: goto label_55a5cc;
        case 0x55a5d0u: goto label_55a5d0;
        case 0x55a5d4u: goto label_55a5d4;
        case 0x55a5d8u: goto label_55a5d8;
        case 0x55a5dcu: goto label_55a5dc;
        case 0x55a5e0u: goto label_55a5e0;
        case 0x55a5e4u: goto label_55a5e4;
        case 0x55a5e8u: goto label_55a5e8;
        case 0x55a5ecu: goto label_55a5ec;
        case 0x55a5f0u: goto label_55a5f0;
        case 0x55a5f4u: goto label_55a5f4;
        case 0x55a5f8u: goto label_55a5f8;
        case 0x55a5fcu: goto label_55a5fc;
        default: break;
    }

    ctx->pc = 0x55a0a0u;

label_55a0a0:
    // 0x55a0a0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x55a0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_55a0a4:
    // 0x55a0a4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x55a0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_55a0a8:
    // 0x55a0a8: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x55a0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_55a0ac:
    // 0x55a0ac: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x55a0acu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_55a0b0:
    // 0x55a0b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x55a0b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_55a0b4:
    // 0x55a0b4: 0xac8600cc  sw          $a2, 0xCC($a0)
    ctx->pc = 0x55a0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 204), GPR_U32(ctx, 6));
label_55a0b8:
    // 0x55a0b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x55a0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55a0bc:
    // 0x55a0bc: 0xac8000ac  sw          $zero, 0xAC($a0)
    ctx->pc = 0x55a0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 0));
label_55a0c0:
    // 0x55a0c0: 0xac8000b0  sw          $zero, 0xB0($a0)
    ctx->pc = 0x55a0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 0));
label_55a0c4:
    // 0x55a0c4: 0xac8000b4  sw          $zero, 0xB4($a0)
    ctx->pc = 0x55a0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 0));
label_55a0c8:
    // 0x55a0c8: 0xac8000b8  sw          $zero, 0xB8($a0)
    ctx->pc = 0x55a0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 0));
label_55a0cc:
    // 0x55a0cc: 0xac8000bc  sw          $zero, 0xBC($a0)
    ctx->pc = 0x55a0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 0));
label_55a0d0:
    // 0x55a0d0: 0xac8500c0  sw          $a1, 0xC0($a0)
    ctx->pc = 0x55a0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 5));
label_55a0d4:
    // 0x55a0d4: 0xac8000c4  sw          $zero, 0xC4($a0)
    ctx->pc = 0x55a0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 0));
label_55a0d8:
    // 0x55a0d8: 0xac800098  sw          $zero, 0x98($a0)
    ctx->pc = 0x55a0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 0));
label_55a0dc:
    // 0x55a0dc: 0x8c850088  lw          $a1, 0x88($a0)
    ctx->pc = 0x55a0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_55a0e0:
    // 0x55a0e0: 0xac8500a4  sw          $a1, 0xA4($a0)
    ctx->pc = 0x55a0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 5));
label_55a0e4:
    // 0x55a0e4: 0x8c85008c  lw          $a1, 0x8C($a0)
    ctx->pc = 0x55a0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
label_55a0e8:
    // 0x55a0e8: 0xac8500a8  sw          $a1, 0xA8($a0)
    ctx->pc = 0x55a0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 5));
label_55a0ec:
    // 0x55a0ec: 0xac8000c8  sw          $zero, 0xC8($a0)
    ctx->pc = 0x55a0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 0));
label_55a0f0:
    // 0x55a0f0: 0x8c85009c  lw          $a1, 0x9C($a0)
    ctx->pc = 0x55a0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_55a0f4:
    // 0x55a0f4: 0x50a30023  beql        $a1, $v1, . + 4 + (0x23 << 2)
label_55a0f8:
    if (ctx->pc == 0x55A0F8u) {
        ctx->pc = 0x55A0F8u;
            // 0x55a0f8: 0x3c054040  lui         $a1, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16448 << 16));
        ctx->pc = 0x55A0FCu;
        goto label_55a0fc;
    }
    ctx->pc = 0x55A0F4u;
    {
        const bool branch_taken_0x55a0f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x55a0f4) {
            ctx->pc = 0x55A0F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55A0F4u;
            // 0x55a0f8: 0x3c054040  lui         $a1, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16448 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55A184u;
            goto label_55a184;
        }
    }
    ctx->pc = 0x55A0FCu;
label_55a0fc:
    // 0x55a0fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x55a0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_55a100:
    // 0x55a100: 0x50a30019  beql        $a1, $v1, . + 4 + (0x19 << 2)
label_55a104:
    if (ctx->pc == 0x55A104u) {
        ctx->pc = 0x55A104u;
            // 0x55a104: 0x3c03c1f0  lui         $v1, 0xC1F0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49648 << 16));
        ctx->pc = 0x55A108u;
        goto label_55a108;
    }
    ctx->pc = 0x55A100u;
    {
        const bool branch_taken_0x55a100 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x55a100) {
            ctx->pc = 0x55A104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55A100u;
            // 0x55a104: 0x3c03c1f0  lui         $v1, 0xC1F0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49648 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55A168u;
            goto label_55a168;
        }
    }
    ctx->pc = 0x55A108u;
label_55a108:
    // 0x55a108: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x55a108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_55a10c:
    // 0x55a10c: 0x10a30015  beq         $a1, $v1, . + 4 + (0x15 << 2)
label_55a110:
    if (ctx->pc == 0x55A110u) {
        ctx->pc = 0x55A114u;
        goto label_55a114;
    }
    ctx->pc = 0x55A10Cu;
    {
        const bool branch_taken_0x55a10c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x55a10c) {
            ctx->pc = 0x55A164u;
            goto label_55a164;
        }
    }
    ctx->pc = 0x55A114u;
label_55a114:
    // 0x55a114: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_55a118:
    if (ctx->pc == 0x55A118u) {
        ctx->pc = 0x55A118u;
            // 0x55a118: 0x3c054080  lui         $a1, 0x4080 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16512 << 16));
        ctx->pc = 0x55A11Cu;
        goto label_55a11c;
    }
    ctx->pc = 0x55A114u;
    {
        const bool branch_taken_0x55a114 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x55a114) {
            ctx->pc = 0x55A118u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55A114u;
            // 0x55a118: 0x3c054080  lui         $a1, 0x4080 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16512 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55A130u;
            goto label_55a130;
        }
    }
    ctx->pc = 0x55A11Cu;
label_55a11c:
    // 0x55a11c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x55a11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_55a120:
    // 0x55a120: 0x10a30023  beq         $a1, $v1, . + 4 + (0x23 << 2)
label_55a124:
    if (ctx->pc == 0x55A124u) {
        ctx->pc = 0x55A128u;
        goto label_55a128;
    }
    ctx->pc = 0x55A120u;
    {
        const bool branch_taken_0x55a120 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x55a120) {
            ctx->pc = 0x55A1B0u;
            goto label_55a1b0;
        }
    }
    ctx->pc = 0x55A128u;
label_55a128:
    // 0x55a128: 0x10000021  b           . + 4 + (0x21 << 2)
label_55a12c:
    if (ctx->pc == 0x55A12Cu) {
        ctx->pc = 0x55A130u;
        goto label_55a130;
    }
    ctx->pc = 0x55A128u;
    {
        const bool branch_taken_0x55a128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x55a128) {
            ctx->pc = 0x55A1B0u;
            goto label_55a1b0;
        }
    }
    ctx->pc = 0x55A130u;
label_55a130:
    // 0x55a130: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x55a130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_55a134:
    // 0x55a134: 0xac8500c0  sw          $a1, 0xC0($a0)
    ctx->pc = 0x55a134u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 5));
label_55a138:
    // 0x55a138: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55a138u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55a13c:
    // 0x55a13c: 0x0  nop
    ctx->pc = 0x55a13cu;
    // NOP
label_55a140:
    // 0x55a140: 0xe48100ac  swc1        $f1, 0xAC($a0)
    ctx->pc = 0x55a140u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 172), bits); }
label_55a144:
    // 0x55a144: 0x3c034108  lui         $v1, 0x4108
    ctx->pc = 0x55a144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16648 << 16));
label_55a148:
    // 0x55a148: 0xc48100c0  lwc1        $f1, 0xC0($a0)
    ctx->pc = 0x55a148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55a14c:
    // 0x55a14c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x55a14cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_55a150:
    // 0x55a150: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x55a150u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_55a154:
    // 0x55a154: 0x0  nop
    ctx->pc = 0x55a154u;
    // NOP
label_55a158:
    // 0x55a158: 0xe48000b4  swc1        $f0, 0xB4($a0)
    ctx->pc = 0x55a158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 180), bits); }
label_55a15c:
    // 0x55a15c: 0x10000014  b           . + 4 + (0x14 << 2)
label_55a160:
    if (ctx->pc == 0x55A160u) {
        ctx->pc = 0x55A160u;
            // 0x55a160: 0xac8300b0  sw          $v1, 0xB0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 3));
        ctx->pc = 0x55A164u;
        goto label_55a164;
    }
    ctx->pc = 0x55A15Cu;
    {
        const bool branch_taken_0x55a15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55A160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55A15Cu;
            // 0x55a160: 0xac8300b0  sw          $v1, 0xB0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55a15c) {
            ctx->pc = 0x55A1B0u;
            goto label_55a1b0;
        }
    }
    ctx->pc = 0x55A164u;
label_55a164:
    // 0x55a164: 0x3c03c1f0  lui         $v1, 0xC1F0
    ctx->pc = 0x55a164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49648 << 16));
label_55a168:
    // 0x55a168: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x55a168u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_55a16c:
    // 0x55a16c: 0xac8300bc  sw          $v1, 0xBC($a0)
    ctx->pc = 0x55a16cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 3));
label_55a170:
    // 0x55a170: 0xac8000ac  sw          $zero, 0xAC($a0)
    ctx->pc = 0x55a170u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 0));
label_55a174:
    // 0x55a174: 0x3c034108  lui         $v1, 0x4108
    ctx->pc = 0x55a174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16648 << 16));
label_55a178:
    // 0x55a178: 0xac8500b4  sw          $a1, 0xB4($a0)
    ctx->pc = 0x55a178u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 5));
label_55a17c:
    // 0x55a17c: 0x1000000c  b           . + 4 + (0xC << 2)
label_55a180:
    if (ctx->pc == 0x55A180u) {
        ctx->pc = 0x55A180u;
            // 0x55a180: 0xac8300b0  sw          $v1, 0xB0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 3));
        ctx->pc = 0x55A184u;
        goto label_55a184;
    }
    ctx->pc = 0x55A17Cu;
    {
        const bool branch_taken_0x55a17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55A180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55A17Cu;
            // 0x55a180: 0xac8300b0  sw          $v1, 0xB0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55a17c) {
            ctx->pc = 0x55A1B0u;
            goto label_55a1b0;
        }
    }
    ctx->pc = 0x55A184u;
label_55a184:
    // 0x55a184: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x55a184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
label_55a188:
    // 0x55a188: 0xac8500c0  sw          $a1, 0xC0($a0)
    ctx->pc = 0x55a188u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 5));
label_55a18c:
    // 0x55a18c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55a18cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55a190:
    // 0x55a190: 0x0  nop
    ctx->pc = 0x55a190u;
    // NOP
label_55a194:
    // 0x55a194: 0xe48100ac  swc1        $f1, 0xAC($a0)
    ctx->pc = 0x55a194u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 172), bits); }
label_55a198:
    // 0x55a198: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x55a198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
label_55a19c:
    // 0x55a19c: 0xc48100c0  lwc1        $f1, 0xC0($a0)
    ctx->pc = 0x55a19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55a1a0:
    // 0x55a1a0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x55a1a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_55a1a4:
    // 0x55a1a4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x55a1a4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_55a1a8:
    // 0x55a1a8: 0xe48000b4  swc1        $f0, 0xB4($a0)
    ctx->pc = 0x55a1a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 180), bits); }
label_55a1ac:
    // 0x55a1ac: 0xac8300b0  sw          $v1, 0xB0($a0)
    ctx->pc = 0x55a1acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 3));
label_55a1b0:
    // 0x55a1b0: 0x3e00008  jr          $ra
label_55a1b4:
    if (ctx->pc == 0x55A1B4u) {
        ctx->pc = 0x55A1B8u;
        goto label_55a1b8;
    }
    ctx->pc = 0x55A1B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55A1B8u;
label_55a1b8:
    // 0x55a1b8: 0x0  nop
    ctx->pc = 0x55a1b8u;
    // NOP
label_55a1bc:
    // 0x55a1bc: 0x0  nop
    ctx->pc = 0x55a1bcu;
    // NOP
label_55a1c0:
    // 0x55a1c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x55a1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_55a1c4:
    // 0x55a1c4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x55a1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_55a1c8:
    // 0x55a1c8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x55a1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_55a1cc:
    // 0x55a1cc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x55a1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_55a1d0:
    // 0x55a1d0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x55a1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_55a1d4:
    // 0x55a1d4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x55a1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_55a1d8:
    // 0x55a1d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x55a1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_55a1dc:
    // 0x55a1dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x55a1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_55a1e0:
    // 0x55a1e0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x55a1e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_55a1e4:
    // 0x55a1e4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x55a1e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_55a1e8:
    // 0x55a1e8: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x55a1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_55a1ec:
    // 0x55a1ec: 0x9063007d  lbu         $v1, 0x7D($v1)
    ctx->pc = 0x55a1ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 125)));
label_55a1f0:
    // 0x55a1f0: 0x546000b2  bnel        $v1, $zero, . + 4 + (0xB2 << 2)
label_55a1f4:
    if (ctx->pc == 0x55A1F4u) {
        ctx->pc = 0x55A1F4u;
            // 0x55a1f4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x55A1F8u;
        goto label_55a1f8;
    }
    ctx->pc = 0x55A1F0u;
    {
        const bool branch_taken_0x55a1f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x55a1f0) {
            ctx->pc = 0x55A1F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55A1F0u;
            // 0x55a1f4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55A4BCu;
            goto label_55a4bc;
        }
    }
    ctx->pc = 0x55A1F8u;
label_55a1f8:
    // 0x55a1f8: 0x8c85005c  lw          $a1, 0x5C($a0)
    ctx->pc = 0x55a1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_55a1fc:
    // 0x55a1fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x55a1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_55a200:
    // 0x55a200: 0x50a3005b  beql        $a1, $v1, . + 4 + (0x5B << 2)
label_55a204:
    if (ctx->pc == 0x55A204u) {
        ctx->pc = 0x55A204u;
            // 0x55a204: 0xc4830064  lwc1        $f3, 0x64($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x55A208u;
        goto label_55a208;
    }
    ctx->pc = 0x55A200u;
    {
        const bool branch_taken_0x55a200 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x55a200) {
            ctx->pc = 0x55A204u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55A200u;
            // 0x55a204: 0xc4830064  lwc1        $f3, 0x64($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x55A370u;
            goto label_55a370;
        }
    }
    ctx->pc = 0x55A208u;
label_55a208:
    // 0x55a208: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_55a20c:
    if (ctx->pc == 0x55A20Cu) {
        ctx->pc = 0x55A20Cu;
            // 0x55a20c: 0xc4850068  lwc1        $f5, 0x68($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->pc = 0x55A210u;
        goto label_55a210;
    }
    ctx->pc = 0x55A208u;
    {
        const bool branch_taken_0x55a208 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x55a208) {
            ctx->pc = 0x55A20Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55A208u;
            // 0x55a20c: 0xc4850068  lwc1        $f5, 0x68($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x55A218u;
            goto label_55a218;
        }
    }
    ctx->pc = 0x55A210u;
label_55a210:
    // 0x55a210: 0x100000a9  b           . + 4 + (0xA9 << 2)
label_55a214:
    if (ctx->pc == 0x55A214u) {
        ctx->pc = 0x55A218u;
        goto label_55a218;
    }
    ctx->pc = 0x55A210u;
    {
        const bool branch_taken_0x55a210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x55a210) {
            ctx->pc = 0x55A4B8u;
            goto label_55a4b8;
        }
    }
    ctx->pc = 0x55A218u;
label_55a218:
    // 0x55a218: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x55a218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_55a21c:
    // 0x55a21c: 0xc443f378  lwc1        $f3, -0xC88($v0)
    ctx->pc = 0x55a21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_55a220:
    // 0x55a220: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x55a220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_55a224:
    // 0x55a224: 0xc4800064  lwc1        $f0, 0x64($a0)
    ctx->pc = 0x55a224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55a228:
    // 0x55a228: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x55a228u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_55a22c:
    // 0x55a22c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x55a22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_55a230:
    // 0x55a230: 0xc481007c  lwc1        $f1, 0x7C($a0)
    ctx->pc = 0x55a230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55a234:
    // 0x55a234: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x55a234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_55a238:
    // 0x55a238: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x55a238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_55a23c:
    // 0x55a23c: 0x46012d00  add.s       $f20, $f5, $f1
    ctx->pc = 0x55a23cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_55a240:
    // 0x55a240: 0xc4850080  lwc1        $f5, 0x80($a0)
    ctx->pc = 0x55a240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_55a244:
    // 0x55a244: 0xc442f37c  lwc1        $f2, -0xC84($v0)
    ctx->pc = 0x55a244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_55a248:
    // 0x55a248: 0x468001e0  cvt.s.w     $f7, $f0
    ctx->pc = 0x55a248u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
label_55a24c:
    // 0x55a24c: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x55a24cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_55a250:
    // 0x55a250: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x55a250u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_55a254:
    // 0x55a254: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x55a254u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_55a258:
    // 0x55a258: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x55a258u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_55a25c:
    // 0x55a25c: 0xc4860078  lwc1        $f6, 0x78($a0)
    ctx->pc = 0x55a25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_55a260:
    // 0x55a260: 0x460018e4  .word       0x460018E4                   # cvt.w.s     $f3, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x55a260u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
label_55a264:
    // 0x55a264: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x55a264u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_55a268:
    // 0x55a268: 0xc481006c  lwc1        $f1, 0x6C($a0)
    ctx->pc = 0x55a268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55a26c:
    // 0x55a26c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55a26cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55a270:
    // 0x55a270: 0x0  nop
    ctx->pc = 0x55a270u;
    // NOP
label_55a274:
    // 0x55a274: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x55a274u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_55a278:
    // 0x55a278: 0x44111800  mfc1        $s1, $f3
    ctx->pc = 0x55a278u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_55a27c:
    // 0x55a27c: 0x44101000  mfc1        $s0, $f2
    ctx->pc = 0x55a27cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_55a280:
    // 0x55a280: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_55a284:
    if (ctx->pc == 0x55A284u) {
        ctx->pc = 0x55A284u;
            // 0x55a284: 0x46063d40  add.s       $f21, $f7, $f6 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
        ctx->pc = 0x55A288u;
        goto label_55a288;
    }
    ctx->pc = 0x55A280u;
    {
        const bool branch_taken_0x55a280 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x55A284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55A280u;
            // 0x55a284: 0x46063d40  add.s       $f21, $f7, $f6 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x55a280) {
            ctx->pc = 0x55A298u;
            goto label_55a298;
        }
    }
    ctx->pc = 0x55A288u;
label_55a288:
    // 0x55a288: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x55a288u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_55a28c:
    // 0x55a28c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x55a28cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_55a290:
    // 0x55a290: 0x10000008  b           . + 4 + (0x8 << 2)
label_55a294:
    if (ctx->pc == 0x55A294u) {
        ctx->pc = 0x55A294u;
            // 0x55a294: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x55A298u;
        goto label_55a298;
    }
    ctx->pc = 0x55A290u;
    {
        const bool branch_taken_0x55a290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55A294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55A290u;
            // 0x55a294: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x55a290) {
            ctx->pc = 0x55A2B4u;
            goto label_55a2b4;
        }
    }
    ctx->pc = 0x55A298u;
label_55a298:
    // 0x55a298: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x55a298u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_55a29c:
    // 0x55a29c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x55a29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_55a2a0:
    // 0x55a2a0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x55a2a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_55a2a4:
    // 0x55a2a4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x55a2a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_55a2a8:
    // 0x55a2a8: 0x0  nop
    ctx->pc = 0x55a2a8u;
    // NOP
label_55a2ac:
    // 0x55a2ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x55a2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_55a2b0:
    // 0x55a2b0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x55a2b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_55a2b4:
    // 0x55a2b4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x55a2b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_55a2b8:
    // 0x55a2b8: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x55a2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_55a2bc:
    // 0x55a2bc: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x55a2bcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_55a2c0:
    // 0x55a2c0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x55a2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_55a2c4:
    // 0x55a2c4: 0x8c5289e0  lw          $s2, -0x7620($v0)
    ctx->pc = 0x55a2c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_55a2c8:
    // 0x55a2c8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x55a2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_55a2cc:
    // 0x55a2cc: 0x8c44b7c0  lw          $a0, -0x4840($v0)
    ctx->pc = 0x55a2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948800)));
label_55a2d0:
    // 0x55a2d0: 0xc0506ac  jal         func_141AB0
label_55a2d4:
    if (ctx->pc == 0x55A2D4u) {
        ctx->pc = 0x55A2D4u;
            // 0x55a2d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55A2D8u;
        goto label_55a2d8;
    }
    ctx->pc = 0x55A2D0u;
    SET_GPR_U32(ctx, 31, 0x55A2D8u);
    ctx->pc = 0x55A2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55A2D0u;
            // 0x55a2d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55A2D8u; }
        if (ctx->pc != 0x55A2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55A2D8u; }
        if (ctx->pc != 0x55A2D8u) { return; }
    }
    ctx->pc = 0x55A2D8u;
label_55a2d8:
    // 0x55a2d8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x55a2d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_55a2dc:
    // 0x55a2dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x55a2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_55a2e0:
    // 0x55a2e0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x55a2e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_55a2e4:
    // 0x55a2e4: 0x320f809  jalr        $t9
label_55a2e8:
    if (ctx->pc == 0x55A2E8u) {
        ctx->pc = 0x55A2E8u;
            // 0x55a2e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x55A2ECu;
        goto label_55a2ec;
    }
    ctx->pc = 0x55A2E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55A2ECu);
        ctx->pc = 0x55A2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55A2E4u;
            // 0x55a2e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55A2ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55A2ECu; }
            if (ctx->pc != 0x55A2ECu) { return; }
        }
        }
    }
    ctx->pc = 0x55A2ECu;
label_55a2ec:
    // 0x55a2ec: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x55a2ecu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55a2f0:
    // 0x55a2f0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x55a2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_55a2f4:
    // 0x55a2f4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x55a2f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_55a2f8:
    // 0x55a2f8: 0x8448f368  lh          $t0, -0xC98($v0)
    ctx->pc = 0x55a2f8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294964072)));
label_55a2fc:
    // 0x55a2fc: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x55a2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_55a300:
    // 0x55a300: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x55a300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_55a304:
    // 0x55a304: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55a304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55a308:
    // 0x55a308: 0x24a5f370  addiu       $a1, $a1, -0xC90
    ctx->pc = 0x55a308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964080));
label_55a30c:
    // 0x55a30c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x55a30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_55a310:
    // 0x55a310: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55a310u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55a314:
    // 0x55a314: 0x8443f36a  lh          $v1, -0xC96($v0)
    ctx->pc = 0x55a314u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294964074)));
label_55a318:
    // 0x55a318: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x55a318u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55a31c:
    // 0x55a31c: 0x0  nop
    ctx->pc = 0x55a31cu;
    // NOP
label_55a320:
    // 0x55a320: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x55a320u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_55a324:
    // 0x55a324: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x55a324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_55a328:
    // 0x55a328: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x55a328u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55a32c:
    // 0x55a32c: 0x0  nop
    ctx->pc = 0x55a32cu;
    // NOP
label_55a330:
    // 0x55a330: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55a330u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55a334:
    // 0x55a334: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55a334u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55a338:
    // 0x55a338: 0x0  nop
    ctx->pc = 0x55a338u;
    // NOP
label_55a33c:
    // 0x55a33c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x55a33cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55a340:
    // 0x55a340: 0x4602ab01  sub.s       $f12, $f21, $f2
    ctx->pc = 0x55a340u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
label_55a344:
    // 0x55a344: 0x4602ab80  add.s       $f14, $f21, $f2
    ctx->pc = 0x55a344u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
label_55a348:
    // 0x55a348: 0x4601a341  sub.s       $f13, $f20, $f1
    ctx->pc = 0x55a348u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_55a34c:
    // 0x55a34c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x55a34cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_55a350:
    // 0x55a350: 0xc0bc284  jal         func_2F0A10
label_55a354:
    if (ctx->pc == 0x55A354u) {
        ctx->pc = 0x55A354u;
            // 0x55a354: 0x4601a3c0  add.s       $f15, $f20, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->pc = 0x55A358u;
        goto label_55a358;
    }
    ctx->pc = 0x55A350u;
    SET_GPR_U32(ctx, 31, 0x55A358u);
    ctx->pc = 0x55A354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55A350u;
            // 0x55a354: 0x4601a3c0  add.s       $f15, $f20, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55A358u; }
        if (ctx->pc != 0x55A358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55A358u; }
        if (ctx->pc != 0x55A358u) { return; }
    }
    ctx->pc = 0x55A358u;
label_55a358:
    // 0x55a358: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x55a358u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_55a35c:
    // 0x55a35c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x55a35cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_55a360:
    // 0x55a360: 0x320f809  jalr        $t9
label_55a364:
    if (ctx->pc == 0x55A364u) {
        ctx->pc = 0x55A364u;
            // 0x55a364: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55A368u;
        goto label_55a368;
    }
    ctx->pc = 0x55A360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55A368u);
        ctx->pc = 0x55A364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55A360u;
            // 0x55a364: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55A368u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55A368u; }
            if (ctx->pc != 0x55A368u) { return; }
        }
        }
    }
    ctx->pc = 0x55A368u;
label_55a368:
    // 0x55a368: 0x10000053  b           . + 4 + (0x53 << 2)
label_55a36c:
    if (ctx->pc == 0x55A36Cu) {
        ctx->pc = 0x55A370u;
        goto label_55a370;
    }
    ctx->pc = 0x55A368u;
    {
        const bool branch_taken_0x55a368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x55a368) {
            ctx->pc = 0x55A4B8u;
            goto label_55a4b8;
        }
    }
    ctx->pc = 0x55A370u;
label_55a370:
    // 0x55a370: 0x3c140067  lui         $s4, 0x67
    ctx->pc = 0x55a370u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)103 << 16));
label_55a374:
    // 0x55a374: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x55a374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_55a378:
    // 0x55a378: 0x2694f390  addiu       $s4, $s4, -0xC70
    ctx->pc = 0x55a378u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294964112));
label_55a37c:
    // 0x55a37c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x55a37cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_55a380:
    // 0x55a380: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x55a380u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_55a384:
    // 0x55a384: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x55a384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_55a388:
    // 0x55a388: 0xc4820078  lwc1        $f2, 0x78($a0)
    ctx->pc = 0x55a388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_55a38c:
    // 0x55a38c: 0xc4810068  lwc1        $f1, 0x68($a0)
    ctx->pc = 0x55a38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55a390:
    // 0x55a390: 0xc4850080  lwc1        $f5, 0x80($a0)
    ctx->pc = 0x55a390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_55a394:
    // 0x55a394: 0x46021d40  add.s       $f21, $f3, $f2
    ctx->pc = 0x55a394u;
    ctx->f[21] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_55a398:
    // 0x55a398: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x55a398u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_55a39c:
    // 0x55a39c: 0xc482007c  lwc1        $f2, 0x7C($a0)
    ctx->pc = 0x55a39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_55a3a0:
    // 0x55a3a0: 0xc481006c  lwc1        $f1, 0x6C($a0)
    ctx->pc = 0x55a3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55a3a4:
    // 0x55a3a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55a3a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55a3a8:
    // 0x55a3a8: 0x46021d00  add.s       $f20, $f3, $f2
    ctx->pc = 0x55a3a8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_55a3ac:
    // 0x55a3ac: 0xc6830008  lwc1        $f3, 0x8($s4)
    ctx->pc = 0x55a3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_55a3b0:
    // 0x55a3b0: 0xc682000c  lwc1        $f2, 0xC($s4)
    ctx->pc = 0x55a3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_55a3b4:
    // 0x55a3b4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x55a3b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_55a3b8:
    // 0x55a3b8: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x55a3b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_55a3bc:
    // 0x55a3bc: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x55a3bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_55a3c0:
    // 0x55a3c0: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x55a3c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_55a3c4:
    // 0x55a3c4: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x55a3c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_55a3c8:
    // 0x55a3c8: 0x460018e4  .word       0x460018E4                   # cvt.w.s     $f3, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x55a3c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
label_55a3cc:
    // 0x55a3cc: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x55a3ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_55a3d0:
    // 0x55a3d0: 0x44111800  mfc1        $s1, $f3
    ctx->pc = 0x55a3d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_55a3d4:
    // 0x55a3d4: 0x44101000  mfc1        $s0, $f2
    ctx->pc = 0x55a3d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_55a3d8:
    // 0x55a3d8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_55a3dc:
    if (ctx->pc == 0x55A3DCu) {
        ctx->pc = 0x55A3DCu;
            // 0x55a3dc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x55A3E0u;
        goto label_55a3e0;
    }
    ctx->pc = 0x55A3D8u;
    {
        const bool branch_taken_0x55a3d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x55a3d8) {
            ctx->pc = 0x55A3DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55A3D8u;
            // 0x55a3dc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x55A3F0u;
            goto label_55a3f0;
        }
    }
    ctx->pc = 0x55A3E0u;
label_55a3e0:
    // 0x55a3e0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x55a3e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_55a3e4:
    // 0x55a3e4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x55a3e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_55a3e8:
    // 0x55a3e8: 0x10000007  b           . + 4 + (0x7 << 2)
label_55a3ec:
    if (ctx->pc == 0x55A3ECu) {
        ctx->pc = 0x55A3ECu;
            // 0x55a3ec: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x55A3F0u;
        goto label_55a3f0;
    }
    ctx->pc = 0x55A3E8u;
    {
        const bool branch_taken_0x55a3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55A3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55A3E8u;
            // 0x55a3ec: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x55a3e8) {
            ctx->pc = 0x55A408u;
            goto label_55a408;
        }
    }
    ctx->pc = 0x55A3F0u;
label_55a3f0:
    // 0x55a3f0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x55a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_55a3f4:
    // 0x55a3f4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x55a3f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_55a3f8:
    // 0x55a3f8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x55a3f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_55a3fc:
    // 0x55a3fc: 0x0  nop
    ctx->pc = 0x55a3fcu;
    // NOP
label_55a400:
    // 0x55a400: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x55a400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_55a404:
    // 0x55a404: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x55a404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_55a408:
    // 0x55a408: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x55a408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_55a40c:
    // 0x55a40c: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x55a40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_55a410:
    // 0x55a410: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x55a410u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_55a414:
    // 0x55a414: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x55a414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_55a418:
    // 0x55a418: 0x8c5289e0  lw          $s2, -0x7620($v0)
    ctx->pc = 0x55a418u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_55a41c:
    // 0x55a41c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x55a41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_55a420:
    // 0x55a420: 0x8c44b7c0  lw          $a0, -0x4840($v0)
    ctx->pc = 0x55a420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948800)));
label_55a424:
    // 0x55a424: 0xc0506ac  jal         func_141AB0
label_55a428:
    if (ctx->pc == 0x55A428u) {
        ctx->pc = 0x55A428u;
            // 0x55a428: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55A42Cu;
        goto label_55a42c;
    }
    ctx->pc = 0x55A424u;
    SET_GPR_U32(ctx, 31, 0x55A42Cu);
    ctx->pc = 0x55A428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55A424u;
            // 0x55a428: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55A42Cu; }
        if (ctx->pc != 0x55A42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55A42Cu; }
        if (ctx->pc != 0x55A42Cu) { return; }
    }
    ctx->pc = 0x55A42Cu;
label_55a42c:
    // 0x55a42c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x55a42cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_55a430:
    // 0x55a430: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x55a430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_55a434:
    // 0x55a434: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x55a434u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_55a438:
    // 0x55a438: 0x320f809  jalr        $t9
label_55a43c:
    if (ctx->pc == 0x55A43Cu) {
        ctx->pc = 0x55A43Cu;
            // 0x55a43c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x55A440u;
        goto label_55a440;
    }
    ctx->pc = 0x55A438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55A440u);
        ctx->pc = 0x55A43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55A438u;
            // 0x55a43c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55A440u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55A440u; }
            if (ctx->pc != 0x55A440u) { return; }
        }
        }
    }
    ctx->pc = 0x55A440u;
label_55a440:
    // 0x55a440: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x55a440u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55a444:
    // 0x55a444: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x55a444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_55a448:
    // 0x55a448: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x55a448u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_55a44c:
    // 0x55a44c: 0x8468f368  lh          $t0, -0xC98($v1)
    ctx->pc = 0x55a44cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294964072)));
label_55a450:
    // 0x55a450: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x55a450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_55a454:
    // 0x55a454: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x55a454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_55a458:
    // 0x55a458: 0x8442f36a  lh          $v0, -0xC96($v0)
    ctx->pc = 0x55a458u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294964074)));
label_55a45c:
    // 0x55a45c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x55a45cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_55a460:
    // 0x55a460: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x55a460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_55a464:
    // 0x55a464: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55a464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55a468:
    // 0x55a468: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55a468u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55a46c:
    // 0x55a46c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x55a46cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55a470:
    // 0x55a470: 0x0  nop
    ctx->pc = 0x55a470u;
    // NOP
label_55a474:
    // 0x55a474: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x55a474u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_55a478:
    // 0x55a478: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x55a478u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55a47c:
    // 0x55a47c: 0x0  nop
    ctx->pc = 0x55a47cu;
    // NOP
label_55a480:
    // 0x55a480: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55a480u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55a484:
    // 0x55a484: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55a484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55a488:
    // 0x55a488: 0x0  nop
    ctx->pc = 0x55a488u;
    // NOP
label_55a48c:
    // 0x55a48c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x55a48cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55a490:
    // 0x55a490: 0x4602ab01  sub.s       $f12, $f21, $f2
    ctx->pc = 0x55a490u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
label_55a494:
    // 0x55a494: 0x4602ab80  add.s       $f14, $f21, $f2
    ctx->pc = 0x55a494u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
label_55a498:
    // 0x55a498: 0x4601a341  sub.s       $f13, $f20, $f1
    ctx->pc = 0x55a498u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_55a49c:
    // 0x55a49c: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x55a49cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_55a4a0:
    // 0x55a4a0: 0xc0bc284  jal         func_2F0A10
label_55a4a4:
    if (ctx->pc == 0x55A4A4u) {
        ctx->pc = 0x55A4A4u;
            // 0x55a4a4: 0x4601a3c0  add.s       $f15, $f20, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->pc = 0x55A4A8u;
        goto label_55a4a8;
    }
    ctx->pc = 0x55A4A0u;
    SET_GPR_U32(ctx, 31, 0x55A4A8u);
    ctx->pc = 0x55A4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55A4A0u;
            // 0x55a4a4: 0x4601a3c0  add.s       $f15, $f20, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55A4A8u; }
        if (ctx->pc != 0x55A4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55A4A8u; }
        if (ctx->pc != 0x55A4A8u) { return; }
    }
    ctx->pc = 0x55A4A8u;
label_55a4a8:
    // 0x55a4a8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x55a4a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_55a4ac:
    // 0x55a4ac: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x55a4acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_55a4b0:
    // 0x55a4b0: 0x320f809  jalr        $t9
label_55a4b4:
    if (ctx->pc == 0x55A4B4u) {
        ctx->pc = 0x55A4B4u;
            // 0x55a4b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55A4B8u;
        goto label_55a4b8;
    }
    ctx->pc = 0x55A4B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55A4B8u);
        ctx->pc = 0x55A4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55A4B0u;
            // 0x55a4b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55A4B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55A4B8u; }
            if (ctx->pc != 0x55A4B8u) { return; }
        }
        }
    }
    ctx->pc = 0x55A4B8u;
label_55a4b8:
    // 0x55a4b8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x55a4b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_55a4bc:
    // 0x55a4bc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x55a4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_55a4c0:
    // 0x55a4c0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x55a4c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_55a4c4:
    // 0x55a4c4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x55a4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_55a4c8:
    // 0x55a4c8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x55a4c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_55a4cc:
    // 0x55a4cc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x55a4ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_55a4d0:
    // 0x55a4d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x55a4d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_55a4d4:
    // 0x55a4d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x55a4d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_55a4d8:
    // 0x55a4d8: 0x3e00008  jr          $ra
label_55a4dc:
    if (ctx->pc == 0x55A4DCu) {
        ctx->pc = 0x55A4DCu;
            // 0x55a4dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x55A4E0u;
        goto label_55a4e0;
    }
    ctx->pc = 0x55A4D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55A4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55A4D8u;
            // 0x55a4dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55A4E0u;
label_55a4e0:
    // 0x55a4e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x55a4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_55a4e4:
    // 0x55a4e4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x55a4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_55a4e8:
    // 0x55a4e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x55a4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_55a4ec:
    // 0x55a4ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x55a4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_55a4f0:
    // 0x55a4f0: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x55a4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_55a4f4:
    // 0x55a4f4: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x55a4f4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_55a4f8:
    // 0x55a4f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x55a4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_55a4fc:
    // 0x55a4fc: 0x10a30035  beq         $a1, $v1, . + 4 + (0x35 << 2)
label_55a500:
    if (ctx->pc == 0x55A500u) {
        ctx->pc = 0x55A500u;
            // 0x55a500: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55A504u;
        goto label_55a504;
    }
    ctx->pc = 0x55A4FCu;
    {
        const bool branch_taken_0x55a4fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x55A500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55A4FCu;
            // 0x55a500: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55a4fc) {
            ctx->pc = 0x55A5D4u;
            goto label_55a5d4;
        }
    }
    ctx->pc = 0x55A504u;
label_55a504:
    // 0x55a504: 0x50a0002e  beql        $a1, $zero, . + 4 + (0x2E << 2)
label_55a508:
    if (ctx->pc == 0x55A508u) {
        ctx->pc = 0x55A508u;
            // 0x55a508: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x55A50Cu;
        goto label_55a50c;
    }
    ctx->pc = 0x55A504u;
    {
        const bool branch_taken_0x55a504 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x55a504) {
            ctx->pc = 0x55A508u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55A504u;
            // 0x55a508: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55A5C0u;
            goto label_55a5c0;
        }
    }
    ctx->pc = 0x55A50Cu;
label_55a50c:
    // 0x55a50c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x55a50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55a510:
    // 0x55a510: 0x50a30012  beql        $a1, $v1, . + 4 + (0x12 << 2)
label_55a514:
    if (ctx->pc == 0x55A514u) {
        ctx->pc = 0x55A514u;
            // 0x55a514: 0x8e030060  lw          $v1, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->pc = 0x55A518u;
        goto label_55a518;
    }
    ctx->pc = 0x55A510u;
    {
        const bool branch_taken_0x55a510 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x55a510) {
            ctx->pc = 0x55A514u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55A510u;
            // 0x55a514: 0x8e030060  lw          $v1, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55A55Cu;
            goto label_55a55c;
        }
    }
    ctx->pc = 0x55A518u;
label_55a518:
    // 0x55a518: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x55a518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_55a51c:
    // 0x55a51c: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_55a520:
    if (ctx->pc == 0x55A520u) {
        ctx->pc = 0x55A520u;
            // 0x55a520: 0x8cc30cb4  lw          $v1, 0xCB4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
        ctx->pc = 0x55A524u;
        goto label_55a524;
    }
    ctx->pc = 0x55A51Cu;
    {
        const bool branch_taken_0x55a51c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x55a51c) {
            ctx->pc = 0x55A520u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55A51Cu;
            // 0x55a520: 0x8cc30cb4  lw          $v1, 0xCB4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55A52Cu;
            goto label_55a52c;
        }
    }
    ctx->pc = 0x55A524u;
label_55a524:
    // 0x55a524: 0x10000031  b           . + 4 + (0x31 << 2)
label_55a528:
    if (ctx->pc == 0x55A528u) {
        ctx->pc = 0x55A528u;
            // 0x55a528: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x55A52Cu;
        goto label_55a52c;
    }
    ctx->pc = 0x55A524u;
    {
        const bool branch_taken_0x55a524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55A528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55A524u;
            // 0x55a528: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55a524) {
            ctx->pc = 0x55A5ECu;
            goto label_55a5ec;
        }
    }
    ctx->pc = 0x55A52Cu;
label_55a52c:
    // 0x55a52c: 0x28630006  slti        $v1, $v1, 0x6
    ctx->pc = 0x55a52cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_55a530:
    // 0x55a530: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
label_55a534:
    if (ctx->pc == 0x55A534u) {
        ctx->pc = 0x55A538u;
        goto label_55a538;
    }
    ctx->pc = 0x55A530u;
    {
        const bool branch_taken_0x55a530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x55a530) {
            ctx->pc = 0x55A5E8u;
            goto label_55a5e8;
        }
    }
    ctx->pc = 0x55A538u;
label_55a538:
    // 0x55a538: 0xc156a1c  jal         func_55A870
label_55a53c:
    if (ctx->pc == 0x55A53Cu) {
        ctx->pc = 0x55A540u;
        goto label_55a540;
    }
    ctx->pc = 0x55A538u;
    SET_GPR_U32(ctx, 31, 0x55A540u);
    ctx->pc = 0x55A870u;
    if (runtime->hasFunction(0x55A870u)) {
        auto targetFn = runtime->lookupFunction(0x55A870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55A540u; }
        if (ctx->pc != 0x55A540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055A870_0x55a870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55A540u; }
        if (ctx->pc != 0x55A540u) { return; }
    }
    ctx->pc = 0x55A540u;
label_55a540:
    // 0x55a540: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x55a540u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_55a544:
    // 0x55a544: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x55a544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55a548:
    // 0x55a548: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x55a548u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_55a54c:
    // 0x55a54c: 0x320f809  jalr        $t9
label_55a550:
    if (ctx->pc == 0x55A550u) {
        ctx->pc = 0x55A550u;
            // 0x55a550: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x55A554u;
        goto label_55a554;
    }
    ctx->pc = 0x55A54Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55A554u);
        ctx->pc = 0x55A550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55A54Cu;
            // 0x55a550: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55A554u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55A554u; }
            if (ctx->pc != 0x55A554u) { return; }
        }
        }
    }
    ctx->pc = 0x55A554u;
label_55a554:
    // 0x55a554: 0x10000024  b           . + 4 + (0x24 << 2)
label_55a558:
    if (ctx->pc == 0x55A558u) {
        ctx->pc = 0x55A55Cu;
        goto label_55a55c;
    }
    ctx->pc = 0x55A554u;
    {
        const bool branch_taken_0x55a554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x55a554) {
            ctx->pc = 0x55A5E8u;
            goto label_55a5e8;
        }
    }
    ctx->pc = 0x55A55Cu;
label_55a55c:
    // 0x55a55c: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_55a560:
    if (ctx->pc == 0x55A560u) {
        ctx->pc = 0x55A560u;
            // 0x55a560: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->pc = 0x55A564u;
        goto label_55a564;
    }
    ctx->pc = 0x55A55Cu;
    {
        const bool branch_taken_0x55a55c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x55a55c) {
            ctx->pc = 0x55A560u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55A55Cu;
            // 0x55a560: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55A584u;
            goto label_55a584;
        }
    }
    ctx->pc = 0x55A564u;
label_55a564:
    // 0x55a564: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x55a564u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_55a568:
    // 0x55a568: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_55a56c:
    if (ctx->pc == 0x55A56Cu) {
        ctx->pc = 0x55A570u;
        goto label_55a570;
    }
    ctx->pc = 0x55A568u;
    {
        const bool branch_taken_0x55a568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x55a568) {
            ctx->pc = 0x55A580u;
            goto label_55a580;
        }
    }
    ctx->pc = 0x55A570u;
label_55a570:
    // 0x55a570: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x55a570u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_55a574:
    // 0x55a574: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x55a574u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_55a578:
    // 0x55a578: 0x320f809  jalr        $t9
label_55a57c:
    if (ctx->pc == 0x55A57Cu) {
        ctx->pc = 0x55A57Cu;
            // 0x55a57c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55A580u;
        goto label_55a580;
    }
    ctx->pc = 0x55A578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55A580u);
        ctx->pc = 0x55A57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55A578u;
            // 0x55a57c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55A580u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55A580u; }
            if (ctx->pc != 0x55A580u) { return; }
        }
        }
    }
    ctx->pc = 0x55A580u;
label_55a580:
    // 0x55a580: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x55a580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_55a584:
    // 0x55a584: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x55a584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_55a588:
    // 0x55a588: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
label_55a58c:
    if (ctx->pc == 0x55A58Cu) {
        ctx->pc = 0x55A58Cu;
            // 0x55a58c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55A590u;
        goto label_55a590;
    }
    ctx->pc = 0x55A588u;
    {
        const bool branch_taken_0x55a588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x55a588) {
            ctx->pc = 0x55A58Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55A588u;
            // 0x55a58c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55A5B0u;
            goto label_55a5b0;
        }
    }
    ctx->pc = 0x55A590u;
label_55a590:
    // 0x55a590: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_55a594:
    if (ctx->pc == 0x55A594u) {
        ctx->pc = 0x55A594u;
            // 0x55a594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55A598u;
        goto label_55a598;
    }
    ctx->pc = 0x55A590u;
    {
        const bool branch_taken_0x55a590 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x55a590) {
            ctx->pc = 0x55A594u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55A590u;
            // 0x55a594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55A5A0u;
            goto label_55a5a0;
        }
    }
    ctx->pc = 0x55A598u;
label_55a598:
    // 0x55a598: 0x10000013  b           . + 4 + (0x13 << 2)
label_55a59c:
    if (ctx->pc == 0x55A59Cu) {
        ctx->pc = 0x55A5A0u;
        goto label_55a5a0;
    }
    ctx->pc = 0x55A598u;
    {
        const bool branch_taken_0x55a598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x55a598) {
            ctx->pc = 0x55A5E8u;
            goto label_55a5e8;
        }
    }
    ctx->pc = 0x55A5A0u;
label_55a5a0:
    // 0x55a5a0: 0xc1569d4  jal         func_55A750
label_55a5a4:
    if (ctx->pc == 0x55A5A4u) {
        ctx->pc = 0x55A5A8u;
        goto label_55a5a8;
    }
    ctx->pc = 0x55A5A0u;
    SET_GPR_U32(ctx, 31, 0x55A5A8u);
    ctx->pc = 0x55A750u;
    if (runtime->hasFunction(0x55A750u)) {
        auto targetFn = runtime->lookupFunction(0x55A750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55A5A8u; }
        if (ctx->pc != 0x55A5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055A750_0x55a750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55A5A8u; }
        if (ctx->pc != 0x55A5A8u) { return; }
    }
    ctx->pc = 0x55A5A8u;
label_55a5a8:
    // 0x55a5a8: 0x1000000f  b           . + 4 + (0xF << 2)
label_55a5ac:
    if (ctx->pc == 0x55A5ACu) {
        ctx->pc = 0x55A5B0u;
        goto label_55a5b0;
    }
    ctx->pc = 0x55A5A8u;
    {
        const bool branch_taken_0x55a5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x55a5a8) {
            ctx->pc = 0x55A5E8u;
            goto label_55a5e8;
        }
    }
    ctx->pc = 0x55A5B0u;
label_55a5b0:
    // 0x55a5b0: 0xc156980  jal         func_55A600
label_55a5b4:
    if (ctx->pc == 0x55A5B4u) {
        ctx->pc = 0x55A5B8u;
        goto label_55a5b8;
    }
    ctx->pc = 0x55A5B0u;
    SET_GPR_U32(ctx, 31, 0x55A5B8u);
    ctx->pc = 0x55A600u;
    if (runtime->hasFunction(0x55A600u)) {
        auto targetFn = runtime->lookupFunction(0x55A600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55A5B8u; }
        if (ctx->pc != 0x55A5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055A600_0x55a600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55A5B8u; }
        if (ctx->pc != 0x55A5B8u) { return; }
    }
    ctx->pc = 0x55A5B8u;
label_55a5b8:
    // 0x55a5b8: 0x1000000b  b           . + 4 + (0xB << 2)
label_55a5bc:
    if (ctx->pc == 0x55A5BCu) {
        ctx->pc = 0x55A5C0u;
        goto label_55a5c0;
    }
    ctx->pc = 0x55A5B8u;
    {
        const bool branch_taken_0x55a5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x55a5b8) {
            ctx->pc = 0x55A5E8u;
            goto label_55a5e8;
        }
    }
    ctx->pc = 0x55A5C0u;
label_55a5c0:
    // 0x55a5c0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x55a5c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_55a5c4:
    // 0x55a5c4: 0x320f809  jalr        $t9
label_55a5c8:
    if (ctx->pc == 0x55A5C8u) {
        ctx->pc = 0x55A5CCu;
        goto label_55a5cc;
    }
    ctx->pc = 0x55A5C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55A5CCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x55A5CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55A5CCu; }
            if (ctx->pc != 0x55A5CCu) { return; }
        }
        }
    }
    ctx->pc = 0x55A5CCu;
label_55a5cc:
    // 0x55a5cc: 0x10000006  b           . + 4 + (0x6 << 2)
label_55a5d0:
    if (ctx->pc == 0x55A5D0u) {
        ctx->pc = 0x55A5D4u;
        goto label_55a5d4;
    }
    ctx->pc = 0x55A5CCu;
    {
        const bool branch_taken_0x55a5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x55a5cc) {
            ctx->pc = 0x55A5E8u;
            goto label_55a5e8;
        }
    }
    ctx->pc = 0x55A5D4u;
label_55a5d4:
    // 0x55a5d4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x55a5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_55a5d8:
    // 0x55a5d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x55a5d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55a5dc:
    // 0x55a5dc: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x55a5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_55a5e0:
    // 0x55a5e0: 0xc057b7c  jal         func_15EDF0
label_55a5e4:
    if (ctx->pc == 0x55A5E4u) {
        ctx->pc = 0x55A5E4u;
            // 0x55a5e4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x55A5E8u;
        goto label_55a5e8;
    }
    ctx->pc = 0x55A5E0u;
    SET_GPR_U32(ctx, 31, 0x55A5E8u);
    ctx->pc = 0x55A5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55A5E0u;
            // 0x55a5e4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55A5E8u; }
        if (ctx->pc != 0x55A5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55A5E8u; }
        if (ctx->pc != 0x55A5E8u) { return; }
    }
    ctx->pc = 0x55A5E8u;
label_55a5e8:
    // 0x55a5e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x55a5e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_55a5ec:
    // 0x55a5ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x55a5ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_55a5f0:
    // 0x55a5f0: 0x3e00008  jr          $ra
label_55a5f4:
    if (ctx->pc == 0x55A5F4u) {
        ctx->pc = 0x55A5F4u;
            // 0x55a5f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x55A5F8u;
        goto label_55a5f8;
    }
    ctx->pc = 0x55A5F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55A5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55A5F0u;
            // 0x55a5f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55A5F8u;
label_55a5f8:
    // 0x55a5f8: 0x0  nop
    ctx->pc = 0x55a5f8u;
    // NOP
label_55a5fc:
    // 0x55a5fc: 0x0  nop
    ctx->pc = 0x55a5fcu;
    // NOP
}
