#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032A160
// Address: 0x32a160 - 0x32a670
void sub_0032A160_0x32a160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A160_0x32a160");
#endif

    switch (ctx->pc) {
        case 0x32a160u: goto label_32a160;
        case 0x32a164u: goto label_32a164;
        case 0x32a168u: goto label_32a168;
        case 0x32a16cu: goto label_32a16c;
        case 0x32a170u: goto label_32a170;
        case 0x32a174u: goto label_32a174;
        case 0x32a178u: goto label_32a178;
        case 0x32a17cu: goto label_32a17c;
        case 0x32a180u: goto label_32a180;
        case 0x32a184u: goto label_32a184;
        case 0x32a188u: goto label_32a188;
        case 0x32a18cu: goto label_32a18c;
        case 0x32a190u: goto label_32a190;
        case 0x32a194u: goto label_32a194;
        case 0x32a198u: goto label_32a198;
        case 0x32a19cu: goto label_32a19c;
        case 0x32a1a0u: goto label_32a1a0;
        case 0x32a1a4u: goto label_32a1a4;
        case 0x32a1a8u: goto label_32a1a8;
        case 0x32a1acu: goto label_32a1ac;
        case 0x32a1b0u: goto label_32a1b0;
        case 0x32a1b4u: goto label_32a1b4;
        case 0x32a1b8u: goto label_32a1b8;
        case 0x32a1bcu: goto label_32a1bc;
        case 0x32a1c0u: goto label_32a1c0;
        case 0x32a1c4u: goto label_32a1c4;
        case 0x32a1c8u: goto label_32a1c8;
        case 0x32a1ccu: goto label_32a1cc;
        case 0x32a1d0u: goto label_32a1d0;
        case 0x32a1d4u: goto label_32a1d4;
        case 0x32a1d8u: goto label_32a1d8;
        case 0x32a1dcu: goto label_32a1dc;
        case 0x32a1e0u: goto label_32a1e0;
        case 0x32a1e4u: goto label_32a1e4;
        case 0x32a1e8u: goto label_32a1e8;
        case 0x32a1ecu: goto label_32a1ec;
        case 0x32a1f0u: goto label_32a1f0;
        case 0x32a1f4u: goto label_32a1f4;
        case 0x32a1f8u: goto label_32a1f8;
        case 0x32a1fcu: goto label_32a1fc;
        case 0x32a200u: goto label_32a200;
        case 0x32a204u: goto label_32a204;
        case 0x32a208u: goto label_32a208;
        case 0x32a20cu: goto label_32a20c;
        case 0x32a210u: goto label_32a210;
        case 0x32a214u: goto label_32a214;
        case 0x32a218u: goto label_32a218;
        case 0x32a21cu: goto label_32a21c;
        case 0x32a220u: goto label_32a220;
        case 0x32a224u: goto label_32a224;
        case 0x32a228u: goto label_32a228;
        case 0x32a22cu: goto label_32a22c;
        case 0x32a230u: goto label_32a230;
        case 0x32a234u: goto label_32a234;
        case 0x32a238u: goto label_32a238;
        case 0x32a23cu: goto label_32a23c;
        case 0x32a240u: goto label_32a240;
        case 0x32a244u: goto label_32a244;
        case 0x32a248u: goto label_32a248;
        case 0x32a24cu: goto label_32a24c;
        case 0x32a250u: goto label_32a250;
        case 0x32a254u: goto label_32a254;
        case 0x32a258u: goto label_32a258;
        case 0x32a25cu: goto label_32a25c;
        case 0x32a260u: goto label_32a260;
        case 0x32a264u: goto label_32a264;
        case 0x32a268u: goto label_32a268;
        case 0x32a26cu: goto label_32a26c;
        case 0x32a270u: goto label_32a270;
        case 0x32a274u: goto label_32a274;
        case 0x32a278u: goto label_32a278;
        case 0x32a27cu: goto label_32a27c;
        case 0x32a280u: goto label_32a280;
        case 0x32a284u: goto label_32a284;
        case 0x32a288u: goto label_32a288;
        case 0x32a28cu: goto label_32a28c;
        case 0x32a290u: goto label_32a290;
        case 0x32a294u: goto label_32a294;
        case 0x32a298u: goto label_32a298;
        case 0x32a29cu: goto label_32a29c;
        case 0x32a2a0u: goto label_32a2a0;
        case 0x32a2a4u: goto label_32a2a4;
        case 0x32a2a8u: goto label_32a2a8;
        case 0x32a2acu: goto label_32a2ac;
        case 0x32a2b0u: goto label_32a2b0;
        case 0x32a2b4u: goto label_32a2b4;
        case 0x32a2b8u: goto label_32a2b8;
        case 0x32a2bcu: goto label_32a2bc;
        case 0x32a2c0u: goto label_32a2c0;
        case 0x32a2c4u: goto label_32a2c4;
        case 0x32a2c8u: goto label_32a2c8;
        case 0x32a2ccu: goto label_32a2cc;
        case 0x32a2d0u: goto label_32a2d0;
        case 0x32a2d4u: goto label_32a2d4;
        case 0x32a2d8u: goto label_32a2d8;
        case 0x32a2dcu: goto label_32a2dc;
        case 0x32a2e0u: goto label_32a2e0;
        case 0x32a2e4u: goto label_32a2e4;
        case 0x32a2e8u: goto label_32a2e8;
        case 0x32a2ecu: goto label_32a2ec;
        case 0x32a2f0u: goto label_32a2f0;
        case 0x32a2f4u: goto label_32a2f4;
        case 0x32a2f8u: goto label_32a2f8;
        case 0x32a2fcu: goto label_32a2fc;
        case 0x32a300u: goto label_32a300;
        case 0x32a304u: goto label_32a304;
        case 0x32a308u: goto label_32a308;
        case 0x32a30cu: goto label_32a30c;
        case 0x32a310u: goto label_32a310;
        case 0x32a314u: goto label_32a314;
        case 0x32a318u: goto label_32a318;
        case 0x32a31cu: goto label_32a31c;
        case 0x32a320u: goto label_32a320;
        case 0x32a324u: goto label_32a324;
        case 0x32a328u: goto label_32a328;
        case 0x32a32cu: goto label_32a32c;
        case 0x32a330u: goto label_32a330;
        case 0x32a334u: goto label_32a334;
        case 0x32a338u: goto label_32a338;
        case 0x32a33cu: goto label_32a33c;
        case 0x32a340u: goto label_32a340;
        case 0x32a344u: goto label_32a344;
        case 0x32a348u: goto label_32a348;
        case 0x32a34cu: goto label_32a34c;
        case 0x32a350u: goto label_32a350;
        case 0x32a354u: goto label_32a354;
        case 0x32a358u: goto label_32a358;
        case 0x32a35cu: goto label_32a35c;
        case 0x32a360u: goto label_32a360;
        case 0x32a364u: goto label_32a364;
        case 0x32a368u: goto label_32a368;
        case 0x32a36cu: goto label_32a36c;
        case 0x32a370u: goto label_32a370;
        case 0x32a374u: goto label_32a374;
        case 0x32a378u: goto label_32a378;
        case 0x32a37cu: goto label_32a37c;
        case 0x32a380u: goto label_32a380;
        case 0x32a384u: goto label_32a384;
        case 0x32a388u: goto label_32a388;
        case 0x32a38cu: goto label_32a38c;
        case 0x32a390u: goto label_32a390;
        case 0x32a394u: goto label_32a394;
        case 0x32a398u: goto label_32a398;
        case 0x32a39cu: goto label_32a39c;
        case 0x32a3a0u: goto label_32a3a0;
        case 0x32a3a4u: goto label_32a3a4;
        case 0x32a3a8u: goto label_32a3a8;
        case 0x32a3acu: goto label_32a3ac;
        case 0x32a3b0u: goto label_32a3b0;
        case 0x32a3b4u: goto label_32a3b4;
        case 0x32a3b8u: goto label_32a3b8;
        case 0x32a3bcu: goto label_32a3bc;
        case 0x32a3c0u: goto label_32a3c0;
        case 0x32a3c4u: goto label_32a3c4;
        case 0x32a3c8u: goto label_32a3c8;
        case 0x32a3ccu: goto label_32a3cc;
        case 0x32a3d0u: goto label_32a3d0;
        case 0x32a3d4u: goto label_32a3d4;
        case 0x32a3d8u: goto label_32a3d8;
        case 0x32a3dcu: goto label_32a3dc;
        case 0x32a3e0u: goto label_32a3e0;
        case 0x32a3e4u: goto label_32a3e4;
        case 0x32a3e8u: goto label_32a3e8;
        case 0x32a3ecu: goto label_32a3ec;
        case 0x32a3f0u: goto label_32a3f0;
        case 0x32a3f4u: goto label_32a3f4;
        case 0x32a3f8u: goto label_32a3f8;
        case 0x32a3fcu: goto label_32a3fc;
        case 0x32a400u: goto label_32a400;
        case 0x32a404u: goto label_32a404;
        case 0x32a408u: goto label_32a408;
        case 0x32a40cu: goto label_32a40c;
        case 0x32a410u: goto label_32a410;
        case 0x32a414u: goto label_32a414;
        case 0x32a418u: goto label_32a418;
        case 0x32a41cu: goto label_32a41c;
        case 0x32a420u: goto label_32a420;
        case 0x32a424u: goto label_32a424;
        case 0x32a428u: goto label_32a428;
        case 0x32a42cu: goto label_32a42c;
        case 0x32a430u: goto label_32a430;
        case 0x32a434u: goto label_32a434;
        case 0x32a438u: goto label_32a438;
        case 0x32a43cu: goto label_32a43c;
        case 0x32a440u: goto label_32a440;
        case 0x32a444u: goto label_32a444;
        case 0x32a448u: goto label_32a448;
        case 0x32a44cu: goto label_32a44c;
        case 0x32a450u: goto label_32a450;
        case 0x32a454u: goto label_32a454;
        case 0x32a458u: goto label_32a458;
        case 0x32a45cu: goto label_32a45c;
        case 0x32a460u: goto label_32a460;
        case 0x32a464u: goto label_32a464;
        case 0x32a468u: goto label_32a468;
        case 0x32a46cu: goto label_32a46c;
        case 0x32a470u: goto label_32a470;
        case 0x32a474u: goto label_32a474;
        case 0x32a478u: goto label_32a478;
        case 0x32a47cu: goto label_32a47c;
        case 0x32a480u: goto label_32a480;
        case 0x32a484u: goto label_32a484;
        case 0x32a488u: goto label_32a488;
        case 0x32a48cu: goto label_32a48c;
        case 0x32a490u: goto label_32a490;
        case 0x32a494u: goto label_32a494;
        case 0x32a498u: goto label_32a498;
        case 0x32a49cu: goto label_32a49c;
        case 0x32a4a0u: goto label_32a4a0;
        case 0x32a4a4u: goto label_32a4a4;
        case 0x32a4a8u: goto label_32a4a8;
        case 0x32a4acu: goto label_32a4ac;
        case 0x32a4b0u: goto label_32a4b0;
        case 0x32a4b4u: goto label_32a4b4;
        case 0x32a4b8u: goto label_32a4b8;
        case 0x32a4bcu: goto label_32a4bc;
        case 0x32a4c0u: goto label_32a4c0;
        case 0x32a4c4u: goto label_32a4c4;
        case 0x32a4c8u: goto label_32a4c8;
        case 0x32a4ccu: goto label_32a4cc;
        case 0x32a4d0u: goto label_32a4d0;
        case 0x32a4d4u: goto label_32a4d4;
        case 0x32a4d8u: goto label_32a4d8;
        case 0x32a4dcu: goto label_32a4dc;
        case 0x32a4e0u: goto label_32a4e0;
        case 0x32a4e4u: goto label_32a4e4;
        case 0x32a4e8u: goto label_32a4e8;
        case 0x32a4ecu: goto label_32a4ec;
        case 0x32a4f0u: goto label_32a4f0;
        case 0x32a4f4u: goto label_32a4f4;
        case 0x32a4f8u: goto label_32a4f8;
        case 0x32a4fcu: goto label_32a4fc;
        case 0x32a500u: goto label_32a500;
        case 0x32a504u: goto label_32a504;
        case 0x32a508u: goto label_32a508;
        case 0x32a50cu: goto label_32a50c;
        case 0x32a510u: goto label_32a510;
        case 0x32a514u: goto label_32a514;
        case 0x32a518u: goto label_32a518;
        case 0x32a51cu: goto label_32a51c;
        case 0x32a520u: goto label_32a520;
        case 0x32a524u: goto label_32a524;
        case 0x32a528u: goto label_32a528;
        case 0x32a52cu: goto label_32a52c;
        case 0x32a530u: goto label_32a530;
        case 0x32a534u: goto label_32a534;
        case 0x32a538u: goto label_32a538;
        case 0x32a53cu: goto label_32a53c;
        case 0x32a540u: goto label_32a540;
        case 0x32a544u: goto label_32a544;
        case 0x32a548u: goto label_32a548;
        case 0x32a54cu: goto label_32a54c;
        case 0x32a550u: goto label_32a550;
        case 0x32a554u: goto label_32a554;
        case 0x32a558u: goto label_32a558;
        case 0x32a55cu: goto label_32a55c;
        case 0x32a560u: goto label_32a560;
        case 0x32a564u: goto label_32a564;
        case 0x32a568u: goto label_32a568;
        case 0x32a56cu: goto label_32a56c;
        case 0x32a570u: goto label_32a570;
        case 0x32a574u: goto label_32a574;
        case 0x32a578u: goto label_32a578;
        case 0x32a57cu: goto label_32a57c;
        case 0x32a580u: goto label_32a580;
        case 0x32a584u: goto label_32a584;
        case 0x32a588u: goto label_32a588;
        case 0x32a58cu: goto label_32a58c;
        case 0x32a590u: goto label_32a590;
        case 0x32a594u: goto label_32a594;
        case 0x32a598u: goto label_32a598;
        case 0x32a59cu: goto label_32a59c;
        case 0x32a5a0u: goto label_32a5a0;
        case 0x32a5a4u: goto label_32a5a4;
        case 0x32a5a8u: goto label_32a5a8;
        case 0x32a5acu: goto label_32a5ac;
        case 0x32a5b0u: goto label_32a5b0;
        case 0x32a5b4u: goto label_32a5b4;
        case 0x32a5b8u: goto label_32a5b8;
        case 0x32a5bcu: goto label_32a5bc;
        case 0x32a5c0u: goto label_32a5c0;
        case 0x32a5c4u: goto label_32a5c4;
        case 0x32a5c8u: goto label_32a5c8;
        case 0x32a5ccu: goto label_32a5cc;
        case 0x32a5d0u: goto label_32a5d0;
        case 0x32a5d4u: goto label_32a5d4;
        case 0x32a5d8u: goto label_32a5d8;
        case 0x32a5dcu: goto label_32a5dc;
        case 0x32a5e0u: goto label_32a5e0;
        case 0x32a5e4u: goto label_32a5e4;
        case 0x32a5e8u: goto label_32a5e8;
        case 0x32a5ecu: goto label_32a5ec;
        case 0x32a5f0u: goto label_32a5f0;
        case 0x32a5f4u: goto label_32a5f4;
        case 0x32a5f8u: goto label_32a5f8;
        case 0x32a5fcu: goto label_32a5fc;
        case 0x32a600u: goto label_32a600;
        case 0x32a604u: goto label_32a604;
        case 0x32a608u: goto label_32a608;
        case 0x32a60cu: goto label_32a60c;
        case 0x32a610u: goto label_32a610;
        case 0x32a614u: goto label_32a614;
        case 0x32a618u: goto label_32a618;
        case 0x32a61cu: goto label_32a61c;
        case 0x32a620u: goto label_32a620;
        case 0x32a624u: goto label_32a624;
        case 0x32a628u: goto label_32a628;
        case 0x32a62cu: goto label_32a62c;
        case 0x32a630u: goto label_32a630;
        case 0x32a634u: goto label_32a634;
        case 0x32a638u: goto label_32a638;
        case 0x32a63cu: goto label_32a63c;
        case 0x32a640u: goto label_32a640;
        case 0x32a644u: goto label_32a644;
        case 0x32a648u: goto label_32a648;
        case 0x32a64cu: goto label_32a64c;
        case 0x32a650u: goto label_32a650;
        case 0x32a654u: goto label_32a654;
        case 0x32a658u: goto label_32a658;
        case 0x32a65cu: goto label_32a65c;
        case 0x32a660u: goto label_32a660;
        case 0x32a664u: goto label_32a664;
        case 0x32a668u: goto label_32a668;
        case 0x32a66cu: goto label_32a66c;
        default: break;
    }

    ctx->pc = 0x32a160u;

label_32a160:
    // 0x32a160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32a160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_32a164:
    // 0x32a164: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32a164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_32a168:
    // 0x32a168: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32a168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_32a16c:
    // 0x32a16c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32a16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32a170:
    // 0x32a170: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32a170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32a174:
    // 0x32a174: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_32a178:
    if (ctx->pc == 0x32A178u) {
        ctx->pc = 0x32A178u;
            // 0x32a178: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32A17Cu;
        goto label_32a17c;
    }
    ctx->pc = 0x32A174u;
    {
        const bool branch_taken_0x32a174 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A174u;
            // 0x32a178: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a174) {
            ctx->pc = 0x32A2A8u;
            goto label_32a2a8;
        }
    }
    ctx->pc = 0x32A17Cu;
label_32a17c:
    // 0x32a17c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x32a17cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_32a180:
    // 0x32a180: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32a180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_32a184:
    // 0x32a184: 0x24634710  addiu       $v1, $v1, 0x4710
    ctx->pc = 0x32a184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18192));
label_32a188:
    // 0x32a188: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x32a188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_32a18c:
    // 0x32a18c: 0x24424748  addiu       $v0, $v0, 0x4748
    ctx->pc = 0x32a18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18248));
label_32a190:
    // 0x32a190: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x32a190u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_32a194:
    // 0x32a194: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x32a194u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_32a198:
    // 0x32a198: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x32a198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_32a19c:
    // 0x32a19c: 0xc0407c0  jal         func_101F00
label_32a1a0:
    if (ctx->pc == 0x32A1A0u) {
        ctx->pc = 0x32A1A0u;
            // 0x32a1a0: 0x24a5a2c0  addiu       $a1, $a1, -0x5D40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943424));
        ctx->pc = 0x32A1A4u;
        goto label_32a1a4;
    }
    ctx->pc = 0x32A19Cu;
    SET_GPR_U32(ctx, 31, 0x32A1A4u);
    ctx->pc = 0x32A1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32A19Cu;
            // 0x32a1a0: 0x24a5a2c0  addiu       $a1, $a1, -0x5D40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A1A4u; }
        if (ctx->pc != 0x32A1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A1A4u; }
        if (ctx->pc != 0x32A1A4u) { return; }
    }
    ctx->pc = 0x32A1A4u;
label_32a1a4:
    // 0x32a1a4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x32a1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_32a1a8:
    // 0x32a1a8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_32a1ac:
    if (ctx->pc == 0x32A1ACu) {
        ctx->pc = 0x32A1ACu;
            // 0x32a1ac: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x32A1B0u;
        goto label_32a1b0;
    }
    ctx->pc = 0x32A1A8u;
    {
        const bool branch_taken_0x32a1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a1a8) {
            ctx->pc = 0x32A1ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32A1A8u;
            // 0x32a1ac: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32A1BCu;
            goto label_32a1bc;
        }
    }
    ctx->pc = 0x32A1B0u;
label_32a1b0:
    // 0x32a1b0: 0xc07507c  jal         func_1D41F0
label_32a1b4:
    if (ctx->pc == 0x32A1B4u) {
        ctx->pc = 0x32A1B4u;
            // 0x32a1b4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x32A1B8u;
        goto label_32a1b8;
    }
    ctx->pc = 0x32A1B0u;
    SET_GPR_U32(ctx, 31, 0x32A1B8u);
    ctx->pc = 0x32A1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32A1B0u;
            // 0x32a1b4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A1B8u; }
        if (ctx->pc != 0x32A1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A1B8u; }
        if (ctx->pc != 0x32A1B8u) { return; }
    }
    ctx->pc = 0x32A1B8u;
label_32a1b8:
    // 0x32a1b8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x32a1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_32a1bc:
    // 0x32a1bc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_32a1c0:
    if (ctx->pc == 0x32A1C0u) {
        ctx->pc = 0x32A1C0u;
            // 0x32a1c0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x32A1C4u;
        goto label_32a1c4;
    }
    ctx->pc = 0x32A1BCu;
    {
        const bool branch_taken_0x32a1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a1bc) {
            ctx->pc = 0x32A1C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32A1BCu;
            // 0x32a1c0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32A1ECu;
            goto label_32a1ec;
        }
    }
    ctx->pc = 0x32A1C4u;
label_32a1c4:
    // 0x32a1c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_32a1c8:
    if (ctx->pc == 0x32A1C8u) {
        ctx->pc = 0x32A1CCu;
        goto label_32a1cc;
    }
    ctx->pc = 0x32A1C4u;
    {
        const bool branch_taken_0x32a1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a1c4) {
            ctx->pc = 0x32A1E8u;
            goto label_32a1e8;
        }
    }
    ctx->pc = 0x32A1CCu;
label_32a1cc:
    // 0x32a1cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_32a1d0:
    if (ctx->pc == 0x32A1D0u) {
        ctx->pc = 0x32A1D4u;
        goto label_32a1d4;
    }
    ctx->pc = 0x32A1CCu;
    {
        const bool branch_taken_0x32a1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a1cc) {
            ctx->pc = 0x32A1E8u;
            goto label_32a1e8;
        }
    }
    ctx->pc = 0x32A1D4u;
label_32a1d4:
    // 0x32a1d4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x32a1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_32a1d8:
    // 0x32a1d8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_32a1dc:
    if (ctx->pc == 0x32A1DCu) {
        ctx->pc = 0x32A1E0u;
        goto label_32a1e0;
    }
    ctx->pc = 0x32A1D8u;
    {
        const bool branch_taken_0x32a1d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a1d8) {
            ctx->pc = 0x32A1E8u;
            goto label_32a1e8;
        }
    }
    ctx->pc = 0x32A1E0u;
label_32a1e0:
    // 0x32a1e0: 0xc0400a8  jal         func_1002A0
label_32a1e4:
    if (ctx->pc == 0x32A1E4u) {
        ctx->pc = 0x32A1E8u;
        goto label_32a1e8;
    }
    ctx->pc = 0x32A1E0u;
    SET_GPR_U32(ctx, 31, 0x32A1E8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A1E8u; }
        if (ctx->pc != 0x32A1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A1E8u; }
        if (ctx->pc != 0x32A1E8u) { return; }
    }
    ctx->pc = 0x32A1E8u;
label_32a1e8:
    // 0x32a1e8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x32a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_32a1ec:
    // 0x32a1ec: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_32a1f0:
    if (ctx->pc == 0x32A1F0u) {
        ctx->pc = 0x32A1F0u;
            // 0x32a1f0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x32A1F4u;
        goto label_32a1f4;
    }
    ctx->pc = 0x32A1ECu;
    {
        const bool branch_taken_0x32a1ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a1ec) {
            ctx->pc = 0x32A1F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32A1ECu;
            // 0x32a1f0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32A21Cu;
            goto label_32a21c;
        }
    }
    ctx->pc = 0x32A1F4u;
label_32a1f4:
    // 0x32a1f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_32a1f8:
    if (ctx->pc == 0x32A1F8u) {
        ctx->pc = 0x32A1FCu;
        goto label_32a1fc;
    }
    ctx->pc = 0x32A1F4u;
    {
        const bool branch_taken_0x32a1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a1f4) {
            ctx->pc = 0x32A218u;
            goto label_32a218;
        }
    }
    ctx->pc = 0x32A1FCu;
label_32a1fc:
    // 0x32a1fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_32a200:
    if (ctx->pc == 0x32A200u) {
        ctx->pc = 0x32A204u;
        goto label_32a204;
    }
    ctx->pc = 0x32A1FCu;
    {
        const bool branch_taken_0x32a1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a1fc) {
            ctx->pc = 0x32A218u;
            goto label_32a218;
        }
    }
    ctx->pc = 0x32A204u;
label_32a204:
    // 0x32a204: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x32a204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_32a208:
    // 0x32a208: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_32a20c:
    if (ctx->pc == 0x32A20Cu) {
        ctx->pc = 0x32A210u;
        goto label_32a210;
    }
    ctx->pc = 0x32A208u;
    {
        const bool branch_taken_0x32a208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a208) {
            ctx->pc = 0x32A218u;
            goto label_32a218;
        }
    }
    ctx->pc = 0x32A210u;
label_32a210:
    // 0x32a210: 0xc0400a8  jal         func_1002A0
label_32a214:
    if (ctx->pc == 0x32A214u) {
        ctx->pc = 0x32A218u;
        goto label_32a218;
    }
    ctx->pc = 0x32A210u;
    SET_GPR_U32(ctx, 31, 0x32A218u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A218u; }
        if (ctx->pc != 0x32A218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A218u; }
        if (ctx->pc != 0x32A218u) { return; }
    }
    ctx->pc = 0x32A218u;
label_32a218:
    // 0x32a218: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x32a218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_32a21c:
    // 0x32a21c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_32a220:
    if (ctx->pc == 0x32A220u) {
        ctx->pc = 0x32A224u;
        goto label_32a224;
    }
    ctx->pc = 0x32A21Cu;
    {
        const bool branch_taken_0x32a21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a21c) {
            ctx->pc = 0x32A238u;
            goto label_32a238;
        }
    }
    ctx->pc = 0x32A224u;
label_32a224:
    // 0x32a224: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x32a224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_32a228:
    // 0x32a228: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32a228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32a22c:
    // 0x32a22c: 0x246346f8  addiu       $v1, $v1, 0x46F8
    ctx->pc = 0x32a22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18168));
label_32a230:
    // 0x32a230: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x32a230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_32a234:
    // 0x32a234: 0xac403e48  sw          $zero, 0x3E48($v0)
    ctx->pc = 0x32a234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15944), GPR_U32(ctx, 0));
label_32a238:
    // 0x32a238: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_32a23c:
    if (ctx->pc == 0x32A23Cu) {
        ctx->pc = 0x32A23Cu;
            // 0x32a23c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x32A240u;
        goto label_32a240;
    }
    ctx->pc = 0x32A238u;
    {
        const bool branch_taken_0x32a238 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a238) {
            ctx->pc = 0x32A23Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32A238u;
            // 0x32a23c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32A294u;
            goto label_32a294;
        }
    }
    ctx->pc = 0x32A240u;
label_32a240:
    // 0x32a240: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32a240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_32a244:
    // 0x32a244: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x32a244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_32a248:
    // 0x32a248: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x32a248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_32a24c:
    // 0x32a24c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x32a24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_32a250:
    // 0x32a250: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_32a254:
    if (ctx->pc == 0x32A254u) {
        ctx->pc = 0x32A254u;
            // 0x32a254: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x32A258u;
        goto label_32a258;
    }
    ctx->pc = 0x32A250u;
    {
        const bool branch_taken_0x32a250 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a250) {
            ctx->pc = 0x32A254u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32A250u;
            // 0x32a254: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32A26Cu;
            goto label_32a26c;
        }
    }
    ctx->pc = 0x32A258u;
label_32a258:
    // 0x32a258: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32a258u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32a25c:
    // 0x32a25c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x32a25cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_32a260:
    // 0x32a260: 0x320f809  jalr        $t9
label_32a264:
    if (ctx->pc == 0x32A264u) {
        ctx->pc = 0x32A264u;
            // 0x32a264: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32A268u;
        goto label_32a268;
    }
    ctx->pc = 0x32A260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32A268u);
        ctx->pc = 0x32A264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A260u;
            // 0x32a264: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32A268u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32A268u; }
            if (ctx->pc != 0x32A268u) { return; }
        }
        }
    }
    ctx->pc = 0x32A268u;
label_32a268:
    // 0x32a268: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x32a268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_32a26c:
    // 0x32a26c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_32a270:
    if (ctx->pc == 0x32A270u) {
        ctx->pc = 0x32A270u;
            // 0x32a270: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32A274u;
        goto label_32a274;
    }
    ctx->pc = 0x32A26Cu;
    {
        const bool branch_taken_0x32a26c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a26c) {
            ctx->pc = 0x32A270u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32A26Cu;
            // 0x32a270: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32A288u;
            goto label_32a288;
        }
    }
    ctx->pc = 0x32A274u;
label_32a274:
    // 0x32a274: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32a274u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32a278:
    // 0x32a278: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x32a278u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_32a27c:
    // 0x32a27c: 0x320f809  jalr        $t9
label_32a280:
    if (ctx->pc == 0x32A280u) {
        ctx->pc = 0x32A280u;
            // 0x32a280: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32A284u;
        goto label_32a284;
    }
    ctx->pc = 0x32A27Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32A284u);
        ctx->pc = 0x32A280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A27Cu;
            // 0x32a280: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32A284u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32A284u; }
            if (ctx->pc != 0x32A284u) { return; }
        }
        }
    }
    ctx->pc = 0x32A284u;
label_32a284:
    // 0x32a284: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32a284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32a288:
    // 0x32a288: 0xc075bf8  jal         func_1D6FE0
label_32a28c:
    if (ctx->pc == 0x32A28Cu) {
        ctx->pc = 0x32A28Cu;
            // 0x32a28c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32A290u;
        goto label_32a290;
    }
    ctx->pc = 0x32A288u;
    SET_GPR_U32(ctx, 31, 0x32A290u);
    ctx->pc = 0x32A28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32A288u;
            // 0x32a28c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A290u; }
        if (ctx->pc != 0x32A290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A290u; }
        if (ctx->pc != 0x32A290u) { return; }
    }
    ctx->pc = 0x32A290u;
label_32a290:
    // 0x32a290: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x32a290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_32a294:
    // 0x32a294: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32a294u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_32a298:
    // 0x32a298: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_32a29c:
    if (ctx->pc == 0x32A29Cu) {
        ctx->pc = 0x32A29Cu;
            // 0x32a29c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32A2A0u;
        goto label_32a2a0;
    }
    ctx->pc = 0x32A298u;
    {
        const bool branch_taken_0x32a298 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x32a298) {
            ctx->pc = 0x32A29Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32A298u;
            // 0x32a29c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32A2ACu;
            goto label_32a2ac;
        }
    }
    ctx->pc = 0x32A2A0u;
label_32a2a0:
    // 0x32a2a0: 0xc0400a8  jal         func_1002A0
label_32a2a4:
    if (ctx->pc == 0x32A2A4u) {
        ctx->pc = 0x32A2A4u;
            // 0x32a2a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32A2A8u;
        goto label_32a2a8;
    }
    ctx->pc = 0x32A2A0u;
    SET_GPR_U32(ctx, 31, 0x32A2A8u);
    ctx->pc = 0x32A2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32A2A0u;
            // 0x32a2a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A2A8u; }
        if (ctx->pc != 0x32A2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A2A8u; }
        if (ctx->pc != 0x32A2A8u) { return; }
    }
    ctx->pc = 0x32A2A8u;
label_32a2a8:
    // 0x32a2a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x32a2a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32a2ac:
    // 0x32a2ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32a2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32a2b0:
    // 0x32a2b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32a2b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32a2b4:
    // 0x32a2b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32a2b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32a2b8:
    // 0x32a2b8: 0x3e00008  jr          $ra
label_32a2bc:
    if (ctx->pc == 0x32A2BCu) {
        ctx->pc = 0x32A2BCu;
            // 0x32a2bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x32A2C0u;
        goto label_32a2c0;
    }
    ctx->pc = 0x32A2B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A2B8u;
            // 0x32a2bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32A2C0u;
label_32a2c0:
    // 0x32a2c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32a2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_32a2c4:
    // 0x32a2c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32a2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_32a2c8:
    // 0x32a2c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32a2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_32a2cc:
    // 0x32a2cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32a2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32a2d0:
    // 0x32a2d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32a2d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32a2d4:
    // 0x32a2d4: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
label_32a2d8:
    if (ctx->pc == 0x32A2D8u) {
        ctx->pc = 0x32A2D8u;
            // 0x32a2d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32A2DCu;
        goto label_32a2dc;
    }
    ctx->pc = 0x32A2D4u;
    {
        const bool branch_taken_0x32a2d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A2D4u;
            // 0x32a2d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a2d4) {
            ctx->pc = 0x32A358u;
            goto label_32a358;
        }
    }
    ctx->pc = 0x32A2DCu;
label_32a2dc:
    // 0x32a2dc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x32a2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_32a2e0:
    // 0x32a2e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32a2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_32a2e4:
    // 0x32a2e4: 0x246347b0  addiu       $v1, $v1, 0x47B0
    ctx->pc = 0x32a2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18352));
label_32a2e8:
    // 0x32a2e8: 0x244247f0  addiu       $v0, $v0, 0x47F0
    ctx->pc = 0x32a2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18416));
label_32a2ec:
    // 0x32a2ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x32a2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_32a2f0:
    // 0x32a2f0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x32a2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_32a2f4:
    // 0x32a2f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32a2f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32a2f8:
    // 0x32a2f8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x32a2f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_32a2fc:
    // 0x32a2fc: 0x320f809  jalr        $t9
label_32a300:
    if (ctx->pc == 0x32A300u) {
        ctx->pc = 0x32A304u;
        goto label_32a304;
    }
    ctx->pc = 0x32A2FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32A304u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x32A304u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32A304u; }
            if (ctx->pc != 0x32A304u) { return; }
        }
        }
    }
    ctx->pc = 0x32A304u;
label_32a304:
    // 0x32a304: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_32a308:
    if (ctx->pc == 0x32A308u) {
        ctx->pc = 0x32A308u;
            // 0x32a308: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x32A30Cu;
        goto label_32a30c;
    }
    ctx->pc = 0x32A304u;
    {
        const bool branch_taken_0x32a304 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a304) {
            ctx->pc = 0x32A308u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32A304u;
            // 0x32a308: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32A344u;
            goto label_32a344;
        }
    }
    ctx->pc = 0x32A30Cu;
label_32a30c:
    // 0x32a30c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x32a30cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_32a310:
    // 0x32a310: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32a310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_32a314:
    // 0x32a314: 0x24636d00  addiu       $v1, $v1, 0x6D00
    ctx->pc = 0x32a314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27904));
label_32a318:
    // 0x32a318: 0x24426d40  addiu       $v0, $v0, 0x6D40
    ctx->pc = 0x32a318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27968));
label_32a31c:
    // 0x32a31c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x32a31cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_32a320:
    // 0x32a320: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x32a320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_32a324:
    // 0x32a324: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32a324u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32a328:
    // 0x32a328: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x32a328u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_32a32c:
    // 0x32a32c: 0x320f809  jalr        $t9
label_32a330:
    if (ctx->pc == 0x32A330u) {
        ctx->pc = 0x32A330u;
            // 0x32a330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32A334u;
        goto label_32a334;
    }
    ctx->pc = 0x32A32Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32A334u);
        ctx->pc = 0x32A330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A32Cu;
            // 0x32a330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32A334u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32A334u; }
            if (ctx->pc != 0x32A334u) { return; }
        }
        }
    }
    ctx->pc = 0x32A334u;
label_32a334:
    // 0x32a334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32a334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32a338:
    // 0x32a338: 0xc0aee40  jal         func_2BB900
label_32a33c:
    if (ctx->pc == 0x32A33Cu) {
        ctx->pc = 0x32A33Cu;
            // 0x32a33c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32A340u;
        goto label_32a340;
    }
    ctx->pc = 0x32A338u;
    SET_GPR_U32(ctx, 31, 0x32A340u);
    ctx->pc = 0x32A33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32A338u;
            // 0x32a33c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB900u;
    if (runtime->hasFunction(0x2BB900u)) {
        auto targetFn = runtime->lookupFunction(0x2BB900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A340u; }
        if (ctx->pc != 0x32A340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB900_0x2bb900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A340u; }
        if (ctx->pc != 0x32A340u) { return; }
    }
    ctx->pc = 0x32A340u;
label_32a340:
    // 0x32a340: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x32a340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_32a344:
    // 0x32a344: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32a344u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_32a348:
    // 0x32a348: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_32a34c:
    if (ctx->pc == 0x32A34Cu) {
        ctx->pc = 0x32A34Cu;
            // 0x32a34c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32A350u;
        goto label_32a350;
    }
    ctx->pc = 0x32A348u;
    {
        const bool branch_taken_0x32a348 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x32a348) {
            ctx->pc = 0x32A34Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32A348u;
            // 0x32a34c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32A35Cu;
            goto label_32a35c;
        }
    }
    ctx->pc = 0x32A350u;
label_32a350:
    // 0x32a350: 0xc0400a8  jal         func_1002A0
label_32a354:
    if (ctx->pc == 0x32A354u) {
        ctx->pc = 0x32A354u;
            // 0x32a354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32A358u;
        goto label_32a358;
    }
    ctx->pc = 0x32A350u;
    SET_GPR_U32(ctx, 31, 0x32A358u);
    ctx->pc = 0x32A354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32A350u;
            // 0x32a354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A358u; }
        if (ctx->pc != 0x32A358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A358u; }
        if (ctx->pc != 0x32A358u) { return; }
    }
    ctx->pc = 0x32A358u;
label_32a358:
    // 0x32a358: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32a358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32a35c:
    // 0x32a35c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32a35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32a360:
    // 0x32a360: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32a360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32a364:
    // 0x32a364: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32a364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32a368:
    // 0x32a368: 0x3e00008  jr          $ra
label_32a36c:
    if (ctx->pc == 0x32A36Cu) {
        ctx->pc = 0x32A36Cu;
            // 0x32a36c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x32A370u;
        goto label_32a370;
    }
    ctx->pc = 0x32A368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A368u;
            // 0x32a36c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32A370u;
label_32a370:
    // 0x32a370: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x32a370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_32a374:
    // 0x32a374: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x32a374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_32a378:
    // 0x32a378: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x32a378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_32a37c:
    // 0x32a37c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x32a37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_32a380:
    // 0x32a380: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x32a380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_32a384:
    // 0x32a384: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x32a384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_32a388:
    // 0x32a388: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x32a388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_32a38c:
    // 0x32a38c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x32a38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_32a390:
    // 0x32a390: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32a390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_32a394:
    // 0x32a394: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32a394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_32a398:
    // 0x32a398: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32a398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_32a39c:
    // 0x32a39c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32a39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32a3a0:
    // 0x32a3a0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x32a3a0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_32a3a4:
    // 0x32a3a4: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_32a3a8:
    if (ctx->pc == 0x32A3A8u) {
        ctx->pc = 0x32A3A8u;
            // 0x32a3a8: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32A3ACu;
        goto label_32a3ac;
    }
    ctx->pc = 0x32A3A4u;
    {
        const bool branch_taken_0x32a3a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x32A3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A3A4u;
            // 0x32a3a8: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a3a4) {
            ctx->pc = 0x32A3F4u;
            goto label_32a3f4;
        }
    }
    ctx->pc = 0x32A3ACu;
label_32a3ac:
    // 0x32a3ac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x32a3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_32a3b0:
    // 0x32a3b0: 0x50a30055  beql        $a1, $v1, . + 4 + (0x55 << 2)
label_32a3b4:
    if (ctx->pc == 0x32A3B4u) {
        ctx->pc = 0x32A3B4u;
            // 0x32a3b4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x32A3B8u;
        goto label_32a3b8;
    }
    ctx->pc = 0x32A3B0u;
    {
        const bool branch_taken_0x32a3b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x32a3b0) {
            ctx->pc = 0x32A3B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32A3B0u;
            // 0x32a3b4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32A508u;
            goto label_32a508;
        }
    }
    ctx->pc = 0x32A3B8u;
label_32a3b8:
    // 0x32a3b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32a3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32a3bc:
    // 0x32a3bc: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_32a3c0:
    if (ctx->pc == 0x32A3C0u) {
        ctx->pc = 0x32A3C4u;
        goto label_32a3c4;
    }
    ctx->pc = 0x32A3BCu;
    {
        const bool branch_taken_0x32a3bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x32a3bc) {
            ctx->pc = 0x32A3CCu;
            goto label_32a3cc;
        }
    }
    ctx->pc = 0x32A3C4u;
label_32a3c4:
    // 0x32a3c4: 0x1000004f  b           . + 4 + (0x4F << 2)
label_32a3c8:
    if (ctx->pc == 0x32A3C8u) {
        ctx->pc = 0x32A3CCu;
        goto label_32a3cc;
    }
    ctx->pc = 0x32A3C4u;
    {
        const bool branch_taken_0x32a3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a3c4) {
            ctx->pc = 0x32A504u;
            goto label_32a504;
        }
    }
    ctx->pc = 0x32A3CCu;
label_32a3cc:
    // 0x32a3cc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32a3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32a3d0:
    // 0x32a3d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32a3d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32a3d4:
    // 0x32a3d4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x32a3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_32a3d8:
    // 0x32a3d8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x32a3d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_32a3dc:
    // 0x32a3dc: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x32a3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_32a3e0:
    // 0x32a3e0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x32a3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_32a3e4:
    // 0x32a3e4: 0x320f809  jalr        $t9
label_32a3e8:
    if (ctx->pc == 0x32A3E8u) {
        ctx->pc = 0x32A3E8u;
            // 0x32a3e8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x32A3ECu;
        goto label_32a3ec;
    }
    ctx->pc = 0x32A3E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32A3ECu);
        ctx->pc = 0x32A3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A3E4u;
            // 0x32a3e8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32A3ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32A3ECu; }
            if (ctx->pc != 0x32A3ECu) { return; }
        }
        }
    }
    ctx->pc = 0x32A3ECu;
label_32a3ec:
    // 0x32a3ec: 0x10000045  b           . + 4 + (0x45 << 2)
label_32a3f0:
    if (ctx->pc == 0x32A3F0u) {
        ctx->pc = 0x32A3F4u;
        goto label_32a3f4;
    }
    ctx->pc = 0x32A3ECu;
    {
        const bool branch_taken_0x32a3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a3ec) {
            ctx->pc = 0x32A504u;
            goto label_32a504;
        }
    }
    ctx->pc = 0x32A3F4u;
label_32a3f4:
    // 0x32a3f4: 0x8eb60070  lw          $s6, 0x70($s5)
    ctx->pc = 0x32a3f4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_32a3f8:
    // 0x32a3f8: 0x12c00042  beqz        $s6, . + 4 + (0x42 << 2)
label_32a3fc:
    if (ctx->pc == 0x32A3FCu) {
        ctx->pc = 0x32A400u;
        goto label_32a400;
    }
    ctx->pc = 0x32A3F8u;
    {
        const bool branch_taken_0x32a3f8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a3f8) {
            ctx->pc = 0x32A504u;
            goto label_32a504;
        }
    }
    ctx->pc = 0x32A400u;
label_32a400:
    // 0x32a400: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x32a400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_32a404:
    // 0x32a404: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x32a404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_32a408:
    // 0x32a408: 0x8c74e378  lw          $s4, -0x1C88($v1)
    ctx->pc = 0x32a408u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_32a40c:
    // 0x32a40c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32a40cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32a410:
    // 0x32a410: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x32a410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_32a414:
    // 0x32a414: 0x26b20084  addiu       $s2, $s5, 0x84
    ctx->pc = 0x32a414u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_32a418:
    // 0x32a418: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x32a418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_32a41c:
    // 0x32a41c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32a41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32a420:
    // 0x32a420: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x32a420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_32a424:
    // 0x32a424: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32a424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_32a428:
    // 0x32a428: 0x8c5ee370  lw          $fp, -0x1C90($v0)
    ctx->pc = 0x32a428u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_32a42c:
    // 0x32a42c: 0x8cb30130  lw          $s3, 0x130($a1)
    ctx->pc = 0x32a42cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_32a430:
    // 0x32a430: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x32a430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_32a434:
    // 0x32a434: 0x8ea20084  lw          $v0, 0x84($s5)
    ctx->pc = 0x32a434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_32a438:
    // 0x32a438: 0x132880  sll         $a1, $s3, 2
    ctx->pc = 0x32a438u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_32a43c:
    // 0x32a43c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x32a43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_32a440:
    // 0x32a440: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x32a440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32a444:
    // 0x32a444: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x32a444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_32a448:
    // 0x32a448: 0xc04e4a4  jal         func_139290
label_32a44c:
    if (ctx->pc == 0x32A44Cu) {
        ctx->pc = 0x32A44Cu;
            // 0x32a44c: 0x24770010  addiu       $s7, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x32A450u;
        goto label_32a450;
    }
    ctx->pc = 0x32A448u;
    SET_GPR_U32(ctx, 31, 0x32A450u);
    ctx->pc = 0x32A44Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32A448u;
            // 0x32a44c: 0x24770010  addiu       $s7, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A450u; }
        if (ctx->pc != 0x32A450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A450u; }
        if (ctx->pc != 0x32A450u) { return; }
    }
    ctx->pc = 0x32A450u;
label_32a450:
    // 0x32a450: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x32a450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_32a454:
    // 0x32a454: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32a454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_32a458:
    // 0x32a458: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x32a458u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_32a45c:
    // 0x32a45c: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x32a45cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_32a460:
    // 0x32a460: 0xc04e738  jal         func_139CE0
label_32a464:
    if (ctx->pc == 0x32A464u) {
        ctx->pc = 0x32A464u;
            // 0x32a464: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x32A468u;
        goto label_32a468;
    }
    ctx->pc = 0x32A460u;
    SET_GPR_U32(ctx, 31, 0x32A468u);
    ctx->pc = 0x32A464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32A460u;
            // 0x32a464: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A468u; }
        if (ctx->pc != 0x32A468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A468u; }
        if (ctx->pc != 0x32A468u) { return; }
    }
    ctx->pc = 0x32A468u;
label_32a468:
    // 0x32a468: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x32a468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_32a46c:
    // 0x32a46c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32a46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32a470:
    // 0x32a470: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x32a470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_32a474:
    // 0x32a474: 0xc04e4a4  jal         func_139290
label_32a478:
    if (ctx->pc == 0x32A478u) {
        ctx->pc = 0x32A478u;
            // 0x32a478: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32A47Cu;
        goto label_32a47c;
    }
    ctx->pc = 0x32A474u;
    SET_GPR_U32(ctx, 31, 0x32A47Cu);
    ctx->pc = 0x32A478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32A474u;
            // 0x32a478: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A47Cu; }
        if (ctx->pc != 0x32A47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A47Cu; }
        if (ctx->pc != 0x32A47Cu) { return; }
    }
    ctx->pc = 0x32A47Cu;
label_32a47c:
    // 0x32a47c: 0xc054c40  jal         func_153100
label_32a480:
    if (ctx->pc == 0x32A480u) {
        ctx->pc = 0x32A480u;
            // 0x32a480: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32A484u;
        goto label_32a484;
    }
    ctx->pc = 0x32A47Cu;
    SET_GPR_U32(ctx, 31, 0x32A484u);
    ctx->pc = 0x32A480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32A47Cu;
            // 0x32a480: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153100u;
    if (runtime->hasFunction(0x153100u)) {
        auto targetFn = runtime->lookupFunction(0x153100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A484u; }
        if (ctx->pc != 0x32A484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153100_0x153100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A484u; }
        if (ctx->pc != 0x32A484u) { return; }
    }
    ctx->pc = 0x32A484u;
label_32a484:
    // 0x32a484: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x32a484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32a488:
    // 0x32a488: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x32a488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32a48c:
    // 0x32a48c: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x32a48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_32a490:
    // 0x32a490: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x32a490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32a494:
    // 0x32a494: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x32a494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_32a498:
    // 0x32a498: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x32a498u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32a49c:
    // 0x32a49c: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x32a49cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_32a4a0:
    // 0x32a4a0: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x32a4a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_32a4a4:
    // 0x32a4a4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x32a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_32a4a8:
    // 0x32a4a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x32a4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32a4ac:
    // 0x32a4ac: 0xc0caac0  jal         func_32AB00
label_32a4b0:
    if (ctx->pc == 0x32A4B0u) {
        ctx->pc = 0x32A4B0u;
            // 0x32a4b0: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32A4B4u;
        goto label_32a4b4;
    }
    ctx->pc = 0x32A4ACu;
    SET_GPR_U32(ctx, 31, 0x32A4B4u);
    ctx->pc = 0x32A4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32A4ACu;
            // 0x32a4b0: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32AB00u;
    if (runtime->hasFunction(0x32AB00u)) {
        auto targetFn = runtime->lookupFunction(0x32AB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A4B4u; }
        if (ctx->pc != 0x32A4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032AB00_0x32ab00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A4B4u; }
        if (ctx->pc != 0x32A4B4u) { return; }
    }
    ctx->pc = 0x32A4B4u;
label_32a4b4:
    // 0x32a4b4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32a4b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_32a4b8:
    // 0x32a4b8: 0x236102b  sltu        $v0, $s1, $s6
    ctx->pc = 0x32a4b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_32a4bc:
    // 0x32a4bc: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_32a4c0:
    if (ctx->pc == 0x32A4C0u) {
        ctx->pc = 0x32A4C0u;
            // 0x32a4c0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x32A4C4u;
        goto label_32a4c4;
    }
    ctx->pc = 0x32A4BCu;
    {
        const bool branch_taken_0x32a4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A4BCu;
            // 0x32a4c0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a4bc) {
            ctx->pc = 0x32A48Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32a48c;
        }
    }
    ctx->pc = 0x32A4C4u;
label_32a4c4:
    // 0x32a4c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x32a4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_32a4c8:
    // 0x32a4c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x32a4c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_32a4cc:
    // 0x32a4cc: 0xc054c3c  jal         func_1530F0
label_32a4d0:
    if (ctx->pc == 0x32A4D0u) {
        ctx->pc = 0x32A4D0u;
            // 0x32a4d0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x32A4D4u;
        goto label_32a4d4;
    }
    ctx->pc = 0x32A4CCu;
    SET_GPR_U32(ctx, 31, 0x32A4D4u);
    ctx->pc = 0x32A4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32A4CCu;
            // 0x32a4d0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530F0u;
    if (runtime->hasFunction(0x1530F0u)) {
        auto targetFn = runtime->lookupFunction(0x1530F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A4D4u; }
        if (ctx->pc != 0x32A4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530F0_0x1530f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A4D4u; }
        if (ctx->pc != 0x32A4D4u) { return; }
    }
    ctx->pc = 0x32A4D4u;
label_32a4d4:
    // 0x32a4d4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x32a4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_32a4d8:
    // 0x32a4d8: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x32a4d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_32a4dc:
    // 0x32a4dc: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_32a4e0:
    if (ctx->pc == 0x32A4E0u) {
        ctx->pc = 0x32A4E0u;
            // 0x32a4e0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x32A4E4u;
        goto label_32a4e4;
    }
    ctx->pc = 0x32A4DCu;
    {
        const bool branch_taken_0x32a4dc = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x32A4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A4DCu;
            // 0x32a4e0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a4dc) {
            ctx->pc = 0x32A504u;
            goto label_32a504;
        }
    }
    ctx->pc = 0x32A4E4u;
label_32a4e4:
    // 0x32a4e4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x32a4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_32a4e8:
    // 0x32a4e8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_32a4ec:
    // 0x32a4ec: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x32a4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_32a4f0:
    // 0x32a4f0: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x32a4f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_32a4f4:
    // 0x32a4f4: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x32a4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_32a4f8:
    // 0x32a4f8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x32a4f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_32a4fc:
    // 0x32a4fc: 0xc055ea8  jal         func_157AA0
label_32a500:
    if (ctx->pc == 0x32A500u) {
        ctx->pc = 0x32A500u;
            // 0x32a500: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32A504u;
        goto label_32a504;
    }
    ctx->pc = 0x32A4FCu;
    SET_GPR_U32(ctx, 31, 0x32A504u);
    ctx->pc = 0x32A500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32A4FCu;
            // 0x32a500: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A504u; }
        if (ctx->pc != 0x32A504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A504u; }
        if (ctx->pc != 0x32A504u) { return; }
    }
    ctx->pc = 0x32A504u;
label_32a504:
    // 0x32a504: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x32a504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_32a508:
    // 0x32a508: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x32a508u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_32a50c:
    // 0x32a50c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x32a50cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_32a510:
    // 0x32a510: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x32a510u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_32a514:
    // 0x32a514: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x32a514u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_32a518:
    // 0x32a518: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x32a518u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_32a51c:
    // 0x32a51c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32a51cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32a520:
    // 0x32a520: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32a520u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32a524:
    // 0x32a524: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32a524u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32a528:
    // 0x32a528: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32a528u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32a52c:
    // 0x32a52c: 0x3e00008  jr          $ra
label_32a530:
    if (ctx->pc == 0x32A530u) {
        ctx->pc = 0x32A530u;
            // 0x32a530: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x32A534u;
        goto label_32a534;
    }
    ctx->pc = 0x32A52Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A52Cu;
            // 0x32a530: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32A534u;
label_32a534:
    // 0x32a534: 0x0  nop
    ctx->pc = 0x32a534u;
    // NOP
label_32a538:
    // 0x32a538: 0x0  nop
    ctx->pc = 0x32a538u;
    // NOP
label_32a53c:
    // 0x32a53c: 0x0  nop
    ctx->pc = 0x32a53cu;
    // NOP
label_32a540:
    // 0x32a540: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32a540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_32a544:
    // 0x32a544: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x32a544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_32a548:
    // 0x32a548: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x32a548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_32a54c:
    // 0x32a54c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32a54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_32a550:
    // 0x32a550: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32a550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_32a554:
    // 0x32a554: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32a554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_32a558:
    // 0x32a558: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32a558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32a55c:
    // 0x32a55c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x32a55cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_32a560:
    // 0x32a560: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_32a564:
    if (ctx->pc == 0x32A564u) {
        ctx->pc = 0x32A564u;
            // 0x32a564: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32A568u;
        goto label_32a568;
    }
    ctx->pc = 0x32A560u;
    {
        const bool branch_taken_0x32a560 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x32A564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A560u;
            // 0x32a564: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a560) {
            ctx->pc = 0x32A594u;
            goto label_32a594;
        }
    }
    ctx->pc = 0x32A568u;
label_32a568:
    // 0x32a568: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x32a568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_32a56c:
    // 0x32a56c: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_32a570:
    if (ctx->pc == 0x32A570u) {
        ctx->pc = 0x32A570u;
            // 0x32a570: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x32A574u;
        goto label_32a574;
    }
    ctx->pc = 0x32A56Cu;
    {
        const bool branch_taken_0x32a56c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x32a56c) {
            ctx->pc = 0x32A570u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32A56Cu;
            // 0x32a570: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32A588u;
            goto label_32a588;
        }
    }
    ctx->pc = 0x32A574u;
label_32a574:
    // 0x32a574: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32a574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32a578:
    // 0x32a578: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_32a57c:
    if (ctx->pc == 0x32A57Cu) {
        ctx->pc = 0x32A580u;
        goto label_32a580;
    }
    ctx->pc = 0x32A578u;
    {
        const bool branch_taken_0x32a578 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x32a578) {
            ctx->pc = 0x32A5C8u;
            goto label_32a5c8;
        }
    }
    ctx->pc = 0x32A580u;
label_32a580:
    // 0x32a580: 0x10000011  b           . + 4 + (0x11 << 2)
label_32a584:
    if (ctx->pc == 0x32A584u) {
        ctx->pc = 0x32A588u;
        goto label_32a588;
    }
    ctx->pc = 0x32A580u;
    {
        const bool branch_taken_0x32a580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a580) {
            ctx->pc = 0x32A5C8u;
            goto label_32a5c8;
        }
    }
    ctx->pc = 0x32A588u;
label_32a588:
    // 0x32a588: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x32a588u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_32a58c:
    // 0x32a58c: 0x320f809  jalr        $t9
label_32a590:
    if (ctx->pc == 0x32A590u) {
        ctx->pc = 0x32A594u;
        goto label_32a594;
    }
    ctx->pc = 0x32A58Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32A594u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x32A594u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32A594u; }
            if (ctx->pc != 0x32A594u) { return; }
        }
        }
    }
    ctx->pc = 0x32A594u;
label_32a594:
    // 0x32a594: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x32a594u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_32a598:
    // 0x32a598: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_32a59c:
    if (ctx->pc == 0x32A59Cu) {
        ctx->pc = 0x32A5A0u;
        goto label_32a5a0;
    }
    ctx->pc = 0x32A598u;
    {
        const bool branch_taken_0x32a598 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a598) {
            ctx->pc = 0x32A5C8u;
            goto label_32a5c8;
        }
    }
    ctx->pc = 0x32A5A0u;
label_32a5a0:
    // 0x32a5a0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x32a5a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32a5a4:
    // 0x32a5a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x32a5a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32a5a8:
    // 0x32a5a8: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x32a5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_32a5ac:
    // 0x32a5ac: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x32a5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_32a5b0:
    // 0x32a5b0: 0xc0e3658  jal         func_38D960
label_32a5b4:
    if (ctx->pc == 0x32A5B4u) {
        ctx->pc = 0x32A5B4u;
            // 0x32a5b4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x32A5B8u;
        goto label_32a5b8;
    }
    ctx->pc = 0x32A5B0u;
    SET_GPR_U32(ctx, 31, 0x32A5B8u);
    ctx->pc = 0x32A5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32A5B0u;
            // 0x32a5b4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A5B8u; }
        if (ctx->pc != 0x32A5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32A5B8u; }
        if (ctx->pc != 0x32A5B8u) { return; }
    }
    ctx->pc = 0x32A5B8u;
label_32a5b8:
    // 0x32a5b8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x32a5b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_32a5bc:
    // 0x32a5bc: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x32a5bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_32a5c0:
    // 0x32a5c0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_32a5c4:
    if (ctx->pc == 0x32A5C4u) {
        ctx->pc = 0x32A5C4u;
            // 0x32a5c4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x32A5C8u;
        goto label_32a5c8;
    }
    ctx->pc = 0x32A5C0u;
    {
        const bool branch_taken_0x32a5c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A5C0u;
            // 0x32a5c4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a5c0) {
            ctx->pc = 0x32A5A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32a5a8;
        }
    }
    ctx->pc = 0x32A5C8u;
label_32a5c8:
    // 0x32a5c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x32a5c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_32a5cc:
    // 0x32a5cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32a5ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32a5d0:
    // 0x32a5d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32a5d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32a5d4:
    // 0x32a5d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32a5d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32a5d8:
    // 0x32a5d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32a5d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32a5dc:
    // 0x32a5dc: 0x3e00008  jr          $ra
label_32a5e0:
    if (ctx->pc == 0x32A5E0u) {
        ctx->pc = 0x32A5E0u;
            // 0x32a5e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x32A5E4u;
        goto label_32a5e4;
    }
    ctx->pc = 0x32A5DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A5DCu;
            // 0x32a5e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32A5E4u;
label_32a5e4:
    // 0x32a5e4: 0x0  nop
    ctx->pc = 0x32a5e4u;
    // NOP
label_32a5e8:
    // 0x32a5e8: 0x0  nop
    ctx->pc = 0x32a5e8u;
    // NOP
label_32a5ec:
    // 0x32a5ec: 0x0  nop
    ctx->pc = 0x32a5ecu;
    // NOP
label_32a5f0:
    // 0x32a5f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32a5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_32a5f4:
    // 0x32a5f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x32a5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_32a5f8:
    // 0x32a5f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32a5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_32a5fc:
    // 0x32a5fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32a5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_32a600:
    // 0x32a600: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32a600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_32a604:
    // 0x32a604: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32a604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32a608:
    // 0x32a608: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x32a608u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_32a60c:
    // 0x32a60c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_32a610:
    if (ctx->pc == 0x32A610u) {
        ctx->pc = 0x32A610u;
            // 0x32a610: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32A614u;
        goto label_32a614;
    }
    ctx->pc = 0x32A60Cu;
    {
        const bool branch_taken_0x32a60c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A60Cu;
            // 0x32a610: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a60c) {
            ctx->pc = 0x32A648u;
            goto label_32a648;
        }
    }
    ctx->pc = 0x32A614u;
label_32a614:
    // 0x32a614: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x32a614u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32a618:
    // 0x32a618: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x32a618u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32a61c:
    // 0x32a61c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x32a61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_32a620:
    // 0x32a620: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x32a620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_32a624:
    // 0x32a624: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x32a624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32a628:
    // 0x32a628: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32a628u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32a62c:
    // 0x32a62c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x32a62cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_32a630:
    // 0x32a630: 0x320f809  jalr        $t9
label_32a634:
    if (ctx->pc == 0x32A634u) {
        ctx->pc = 0x32A638u;
        goto label_32a638;
    }
    ctx->pc = 0x32A630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32A638u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x32A638u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32A638u; }
            if (ctx->pc != 0x32A638u) { return; }
        }
        }
    }
    ctx->pc = 0x32A638u;
label_32a638:
    // 0x32a638: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x32a638u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_32a63c:
    // 0x32a63c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x32a63cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_32a640:
    // 0x32a640: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_32a644:
    if (ctx->pc == 0x32A644u) {
        ctx->pc = 0x32A644u;
            // 0x32a644: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x32A648u;
        goto label_32a648;
    }
    ctx->pc = 0x32A640u;
    {
        const bool branch_taken_0x32a640 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A640u;
            // 0x32a644: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a640) {
            ctx->pc = 0x32A61Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32a61c;
        }
    }
    ctx->pc = 0x32A648u;
label_32a648:
    // 0x32a648: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x32a648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_32a64c:
    // 0x32a64c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32a64cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32a650:
    // 0x32a650: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32a650u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32a654:
    // 0x32a654: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32a654u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32a658:
    // 0x32a658: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32a658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32a65c:
    // 0x32a65c: 0x3e00008  jr          $ra
label_32a660:
    if (ctx->pc == 0x32A660u) {
        ctx->pc = 0x32A660u;
            // 0x32a660: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x32A664u;
        goto label_32a664;
    }
    ctx->pc = 0x32A65Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A65Cu;
            // 0x32a660: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32A664u;
label_32a664:
    // 0x32a664: 0x0  nop
    ctx->pc = 0x32a664u;
    // NOP
label_32a668:
    // 0x32a668: 0x0  nop
    ctx->pc = 0x32a668u;
    // NOP
label_32a66c:
    // 0x32a66c: 0x0  nop
    ctx->pc = 0x32a66cu;
    // NOP
}
