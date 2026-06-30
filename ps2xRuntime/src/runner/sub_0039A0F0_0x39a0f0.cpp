#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0039A0F0
// Address: 0x39a0f0 - 0x39a5d0
void sub_0039A0F0_0x39a0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A0F0_0x39a0f0");
#endif

    switch (ctx->pc) {
        case 0x39a0f0u: goto label_39a0f0;
        case 0x39a0f4u: goto label_39a0f4;
        case 0x39a0f8u: goto label_39a0f8;
        case 0x39a0fcu: goto label_39a0fc;
        case 0x39a100u: goto label_39a100;
        case 0x39a104u: goto label_39a104;
        case 0x39a108u: goto label_39a108;
        case 0x39a10cu: goto label_39a10c;
        case 0x39a110u: goto label_39a110;
        case 0x39a114u: goto label_39a114;
        case 0x39a118u: goto label_39a118;
        case 0x39a11cu: goto label_39a11c;
        case 0x39a120u: goto label_39a120;
        case 0x39a124u: goto label_39a124;
        case 0x39a128u: goto label_39a128;
        case 0x39a12cu: goto label_39a12c;
        case 0x39a130u: goto label_39a130;
        case 0x39a134u: goto label_39a134;
        case 0x39a138u: goto label_39a138;
        case 0x39a13cu: goto label_39a13c;
        case 0x39a140u: goto label_39a140;
        case 0x39a144u: goto label_39a144;
        case 0x39a148u: goto label_39a148;
        case 0x39a14cu: goto label_39a14c;
        case 0x39a150u: goto label_39a150;
        case 0x39a154u: goto label_39a154;
        case 0x39a158u: goto label_39a158;
        case 0x39a15cu: goto label_39a15c;
        case 0x39a160u: goto label_39a160;
        case 0x39a164u: goto label_39a164;
        case 0x39a168u: goto label_39a168;
        case 0x39a16cu: goto label_39a16c;
        case 0x39a170u: goto label_39a170;
        case 0x39a174u: goto label_39a174;
        case 0x39a178u: goto label_39a178;
        case 0x39a17cu: goto label_39a17c;
        case 0x39a180u: goto label_39a180;
        case 0x39a184u: goto label_39a184;
        case 0x39a188u: goto label_39a188;
        case 0x39a18cu: goto label_39a18c;
        case 0x39a190u: goto label_39a190;
        case 0x39a194u: goto label_39a194;
        case 0x39a198u: goto label_39a198;
        case 0x39a19cu: goto label_39a19c;
        case 0x39a1a0u: goto label_39a1a0;
        case 0x39a1a4u: goto label_39a1a4;
        case 0x39a1a8u: goto label_39a1a8;
        case 0x39a1acu: goto label_39a1ac;
        case 0x39a1b0u: goto label_39a1b0;
        case 0x39a1b4u: goto label_39a1b4;
        case 0x39a1b8u: goto label_39a1b8;
        case 0x39a1bcu: goto label_39a1bc;
        case 0x39a1c0u: goto label_39a1c0;
        case 0x39a1c4u: goto label_39a1c4;
        case 0x39a1c8u: goto label_39a1c8;
        case 0x39a1ccu: goto label_39a1cc;
        case 0x39a1d0u: goto label_39a1d0;
        case 0x39a1d4u: goto label_39a1d4;
        case 0x39a1d8u: goto label_39a1d8;
        case 0x39a1dcu: goto label_39a1dc;
        case 0x39a1e0u: goto label_39a1e0;
        case 0x39a1e4u: goto label_39a1e4;
        case 0x39a1e8u: goto label_39a1e8;
        case 0x39a1ecu: goto label_39a1ec;
        case 0x39a1f0u: goto label_39a1f0;
        case 0x39a1f4u: goto label_39a1f4;
        case 0x39a1f8u: goto label_39a1f8;
        case 0x39a1fcu: goto label_39a1fc;
        case 0x39a200u: goto label_39a200;
        case 0x39a204u: goto label_39a204;
        case 0x39a208u: goto label_39a208;
        case 0x39a20cu: goto label_39a20c;
        case 0x39a210u: goto label_39a210;
        case 0x39a214u: goto label_39a214;
        case 0x39a218u: goto label_39a218;
        case 0x39a21cu: goto label_39a21c;
        case 0x39a220u: goto label_39a220;
        case 0x39a224u: goto label_39a224;
        case 0x39a228u: goto label_39a228;
        case 0x39a22cu: goto label_39a22c;
        case 0x39a230u: goto label_39a230;
        case 0x39a234u: goto label_39a234;
        case 0x39a238u: goto label_39a238;
        case 0x39a23cu: goto label_39a23c;
        case 0x39a240u: goto label_39a240;
        case 0x39a244u: goto label_39a244;
        case 0x39a248u: goto label_39a248;
        case 0x39a24cu: goto label_39a24c;
        case 0x39a250u: goto label_39a250;
        case 0x39a254u: goto label_39a254;
        case 0x39a258u: goto label_39a258;
        case 0x39a25cu: goto label_39a25c;
        case 0x39a260u: goto label_39a260;
        case 0x39a264u: goto label_39a264;
        case 0x39a268u: goto label_39a268;
        case 0x39a26cu: goto label_39a26c;
        case 0x39a270u: goto label_39a270;
        case 0x39a274u: goto label_39a274;
        case 0x39a278u: goto label_39a278;
        case 0x39a27cu: goto label_39a27c;
        case 0x39a280u: goto label_39a280;
        case 0x39a284u: goto label_39a284;
        case 0x39a288u: goto label_39a288;
        case 0x39a28cu: goto label_39a28c;
        case 0x39a290u: goto label_39a290;
        case 0x39a294u: goto label_39a294;
        case 0x39a298u: goto label_39a298;
        case 0x39a29cu: goto label_39a29c;
        case 0x39a2a0u: goto label_39a2a0;
        case 0x39a2a4u: goto label_39a2a4;
        case 0x39a2a8u: goto label_39a2a8;
        case 0x39a2acu: goto label_39a2ac;
        case 0x39a2b0u: goto label_39a2b0;
        case 0x39a2b4u: goto label_39a2b4;
        case 0x39a2b8u: goto label_39a2b8;
        case 0x39a2bcu: goto label_39a2bc;
        case 0x39a2c0u: goto label_39a2c0;
        case 0x39a2c4u: goto label_39a2c4;
        case 0x39a2c8u: goto label_39a2c8;
        case 0x39a2ccu: goto label_39a2cc;
        case 0x39a2d0u: goto label_39a2d0;
        case 0x39a2d4u: goto label_39a2d4;
        case 0x39a2d8u: goto label_39a2d8;
        case 0x39a2dcu: goto label_39a2dc;
        case 0x39a2e0u: goto label_39a2e0;
        case 0x39a2e4u: goto label_39a2e4;
        case 0x39a2e8u: goto label_39a2e8;
        case 0x39a2ecu: goto label_39a2ec;
        case 0x39a2f0u: goto label_39a2f0;
        case 0x39a2f4u: goto label_39a2f4;
        case 0x39a2f8u: goto label_39a2f8;
        case 0x39a2fcu: goto label_39a2fc;
        case 0x39a300u: goto label_39a300;
        case 0x39a304u: goto label_39a304;
        case 0x39a308u: goto label_39a308;
        case 0x39a30cu: goto label_39a30c;
        case 0x39a310u: goto label_39a310;
        case 0x39a314u: goto label_39a314;
        case 0x39a318u: goto label_39a318;
        case 0x39a31cu: goto label_39a31c;
        case 0x39a320u: goto label_39a320;
        case 0x39a324u: goto label_39a324;
        case 0x39a328u: goto label_39a328;
        case 0x39a32cu: goto label_39a32c;
        case 0x39a330u: goto label_39a330;
        case 0x39a334u: goto label_39a334;
        case 0x39a338u: goto label_39a338;
        case 0x39a33cu: goto label_39a33c;
        case 0x39a340u: goto label_39a340;
        case 0x39a344u: goto label_39a344;
        case 0x39a348u: goto label_39a348;
        case 0x39a34cu: goto label_39a34c;
        case 0x39a350u: goto label_39a350;
        case 0x39a354u: goto label_39a354;
        case 0x39a358u: goto label_39a358;
        case 0x39a35cu: goto label_39a35c;
        case 0x39a360u: goto label_39a360;
        case 0x39a364u: goto label_39a364;
        case 0x39a368u: goto label_39a368;
        case 0x39a36cu: goto label_39a36c;
        case 0x39a370u: goto label_39a370;
        case 0x39a374u: goto label_39a374;
        case 0x39a378u: goto label_39a378;
        case 0x39a37cu: goto label_39a37c;
        case 0x39a380u: goto label_39a380;
        case 0x39a384u: goto label_39a384;
        case 0x39a388u: goto label_39a388;
        case 0x39a38cu: goto label_39a38c;
        case 0x39a390u: goto label_39a390;
        case 0x39a394u: goto label_39a394;
        case 0x39a398u: goto label_39a398;
        case 0x39a39cu: goto label_39a39c;
        case 0x39a3a0u: goto label_39a3a0;
        case 0x39a3a4u: goto label_39a3a4;
        case 0x39a3a8u: goto label_39a3a8;
        case 0x39a3acu: goto label_39a3ac;
        case 0x39a3b0u: goto label_39a3b0;
        case 0x39a3b4u: goto label_39a3b4;
        case 0x39a3b8u: goto label_39a3b8;
        case 0x39a3bcu: goto label_39a3bc;
        case 0x39a3c0u: goto label_39a3c0;
        case 0x39a3c4u: goto label_39a3c4;
        case 0x39a3c8u: goto label_39a3c8;
        case 0x39a3ccu: goto label_39a3cc;
        case 0x39a3d0u: goto label_39a3d0;
        case 0x39a3d4u: goto label_39a3d4;
        case 0x39a3d8u: goto label_39a3d8;
        case 0x39a3dcu: goto label_39a3dc;
        case 0x39a3e0u: goto label_39a3e0;
        case 0x39a3e4u: goto label_39a3e4;
        case 0x39a3e8u: goto label_39a3e8;
        case 0x39a3ecu: goto label_39a3ec;
        case 0x39a3f0u: goto label_39a3f0;
        case 0x39a3f4u: goto label_39a3f4;
        case 0x39a3f8u: goto label_39a3f8;
        case 0x39a3fcu: goto label_39a3fc;
        case 0x39a400u: goto label_39a400;
        case 0x39a404u: goto label_39a404;
        case 0x39a408u: goto label_39a408;
        case 0x39a40cu: goto label_39a40c;
        case 0x39a410u: goto label_39a410;
        case 0x39a414u: goto label_39a414;
        case 0x39a418u: goto label_39a418;
        case 0x39a41cu: goto label_39a41c;
        case 0x39a420u: goto label_39a420;
        case 0x39a424u: goto label_39a424;
        case 0x39a428u: goto label_39a428;
        case 0x39a42cu: goto label_39a42c;
        case 0x39a430u: goto label_39a430;
        case 0x39a434u: goto label_39a434;
        case 0x39a438u: goto label_39a438;
        case 0x39a43cu: goto label_39a43c;
        case 0x39a440u: goto label_39a440;
        case 0x39a444u: goto label_39a444;
        case 0x39a448u: goto label_39a448;
        case 0x39a44cu: goto label_39a44c;
        case 0x39a450u: goto label_39a450;
        case 0x39a454u: goto label_39a454;
        case 0x39a458u: goto label_39a458;
        case 0x39a45cu: goto label_39a45c;
        case 0x39a460u: goto label_39a460;
        case 0x39a464u: goto label_39a464;
        case 0x39a468u: goto label_39a468;
        case 0x39a46cu: goto label_39a46c;
        case 0x39a470u: goto label_39a470;
        case 0x39a474u: goto label_39a474;
        case 0x39a478u: goto label_39a478;
        case 0x39a47cu: goto label_39a47c;
        case 0x39a480u: goto label_39a480;
        case 0x39a484u: goto label_39a484;
        case 0x39a488u: goto label_39a488;
        case 0x39a48cu: goto label_39a48c;
        case 0x39a490u: goto label_39a490;
        case 0x39a494u: goto label_39a494;
        case 0x39a498u: goto label_39a498;
        case 0x39a49cu: goto label_39a49c;
        case 0x39a4a0u: goto label_39a4a0;
        case 0x39a4a4u: goto label_39a4a4;
        case 0x39a4a8u: goto label_39a4a8;
        case 0x39a4acu: goto label_39a4ac;
        case 0x39a4b0u: goto label_39a4b0;
        case 0x39a4b4u: goto label_39a4b4;
        case 0x39a4b8u: goto label_39a4b8;
        case 0x39a4bcu: goto label_39a4bc;
        case 0x39a4c0u: goto label_39a4c0;
        case 0x39a4c4u: goto label_39a4c4;
        case 0x39a4c8u: goto label_39a4c8;
        case 0x39a4ccu: goto label_39a4cc;
        case 0x39a4d0u: goto label_39a4d0;
        case 0x39a4d4u: goto label_39a4d4;
        case 0x39a4d8u: goto label_39a4d8;
        case 0x39a4dcu: goto label_39a4dc;
        case 0x39a4e0u: goto label_39a4e0;
        case 0x39a4e4u: goto label_39a4e4;
        case 0x39a4e8u: goto label_39a4e8;
        case 0x39a4ecu: goto label_39a4ec;
        case 0x39a4f0u: goto label_39a4f0;
        case 0x39a4f4u: goto label_39a4f4;
        case 0x39a4f8u: goto label_39a4f8;
        case 0x39a4fcu: goto label_39a4fc;
        case 0x39a500u: goto label_39a500;
        case 0x39a504u: goto label_39a504;
        case 0x39a508u: goto label_39a508;
        case 0x39a50cu: goto label_39a50c;
        case 0x39a510u: goto label_39a510;
        case 0x39a514u: goto label_39a514;
        case 0x39a518u: goto label_39a518;
        case 0x39a51cu: goto label_39a51c;
        case 0x39a520u: goto label_39a520;
        case 0x39a524u: goto label_39a524;
        case 0x39a528u: goto label_39a528;
        case 0x39a52cu: goto label_39a52c;
        case 0x39a530u: goto label_39a530;
        case 0x39a534u: goto label_39a534;
        case 0x39a538u: goto label_39a538;
        case 0x39a53cu: goto label_39a53c;
        case 0x39a540u: goto label_39a540;
        case 0x39a544u: goto label_39a544;
        case 0x39a548u: goto label_39a548;
        case 0x39a54cu: goto label_39a54c;
        case 0x39a550u: goto label_39a550;
        case 0x39a554u: goto label_39a554;
        case 0x39a558u: goto label_39a558;
        case 0x39a55cu: goto label_39a55c;
        case 0x39a560u: goto label_39a560;
        case 0x39a564u: goto label_39a564;
        case 0x39a568u: goto label_39a568;
        case 0x39a56cu: goto label_39a56c;
        case 0x39a570u: goto label_39a570;
        case 0x39a574u: goto label_39a574;
        case 0x39a578u: goto label_39a578;
        case 0x39a57cu: goto label_39a57c;
        case 0x39a580u: goto label_39a580;
        case 0x39a584u: goto label_39a584;
        case 0x39a588u: goto label_39a588;
        case 0x39a58cu: goto label_39a58c;
        case 0x39a590u: goto label_39a590;
        case 0x39a594u: goto label_39a594;
        case 0x39a598u: goto label_39a598;
        case 0x39a59cu: goto label_39a59c;
        case 0x39a5a0u: goto label_39a5a0;
        case 0x39a5a4u: goto label_39a5a4;
        case 0x39a5a8u: goto label_39a5a8;
        case 0x39a5acu: goto label_39a5ac;
        case 0x39a5b0u: goto label_39a5b0;
        case 0x39a5b4u: goto label_39a5b4;
        case 0x39a5b8u: goto label_39a5b8;
        case 0x39a5bcu: goto label_39a5bc;
        case 0x39a5c0u: goto label_39a5c0;
        case 0x39a5c4u: goto label_39a5c4;
        case 0x39a5c8u: goto label_39a5c8;
        case 0x39a5ccu: goto label_39a5cc;
        default: break;
    }

    ctx->pc = 0x39a0f0u;

label_39a0f0:
    // 0x39a0f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39a0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_39a0f4:
    // 0x39a0f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39a0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_39a0f8:
    // 0x39a0f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39a0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39a0fc:
    // 0x39a0fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39a0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39a100:
    // 0x39a100: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39a100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39a104:
    // 0x39a104: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_39a108:
    if (ctx->pc == 0x39A108u) {
        ctx->pc = 0x39A108u;
            // 0x39a108: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39A10Cu;
        goto label_39a10c;
    }
    ctx->pc = 0x39A104u;
    {
        const bool branch_taken_0x39a104 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39A104u;
            // 0x39a108: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a104) {
            ctx->pc = 0x39A238u;
            goto label_39a238;
        }
    }
    ctx->pc = 0x39A10Cu;
label_39a10c:
    // 0x39a10c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x39a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_39a110:
    // 0x39a110: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x39a110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_39a114:
    // 0x39a114: 0x24638320  addiu       $v1, $v1, -0x7CE0
    ctx->pc = 0x39a114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935328));
label_39a118:
    // 0x39a118: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x39a118u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
label_39a11c:
    // 0x39a11c: 0x24428358  addiu       $v0, $v0, -0x7CA8
    ctx->pc = 0x39a11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935384));
label_39a120:
    // 0x39a120: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x39a120u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_39a124:
    // 0x39a124: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x39a124u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_39a128:
    // 0x39a128: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x39a128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_39a12c:
    // 0x39a12c: 0xc0407c0  jal         func_101F00
label_39a130:
    if (ctx->pc == 0x39A130u) {
        ctx->pc = 0x39A130u;
            // 0x39a130: 0x24a5a250  addiu       $a1, $a1, -0x5DB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943312));
        ctx->pc = 0x39A134u;
        goto label_39a134;
    }
    ctx->pc = 0x39A12Cu;
    SET_GPR_U32(ctx, 31, 0x39A134u);
    ctx->pc = 0x39A130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39A12Cu;
            // 0x39a130: 0x24a5a250  addiu       $a1, $a1, -0x5DB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A134u; }
        if (ctx->pc != 0x39A134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A134u; }
        if (ctx->pc != 0x39A134u) { return; }
    }
    ctx->pc = 0x39A134u;
label_39a134:
    // 0x39a134: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x39a134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_39a138:
    // 0x39a138: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_39a13c:
    if (ctx->pc == 0x39A13Cu) {
        ctx->pc = 0x39A13Cu;
            // 0x39a13c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x39A140u;
        goto label_39a140;
    }
    ctx->pc = 0x39A138u;
    {
        const bool branch_taken_0x39a138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a138) {
            ctx->pc = 0x39A13Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39A138u;
            // 0x39a13c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39A14Cu;
            goto label_39a14c;
        }
    }
    ctx->pc = 0x39A140u;
label_39a140:
    // 0x39a140: 0xc07507c  jal         func_1D41F0
label_39a144:
    if (ctx->pc == 0x39A144u) {
        ctx->pc = 0x39A144u;
            // 0x39a144: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x39A148u;
        goto label_39a148;
    }
    ctx->pc = 0x39A140u;
    SET_GPR_U32(ctx, 31, 0x39A148u);
    ctx->pc = 0x39A144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39A140u;
            // 0x39a144: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A148u; }
        if (ctx->pc != 0x39A148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A148u; }
        if (ctx->pc != 0x39A148u) { return; }
    }
    ctx->pc = 0x39A148u;
label_39a148:
    // 0x39a148: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x39a148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_39a14c:
    // 0x39a14c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_39a150:
    if (ctx->pc == 0x39A150u) {
        ctx->pc = 0x39A150u;
            // 0x39a150: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x39A154u;
        goto label_39a154;
    }
    ctx->pc = 0x39A14Cu;
    {
        const bool branch_taken_0x39a14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a14c) {
            ctx->pc = 0x39A150u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39A14Cu;
            // 0x39a150: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39A17Cu;
            goto label_39a17c;
        }
    }
    ctx->pc = 0x39A154u;
label_39a154:
    // 0x39a154: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_39a158:
    if (ctx->pc == 0x39A158u) {
        ctx->pc = 0x39A15Cu;
        goto label_39a15c;
    }
    ctx->pc = 0x39A154u;
    {
        const bool branch_taken_0x39a154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a154) {
            ctx->pc = 0x39A178u;
            goto label_39a178;
        }
    }
    ctx->pc = 0x39A15Cu;
label_39a15c:
    // 0x39a15c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_39a160:
    if (ctx->pc == 0x39A160u) {
        ctx->pc = 0x39A164u;
        goto label_39a164;
    }
    ctx->pc = 0x39A15Cu;
    {
        const bool branch_taken_0x39a15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a15c) {
            ctx->pc = 0x39A178u;
            goto label_39a178;
        }
    }
    ctx->pc = 0x39A164u;
label_39a164:
    // 0x39a164: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x39a164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_39a168:
    // 0x39a168: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_39a16c:
    if (ctx->pc == 0x39A16Cu) {
        ctx->pc = 0x39A170u;
        goto label_39a170;
    }
    ctx->pc = 0x39A168u;
    {
        const bool branch_taken_0x39a168 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a168) {
            ctx->pc = 0x39A178u;
            goto label_39a178;
        }
    }
    ctx->pc = 0x39A170u;
label_39a170:
    // 0x39a170: 0xc0400a8  jal         func_1002A0
label_39a174:
    if (ctx->pc == 0x39A174u) {
        ctx->pc = 0x39A178u;
        goto label_39a178;
    }
    ctx->pc = 0x39A170u;
    SET_GPR_U32(ctx, 31, 0x39A178u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A178u; }
        if (ctx->pc != 0x39A178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A178u; }
        if (ctx->pc != 0x39A178u) { return; }
    }
    ctx->pc = 0x39A178u;
label_39a178:
    // 0x39a178: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x39a178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_39a17c:
    // 0x39a17c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_39a180:
    if (ctx->pc == 0x39A180u) {
        ctx->pc = 0x39A180u;
            // 0x39a180: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x39A184u;
        goto label_39a184;
    }
    ctx->pc = 0x39A17Cu;
    {
        const bool branch_taken_0x39a17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a17c) {
            ctx->pc = 0x39A180u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39A17Cu;
            // 0x39a180: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39A1ACu;
            goto label_39a1ac;
        }
    }
    ctx->pc = 0x39A184u;
label_39a184:
    // 0x39a184: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_39a188:
    if (ctx->pc == 0x39A188u) {
        ctx->pc = 0x39A18Cu;
        goto label_39a18c;
    }
    ctx->pc = 0x39A184u;
    {
        const bool branch_taken_0x39a184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a184) {
            ctx->pc = 0x39A1A8u;
            goto label_39a1a8;
        }
    }
    ctx->pc = 0x39A18Cu;
label_39a18c:
    // 0x39a18c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_39a190:
    if (ctx->pc == 0x39A190u) {
        ctx->pc = 0x39A194u;
        goto label_39a194;
    }
    ctx->pc = 0x39A18Cu;
    {
        const bool branch_taken_0x39a18c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a18c) {
            ctx->pc = 0x39A1A8u;
            goto label_39a1a8;
        }
    }
    ctx->pc = 0x39A194u;
label_39a194:
    // 0x39a194: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x39a194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_39a198:
    // 0x39a198: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_39a19c:
    if (ctx->pc == 0x39A19Cu) {
        ctx->pc = 0x39A1A0u;
        goto label_39a1a0;
    }
    ctx->pc = 0x39A198u;
    {
        const bool branch_taken_0x39a198 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a198) {
            ctx->pc = 0x39A1A8u;
            goto label_39a1a8;
        }
    }
    ctx->pc = 0x39A1A0u;
label_39a1a0:
    // 0x39a1a0: 0xc0400a8  jal         func_1002A0
label_39a1a4:
    if (ctx->pc == 0x39A1A4u) {
        ctx->pc = 0x39A1A8u;
        goto label_39a1a8;
    }
    ctx->pc = 0x39A1A0u;
    SET_GPR_U32(ctx, 31, 0x39A1A8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A1A8u; }
        if (ctx->pc != 0x39A1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A1A8u; }
        if (ctx->pc != 0x39A1A8u) { return; }
    }
    ctx->pc = 0x39A1A8u;
label_39a1a8:
    // 0x39a1a8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x39a1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_39a1ac:
    // 0x39a1ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_39a1b0:
    if (ctx->pc == 0x39A1B0u) {
        ctx->pc = 0x39A1B4u;
        goto label_39a1b4;
    }
    ctx->pc = 0x39A1ACu;
    {
        const bool branch_taken_0x39a1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a1ac) {
            ctx->pc = 0x39A1C8u;
            goto label_39a1c8;
        }
    }
    ctx->pc = 0x39A1B4u;
label_39a1b4:
    // 0x39a1b4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x39a1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_39a1b8:
    // 0x39a1b8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x39a1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_39a1bc:
    // 0x39a1bc: 0x24638308  addiu       $v1, $v1, -0x7CF8
    ctx->pc = 0x39a1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935304));
label_39a1c0:
    // 0x39a1c0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x39a1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_39a1c4:
    // 0x39a1c4: 0xac406490  sw          $zero, 0x6490($v0)
    ctx->pc = 0x39a1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25744), GPR_U32(ctx, 0));
label_39a1c8:
    // 0x39a1c8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_39a1cc:
    if (ctx->pc == 0x39A1CCu) {
        ctx->pc = 0x39A1CCu;
            // 0x39a1cc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x39A1D0u;
        goto label_39a1d0;
    }
    ctx->pc = 0x39A1C8u;
    {
        const bool branch_taken_0x39a1c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a1c8) {
            ctx->pc = 0x39A1CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39A1C8u;
            // 0x39a1cc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39A224u;
            goto label_39a224;
        }
    }
    ctx->pc = 0x39A1D0u;
label_39a1d0:
    // 0x39a1d0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x39a1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_39a1d4:
    // 0x39a1d4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x39a1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_39a1d8:
    // 0x39a1d8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x39a1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_39a1dc:
    // 0x39a1dc: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x39a1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_39a1e0:
    // 0x39a1e0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_39a1e4:
    if (ctx->pc == 0x39A1E4u) {
        ctx->pc = 0x39A1E4u;
            // 0x39a1e4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x39A1E8u;
        goto label_39a1e8;
    }
    ctx->pc = 0x39A1E0u;
    {
        const bool branch_taken_0x39a1e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a1e0) {
            ctx->pc = 0x39A1E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39A1E0u;
            // 0x39a1e4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39A1FCu;
            goto label_39a1fc;
        }
    }
    ctx->pc = 0x39A1E8u;
label_39a1e8:
    // 0x39a1e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x39a1e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39a1ec:
    // 0x39a1ec: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x39a1ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_39a1f0:
    // 0x39a1f0: 0x320f809  jalr        $t9
label_39a1f4:
    if (ctx->pc == 0x39A1F4u) {
        ctx->pc = 0x39A1F4u;
            // 0x39a1f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x39A1F8u;
        goto label_39a1f8;
    }
    ctx->pc = 0x39A1F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39A1F8u);
        ctx->pc = 0x39A1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39A1F0u;
            // 0x39a1f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39A1F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39A1F8u; }
            if (ctx->pc != 0x39A1F8u) { return; }
        }
        }
    }
    ctx->pc = 0x39A1F8u;
label_39a1f8:
    // 0x39a1f8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x39a1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_39a1fc:
    // 0x39a1fc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_39a200:
    if (ctx->pc == 0x39A200u) {
        ctx->pc = 0x39A200u;
            // 0x39a200: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39A204u;
        goto label_39a204;
    }
    ctx->pc = 0x39A1FCu;
    {
        const bool branch_taken_0x39a1fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a1fc) {
            ctx->pc = 0x39A200u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39A1FCu;
            // 0x39a200: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39A218u;
            goto label_39a218;
        }
    }
    ctx->pc = 0x39A204u;
label_39a204:
    // 0x39a204: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x39a204u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39a208:
    // 0x39a208: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x39a208u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_39a20c:
    // 0x39a20c: 0x320f809  jalr        $t9
label_39a210:
    if (ctx->pc == 0x39A210u) {
        ctx->pc = 0x39A210u;
            // 0x39a210: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x39A214u;
        goto label_39a214;
    }
    ctx->pc = 0x39A20Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39A214u);
        ctx->pc = 0x39A210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39A20Cu;
            // 0x39a210: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39A214u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39A214u; }
            if (ctx->pc != 0x39A214u) { return; }
        }
        }
    }
    ctx->pc = 0x39A214u;
label_39a214:
    // 0x39a214: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39a214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39a218:
    // 0x39a218: 0xc075bf8  jal         func_1D6FE0
label_39a21c:
    if (ctx->pc == 0x39A21Cu) {
        ctx->pc = 0x39A21Cu;
            // 0x39a21c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39A220u;
        goto label_39a220;
    }
    ctx->pc = 0x39A218u;
    SET_GPR_U32(ctx, 31, 0x39A220u);
    ctx->pc = 0x39A21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39A218u;
            // 0x39a21c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A220u; }
        if (ctx->pc != 0x39A220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A220u; }
        if (ctx->pc != 0x39A220u) { return; }
    }
    ctx->pc = 0x39A220u;
label_39a220:
    // 0x39a220: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x39a220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_39a224:
    // 0x39a224: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x39a224u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_39a228:
    // 0x39a228: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_39a22c:
    if (ctx->pc == 0x39A22Cu) {
        ctx->pc = 0x39A22Cu;
            // 0x39a22c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39A230u;
        goto label_39a230;
    }
    ctx->pc = 0x39A228u;
    {
        const bool branch_taken_0x39a228 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x39a228) {
            ctx->pc = 0x39A22Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39A228u;
            // 0x39a22c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39A23Cu;
            goto label_39a23c;
        }
    }
    ctx->pc = 0x39A230u;
label_39a230:
    // 0x39a230: 0xc0400a8  jal         func_1002A0
label_39a234:
    if (ctx->pc == 0x39A234u) {
        ctx->pc = 0x39A234u;
            // 0x39a234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39A238u;
        goto label_39a238;
    }
    ctx->pc = 0x39A230u;
    SET_GPR_U32(ctx, 31, 0x39A238u);
    ctx->pc = 0x39A234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39A230u;
            // 0x39a234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A238u; }
        if (ctx->pc != 0x39A238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A238u; }
        if (ctx->pc != 0x39A238u) { return; }
    }
    ctx->pc = 0x39A238u;
label_39a238:
    // 0x39a238: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x39a238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39a23c:
    // 0x39a23c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39a23cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39a240:
    // 0x39a240: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39a240u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39a244:
    // 0x39a244: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39a244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39a248:
    // 0x39a248: 0x3e00008  jr          $ra
label_39a24c:
    if (ctx->pc == 0x39A24Cu) {
        ctx->pc = 0x39A24Cu;
            // 0x39a24c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x39A250u;
        goto label_39a250;
    }
    ctx->pc = 0x39A248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39A248u;
            // 0x39a24c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39A250u;
label_39a250:
    // 0x39a250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39a250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_39a254:
    // 0x39a254: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39a254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_39a258:
    // 0x39a258: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39a258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39a25c:
    // 0x39a25c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39a25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39a260:
    // 0x39a260: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39a260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39a264:
    // 0x39a264: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_39a268:
    if (ctx->pc == 0x39A268u) {
        ctx->pc = 0x39A268u;
            // 0x39a268: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39A26Cu;
        goto label_39a26c;
    }
    ctx->pc = 0x39A264u;
    {
        const bool branch_taken_0x39a264 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39A264u;
            // 0x39a268: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a264) {
            ctx->pc = 0x39A300u;
            goto label_39a300;
        }
    }
    ctx->pc = 0x39A26Cu;
label_39a26c:
    // 0x39a26c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x39a26cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_39a270:
    // 0x39a270: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x39a270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_39a274:
    // 0x39a274: 0x246383c0  addiu       $v1, $v1, -0x7C40
    ctx->pc = 0x39a274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935488));
label_39a278:
    // 0x39a278: 0x24428400  addiu       $v0, $v0, -0x7C00
    ctx->pc = 0x39a278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935552));
label_39a27c:
    // 0x39a27c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x39a27cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_39a280:
    // 0x39a280: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x39a280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_39a284:
    // 0x39a284: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x39a284u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39a288:
    // 0x39a288: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x39a288u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_39a28c:
    // 0x39a28c: 0x320f809  jalr        $t9
label_39a290:
    if (ctx->pc == 0x39A290u) {
        ctx->pc = 0x39A294u;
        goto label_39a294;
    }
    ctx->pc = 0x39A28Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39A294u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x39A294u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39A294u; }
            if (ctx->pc != 0x39A294u) { return; }
        }
        }
    }
    ctx->pc = 0x39A294u;
label_39a294:
    // 0x39a294: 0x52000015  beql        $s0, $zero, . + 4 + (0x15 << 2)
label_39a298:
    if (ctx->pc == 0x39A298u) {
        ctx->pc = 0x39A298u;
            // 0x39a298: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x39A29Cu;
        goto label_39a29c;
    }
    ctx->pc = 0x39A294u;
    {
        const bool branch_taken_0x39a294 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a294) {
            ctx->pc = 0x39A298u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39A294u;
            // 0x39a298: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39A2ECu;
            goto label_39a2ec;
        }
    }
    ctx->pc = 0x39A29Cu;
label_39a29c:
    // 0x39a29c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x39a29cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_39a2a0:
    // 0x39a2a0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x39a2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_39a2a4:
    // 0x39a2a4: 0x24639320  addiu       $v1, $v1, -0x6CE0
    ctx->pc = 0x39a2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939424));
label_39a2a8:
    // 0x39a2a8: 0x24429360  addiu       $v0, $v0, -0x6CA0
    ctx->pc = 0x39a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939488));
label_39a2ac:
    // 0x39a2ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x39a2acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_39a2b0:
    // 0x39a2b0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x39a2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_39a2b4:
    // 0x39a2b4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x39a2b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39a2b8:
    // 0x39a2b8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x39a2b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_39a2bc:
    // 0x39a2bc: 0x320f809  jalr        $t9
label_39a2c0:
    if (ctx->pc == 0x39A2C0u) {
        ctx->pc = 0x39A2C0u;
            // 0x39a2c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39A2C4u;
        goto label_39a2c4;
    }
    ctx->pc = 0x39A2BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39A2C4u);
        ctx->pc = 0x39A2C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39A2BCu;
            // 0x39a2c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39A2C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39A2C4u; }
            if (ctx->pc != 0x39A2C4u) { return; }
        }
        }
    }
    ctx->pc = 0x39A2C4u;
label_39a2c4:
    // 0x39a2c4: 0x260401a0  addiu       $a0, $s0, 0x1A0
    ctx->pc = 0x39a2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
label_39a2c8:
    // 0x39a2c8: 0xc0a9844  jal         func_2A6110
label_39a2cc:
    if (ctx->pc == 0x39A2CCu) {
        ctx->pc = 0x39A2CCu;
            // 0x39a2cc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x39A2D0u;
        goto label_39a2d0;
    }
    ctx->pc = 0x39A2C8u;
    SET_GPR_U32(ctx, 31, 0x39A2D0u);
    ctx->pc = 0x39A2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39A2C8u;
            // 0x39a2cc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6110u;
    if (runtime->hasFunction(0x2A6110u)) {
        auto targetFn = runtime->lookupFunction(0x2A6110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A2D0u; }
        if (ctx->pc != 0x39A2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A6110_0x2a6110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A2D0u; }
        if (ctx->pc != 0x39A2D0u) { return; }
    }
    ctx->pc = 0x39A2D0u;
label_39a2d0:
    // 0x39a2d0: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x39a2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
label_39a2d4:
    // 0x39a2d4: 0xc0ada2c  jal         func_2B68B0
label_39a2d8:
    if (ctx->pc == 0x39A2D8u) {
        ctx->pc = 0x39A2D8u;
            // 0x39a2d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x39A2DCu;
        goto label_39a2dc;
    }
    ctx->pc = 0x39A2D4u;
    SET_GPR_U32(ctx, 31, 0x39A2DCu);
    ctx->pc = 0x39A2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39A2D4u;
            // 0x39a2d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B68B0u;
    if (runtime->hasFunction(0x2B68B0u)) {
        auto targetFn = runtime->lookupFunction(0x2B68B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A2DCu; }
        if (ctx->pc != 0x39A2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B68B0_0x2b68b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A2DCu; }
        if (ctx->pc != 0x39A2DCu) { return; }
    }
    ctx->pc = 0x39A2DCu;
label_39a2dc:
    // 0x39a2dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39a2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39a2e0:
    // 0x39a2e0: 0xc0aee40  jal         func_2BB900
label_39a2e4:
    if (ctx->pc == 0x39A2E4u) {
        ctx->pc = 0x39A2E4u;
            // 0x39a2e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39A2E8u;
        goto label_39a2e8;
    }
    ctx->pc = 0x39A2E0u;
    SET_GPR_U32(ctx, 31, 0x39A2E8u);
    ctx->pc = 0x39A2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39A2E0u;
            // 0x39a2e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB900u;
    if (runtime->hasFunction(0x2BB900u)) {
        auto targetFn = runtime->lookupFunction(0x2BB900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A2E8u; }
        if (ctx->pc != 0x39A2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB900_0x2bb900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A2E8u; }
        if (ctx->pc != 0x39A2E8u) { return; }
    }
    ctx->pc = 0x39A2E8u;
label_39a2e8:
    // 0x39a2e8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x39a2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_39a2ec:
    // 0x39a2ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x39a2ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_39a2f0:
    // 0x39a2f0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_39a2f4:
    if (ctx->pc == 0x39A2F4u) {
        ctx->pc = 0x39A2F4u;
            // 0x39a2f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39A2F8u;
        goto label_39a2f8;
    }
    ctx->pc = 0x39A2F0u;
    {
        const bool branch_taken_0x39a2f0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x39a2f0) {
            ctx->pc = 0x39A2F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39A2F0u;
            // 0x39a2f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39A304u;
            goto label_39a304;
        }
    }
    ctx->pc = 0x39A2F8u;
label_39a2f8:
    // 0x39a2f8: 0xc0400a8  jal         func_1002A0
label_39a2fc:
    if (ctx->pc == 0x39A2FCu) {
        ctx->pc = 0x39A2FCu;
            // 0x39a2fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39A300u;
        goto label_39a300;
    }
    ctx->pc = 0x39A2F8u;
    SET_GPR_U32(ctx, 31, 0x39A300u);
    ctx->pc = 0x39A2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39A2F8u;
            // 0x39a2fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A300u; }
        if (ctx->pc != 0x39A300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A300u; }
        if (ctx->pc != 0x39A300u) { return; }
    }
    ctx->pc = 0x39A300u;
label_39a300:
    // 0x39a300: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39a300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39a304:
    // 0x39a304: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39a304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39a308:
    // 0x39a308: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39a308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39a30c:
    // 0x39a30c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39a30cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39a310:
    // 0x39a310: 0x3e00008  jr          $ra
label_39a314:
    if (ctx->pc == 0x39A314u) {
        ctx->pc = 0x39A314u;
            // 0x39a314: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x39A318u;
        goto label_39a318;
    }
    ctx->pc = 0x39A310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39A310u;
            // 0x39a314: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39A318u;
label_39a318:
    // 0x39a318: 0x0  nop
    ctx->pc = 0x39a318u;
    // NOP
label_39a31c:
    // 0x39a31c: 0x0  nop
    ctx->pc = 0x39a31cu;
    // NOP
label_39a320:
    // 0x39a320: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x39a320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_39a324:
    // 0x39a324: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x39a324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_39a328:
    // 0x39a328: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x39a328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_39a32c:
    // 0x39a32c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x39a32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_39a330:
    // 0x39a330: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x39a330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_39a334:
    // 0x39a334: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x39a334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_39a338:
    // 0x39a338: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x39a338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_39a33c:
    // 0x39a33c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x39a33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_39a340:
    // 0x39a340: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x39a340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_39a344:
    // 0x39a344: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39a344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_39a348:
    // 0x39a348: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39a348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39a34c:
    // 0x39a34c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39a34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39a350:
    // 0x39a350: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x39a350u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_39a354:
    // 0x39a354: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_39a358:
    if (ctx->pc == 0x39A358u) {
        ctx->pc = 0x39A358u;
            // 0x39a358: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39A35Cu;
        goto label_39a35c;
    }
    ctx->pc = 0x39A354u;
    {
        const bool branch_taken_0x39a354 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x39A358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39A354u;
            // 0x39a358: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a354) {
            ctx->pc = 0x39A3A4u;
            goto label_39a3a4;
        }
    }
    ctx->pc = 0x39A35Cu;
label_39a35c:
    // 0x39a35c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x39a35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_39a360:
    // 0x39a360: 0x50a3004a  beql        $a1, $v1, . + 4 + (0x4A << 2)
label_39a364:
    if (ctx->pc == 0x39A364u) {
        ctx->pc = 0x39A364u;
            // 0x39a364: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x39A368u;
        goto label_39a368;
    }
    ctx->pc = 0x39A360u;
    {
        const bool branch_taken_0x39a360 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x39a360) {
            ctx->pc = 0x39A364u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39A360u;
            // 0x39a364: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39A48Cu;
            goto label_39a48c;
        }
    }
    ctx->pc = 0x39A368u;
label_39a368:
    // 0x39a368: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x39a368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39a36c:
    // 0x39a36c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_39a370:
    if (ctx->pc == 0x39A370u) {
        ctx->pc = 0x39A374u;
        goto label_39a374;
    }
    ctx->pc = 0x39A36Cu;
    {
        const bool branch_taken_0x39a36c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x39a36c) {
            ctx->pc = 0x39A37Cu;
            goto label_39a37c;
        }
    }
    ctx->pc = 0x39A374u;
label_39a374:
    // 0x39a374: 0x10000044  b           . + 4 + (0x44 << 2)
label_39a378:
    if (ctx->pc == 0x39A378u) {
        ctx->pc = 0x39A37Cu;
        goto label_39a37c;
    }
    ctx->pc = 0x39A374u;
    {
        const bool branch_taken_0x39a374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a374) {
            ctx->pc = 0x39A488u;
            goto label_39a488;
        }
    }
    ctx->pc = 0x39A37Cu;
label_39a37c:
    // 0x39a37c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x39a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_39a380:
    // 0x39a380: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x39a380u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39a384:
    // 0x39a384: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x39a384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_39a388:
    // 0x39a388: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x39a388u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_39a38c:
    // 0x39a38c: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x39a38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_39a390:
    // 0x39a390: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x39a390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_39a394:
    // 0x39a394: 0x320f809  jalr        $t9
label_39a398:
    if (ctx->pc == 0x39A398u) {
        ctx->pc = 0x39A398u;
            // 0x39a398: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x39A39Cu;
        goto label_39a39c;
    }
    ctx->pc = 0x39A394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39A39Cu);
        ctx->pc = 0x39A398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39A394u;
            // 0x39a398: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39A39Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39A39Cu; }
            if (ctx->pc != 0x39A39Cu) { return; }
        }
        }
    }
    ctx->pc = 0x39A39Cu;
label_39a39c:
    // 0x39a39c: 0x1000003a  b           . + 4 + (0x3A << 2)
label_39a3a0:
    if (ctx->pc == 0x39A3A0u) {
        ctx->pc = 0x39A3A4u;
        goto label_39a3a4;
    }
    ctx->pc = 0x39A39Cu;
    {
        const bool branch_taken_0x39a39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a39c) {
            ctx->pc = 0x39A488u;
            goto label_39a488;
        }
    }
    ctx->pc = 0x39A3A4u;
label_39a3a4:
    // 0x39a3a4: 0x8eb00070  lw          $s0, 0x70($s5)
    ctx->pc = 0x39a3a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_39a3a8:
    // 0x39a3a8: 0x12000037  beqz        $s0, . + 4 + (0x37 << 2)
label_39a3ac:
    if (ctx->pc == 0x39A3ACu) {
        ctx->pc = 0x39A3B0u;
        goto label_39a3b0;
    }
    ctx->pc = 0x39A3A8u;
    {
        const bool branch_taken_0x39a3a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a3a8) {
            ctx->pc = 0x39A488u;
            goto label_39a488;
        }
    }
    ctx->pc = 0x39A3B0u;
label_39a3b0:
    // 0x39a3b0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x39a3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_39a3b4:
    // 0x39a3b4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x39a3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_39a3b8:
    // 0x39a3b8: 0x8c76e378  lw          $s6, -0x1C88($v1)
    ctx->pc = 0x39a3b8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_39a3bc:
    // 0x39a3bc: 0x26b30084  addiu       $s3, $s5, 0x84
    ctx->pc = 0x39a3bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_39a3c0:
    // 0x39a3c0: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x39a3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_39a3c4:
    // 0x39a3c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x39a3c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39a3c8:
    // 0x39a3c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x39a3c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39a3cc:
    // 0x39a3cc: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x39a3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_39a3d0:
    // 0x39a3d0: 0x8c64d120  lw          $a0, -0x2EE0($v1)
    ctx->pc = 0x39a3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_39a3d4:
    // 0x39a3d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39a3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39a3d8:
    // 0x39a3d8: 0x8cb40130  lw          $s4, 0x130($a1)
    ctx->pc = 0x39a3d8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_39a3dc:
    // 0x39a3dc: 0x8c5ee370  lw          $fp, -0x1C90($v0)
    ctx->pc = 0x39a3dcu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_39a3e0:
    // 0x39a3e0: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x39a3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_39a3e4:
    // 0x39a3e4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x39a3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_39a3e8:
    // 0x39a3e8: 0x142880  sll         $a1, $s4, 2
    ctx->pc = 0x39a3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_39a3ec:
    // 0x39a3ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39a3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39a3f0:
    // 0x39a3f0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x39a3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_39a3f4:
    // 0x39a3f4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x39a3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39a3f8:
    // 0x39a3f8: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x39a3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_39a3fc:
    // 0x39a3fc: 0x24970010  addiu       $s7, $a0, 0x10
    ctx->pc = 0x39a3fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_39a400:
    // 0x39a400: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x39a400u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_39a404:
    // 0x39a404: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x39a404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_39a408:
    // 0x39a408: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x39a408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39a40c:
    // 0x39a40c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x39a40cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_39a410:
    // 0x39a410: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x39a410u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_39a414:
    // 0x39a414: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x39a414u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_39a418:
    // 0x39a418: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x39a418u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_39a41c:
    // 0x39a41c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x39a41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_39a420:
    // 0x39a420: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x39a420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39a424:
    // 0x39a424: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x39a424u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39a428:
    // 0x39a428: 0x8f3900a4  lw          $t9, 0xA4($t9)
    ctx->pc = 0x39a428u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 164)));
label_39a42c:
    // 0x39a42c: 0x320f809  jalr        $t9
label_39a430:
    if (ctx->pc == 0x39A430u) {
        ctx->pc = 0x39A430u;
            // 0x39a430: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39A434u;
        goto label_39a434;
    }
    ctx->pc = 0x39A42Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39A434u);
        ctx->pc = 0x39A430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39A42Cu;
            // 0x39a430: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39A434u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39A434u; }
            if (ctx->pc != 0x39A434u) { return; }
        }
        }
    }
    ctx->pc = 0x39A434u;
label_39a434:
    // 0x39a434: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x39a434u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_39a438:
    // 0x39a438: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x39a438u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_39a43c:
    // 0x39a43c: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_39a440:
    if (ctx->pc == 0x39A440u) {
        ctx->pc = 0x39A440u;
            // 0x39a440: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x39A444u;
        goto label_39a444;
    }
    ctx->pc = 0x39A43Cu;
    {
        const bool branch_taken_0x39a43c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39A440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39A43Cu;
            // 0x39a440: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a43c) {
            ctx->pc = 0x39A404u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_39a404;
        }
    }
    ctx->pc = 0x39A444u;
label_39a444:
    // 0x39a444: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x39a444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_39a448:
    // 0x39a448: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x39a448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_39a44c:
    // 0x39a44c: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
label_39a450:
    if (ctx->pc == 0x39A450u) {
        ctx->pc = 0x39A454u;
        goto label_39a454;
    }
    ctx->pc = 0x39A44Cu;
    {
        const bool branch_taken_0x39a44c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x39a44c) {
            ctx->pc = 0x39A488u;
            goto label_39a488;
        }
    }
    ctx->pc = 0x39A454u;
label_39a454:
    // 0x39a454: 0xc04e738  jal         func_139CE0
label_39a458:
    if (ctx->pc == 0x39A458u) {
        ctx->pc = 0x39A458u;
            // 0x39a458: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x39A45Cu;
        goto label_39a45c;
    }
    ctx->pc = 0x39A454u;
    SET_GPR_U32(ctx, 31, 0x39A45Cu);
    ctx->pc = 0x39A458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39A454u;
            // 0x39a458: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A45Cu; }
        if (ctx->pc != 0x39A45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A45Cu; }
        if (ctx->pc != 0x39A45Cu) { return; }
    }
    ctx->pc = 0x39A45Cu;
label_39a45c:
    // 0x39a45c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39a45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39a460:
    // 0x39a460: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x39a460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_39a464:
    // 0x39a464: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x39a464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_39a468:
    // 0x39a468: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x39a468u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_39a46c:
    // 0x39a46c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x39a46cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_39a470:
    // 0x39a470: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39a470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39a474:
    // 0x39a474: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x39a474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_39a478:
    // 0x39a478: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39a478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39a47c:
    // 0x39a47c: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x39a47cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_39a480:
    // 0x39a480: 0xc055ea8  jal         func_157AA0
label_39a484:
    if (ctx->pc == 0x39A484u) {
        ctx->pc = 0x39A484u;
            // 0x39a484: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39A488u;
        goto label_39a488;
    }
    ctx->pc = 0x39A480u;
    SET_GPR_U32(ctx, 31, 0x39A488u);
    ctx->pc = 0x39A484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39A480u;
            // 0x39a484: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A488u; }
        if (ctx->pc != 0x39A488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A488u; }
        if (ctx->pc != 0x39A488u) { return; }
    }
    ctx->pc = 0x39A488u;
label_39a488:
    // 0x39a488: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x39a488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_39a48c:
    // 0x39a48c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x39a48cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_39a490:
    // 0x39a490: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x39a490u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_39a494:
    // 0x39a494: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x39a494u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_39a498:
    // 0x39a498: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x39a498u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39a49c:
    // 0x39a49c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x39a49cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39a4a0:
    // 0x39a4a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x39a4a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39a4a4:
    // 0x39a4a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39a4a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39a4a8:
    // 0x39a4a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39a4a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39a4ac:
    // 0x39a4ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39a4acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39a4b0:
    // 0x39a4b0: 0x3e00008  jr          $ra
label_39a4b4:
    if (ctx->pc == 0x39A4B4u) {
        ctx->pc = 0x39A4B4u;
            // 0x39a4b4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x39A4B8u;
        goto label_39a4b8;
    }
    ctx->pc = 0x39A4B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39A4B0u;
            // 0x39a4b4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39A4B8u;
label_39a4b8:
    // 0x39a4b8: 0x0  nop
    ctx->pc = 0x39a4b8u;
    // NOP
label_39a4bc:
    // 0x39a4bc: 0x0  nop
    ctx->pc = 0x39a4bcu;
    // NOP
label_39a4c0:
    // 0x39a4c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x39a4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_39a4c4:
    // 0x39a4c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x39a4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_39a4c8:
    // 0x39a4c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x39a4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_39a4cc:
    // 0x39a4cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x39a4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_39a4d0:
    // 0x39a4d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39a4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_39a4d4:
    // 0x39a4d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39a4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39a4d8:
    // 0x39a4d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39a4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39a4dc:
    // 0x39a4dc: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x39a4dcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_39a4e0:
    // 0x39a4e0: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_39a4e4:
    if (ctx->pc == 0x39A4E4u) {
        ctx->pc = 0x39A4E4u;
            // 0x39a4e4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39A4E8u;
        goto label_39a4e8;
    }
    ctx->pc = 0x39A4E0u;
    {
        const bool branch_taken_0x39a4e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x39A4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39A4E0u;
            // 0x39a4e4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a4e0) {
            ctx->pc = 0x39A514u;
            goto label_39a514;
        }
    }
    ctx->pc = 0x39A4E8u;
label_39a4e8:
    // 0x39a4e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x39a4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_39a4ec:
    // 0x39a4ec: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_39a4f0:
    if (ctx->pc == 0x39A4F0u) {
        ctx->pc = 0x39A4F0u;
            // 0x39a4f0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x39A4F4u;
        goto label_39a4f4;
    }
    ctx->pc = 0x39A4ECu;
    {
        const bool branch_taken_0x39a4ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x39a4ec) {
            ctx->pc = 0x39A4F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39A4ECu;
            // 0x39a4f0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39A508u;
            goto label_39a508;
        }
    }
    ctx->pc = 0x39A4F4u;
label_39a4f4:
    // 0x39a4f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x39a4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39a4f8:
    // 0x39a4f8: 0x10a3001b  beq         $a1, $v1, . + 4 + (0x1B << 2)
label_39a4fc:
    if (ctx->pc == 0x39A4FCu) {
        ctx->pc = 0x39A500u;
        goto label_39a500;
    }
    ctx->pc = 0x39A4F8u;
    {
        const bool branch_taken_0x39a4f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x39a4f8) {
            ctx->pc = 0x39A568u;
            goto label_39a568;
        }
    }
    ctx->pc = 0x39A500u;
label_39a500:
    // 0x39a500: 0x10000019  b           . + 4 + (0x19 << 2)
label_39a504:
    if (ctx->pc == 0x39A504u) {
        ctx->pc = 0x39A508u;
        goto label_39a508;
    }
    ctx->pc = 0x39A500u;
    {
        const bool branch_taken_0x39a500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a500) {
            ctx->pc = 0x39A568u;
            goto label_39a568;
        }
    }
    ctx->pc = 0x39A508u;
label_39a508:
    // 0x39a508: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x39a508u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_39a50c:
    // 0x39a50c: 0x320f809  jalr        $t9
label_39a510:
    if (ctx->pc == 0x39A510u) {
        ctx->pc = 0x39A514u;
        goto label_39a514;
    }
    ctx->pc = 0x39A50Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39A514u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x39A514u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39A514u; }
            if (ctx->pc != 0x39A514u) { return; }
        }
        }
    }
    ctx->pc = 0x39A514u;
label_39a514:
    // 0x39a514: 0x8e700070  lw          $s0, 0x70($s3)
    ctx->pc = 0x39a514u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_39a518:
    // 0x39a518: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_39a51c:
    if (ctx->pc == 0x39A51Cu) {
        ctx->pc = 0x39A520u;
        goto label_39a520;
    }
    ctx->pc = 0x39A518u;
    {
        const bool branch_taken_0x39a518 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a518) {
            ctx->pc = 0x39A568u;
            goto label_39a568;
        }
    }
    ctx->pc = 0x39A520u;
label_39a520:
    // 0x39a520: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x39a520u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39a524:
    // 0x39a524: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x39a524u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39a528:
    // 0x39a528: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x39a528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_39a52c:
    // 0x39a52c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x39a52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_39a530:
    // 0x39a530: 0xc0f4cb0  jal         func_3D32C0
label_39a534:
    if (ctx->pc == 0x39A534u) {
        ctx->pc = 0x39A534u;
            // 0x39a534: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x39A538u;
        goto label_39a538;
    }
    ctx->pc = 0x39A530u;
    SET_GPR_U32(ctx, 31, 0x39A538u);
    ctx->pc = 0x39A534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39A530u;
            // 0x39a534: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D32C0u;
    if (runtime->hasFunction(0x3D32C0u)) {
        auto targetFn = runtime->lookupFunction(0x3D32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A538u; }
        if (ctx->pc != 0x39A538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D32C0_0x3d32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A538u; }
        if (ctx->pc != 0x39A538u) { return; }
    }
    ctx->pc = 0x39A538u;
label_39a538:
    // 0x39a538: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x39a538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_39a53c:
    // 0x39a53c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x39a53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_39a540:
    // 0x39a540: 0xc0e3658  jal         func_38D960
label_39a544:
    if (ctx->pc == 0x39A544u) {
        ctx->pc = 0x39A544u;
            // 0x39a544: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x39A548u;
        goto label_39a548;
    }
    ctx->pc = 0x39A540u;
    SET_GPR_U32(ctx, 31, 0x39A548u);
    ctx->pc = 0x39A544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39A540u;
            // 0x39a544: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A548u; }
        if (ctx->pc != 0x39A548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A548u; }
        if (ctx->pc != 0x39A548u) { return; }
    }
    ctx->pc = 0x39A548u;
label_39a548:
    // 0x39a548: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x39a548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_39a54c:
    // 0x39a54c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x39a54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_39a550:
    // 0x39a550: 0xc0f4ac4  jal         func_3D2B10
label_39a554:
    if (ctx->pc == 0x39A554u) {
        ctx->pc = 0x39A554u;
            // 0x39a554: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x39A558u;
        goto label_39a558;
    }
    ctx->pc = 0x39A550u;
    SET_GPR_U32(ctx, 31, 0x39A558u);
    ctx->pc = 0x39A554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39A550u;
            // 0x39a554: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D2B10u;
    if (runtime->hasFunction(0x3D2B10u)) {
        auto targetFn = runtime->lookupFunction(0x3D2B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A558u; }
        if (ctx->pc != 0x39A558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D2B10_0x3d2b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A558u; }
        if (ctx->pc != 0x39A558u) { return; }
    }
    ctx->pc = 0x39A558u;
label_39a558:
    // 0x39a558: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x39a558u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_39a55c:
    // 0x39a55c: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x39a55cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_39a560:
    // 0x39a560: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_39a564:
    if (ctx->pc == 0x39A564u) {
        ctx->pc = 0x39A564u;
            // 0x39a564: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x39A568u;
        goto label_39a568;
    }
    ctx->pc = 0x39A560u;
    {
        const bool branch_taken_0x39a560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39A564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39A560u;
            // 0x39a564: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a560) {
            ctx->pc = 0x39A528u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_39a528;
        }
    }
    ctx->pc = 0x39A568u;
label_39a568:
    // 0x39a568: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x39a568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_39a56c:
    // 0x39a56c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x39a56cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39a570:
    // 0x39a570: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39a570u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39a574:
    // 0x39a574: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39a574u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39a578:
    // 0x39a578: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39a578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39a57c:
    // 0x39a57c: 0x3e00008  jr          $ra
label_39a580:
    if (ctx->pc == 0x39A580u) {
        ctx->pc = 0x39A580u;
            // 0x39a580: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x39A584u;
        goto label_39a584;
    }
    ctx->pc = 0x39A57Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39A57Cu;
            // 0x39a580: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39A584u;
label_39a584:
    // 0x39a584: 0x0  nop
    ctx->pc = 0x39a584u;
    // NOP
label_39a588:
    // 0x39a588: 0x0  nop
    ctx->pc = 0x39a588u;
    // NOP
label_39a58c:
    // 0x39a58c: 0x0  nop
    ctx->pc = 0x39a58cu;
    // NOP
label_39a590:
    // 0x39a590: 0x8c860070  lw          $a2, 0x70($a0)
    ctx->pc = 0x39a590u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_39a594:
    // 0x39a594: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
label_39a598:
    if (ctx->pc == 0x39A598u) {
        ctx->pc = 0x39A59Cu;
        goto label_39a59c;
    }
    ctx->pc = 0x39A594u;
    {
        const bool branch_taken_0x39a594 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a594) {
            ctx->pc = 0x39A5C8u;
            goto label_39a5c8;
        }
    }
    ctx->pc = 0x39A59Cu;
label_39a59c:
    // 0x39a59c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39a59cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39a5a0:
    // 0x39a5a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39a5a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39a5a4:
    // 0x39a5a4: 0x8c850074  lw          $a1, 0x74($a0)
    ctx->pc = 0x39a5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_39a5a8:
    // 0x39a5a8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x39a5a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_39a5ac:
    // 0x39a5ac: 0x106182b  sltu        $v1, $t0, $a2
    ctx->pc = 0x39a5acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_39a5b0:
    // 0x39a5b0: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x39a5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_39a5b4:
    // 0x39a5b4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x39a5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_39a5b8:
    // 0x39a5b8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x39a5b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_39a5bc:
    // 0x39a5bc: 0xaca000e0  sw          $zero, 0xE0($a1)
    ctx->pc = 0x39a5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 224), GPR_U32(ctx, 0));
label_39a5c0:
    // 0x39a5c0: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_39a5c4:
    if (ctx->pc == 0x39A5C4u) {
        ctx->pc = 0x39A5C4u;
            // 0x39a5c4: 0xaca0020c  sw          $zero, 0x20C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 0));
        ctx->pc = 0x39A5C8u;
        goto label_39a5c8;
    }
    ctx->pc = 0x39A5C0u;
    {
        const bool branch_taken_0x39a5c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39A5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39A5C0u;
            // 0x39a5c4: 0xaca0020c  sw          $zero, 0x20C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a5c0) {
            ctx->pc = 0x39A5A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_39a5a4;
        }
    }
    ctx->pc = 0x39A5C8u;
label_39a5c8:
    // 0x39a5c8: 0x3e00008  jr          $ra
label_39a5cc:
    if (ctx->pc == 0x39A5CCu) {
        ctx->pc = 0x39A5D0u;
        goto label_fallthrough_0x39a5c8;
    }
    ctx->pc = 0x39A5C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x39a5c8:
    ctx->pc = 0x39A5D0u;
}
