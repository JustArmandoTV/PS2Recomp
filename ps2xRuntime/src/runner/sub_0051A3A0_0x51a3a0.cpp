#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051A3A0
// Address: 0x51a3a0 - 0x51a890
void sub_0051A3A0_0x51a3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051A3A0_0x51a3a0");
#endif

    switch (ctx->pc) {
        case 0x51a3a0u: goto label_51a3a0;
        case 0x51a3a4u: goto label_51a3a4;
        case 0x51a3a8u: goto label_51a3a8;
        case 0x51a3acu: goto label_51a3ac;
        case 0x51a3b0u: goto label_51a3b0;
        case 0x51a3b4u: goto label_51a3b4;
        case 0x51a3b8u: goto label_51a3b8;
        case 0x51a3bcu: goto label_51a3bc;
        case 0x51a3c0u: goto label_51a3c0;
        case 0x51a3c4u: goto label_51a3c4;
        case 0x51a3c8u: goto label_51a3c8;
        case 0x51a3ccu: goto label_51a3cc;
        case 0x51a3d0u: goto label_51a3d0;
        case 0x51a3d4u: goto label_51a3d4;
        case 0x51a3d8u: goto label_51a3d8;
        case 0x51a3dcu: goto label_51a3dc;
        case 0x51a3e0u: goto label_51a3e0;
        case 0x51a3e4u: goto label_51a3e4;
        case 0x51a3e8u: goto label_51a3e8;
        case 0x51a3ecu: goto label_51a3ec;
        case 0x51a3f0u: goto label_51a3f0;
        case 0x51a3f4u: goto label_51a3f4;
        case 0x51a3f8u: goto label_51a3f8;
        case 0x51a3fcu: goto label_51a3fc;
        case 0x51a400u: goto label_51a400;
        case 0x51a404u: goto label_51a404;
        case 0x51a408u: goto label_51a408;
        case 0x51a40cu: goto label_51a40c;
        case 0x51a410u: goto label_51a410;
        case 0x51a414u: goto label_51a414;
        case 0x51a418u: goto label_51a418;
        case 0x51a41cu: goto label_51a41c;
        case 0x51a420u: goto label_51a420;
        case 0x51a424u: goto label_51a424;
        case 0x51a428u: goto label_51a428;
        case 0x51a42cu: goto label_51a42c;
        case 0x51a430u: goto label_51a430;
        case 0x51a434u: goto label_51a434;
        case 0x51a438u: goto label_51a438;
        case 0x51a43cu: goto label_51a43c;
        case 0x51a440u: goto label_51a440;
        case 0x51a444u: goto label_51a444;
        case 0x51a448u: goto label_51a448;
        case 0x51a44cu: goto label_51a44c;
        case 0x51a450u: goto label_51a450;
        case 0x51a454u: goto label_51a454;
        case 0x51a458u: goto label_51a458;
        case 0x51a45cu: goto label_51a45c;
        case 0x51a460u: goto label_51a460;
        case 0x51a464u: goto label_51a464;
        case 0x51a468u: goto label_51a468;
        case 0x51a46cu: goto label_51a46c;
        case 0x51a470u: goto label_51a470;
        case 0x51a474u: goto label_51a474;
        case 0x51a478u: goto label_51a478;
        case 0x51a47cu: goto label_51a47c;
        case 0x51a480u: goto label_51a480;
        case 0x51a484u: goto label_51a484;
        case 0x51a488u: goto label_51a488;
        case 0x51a48cu: goto label_51a48c;
        case 0x51a490u: goto label_51a490;
        case 0x51a494u: goto label_51a494;
        case 0x51a498u: goto label_51a498;
        case 0x51a49cu: goto label_51a49c;
        case 0x51a4a0u: goto label_51a4a0;
        case 0x51a4a4u: goto label_51a4a4;
        case 0x51a4a8u: goto label_51a4a8;
        case 0x51a4acu: goto label_51a4ac;
        case 0x51a4b0u: goto label_51a4b0;
        case 0x51a4b4u: goto label_51a4b4;
        case 0x51a4b8u: goto label_51a4b8;
        case 0x51a4bcu: goto label_51a4bc;
        case 0x51a4c0u: goto label_51a4c0;
        case 0x51a4c4u: goto label_51a4c4;
        case 0x51a4c8u: goto label_51a4c8;
        case 0x51a4ccu: goto label_51a4cc;
        case 0x51a4d0u: goto label_51a4d0;
        case 0x51a4d4u: goto label_51a4d4;
        case 0x51a4d8u: goto label_51a4d8;
        case 0x51a4dcu: goto label_51a4dc;
        case 0x51a4e0u: goto label_51a4e0;
        case 0x51a4e4u: goto label_51a4e4;
        case 0x51a4e8u: goto label_51a4e8;
        case 0x51a4ecu: goto label_51a4ec;
        case 0x51a4f0u: goto label_51a4f0;
        case 0x51a4f4u: goto label_51a4f4;
        case 0x51a4f8u: goto label_51a4f8;
        case 0x51a4fcu: goto label_51a4fc;
        case 0x51a500u: goto label_51a500;
        case 0x51a504u: goto label_51a504;
        case 0x51a508u: goto label_51a508;
        case 0x51a50cu: goto label_51a50c;
        case 0x51a510u: goto label_51a510;
        case 0x51a514u: goto label_51a514;
        case 0x51a518u: goto label_51a518;
        case 0x51a51cu: goto label_51a51c;
        case 0x51a520u: goto label_51a520;
        case 0x51a524u: goto label_51a524;
        case 0x51a528u: goto label_51a528;
        case 0x51a52cu: goto label_51a52c;
        case 0x51a530u: goto label_51a530;
        case 0x51a534u: goto label_51a534;
        case 0x51a538u: goto label_51a538;
        case 0x51a53cu: goto label_51a53c;
        case 0x51a540u: goto label_51a540;
        case 0x51a544u: goto label_51a544;
        case 0x51a548u: goto label_51a548;
        case 0x51a54cu: goto label_51a54c;
        case 0x51a550u: goto label_51a550;
        case 0x51a554u: goto label_51a554;
        case 0x51a558u: goto label_51a558;
        case 0x51a55cu: goto label_51a55c;
        case 0x51a560u: goto label_51a560;
        case 0x51a564u: goto label_51a564;
        case 0x51a568u: goto label_51a568;
        case 0x51a56cu: goto label_51a56c;
        case 0x51a570u: goto label_51a570;
        case 0x51a574u: goto label_51a574;
        case 0x51a578u: goto label_51a578;
        case 0x51a57cu: goto label_51a57c;
        case 0x51a580u: goto label_51a580;
        case 0x51a584u: goto label_51a584;
        case 0x51a588u: goto label_51a588;
        case 0x51a58cu: goto label_51a58c;
        case 0x51a590u: goto label_51a590;
        case 0x51a594u: goto label_51a594;
        case 0x51a598u: goto label_51a598;
        case 0x51a59cu: goto label_51a59c;
        case 0x51a5a0u: goto label_51a5a0;
        case 0x51a5a4u: goto label_51a5a4;
        case 0x51a5a8u: goto label_51a5a8;
        case 0x51a5acu: goto label_51a5ac;
        case 0x51a5b0u: goto label_51a5b0;
        case 0x51a5b4u: goto label_51a5b4;
        case 0x51a5b8u: goto label_51a5b8;
        case 0x51a5bcu: goto label_51a5bc;
        case 0x51a5c0u: goto label_51a5c0;
        case 0x51a5c4u: goto label_51a5c4;
        case 0x51a5c8u: goto label_51a5c8;
        case 0x51a5ccu: goto label_51a5cc;
        case 0x51a5d0u: goto label_51a5d0;
        case 0x51a5d4u: goto label_51a5d4;
        case 0x51a5d8u: goto label_51a5d8;
        case 0x51a5dcu: goto label_51a5dc;
        case 0x51a5e0u: goto label_51a5e0;
        case 0x51a5e4u: goto label_51a5e4;
        case 0x51a5e8u: goto label_51a5e8;
        case 0x51a5ecu: goto label_51a5ec;
        case 0x51a5f0u: goto label_51a5f0;
        case 0x51a5f4u: goto label_51a5f4;
        case 0x51a5f8u: goto label_51a5f8;
        case 0x51a5fcu: goto label_51a5fc;
        case 0x51a600u: goto label_51a600;
        case 0x51a604u: goto label_51a604;
        case 0x51a608u: goto label_51a608;
        case 0x51a60cu: goto label_51a60c;
        case 0x51a610u: goto label_51a610;
        case 0x51a614u: goto label_51a614;
        case 0x51a618u: goto label_51a618;
        case 0x51a61cu: goto label_51a61c;
        case 0x51a620u: goto label_51a620;
        case 0x51a624u: goto label_51a624;
        case 0x51a628u: goto label_51a628;
        case 0x51a62cu: goto label_51a62c;
        case 0x51a630u: goto label_51a630;
        case 0x51a634u: goto label_51a634;
        case 0x51a638u: goto label_51a638;
        case 0x51a63cu: goto label_51a63c;
        case 0x51a640u: goto label_51a640;
        case 0x51a644u: goto label_51a644;
        case 0x51a648u: goto label_51a648;
        case 0x51a64cu: goto label_51a64c;
        case 0x51a650u: goto label_51a650;
        case 0x51a654u: goto label_51a654;
        case 0x51a658u: goto label_51a658;
        case 0x51a65cu: goto label_51a65c;
        case 0x51a660u: goto label_51a660;
        case 0x51a664u: goto label_51a664;
        case 0x51a668u: goto label_51a668;
        case 0x51a66cu: goto label_51a66c;
        case 0x51a670u: goto label_51a670;
        case 0x51a674u: goto label_51a674;
        case 0x51a678u: goto label_51a678;
        case 0x51a67cu: goto label_51a67c;
        case 0x51a680u: goto label_51a680;
        case 0x51a684u: goto label_51a684;
        case 0x51a688u: goto label_51a688;
        case 0x51a68cu: goto label_51a68c;
        case 0x51a690u: goto label_51a690;
        case 0x51a694u: goto label_51a694;
        case 0x51a698u: goto label_51a698;
        case 0x51a69cu: goto label_51a69c;
        case 0x51a6a0u: goto label_51a6a0;
        case 0x51a6a4u: goto label_51a6a4;
        case 0x51a6a8u: goto label_51a6a8;
        case 0x51a6acu: goto label_51a6ac;
        case 0x51a6b0u: goto label_51a6b0;
        case 0x51a6b4u: goto label_51a6b4;
        case 0x51a6b8u: goto label_51a6b8;
        case 0x51a6bcu: goto label_51a6bc;
        case 0x51a6c0u: goto label_51a6c0;
        case 0x51a6c4u: goto label_51a6c4;
        case 0x51a6c8u: goto label_51a6c8;
        case 0x51a6ccu: goto label_51a6cc;
        case 0x51a6d0u: goto label_51a6d0;
        case 0x51a6d4u: goto label_51a6d4;
        case 0x51a6d8u: goto label_51a6d8;
        case 0x51a6dcu: goto label_51a6dc;
        case 0x51a6e0u: goto label_51a6e0;
        case 0x51a6e4u: goto label_51a6e4;
        case 0x51a6e8u: goto label_51a6e8;
        case 0x51a6ecu: goto label_51a6ec;
        case 0x51a6f0u: goto label_51a6f0;
        case 0x51a6f4u: goto label_51a6f4;
        case 0x51a6f8u: goto label_51a6f8;
        case 0x51a6fcu: goto label_51a6fc;
        case 0x51a700u: goto label_51a700;
        case 0x51a704u: goto label_51a704;
        case 0x51a708u: goto label_51a708;
        case 0x51a70cu: goto label_51a70c;
        case 0x51a710u: goto label_51a710;
        case 0x51a714u: goto label_51a714;
        case 0x51a718u: goto label_51a718;
        case 0x51a71cu: goto label_51a71c;
        case 0x51a720u: goto label_51a720;
        case 0x51a724u: goto label_51a724;
        case 0x51a728u: goto label_51a728;
        case 0x51a72cu: goto label_51a72c;
        case 0x51a730u: goto label_51a730;
        case 0x51a734u: goto label_51a734;
        case 0x51a738u: goto label_51a738;
        case 0x51a73cu: goto label_51a73c;
        case 0x51a740u: goto label_51a740;
        case 0x51a744u: goto label_51a744;
        case 0x51a748u: goto label_51a748;
        case 0x51a74cu: goto label_51a74c;
        case 0x51a750u: goto label_51a750;
        case 0x51a754u: goto label_51a754;
        case 0x51a758u: goto label_51a758;
        case 0x51a75cu: goto label_51a75c;
        case 0x51a760u: goto label_51a760;
        case 0x51a764u: goto label_51a764;
        case 0x51a768u: goto label_51a768;
        case 0x51a76cu: goto label_51a76c;
        case 0x51a770u: goto label_51a770;
        case 0x51a774u: goto label_51a774;
        case 0x51a778u: goto label_51a778;
        case 0x51a77cu: goto label_51a77c;
        case 0x51a780u: goto label_51a780;
        case 0x51a784u: goto label_51a784;
        case 0x51a788u: goto label_51a788;
        case 0x51a78cu: goto label_51a78c;
        case 0x51a790u: goto label_51a790;
        case 0x51a794u: goto label_51a794;
        case 0x51a798u: goto label_51a798;
        case 0x51a79cu: goto label_51a79c;
        case 0x51a7a0u: goto label_51a7a0;
        case 0x51a7a4u: goto label_51a7a4;
        case 0x51a7a8u: goto label_51a7a8;
        case 0x51a7acu: goto label_51a7ac;
        case 0x51a7b0u: goto label_51a7b0;
        case 0x51a7b4u: goto label_51a7b4;
        case 0x51a7b8u: goto label_51a7b8;
        case 0x51a7bcu: goto label_51a7bc;
        case 0x51a7c0u: goto label_51a7c0;
        case 0x51a7c4u: goto label_51a7c4;
        case 0x51a7c8u: goto label_51a7c8;
        case 0x51a7ccu: goto label_51a7cc;
        case 0x51a7d0u: goto label_51a7d0;
        case 0x51a7d4u: goto label_51a7d4;
        case 0x51a7d8u: goto label_51a7d8;
        case 0x51a7dcu: goto label_51a7dc;
        case 0x51a7e0u: goto label_51a7e0;
        case 0x51a7e4u: goto label_51a7e4;
        case 0x51a7e8u: goto label_51a7e8;
        case 0x51a7ecu: goto label_51a7ec;
        case 0x51a7f0u: goto label_51a7f0;
        case 0x51a7f4u: goto label_51a7f4;
        case 0x51a7f8u: goto label_51a7f8;
        case 0x51a7fcu: goto label_51a7fc;
        case 0x51a800u: goto label_51a800;
        case 0x51a804u: goto label_51a804;
        case 0x51a808u: goto label_51a808;
        case 0x51a80cu: goto label_51a80c;
        case 0x51a810u: goto label_51a810;
        case 0x51a814u: goto label_51a814;
        case 0x51a818u: goto label_51a818;
        case 0x51a81cu: goto label_51a81c;
        case 0x51a820u: goto label_51a820;
        case 0x51a824u: goto label_51a824;
        case 0x51a828u: goto label_51a828;
        case 0x51a82cu: goto label_51a82c;
        case 0x51a830u: goto label_51a830;
        case 0x51a834u: goto label_51a834;
        case 0x51a838u: goto label_51a838;
        case 0x51a83cu: goto label_51a83c;
        case 0x51a840u: goto label_51a840;
        case 0x51a844u: goto label_51a844;
        case 0x51a848u: goto label_51a848;
        case 0x51a84cu: goto label_51a84c;
        case 0x51a850u: goto label_51a850;
        case 0x51a854u: goto label_51a854;
        case 0x51a858u: goto label_51a858;
        case 0x51a85cu: goto label_51a85c;
        case 0x51a860u: goto label_51a860;
        case 0x51a864u: goto label_51a864;
        case 0x51a868u: goto label_51a868;
        case 0x51a86cu: goto label_51a86c;
        case 0x51a870u: goto label_51a870;
        case 0x51a874u: goto label_51a874;
        case 0x51a878u: goto label_51a878;
        case 0x51a87cu: goto label_51a87c;
        case 0x51a880u: goto label_51a880;
        case 0x51a884u: goto label_51a884;
        case 0x51a888u: goto label_51a888;
        case 0x51a88cu: goto label_51a88c;
        default: break;
    }

    ctx->pc = 0x51a3a0u;

label_51a3a0:
    // 0x51a3a0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x51a3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_51a3a4:
    // 0x51a3a4: 0x8c688a08  lw          $t0, -0x75F8($v1)
    ctx->pc = 0x51a3a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_51a3a8:
    // 0x51a3a8: 0x8d060038  lw          $a2, 0x38($t0)
    ctx->pc = 0x51a3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
label_51a3ac:
    // 0x51a3ac: 0x30c30008  andi        $v1, $a2, 0x8
    ctx->pc = 0x51a3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
label_51a3b0:
    // 0x51a3b0: 0x5460001c  bnel        $v1, $zero, . + 4 + (0x1C << 2)
label_51a3b4:
    if (ctx->pc == 0x51A3B4u) {
        ctx->pc = 0x51A3B4u;
            // 0x51a3b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x51A3B8u;
        goto label_51a3b8;
    }
    ctx->pc = 0x51A3B0u;
    {
        const bool branch_taken_0x51a3b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x51a3b0) {
            ctx->pc = 0x51A3B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51A3B0u;
            // 0x51a3b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51A424u;
            goto label_51a424;
        }
    }
    ctx->pc = 0x51A3B8u;
label_51a3b8:
    // 0x51a3b8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x51a3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_51a3bc:
    // 0x51a3bc: 0x8c63a348  lw          $v1, -0x5CB8($v1)
    ctx->pc = 0x51a3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943560)));
label_51a3c0:
    // 0x51a3c0: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x51a3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_51a3c4:
    // 0x51a3c4: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x51a3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_51a3c8:
    // 0x51a3c8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x51a3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_51a3cc:
    // 0x51a3cc: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_51a3d0:
    if (ctx->pc == 0x51A3D0u) {
        ctx->pc = 0x51A3D4u;
        goto label_51a3d4;
    }
    ctx->pc = 0x51A3CCu;
    {
        const bool branch_taken_0x51a3cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x51a3cc) {
            ctx->pc = 0x51A420u;
            goto label_51a420;
        }
    }
    ctx->pc = 0x51A3D4u;
label_51a3d4:
    // 0x51a3d4: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x51a3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_51a3d8:
    // 0x51a3d8: 0x8c63ce48  lw          $v1, -0x31B8($v1)
    ctx->pc = 0x51a3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954568)));
label_51a3dc:
    // 0x51a3dc: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x51a3dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_51a3e0:
    // 0x51a3e0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_51a3e4:
    if (ctx->pc == 0x51A3E4u) {
        ctx->pc = 0x51A3E4u;
            // 0x51a3e4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x51A3E8u;
        goto label_51a3e8;
    }
    ctx->pc = 0x51A3E0u;
    {
        const bool branch_taken_0x51a3e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x51A3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51A3E0u;
            // 0x51a3e4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51a3e0) {
            ctx->pc = 0x51A3F8u;
            goto label_51a3f8;
        }
    }
    ctx->pc = 0x51A3E8u;
label_51a3e8:
    // 0x51a3e8: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x51a3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_51a3ec:
    // 0x51a3ec: 0x8c63ce40  lw          $v1, -0x31C0($v1)
    ctx->pc = 0x51a3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954560)));
label_51a3f0:
    // 0x51a3f0: 0x601827  not         $v1, $v1
    ctx->pc = 0x51a3f0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_51a3f4:
    // 0x51a3f4: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x51a3f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_51a3f8:
    // 0x51a3f8: 0x8d060038  lw          $a2, 0x38($t0)
    ctx->pc = 0x51a3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
label_51a3fc:
    // 0x51a3fc: 0x5383c  dsll32      $a3, $a1, 0
    ctx->pc = 0x51a3fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 0));
label_51a400:
    // 0x51a400: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x51a400u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_51a404:
    // 0x51a404: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x51a404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_51a408:
    // 0x51a408: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x51a408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_51a40c:
    // 0x51a40c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x51a40cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_51a410:
    // 0x51a410: 0xad060038  sw          $a2, 0x38($t0)
    ctx->pc = 0x51a410u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 56), GPR_U32(ctx, 6));
label_51a414:
    // 0x51a414: 0xac653e30  sw          $a1, 0x3E30($v1)
    ctx->pc = 0x51a414u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15920), GPR_U32(ctx, 5));
label_51a418:
    // 0x51a418: 0x10000003  b           . + 4 + (0x3 << 2)
label_51a41c:
    if (ctx->pc == 0x51A41Cu) {
        ctx->pc = 0x51A41Cu;
            // 0x51a41c: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x51A420u;
        goto label_51a420;
    }
    ctx->pc = 0x51A418u;
    {
        const bool branch_taken_0x51a418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51A41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51A418u;
            // 0x51a41c: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51a418) {
            ctx->pc = 0x51A428u;
            goto label_51a428;
        }
    }
    ctx->pc = 0x51A420u;
label_51a420:
    // 0x51a420: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x51a420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_51a424:
    // 0x51a424: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x51a424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_51a428:
    // 0x51a428: 0x3e00008  jr          $ra
label_51a42c:
    if (ctx->pc == 0x51A42Cu) {
        ctx->pc = 0x51A430u;
        goto label_51a430;
    }
    ctx->pc = 0x51A428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51A430u;
label_51a430:
    // 0x51a430: 0x27bdf4c0  addiu       $sp, $sp, -0xB40
    ctx->pc = 0x51a430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964416));
label_51a434:
    // 0x51a434: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x51a434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_51a438:
    // 0x51a438: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x51a438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_51a43c:
    // 0x51a43c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51a43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_51a440:
    // 0x51a440: 0xc077318  jal         func_1DCC60
label_51a444:
    if (ctx->pc == 0x51A444u) {
        ctx->pc = 0x51A444u;
            // 0x51a444: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x51A448u;
        goto label_51a448;
    }
    ctx->pc = 0x51A440u;
    SET_GPR_U32(ctx, 31, 0x51A448u);
    ctx->pc = 0x51A444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A440u;
            // 0x51a444: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC60u;
    if (runtime->hasFunction(0x1DCC60u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A448u; }
        if (ctx->pc != 0x51A448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC60_0x1dcc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A448u; }
        if (ctx->pc != 0x51A448u) { return; }
    }
    ctx->pc = 0x51A448u;
label_51a448:
    // 0x51a448: 0xc0b36b0  jal         func_2CDAC0
label_51a44c:
    if (ctx->pc == 0x51A44Cu) {
        ctx->pc = 0x51A44Cu;
            // 0x51a44c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51A450u;
        goto label_51a450;
    }
    ctx->pc = 0x51A448u;
    SET_GPR_U32(ctx, 31, 0x51A450u);
    ctx->pc = 0x51A44Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A448u;
            // 0x51a44c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAC0u;
    if (runtime->hasFunction(0x2CDAC0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A450u; }
        if (ctx->pc != 0x51A450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAC0_0x2cdac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A450u; }
        if (ctx->pc != 0x51A450u) { return; }
    }
    ctx->pc = 0x51A450u;
label_51a450:
    // 0x51a450: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x51a450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51a454:
    // 0x51a454: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x51a454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_51a458:
    // 0x51a458: 0xc040160  jal         func_100580
label_51a45c:
    if (ctx->pc == 0x51A45Cu) {
        ctx->pc = 0x51A45Cu;
            // 0x51a45c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x51A460u;
        goto label_51a460;
    }
    ctx->pc = 0x51A458u;
    SET_GPR_U32(ctx, 31, 0x51A460u);
    ctx->pc = 0x51A45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A458u;
            // 0x51a45c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100580u;
    if (runtime->hasFunction(0x100580u)) {
        auto targetFn = runtime->lookupFunction(0x100580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A460u; }
        if (ctx->pc != 0x51A460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100580_0x100580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A460u; }
        if (ctx->pc != 0x51A460u) { return; }
    }
    ctx->pc = 0x51A460u;
label_51a460:
    // 0x51a460: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_51a464:
    if (ctx->pc == 0x51A464u) {
        ctx->pc = 0x51A468u;
        goto label_51a468;
    }
    ctx->pc = 0x51A460u;
    {
        const bool branch_taken_0x51a460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51a460) {
            ctx->pc = 0x51A470u;
            goto label_51a470;
        }
    }
    ctx->pc = 0x51A468u;
label_51a468:
    // 0x51a468: 0xc0c6514  jal         func_319450
label_51a46c:
    if (ctx->pc == 0x51A46Cu) {
        ctx->pc = 0x51A46Cu;
            // 0x51a46c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51A470u;
        goto label_51a470;
    }
    ctx->pc = 0x51A468u;
    SET_GPR_U32(ctx, 31, 0x51A470u);
    ctx->pc = 0x51A46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A468u;
            // 0x51a46c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x319450u;
    if (runtime->hasFunction(0x319450u)) {
        auto targetFn = runtime->lookupFunction(0x319450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A470u; }
        if (ctx->pc != 0x51A470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00319450_0x319450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A470u; }
        if (ctx->pc != 0x51A470u) { return; }
    }
    ctx->pc = 0x51A470u;
label_51a470:
    // 0x51a470: 0xc0c8f7c  jal         func_323DF0
label_51a474:
    if (ctx->pc == 0x51A474u) {
        ctx->pc = 0x51A478u;
        goto label_51a478;
    }
    ctx->pc = 0x51A470u;
    SET_GPR_U32(ctx, 31, 0x51A478u);
    ctx->pc = 0x323DF0u;
    if (runtime->hasFunction(0x323DF0u)) {
        auto targetFn = runtime->lookupFunction(0x323DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A478u; }
        if (ctx->pc != 0x51A478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323DF0_0x323df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A478u; }
        if (ctx->pc != 0x51A478u) { return; }
    }
    ctx->pc = 0x51A478u;
label_51a478:
    // 0x51a478: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x51a478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
label_51a47c:
    // 0x51a47c: 0x3c060053  lui         $a2, 0x53
    ctx->pc = 0x51a47cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)83 << 16));
label_51a480:
    // 0x51a480: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x51a480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51a484:
    // 0x51a484: 0x24a57200  addiu       $a1, $a1, 0x7200
    ctx->pc = 0x51a484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29184));
label_51a488:
    // 0x51a488: 0xc14710c  jal         func_51C430
label_51a48c:
    if (ctx->pc == 0x51A48Cu) {
        ctx->pc = 0x51A48Cu;
            // 0x51a48c: 0x24c66ff0  addiu       $a2, $a2, 0x6FF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28656));
        ctx->pc = 0x51A490u;
        goto label_51a490;
    }
    ctx->pc = 0x51A488u;
    SET_GPR_U32(ctx, 31, 0x51A490u);
    ctx->pc = 0x51A48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A488u;
            // 0x51a48c: 0x24c66ff0  addiu       $a2, $a2, 0x6FF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51C430u;
    if (runtime->hasFunction(0x51C430u)) {
        auto targetFn = runtime->lookupFunction(0x51C430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A490u; }
        if (ctx->pc != 0x51A490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051C430_0x51c430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A490u; }
        if (ctx->pc != 0x51A490u) { return; }
    }
    ctx->pc = 0x51A490u;
label_51a490:
    // 0x51a490: 0xc0fe63c  jal         func_3F98F0
label_51a494:
    if (ctx->pc == 0x51A494u) {
        ctx->pc = 0x51A494u;
            // 0x51a494: 0x27a40b10  addiu       $a0, $sp, 0xB10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2832));
        ctx->pc = 0x51A498u;
        goto label_51a498;
    }
    ctx->pc = 0x51A490u;
    SET_GPR_U32(ctx, 31, 0x51A498u);
    ctx->pc = 0x51A494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A490u;
            // 0x51a494: 0x27a40b10  addiu       $a0, $sp, 0xB10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F98F0u;
    if (runtime->hasFunction(0x3F98F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F98F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A498u; }
        if (ctx->pc != 0x51A498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F98F0_0x3f98f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A498u; }
        if (ctx->pc != 0x51A498u) { return; }
    }
    ctx->pc = 0x51A498u;
label_51a498:
    // 0x51a498: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x51a498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_51a49c:
    // 0x51a49c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x51a49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_51a4a0:
    // 0x51a4a0: 0x8c46b6b0  lw          $a2, -0x4950($v0)
    ctx->pc = 0x51a4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948528)));
label_51a4a4:
    // 0x51a4a4: 0xc0fe5bc  jal         func_3F96F0
label_51a4a8:
    if (ctx->pc == 0x51A4A8u) {
        ctx->pc = 0x51A4A8u;
            // 0x51a4a8: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
        ctx->pc = 0x51A4ACu;
        goto label_51a4ac;
    }
    ctx->pc = 0x51A4A4u;
    SET_GPR_U32(ctx, 31, 0x51A4ACu);
    ctx->pc = 0x51A4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A4A4u;
            // 0x51a4a8: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A4ACu; }
        if (ctx->pc != 0x51A4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A4ACu; }
        if (ctx->pc != 0x51A4ACu) { return; }
    }
    ctx->pc = 0x51A4ACu;
label_51a4ac:
    // 0x51a4ac: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x51a4acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_51a4b0:
    // 0x51a4b0: 0x27a40b10  addiu       $a0, $sp, 0xB10
    ctx->pc = 0x51a4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2832));
label_51a4b4:
    // 0x51a4b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x51a4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51a4b8:
    // 0x51a4b8: 0xc0fe618  jal         func_3F9860
label_51a4bc:
    if (ctx->pc == 0x51A4BCu) {
        ctx->pc = 0x51A4BCu;
            // 0x51a4bc: 0x413021  addu        $a2, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->pc = 0x51A4C0u;
        goto label_51a4c0;
    }
    ctx->pc = 0x51A4B8u;
    SET_GPR_U32(ctx, 31, 0x51A4C0u);
    ctx->pc = 0x51A4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A4B8u;
            // 0x51a4bc: 0x413021  addu        $a2, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9860u;
    if (runtime->hasFunction(0x3F9860u)) {
        auto targetFn = runtime->lookupFunction(0x3F9860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A4C0u; }
        if (ctx->pc != 0x51A4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9860_0x3f9860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A4C0u; }
        if (ctx->pc != 0x51A4C0u) { return; }
    }
    ctx->pc = 0x51A4C0u;
label_51a4c0:
    // 0x51a4c0: 0x3c0400be  lui         $a0, 0xBE
    ctx->pc = 0x51a4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)190 << 16));
label_51a4c4:
    // 0x51a4c4: 0x27a50b10  addiu       $a1, $sp, 0xB10
    ctx->pc = 0x51a4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2832));
label_51a4c8:
    // 0x51a4c8: 0xc147108  jal         func_51C420
label_51a4cc:
    if (ctx->pc == 0x51A4CCu) {
        ctx->pc = 0x51A4CCu;
            // 0x51a4cc: 0x2484ab30  addiu       $a0, $a0, -0x54D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945584));
        ctx->pc = 0x51A4D0u;
        goto label_51a4d0;
    }
    ctx->pc = 0x51A4C8u;
    SET_GPR_U32(ctx, 31, 0x51A4D0u);
    ctx->pc = 0x51A4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A4C8u;
            // 0x51a4cc: 0x2484ab30  addiu       $a0, $a0, -0x54D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51C420u;
    if (runtime->hasFunction(0x51C420u)) {
        auto targetFn = runtime->lookupFunction(0x51C420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A4D0u; }
        if (ctx->pc != 0x51A4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051C420_0x51c420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A4D0u; }
        if (ctx->pc != 0x51A4D0u) { return; }
    }
    ctx->pc = 0x51A4D0u;
label_51a4d0:
    // 0x51a4d0: 0x3c0400be  lui         $a0, 0xBE
    ctx->pc = 0x51a4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)190 << 16));
label_51a4d4:
    // 0x51a4d4: 0xc147100  jal         func_51C400
label_51a4d8:
    if (ctx->pc == 0x51A4D8u) {
        ctx->pc = 0x51A4D8u;
            // 0x51a4d8: 0x2484ab30  addiu       $a0, $a0, -0x54D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945584));
        ctx->pc = 0x51A4DCu;
        goto label_51a4dc;
    }
    ctx->pc = 0x51A4D4u;
    SET_GPR_U32(ctx, 31, 0x51A4DCu);
    ctx->pc = 0x51A4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A4D4u;
            // 0x51a4d8: 0x2484ab30  addiu       $a0, $a0, -0x54D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51C400u;
    if (runtime->hasFunction(0x51C400u)) {
        auto targetFn = runtime->lookupFunction(0x51C400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A4DCu; }
        if (ctx->pc != 0x51A4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051C400_0x51c400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A4DCu; }
        if (ctx->pc != 0x51A4DCu) { return; }
    }
    ctx->pc = 0x51A4DCu;
label_51a4dc:
    // 0x51a4dc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x51a4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_51a4e0:
    // 0x51a4e0: 0xc040160  jal         func_100580
label_51a4e4:
    if (ctx->pc == 0x51A4E4u) {
        ctx->pc = 0x51A4E4u;
            // 0x51a4e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x51A4E8u;
        goto label_51a4e8;
    }
    ctx->pc = 0x51A4E0u;
    SET_GPR_U32(ctx, 31, 0x51A4E8u);
    ctx->pc = 0x51A4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A4E0u;
            // 0x51a4e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100580u;
    if (runtime->hasFunction(0x100580u)) {
        auto targetFn = runtime->lookupFunction(0x100580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A4E8u; }
        if (ctx->pc != 0x51A4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100580_0x100580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A4E8u; }
        if (ctx->pc != 0x51A4E8u) { return; }
    }
    ctx->pc = 0x51A4E8u;
label_51a4e8:
    // 0x51a4e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x51a4e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51a4ec:
    // 0x51a4ec: 0x52400005  beql        $s2, $zero, . + 4 + (0x5 << 2)
label_51a4f0:
    if (ctx->pc == 0x51A4F0u) {
        ctx->pc = 0x51A4F0u;
            // 0x51a4f0: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x51A4F4u;
        goto label_51a4f4;
    }
    ctx->pc = 0x51A4ECu;
    {
        const bool branch_taken_0x51a4ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x51a4ec) {
            ctx->pc = 0x51A4F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51A4ECu;
            // 0x51a4f0: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51A504u;
            goto label_51a504;
        }
    }
    ctx->pc = 0x51A4F4u;
label_51a4f4:
    // 0x51a4f4: 0xc1470ec  jal         func_51C3B0
label_51a4f8:
    if (ctx->pc == 0x51A4F8u) {
        ctx->pc = 0x51A4F8u;
            // 0x51a4f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51A4FCu;
        goto label_51a4fc;
    }
    ctx->pc = 0x51A4F4u;
    SET_GPR_U32(ctx, 31, 0x51A4FCu);
    ctx->pc = 0x51A4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A4F4u;
            // 0x51a4f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51C3B0u;
    if (runtime->hasFunction(0x51C3B0u)) {
        auto targetFn = runtime->lookupFunction(0x51C3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A4FCu; }
        if (ctx->pc != 0x51A4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051C3B0_0x51c3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A4FCu; }
        if (ctx->pc != 0x51A4FCu) { return; }
    }
    ctx->pc = 0x51A4FCu;
label_51a4fc:
    // 0x51a4fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x51a4fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51a500:
    // 0x51a500: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x51a500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_51a504:
    // 0x51a504: 0xc040160  jal         func_100580
label_51a508:
    if (ctx->pc == 0x51A508u) {
        ctx->pc = 0x51A508u;
            // 0x51a508: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x51A50Cu;
        goto label_51a50c;
    }
    ctx->pc = 0x51A504u;
    SET_GPR_U32(ctx, 31, 0x51A50Cu);
    ctx->pc = 0x51A508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A504u;
            // 0x51a508: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100580u;
    if (runtime->hasFunction(0x100580u)) {
        auto targetFn = runtime->lookupFunction(0x100580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A50Cu; }
        if (ctx->pc != 0x51A50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100580_0x100580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A50Cu; }
        if (ctx->pc != 0x51A50Cu) { return; }
    }
    ctx->pc = 0x51A50Cu;
label_51a50c:
    // 0x51a50c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_51a510:
    if (ctx->pc == 0x51A510u) {
        ctx->pc = 0x51A510u;
            // 0x51a510: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x51A514u;
        goto label_51a514;
    }
    ctx->pc = 0x51A50Cu;
    {
        const bool branch_taken_0x51a50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51a50c) {
            ctx->pc = 0x51A510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51A50Cu;
            // 0x51a510: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51A520u;
            goto label_51a520;
        }
    }
    ctx->pc = 0x51A514u;
label_51a514:
    // 0x51a514: 0xc1470c0  jal         func_51C300
label_51a518:
    if (ctx->pc == 0x51A518u) {
        ctx->pc = 0x51A518u;
            // 0x51a518: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51A51Cu;
        goto label_51a51c;
    }
    ctx->pc = 0x51A514u;
    SET_GPR_U32(ctx, 31, 0x51A51Cu);
    ctx->pc = 0x51A518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A514u;
            // 0x51a518: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51C300u;
    if (runtime->hasFunction(0x51C300u)) {
        auto targetFn = runtime->lookupFunction(0x51C300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A51Cu; }
        if (ctx->pc != 0x51A51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051C300_0x51c300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A51Cu; }
        if (ctx->pc != 0x51A51Cu) { return; }
    }
    ctx->pc = 0x51A51Cu;
label_51a51c:
    // 0x51a51c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x51a51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_51a520:
    // 0x51a520: 0xc040160  jal         func_100580
label_51a524:
    if (ctx->pc == 0x51A524u) {
        ctx->pc = 0x51A524u;
            // 0x51a524: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x51A528u;
        goto label_51a528;
    }
    ctx->pc = 0x51A520u;
    SET_GPR_U32(ctx, 31, 0x51A528u);
    ctx->pc = 0x51A524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A520u;
            // 0x51a524: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100580u;
    if (runtime->hasFunction(0x100580u)) {
        auto targetFn = runtime->lookupFunction(0x100580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A528u; }
        if (ctx->pc != 0x51A528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100580_0x100580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A528u; }
        if (ctx->pc != 0x51A528u) { return; }
    }
    ctx->pc = 0x51A528u;
label_51a528:
    // 0x51a528: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_51a52c:
    if (ctx->pc == 0x51A52Cu) {
        ctx->pc = 0x51A52Cu;
            // 0x51a52c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x51A530u;
        goto label_51a530;
    }
    ctx->pc = 0x51A528u;
    {
        const bool branch_taken_0x51a528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51a528) {
            ctx->pc = 0x51A52Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51A528u;
            // 0x51a52c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51A53Cu;
            goto label_51a53c;
        }
    }
    ctx->pc = 0x51A530u;
label_51a530:
    // 0x51a530: 0xc147084  jal         func_51C210
label_51a534:
    if (ctx->pc == 0x51A534u) {
        ctx->pc = 0x51A534u;
            // 0x51a534: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51A538u;
        goto label_51a538;
    }
    ctx->pc = 0x51A530u;
    SET_GPR_U32(ctx, 31, 0x51A538u);
    ctx->pc = 0x51A534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A530u;
            // 0x51a534: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51C210u;
    if (runtime->hasFunction(0x51C210u)) {
        auto targetFn = runtime->lookupFunction(0x51C210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A538u; }
        if (ctx->pc != 0x51A538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051C210_0x51c210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A538u; }
        if (ctx->pc != 0x51A538u) { return; }
    }
    ctx->pc = 0x51A538u;
label_51a538:
    // 0x51a538: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x51a538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_51a53c:
    // 0x51a53c: 0xc040160  jal         func_100580
label_51a540:
    if (ctx->pc == 0x51A540u) {
        ctx->pc = 0x51A540u;
            // 0x51a540: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x51A544u;
        goto label_51a544;
    }
    ctx->pc = 0x51A53Cu;
    SET_GPR_U32(ctx, 31, 0x51A544u);
    ctx->pc = 0x51A540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A53Cu;
            // 0x51a540: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100580u;
    if (runtime->hasFunction(0x100580u)) {
        auto targetFn = runtime->lookupFunction(0x100580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A544u; }
        if (ctx->pc != 0x51A544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100580_0x100580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A544u; }
        if (ctx->pc != 0x51A544u) { return; }
    }
    ctx->pc = 0x51A544u;
label_51a544:
    // 0x51a544: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_51a548:
    if (ctx->pc == 0x51A548u) {
        ctx->pc = 0x51A548u;
            // 0x51a548: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x51A54Cu;
        goto label_51a54c;
    }
    ctx->pc = 0x51A544u;
    {
        const bool branch_taken_0x51a544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51a544) {
            ctx->pc = 0x51A548u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51A544u;
            // 0x51a548: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51A558u;
            goto label_51a558;
        }
    }
    ctx->pc = 0x51A54Cu;
label_51a54c:
    // 0x51a54c: 0xc07478c  jal         func_1D1E30
label_51a550:
    if (ctx->pc == 0x51A550u) {
        ctx->pc = 0x51A550u;
            // 0x51a550: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51A554u;
        goto label_51a554;
    }
    ctx->pc = 0x51A54Cu;
    SET_GPR_U32(ctx, 31, 0x51A554u);
    ctx->pc = 0x51A550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A54Cu;
            // 0x51a550: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1E30u;
    if (runtime->hasFunction(0x1D1E30u)) {
        auto targetFn = runtime->lookupFunction(0x1D1E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A554u; }
        if (ctx->pc != 0x51A554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1E30_0x1d1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A554u; }
        if (ctx->pc != 0x51A554u) { return; }
    }
    ctx->pc = 0x51A554u;
label_51a554:
    // 0x51a554: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x51a554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_51a558:
    // 0x51a558: 0xc040160  jal         func_100580
label_51a55c:
    if (ctx->pc == 0x51A55Cu) {
        ctx->pc = 0x51A55Cu;
            // 0x51a55c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x51A560u;
        goto label_51a560;
    }
    ctx->pc = 0x51A558u;
    SET_GPR_U32(ctx, 31, 0x51A560u);
    ctx->pc = 0x51A55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A558u;
            // 0x51a55c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100580u;
    if (runtime->hasFunction(0x100580u)) {
        auto targetFn = runtime->lookupFunction(0x100580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A560u; }
        if (ctx->pc != 0x51A560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100580_0x100580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A560u; }
        if (ctx->pc != 0x51A560u) { return; }
    }
    ctx->pc = 0x51A560u;
label_51a560:
    // 0x51a560: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_51a564:
    if (ctx->pc == 0x51A564u) {
        ctx->pc = 0x51A564u;
            // 0x51a564: 0x27a40340  addiu       $a0, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->pc = 0x51A568u;
        goto label_51a568;
    }
    ctx->pc = 0x51A560u;
    {
        const bool branch_taken_0x51a560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51a560) {
            ctx->pc = 0x51A564u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51A560u;
            // 0x51a564: 0x27a40340  addiu       $a0, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51A574u;
            goto label_51a574;
        }
    }
    ctx->pc = 0x51A568u;
label_51a568:
    // 0x51a568: 0xc147074  jal         func_51C1D0
label_51a56c:
    if (ctx->pc == 0x51A56Cu) {
        ctx->pc = 0x51A56Cu;
            // 0x51a56c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51A570u;
        goto label_51a570;
    }
    ctx->pc = 0x51A568u;
    SET_GPR_U32(ctx, 31, 0x51A570u);
    ctx->pc = 0x51A56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A568u;
            // 0x51a56c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51C1D0u;
    if (runtime->hasFunction(0x51C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x51C1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A570u; }
        if (ctx->pc != 0x51A570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051C1D0_0x51c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A570u; }
        if (ctx->pc != 0x51A570u) { return; }
    }
    ctx->pc = 0x51A570u;
label_51a570:
    // 0x51a570: 0x27a40340  addiu       $a0, $sp, 0x340
    ctx->pc = 0x51a570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_51a574:
    // 0x51a574: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x51a574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_51a578:
    // 0x51a578: 0xc14d6b4  jal         func_535AD0
label_51a57c:
    if (ctx->pc == 0x51A57Cu) {
        ctx->pc = 0x51A57Cu;
            // 0x51a57c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x51A580u;
        goto label_51a580;
    }
    ctx->pc = 0x51A578u;
    SET_GPR_U32(ctx, 31, 0x51A580u);
    ctx->pc = 0x51A57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A578u;
            // 0x51a57c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x535AD0u;
    if (runtime->hasFunction(0x535AD0u)) {
        auto targetFn = runtime->lookupFunction(0x535AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A580u; }
        if (ctx->pc != 0x51A580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00535AD0_0x535ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A580u; }
        if (ctx->pc != 0x51A580u) { return; }
    }
    ctx->pc = 0x51A580u;
label_51a580:
    // 0x51a580: 0xc151cb0  jal         func_5472C0
label_51a584:
    if (ctx->pc == 0x51A584u) {
        ctx->pc = 0x51A588u;
        goto label_51a588;
    }
    ctx->pc = 0x51A580u;
    SET_GPR_U32(ctx, 31, 0x51A588u);
    ctx->pc = 0x5472C0u;
    if (runtime->hasFunction(0x5472C0u)) {
        auto targetFn = runtime->lookupFunction(0x5472C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A588u; }
        if (ctx->pc != 0x51A588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005472C0_0x5472c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A588u; }
        if (ctx->pc != 0x51A588u) { return; }
    }
    ctx->pc = 0x51A588u;
label_51a588:
    // 0x51a588: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x51a588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
label_51a58c:
    // 0x51a58c: 0xc078a94  jal         func_1E2A50
label_51a590:
    if (ctx->pc == 0x51A590u) {
        ctx->pc = 0x51A590u;
            // 0x51a590: 0x3444cccc  ori         $a0, $v0, 0xCCCC (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52428);
        ctx->pc = 0x51A594u;
        goto label_51a594;
    }
    ctx->pc = 0x51A58Cu;
    SET_GPR_U32(ctx, 31, 0x51A594u);
    ctx->pc = 0x51A590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A58Cu;
            // 0x51a590: 0x3444cccc  ori         $a0, $v0, 0xCCCC (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52428);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2A50u;
    if (runtime->hasFunction(0x1E2A50u)) {
        auto targetFn = runtime->lookupFunction(0x1E2A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A594u; }
        if (ctx->pc != 0x51A594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2A50_0x1e2a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A594u; }
        if (ctx->pc != 0x51A594u) { return; }
    }
    ctx->pc = 0x51A594u;
label_51a594:
    // 0x51a594: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x51a594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_51a598:
    // 0x51a598: 0xc040160  jal         func_100580
label_51a59c:
    if (ctx->pc == 0x51A59Cu) {
        ctx->pc = 0x51A59Cu;
            // 0x51a59c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x51A5A0u;
        goto label_51a5a0;
    }
    ctx->pc = 0x51A598u;
    SET_GPR_U32(ctx, 31, 0x51A5A0u);
    ctx->pc = 0x51A59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A598u;
            // 0x51a59c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100580u;
    if (runtime->hasFunction(0x100580u)) {
        auto targetFn = runtime->lookupFunction(0x100580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A5A0u; }
        if (ctx->pc != 0x51A5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100580_0x100580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A5A0u; }
        if (ctx->pc != 0x51A5A0u) { return; }
    }
    ctx->pc = 0x51A5A0u;
label_51a5a0:
    // 0x51a5a0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_51a5a4:
    if (ctx->pc == 0x51A5A4u) {
        ctx->pc = 0x51A5A4u;
            // 0x51a5a4: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x51A5A8u;
        goto label_51a5a8;
    }
    ctx->pc = 0x51A5A0u;
    {
        const bool branch_taken_0x51a5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51a5a0) {
            ctx->pc = 0x51A5A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51A5A0u;
            // 0x51a5a4: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51A5B4u;
            goto label_51a5b4;
        }
    }
    ctx->pc = 0x51A5A8u;
label_51a5a8:
    // 0x51a5a8: 0xc147050  jal         func_51C140
label_51a5ac:
    if (ctx->pc == 0x51A5ACu) {
        ctx->pc = 0x51A5ACu;
            // 0x51a5ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51A5B0u;
        goto label_51a5b0;
    }
    ctx->pc = 0x51A5A8u;
    SET_GPR_U32(ctx, 31, 0x51A5B0u);
    ctx->pc = 0x51A5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A5A8u;
            // 0x51a5ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51C140u;
    if (runtime->hasFunction(0x51C140u)) {
        auto targetFn = runtime->lookupFunction(0x51C140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A5B0u; }
        if (ctx->pc != 0x51A5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051C140_0x51c140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A5B0u; }
        if (ctx->pc != 0x51A5B0u) { return; }
    }
    ctx->pc = 0x51A5B0u;
label_51a5b0:
    // 0x51a5b0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x51a5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_51a5b4:
    // 0x51a5b4: 0xc040160  jal         func_100580
label_51a5b8:
    if (ctx->pc == 0x51A5B8u) {
        ctx->pc = 0x51A5B8u;
            // 0x51a5b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x51A5BCu;
        goto label_51a5bc;
    }
    ctx->pc = 0x51A5B4u;
    SET_GPR_U32(ctx, 31, 0x51A5BCu);
    ctx->pc = 0x51A5B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A5B4u;
            // 0x51a5b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100580u;
    if (runtime->hasFunction(0x100580u)) {
        auto targetFn = runtime->lookupFunction(0x100580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A5BCu; }
        if (ctx->pc != 0x51A5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100580_0x100580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A5BCu; }
        if (ctx->pc != 0x51A5BCu) { return; }
    }
    ctx->pc = 0x51A5BCu;
label_51a5bc:
    // 0x51a5bc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_51a5c0:
    if (ctx->pc == 0x51A5C0u) {
        ctx->pc = 0x51A5C0u;
            // 0x51a5c0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x51A5C4u;
        goto label_51a5c4;
    }
    ctx->pc = 0x51A5BCu;
    {
        const bool branch_taken_0x51a5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51a5bc) {
            ctx->pc = 0x51A5C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51A5BCu;
            // 0x51a5c0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51A5D0u;
            goto label_51a5d0;
        }
    }
    ctx->pc = 0x51A5C4u;
label_51a5c4:
    // 0x51a5c4: 0xc147040  jal         func_51C100
label_51a5c8:
    if (ctx->pc == 0x51A5C8u) {
        ctx->pc = 0x51A5C8u;
            // 0x51a5c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51A5CCu;
        goto label_51a5cc;
    }
    ctx->pc = 0x51A5C4u;
    SET_GPR_U32(ctx, 31, 0x51A5CCu);
    ctx->pc = 0x51A5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A5C4u;
            // 0x51a5c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51C100u;
    if (runtime->hasFunction(0x51C100u)) {
        auto targetFn = runtime->lookupFunction(0x51C100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A5CCu; }
        if (ctx->pc != 0x51A5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051C100_0x51c100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A5CCu; }
        if (ctx->pc != 0x51A5CCu) { return; }
    }
    ctx->pc = 0x51A5CCu;
label_51a5cc:
    // 0x51a5cc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x51a5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_51a5d0:
    // 0x51a5d0: 0xc040160  jal         func_100580
label_51a5d4:
    if (ctx->pc == 0x51A5D4u) {
        ctx->pc = 0x51A5D4u;
            // 0x51a5d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x51A5D8u;
        goto label_51a5d8;
    }
    ctx->pc = 0x51A5D0u;
    SET_GPR_U32(ctx, 31, 0x51A5D8u);
    ctx->pc = 0x51A5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A5D0u;
            // 0x51a5d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100580u;
    if (runtime->hasFunction(0x100580u)) {
        auto targetFn = runtime->lookupFunction(0x100580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A5D8u; }
        if (ctx->pc != 0x51A5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100580_0x100580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A5D8u; }
        if (ctx->pc != 0x51A5D8u) { return; }
    }
    ctx->pc = 0x51A5D8u;
label_51a5d8:
    // 0x51a5d8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_51a5dc:
    if (ctx->pc == 0x51A5DCu) {
        ctx->pc = 0x51A5DCu;
            // 0x51a5dc: 0x240400f4  addiu       $a0, $zero, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
        ctx->pc = 0x51A5E0u;
        goto label_51a5e0;
    }
    ctx->pc = 0x51A5D8u;
    {
        const bool branch_taken_0x51a5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51a5d8) {
            ctx->pc = 0x51A5DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51A5D8u;
            // 0x51a5dc: 0x240400f4  addiu       $a0, $zero, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51A5ECu;
            goto label_51a5ec;
        }
    }
    ctx->pc = 0x51A5E0u;
label_51a5e0:
    // 0x51a5e0: 0xc147018  jal         func_51C060
label_51a5e4:
    if (ctx->pc == 0x51A5E4u) {
        ctx->pc = 0x51A5E4u;
            // 0x51a5e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51A5E8u;
        goto label_51a5e8;
    }
    ctx->pc = 0x51A5E0u;
    SET_GPR_U32(ctx, 31, 0x51A5E8u);
    ctx->pc = 0x51A5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A5E0u;
            // 0x51a5e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51C060u;
    if (runtime->hasFunction(0x51C060u)) {
        auto targetFn = runtime->lookupFunction(0x51C060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A5E8u; }
        if (ctx->pc != 0x51A5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051C060_0x51c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A5E8u; }
        if (ctx->pc != 0x51A5E8u) { return; }
    }
    ctx->pc = 0x51A5E8u;
label_51a5e8:
    // 0x51a5e8: 0x240400f4  addiu       $a0, $zero, 0xF4
    ctx->pc = 0x51a5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
label_51a5ec:
    // 0x51a5ec: 0xc040160  jal         func_100580
label_51a5f0:
    if (ctx->pc == 0x51A5F0u) {
        ctx->pc = 0x51A5F0u;
            // 0x51a5f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x51A5F4u;
        goto label_51a5f4;
    }
    ctx->pc = 0x51A5ECu;
    SET_GPR_U32(ctx, 31, 0x51A5F4u);
    ctx->pc = 0x51A5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A5ECu;
            // 0x51a5f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100580u;
    if (runtime->hasFunction(0x100580u)) {
        auto targetFn = runtime->lookupFunction(0x100580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A5F4u; }
        if (ctx->pc != 0x51A5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100580_0x100580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A5F4u; }
        if (ctx->pc != 0x51A5F4u) { return; }
    }
    ctx->pc = 0x51A5F4u;
label_51a5f4:
    // 0x51a5f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_51a5f8:
    if (ctx->pc == 0x51A5F8u) {
        ctx->pc = 0x51A5FCu;
        goto label_51a5fc;
    }
    ctx->pc = 0x51A5F4u;
    {
        const bool branch_taken_0x51a5f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51a5f4) {
            ctx->pc = 0x51A604u;
            goto label_51a604;
        }
    }
    ctx->pc = 0x51A5FCu;
label_51a5fc:
    // 0x51a5fc: 0xc146f88  jal         func_51BE20
label_51a600:
    if (ctx->pc == 0x51A600u) {
        ctx->pc = 0x51A600u;
            // 0x51a600: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51A604u;
        goto label_51a604;
    }
    ctx->pc = 0x51A5FCu;
    SET_GPR_U32(ctx, 31, 0x51A604u);
    ctx->pc = 0x51A600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A5FCu;
            // 0x51a600: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51BE20u;
    if (runtime->hasFunction(0x51BE20u)) {
        auto targetFn = runtime->lookupFunction(0x51BE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A604u; }
        if (ctx->pc != 0x51A604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051BE20_0x51be20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A604u; }
        if (ctx->pc != 0x51A604u) { return; }
    }
    ctx->pc = 0x51A604u;
label_51a604:
    // 0x51a604: 0xc146f5c  jal         func_51BD70
label_51a608:
    if (ctx->pc == 0x51A608u) {
        ctx->pc = 0x51A60Cu;
        goto label_51a60c;
    }
    ctx->pc = 0x51A604u;
    SET_GPR_U32(ctx, 31, 0x51A60Cu);
    ctx->pc = 0x51BD70u;
    if (runtime->hasFunction(0x51BD70u)) {
        auto targetFn = runtime->lookupFunction(0x51BD70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A60Cu; }
        if (ctx->pc != 0x51A60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051BD70_0x51bd70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A60Cu; }
        if (ctx->pc != 0x51A60Cu) { return; }
    }
    ctx->pc = 0x51A60Cu;
label_51a60c:
    // 0x51a60c: 0xc1512d0  jal         func_544B40
label_51a610:
    if (ctx->pc == 0x51A610u) {
        ctx->pc = 0x51A614u;
        goto label_51a614;
    }
    ctx->pc = 0x51A60Cu;
    SET_GPR_U32(ctx, 31, 0x51A614u);
    ctx->pc = 0x544B40u;
    if (runtime->hasFunction(0x544B40u)) {
        auto targetFn = runtime->lookupFunction(0x544B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A614u; }
        if (ctx->pc != 0x51A614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00544B40_0x544b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A614u; }
        if (ctx->pc != 0x51A614u) { return; }
    }
    ctx->pc = 0x51A614u;
label_51a614:
    // 0x51a614: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x51a614u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_51a618:
    // 0x51a618: 0x3c070067  lui         $a3, 0x67
    ctx->pc = 0x51a618u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)103 << 16));
label_51a61c:
    // 0x51a61c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x51a61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_51a620:
    // 0x51a620: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x51a620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_51a624:
    // 0x51a624: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x51a624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_51a628:
    // 0x51a628: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x51a628u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_51a62c:
    // 0x51a62c: 0x320f809  jalr        $t9
label_51a630:
    if (ctx->pc == 0x51A630u) {
        ctx->pc = 0x51A630u;
            // 0x51a630: 0x24e7c430  addiu       $a3, $a3, -0x3BD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951984));
        ctx->pc = 0x51A634u;
        goto label_51a634;
    }
    ctx->pc = 0x51A62Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51A634u);
        ctx->pc = 0x51A630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51A62Cu;
            // 0x51a630: 0x24e7c430  addiu       $a3, $a3, -0x3BD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951984));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51A634u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51A634u; }
            if (ctx->pc != 0x51A634u) { return; }
        }
        }
    }
    ctx->pc = 0x51A634u;
label_51a634:
    // 0x51a634: 0xc146f1c  jal         func_51BC70
label_51a638:
    if (ctx->pc == 0x51A638u) {
        ctx->pc = 0x51A638u;
            // 0x51a638: 0x27a40310  addiu       $a0, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->pc = 0x51A63Cu;
        goto label_51a63c;
    }
    ctx->pc = 0x51A634u;
    SET_GPR_U32(ctx, 31, 0x51A63Cu);
    ctx->pc = 0x51A638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A634u;
            // 0x51a638: 0x27a40310  addiu       $a0, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51BC70u;
    if (runtime->hasFunction(0x51BC70u)) {
        auto targetFn = runtime->lookupFunction(0x51BC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A63Cu; }
        if (ctx->pc != 0x51A63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051BC70_0x51bc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A63Cu; }
        if (ctx->pc != 0x51A63Cu) { return; }
    }
    ctx->pc = 0x51A63Cu;
label_51a63c:
    // 0x51a63c: 0xc11bb74  jal         func_46EDD0
label_51a640:
    if (ctx->pc == 0x51A640u) {
        ctx->pc = 0x51A644u;
        goto label_51a644;
    }
    ctx->pc = 0x51A63Cu;
    SET_GPR_U32(ctx, 31, 0x51A644u);
    ctx->pc = 0x46EDD0u;
    if (runtime->hasFunction(0x46EDD0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A644u; }
        if (ctx->pc != 0x51A644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDD0_0x46edd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A644u; }
        if (ctx->pc != 0x51A644u) { return; }
    }
    ctx->pc = 0x51A644u;
label_51a644:
    // 0x51a644: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x51a644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51a648:
    // 0x51a648: 0xc146f18  jal         func_51BC60
label_51a64c:
    if (ctx->pc == 0x51A64Cu) {
        ctx->pc = 0x51A64Cu;
            // 0x51a64c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51A650u;
        goto label_51a650;
    }
    ctx->pc = 0x51A648u;
    SET_GPR_U32(ctx, 31, 0x51A650u);
    ctx->pc = 0x51A64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A648u;
            // 0x51a64c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51BC60u;
    if (runtime->hasFunction(0x51BC60u)) {
        auto targetFn = runtime->lookupFunction(0x51BC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A650u; }
        if (ctx->pc != 0x51A650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051BC60_0x51bc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A650u; }
        if (ctx->pc != 0x51A650u) { return; }
    }
    ctx->pc = 0x51A650u;
label_51a650:
    // 0x51a650: 0xc0c8f7c  jal         func_323DF0
label_51a654:
    if (ctx->pc == 0x51A654u) {
        ctx->pc = 0x51A658u;
        goto label_51a658;
    }
    ctx->pc = 0x51A650u;
    SET_GPR_U32(ctx, 31, 0x51A658u);
    ctx->pc = 0x323DF0u;
    if (runtime->hasFunction(0x323DF0u)) {
        auto targetFn = runtime->lookupFunction(0x323DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A658u; }
        if (ctx->pc != 0x51A658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323DF0_0x323df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A658u; }
        if (ctx->pc != 0x51A658u) { return; }
    }
    ctx->pc = 0x51A658u;
label_51a658:
    // 0x51a658: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x51a658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51a65c:
    // 0x51a65c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x51a65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_51a660:
    // 0x51a660: 0x8c450eb8  lw          $a1, 0xEB8($v0)
    ctx->pc = 0x51a660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3768)));
label_51a664:
    // 0x51a664: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x51a664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_51a668:
    // 0x51a668: 0x8c470ec0  lw          $a3, 0xEC0($v0)
    ctx->pc = 0x51a668u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3776)));
label_51a66c:
    // 0x51a66c: 0xc146e94  jal         func_51BA50
label_51a670:
    if (ctx->pc == 0x51A670u) {
        ctx->pc = 0x51A670u;
            // 0x51a670: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51A674u;
        goto label_51a674;
    }
    ctx->pc = 0x51A66Cu;
    SET_GPR_U32(ctx, 31, 0x51A674u);
    ctx->pc = 0x51A670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A66Cu;
            // 0x51a670: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51BA50u;
    if (runtime->hasFunction(0x51BA50u)) {
        auto targetFn = runtime->lookupFunction(0x51BA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A674u; }
        if (ctx->pc != 0x51A674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051BA50_0x51ba50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A674u; }
        if (ctx->pc != 0x51A674u) { return; }
    }
    ctx->pc = 0x51A674u;
label_51a674:
    // 0x51a674: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x51a674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_51a678:
    // 0x51a678: 0xc146e8c  jal         func_51BA30
label_51a67c:
    if (ctx->pc == 0x51A67Cu) {
        ctx->pc = 0x51A67Cu;
            // 0x51a67c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x51A680u;
        goto label_51a680;
    }
    ctx->pc = 0x51A678u;
    SET_GPR_U32(ctx, 31, 0x51A680u);
    ctx->pc = 0x51A67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A678u;
            // 0x51a67c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51BA30u;
    if (runtime->hasFunction(0x51BA30u)) {
        auto targetFn = runtime->lookupFunction(0x51BA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A680u; }
        if (ctx->pc != 0x51A680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051BA30_0x51ba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A680u; }
        if (ctx->pc != 0x51A680u) { return; }
    }
    ctx->pc = 0x51A680u;
label_51a680:
    // 0x51a680: 0xc146e88  jal         func_51BA20
label_51a684:
    if (ctx->pc == 0x51A684u) {
        ctx->pc = 0x51A684u;
            // 0x51a684: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x51A688u;
        goto label_51a688;
    }
    ctx->pc = 0x51A680u;
    SET_GPR_U32(ctx, 31, 0x51A688u);
    ctx->pc = 0x51A684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A680u;
            // 0x51a684: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51BA20u;
    if (runtime->hasFunction(0x51BA20u)) {
        auto targetFn = runtime->lookupFunction(0x51BA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A688u; }
        if (ctx->pc != 0x51A688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051BA20_0x51ba20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A688u; }
        if (ctx->pc != 0x51A688u) { return; }
    }
    ctx->pc = 0x51A688u;
label_51a688:
    // 0x51a688: 0x3c0400be  lui         $a0, 0xBE
    ctx->pc = 0x51a688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)190 << 16));
label_51a68c:
    // 0x51a68c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x51a68cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51a690:
    // 0x51a690: 0xc146e84  jal         func_51BA10
label_51a694:
    if (ctx->pc == 0x51A694u) {
        ctx->pc = 0x51A694u;
            // 0x51a694: 0x2484ab30  addiu       $a0, $a0, -0x54D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945584));
        ctx->pc = 0x51A698u;
        goto label_51a698;
    }
    ctx->pc = 0x51A690u;
    SET_GPR_U32(ctx, 31, 0x51A698u);
    ctx->pc = 0x51A694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A690u;
            // 0x51a694: 0x2484ab30  addiu       $a0, $a0, -0x54D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51BA10u;
    if (runtime->hasFunction(0x51BA10u)) {
        auto targetFn = runtime->lookupFunction(0x51BA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A698u; }
        if (ctx->pc != 0x51A698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051BA10_0x51ba10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A698u; }
        if (ctx->pc != 0x51A698u) { return; }
    }
    ctx->pc = 0x51A698u;
label_51a698:
    // 0x51a698: 0xc0b6e84  jal         func_2DBA10
label_51a69c:
    if (ctx->pc == 0x51A69Cu) {
        ctx->pc = 0x51A6A0u;
        goto label_51a6a0;
    }
    ctx->pc = 0x51A698u;
    SET_GPR_U32(ctx, 31, 0x51A6A0u);
    ctx->pc = 0x2DBA10u;
    if (runtime->hasFunction(0x2DBA10u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A6A0u; }
        if (ctx->pc != 0x51A6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA10_0x2dba10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A6A0u; }
        if (ctx->pc != 0x51A6A0u) { return; }
    }
    ctx->pc = 0x51A6A0u;
label_51a6a0:
    // 0x51a6a0: 0xc078a5c  jal         func_1E2970
label_51a6a4:
    if (ctx->pc == 0x51A6A4u) {
        ctx->pc = 0x51A6A4u;
            // 0x51a6a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51A6A8u;
        goto label_51a6a8;
    }
    ctx->pc = 0x51A6A0u;
    SET_GPR_U32(ctx, 31, 0x51A6A8u);
    ctx->pc = 0x51A6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A6A0u;
            // 0x51a6a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2970u;
    if (runtime->hasFunction(0x1E2970u)) {
        auto targetFn = runtime->lookupFunction(0x1E2970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A6A8u; }
        if (ctx->pc != 0x51A6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2970_0x1e2970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A6A8u; }
        if (ctx->pc != 0x51A6A8u) { return; }
    }
    ctx->pc = 0x51A6A8u;
label_51a6a8:
    // 0x51a6a8: 0xc146e44  jal         func_51B910
label_51a6ac:
    if (ctx->pc == 0x51A6ACu) {
        ctx->pc = 0x51A6ACu;
            // 0x51a6ac: 0x27a402f0  addiu       $a0, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->pc = 0x51A6B0u;
        goto label_51a6b0;
    }
    ctx->pc = 0x51A6A8u;
    SET_GPR_U32(ctx, 31, 0x51A6B0u);
    ctx->pc = 0x51A6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A6A8u;
            // 0x51a6ac: 0x27a402f0  addiu       $a0, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51B910u;
    if (runtime->hasFunction(0x51B910u)) {
        auto targetFn = runtime->lookupFunction(0x51B910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A6B0u; }
        if (ctx->pc != 0x51A6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051B910_0x51b910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A6B0u; }
        if (ctx->pc != 0x51A6B0u) { return; }
    }
    ctx->pc = 0x51A6B0u;
label_51a6b0:
    // 0x51a6b0: 0xc146e24  jal         func_51B890
label_51a6b4:
    if (ctx->pc == 0x51A6B4u) {
        ctx->pc = 0x51A6B4u;
            // 0x51a6b4: 0x27a40280  addiu       $a0, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x51A6B8u;
        goto label_51a6b8;
    }
    ctx->pc = 0x51A6B0u;
    SET_GPR_U32(ctx, 31, 0x51A6B8u);
    ctx->pc = 0x51A6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A6B0u;
            // 0x51a6b4: 0x27a40280  addiu       $a0, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51B890u;
    if (runtime->hasFunction(0x51B890u)) {
        auto targetFn = runtime->lookupFunction(0x51B890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A6B8u; }
        if (ctx->pc != 0x51A6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051B890_0x51b890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A6B8u; }
        if (ctx->pc != 0x51A6B8u) { return; }
    }
    ctx->pc = 0x51A6B8u;
label_51a6b8:
    // 0x51a6b8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x51a6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_51a6bc:
    // 0x51a6bc: 0x8c45ab34  lw          $a1, -0x54CC($v0)
    ctx->pc = 0x51a6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945588)));
label_51a6c0:
    // 0x51a6c0: 0xc058510  jal         func_161440
label_51a6c4:
    if (ctx->pc == 0x51A6C4u) {
        ctx->pc = 0x51A6C4u;
            // 0x51a6c4: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x51A6C8u;
        goto label_51a6c8;
    }
    ctx->pc = 0x51A6C0u;
    SET_GPR_U32(ctx, 31, 0x51A6C8u);
    ctx->pc = 0x51A6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A6C0u;
            // 0x51a6c4: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161440u;
    if (runtime->hasFunction(0x161440u)) {
        auto targetFn = runtime->lookupFunction(0x161440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A6C8u; }
        if (ctx->pc != 0x51A6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00161440_0x161440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A6C8u; }
        if (ctx->pc != 0x51A6C8u) { return; }
    }
    ctx->pc = 0x51A6C8u;
label_51a6c8:
    // 0x51a6c8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x51a6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_51a6cc:
    // 0x51a6cc: 0xc146e0c  jal         func_51B830
label_51a6d0:
    if (ctx->pc == 0x51A6D0u) {
        ctx->pc = 0x51A6D0u;
            // 0x51a6d0: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x51A6D4u;
        goto label_51a6d4;
    }
    ctx->pc = 0x51A6CCu;
    SET_GPR_U32(ctx, 31, 0x51A6D4u);
    ctx->pc = 0x51A6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A6CCu;
            // 0x51a6d0: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51B830u;
    if (runtime->hasFunction(0x51B830u)) {
        auto targetFn = runtime->lookupFunction(0x51B830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A6D4u; }
        if (ctx->pc != 0x51A6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051B830_0x51b830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A6D4u; }
        if (ctx->pc != 0x51A6D4u) { return; }
    }
    ctx->pc = 0x51A6D4u;
label_51a6d4:
    // 0x51a6d4: 0xc146df8  jal         func_51B7E0
label_51a6d8:
    if (ctx->pc == 0x51A6D8u) {
        ctx->pc = 0x51A6D8u;
            // 0x51a6d8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x51A6DCu;
        goto label_51a6dc;
    }
    ctx->pc = 0x51A6D4u;
    SET_GPR_U32(ctx, 31, 0x51A6DCu);
    ctx->pc = 0x51A6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A6D4u;
            // 0x51a6d8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51B7E0u;
    if (runtime->hasFunction(0x51B7E0u)) {
        auto targetFn = runtime->lookupFunction(0x51B7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A6DCu; }
        if (ctx->pc != 0x51A6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051B7E0_0x51b7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A6DCu; }
        if (ctx->pc != 0x51A6DCu) { return; }
    }
    ctx->pc = 0x51A6DCu;
label_51a6dc:
    // 0x51a6dc: 0xc146d50  jal         func_51B540
label_51a6e0:
    if (ctx->pc == 0x51A6E0u) {
        ctx->pc = 0x51A6E0u;
            // 0x51a6e0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x51A6E4u;
        goto label_51a6e4;
    }
    ctx->pc = 0x51A6DCu;
    SET_GPR_U32(ctx, 31, 0x51A6E4u);
    ctx->pc = 0x51A6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A6DCu;
            // 0x51a6e0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51B540u;
    if (runtime->hasFunction(0x51B540u)) {
        auto targetFn = runtime->lookupFunction(0x51B540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A6E4u; }
        if (ctx->pc != 0x51A6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051B540_0x51b540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A6E4u; }
        if (ctx->pc != 0x51A6E4u) { return; }
    }
    ctx->pc = 0x51A6E4u;
label_51a6e4:
    // 0x51a6e4: 0xc0e0bc8  jal         func_382F20
label_51a6e8:
    if (ctx->pc == 0x51A6E8u) {
        ctx->pc = 0x51A6E8u;
            // 0x51a6e8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x51A6ECu;
        goto label_51a6ec;
    }
    ctx->pc = 0x51A6E4u;
    SET_GPR_U32(ctx, 31, 0x51A6ECu);
    ctx->pc = 0x51A6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A6E4u;
            // 0x51a6e8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382F20u;
    if (runtime->hasFunction(0x382F20u)) {
        auto targetFn = runtime->lookupFunction(0x382F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A6ECu; }
        if (ctx->pc != 0x51A6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382F20_0x382f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A6ECu; }
        if (ctx->pc != 0x51A6ECu) { return; }
    }
    ctx->pc = 0x51A6ECu;
label_51a6ec:
    // 0x51a6ec: 0xc0c8f7c  jal         func_323DF0
label_51a6f0:
    if (ctx->pc == 0x51A6F0u) {
        ctx->pc = 0x51A6F4u;
        goto label_51a6f4;
    }
    ctx->pc = 0x51A6ECu;
    SET_GPR_U32(ctx, 31, 0x51A6F4u);
    ctx->pc = 0x323DF0u;
    if (runtime->hasFunction(0x323DF0u)) {
        auto targetFn = runtime->lookupFunction(0x323DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A6F4u; }
        if (ctx->pc != 0x51A6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323DF0_0x323df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A6F4u; }
        if (ctx->pc != 0x51A6F4u) { return; }
    }
    ctx->pc = 0x51A6F4u;
label_51a6f4:
    // 0x51a6f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x51a6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51a6f8:
    // 0x51a6f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x51a6f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51a6fc:
    // 0x51a6fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x51a6fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51a700:
    // 0x51a700: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x51a700u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51a704:
    // 0x51a704: 0xc0fd020  jal         func_3F4080
label_51a708:
    if (ctx->pc == 0x51A708u) {
        ctx->pc = 0x51A708u;
            // 0x51a708: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51A70Cu;
        goto label_51a70c;
    }
    ctx->pc = 0x51A704u;
    SET_GPR_U32(ctx, 31, 0x51A70Cu);
    ctx->pc = 0x51A708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A704u;
            // 0x51a708: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4080u;
    if (runtime->hasFunction(0x3F4080u)) {
        auto targetFn = runtime->lookupFunction(0x3F4080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A70Cu; }
        if (ctx->pc != 0x51A70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4080_0x3f4080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A70Cu; }
        if (ctx->pc != 0x51A70Cu) { return; }
    }
    ctx->pc = 0x51A70Cu;
label_51a70c:
    // 0x51a70c: 0xc0c8f7c  jal         func_323DF0
label_51a710:
    if (ctx->pc == 0x51A710u) {
        ctx->pc = 0x51A714u;
        goto label_51a714;
    }
    ctx->pc = 0x51A70Cu;
    SET_GPR_U32(ctx, 31, 0x51A714u);
    ctx->pc = 0x323DF0u;
    if (runtime->hasFunction(0x323DF0u)) {
        auto targetFn = runtime->lookupFunction(0x323DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A714u; }
        if (ctx->pc != 0x51A714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323DF0_0x323df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A714u; }
        if (ctx->pc != 0x51A714u) { return; }
    }
    ctx->pc = 0x51A714u;
label_51a714:
    // 0x51a714: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x51a714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51a718:
    // 0x51a718: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x51a718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_51a71c:
    // 0x51a71c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x51a71cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51a720:
    // 0x51a720: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x51a720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51a724:
    // 0x51a724: 0xc0fd020  jal         func_3F4080
label_51a728:
    if (ctx->pc == 0x51A728u) {
        ctx->pc = 0x51A728u;
            // 0x51a728: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51A72Cu;
        goto label_51a72c;
    }
    ctx->pc = 0x51A724u;
    SET_GPR_U32(ctx, 31, 0x51A72Cu);
    ctx->pc = 0x51A728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A724u;
            // 0x51a728: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4080u;
    if (runtime->hasFunction(0x3F4080u)) {
        auto targetFn = runtime->lookupFunction(0x3F4080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A72Cu; }
        if (ctx->pc != 0x51A72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4080_0x3f4080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A72Cu; }
        if (ctx->pc != 0x51A72Cu) { return; }
    }
    ctx->pc = 0x51A72Cu;
label_51a72c:
    // 0x51a72c: 0xc0c8f7c  jal         func_323DF0
label_51a730:
    if (ctx->pc == 0x51A730u) {
        ctx->pc = 0x51A734u;
        goto label_51a734;
    }
    ctx->pc = 0x51A72Cu;
    SET_GPR_U32(ctx, 31, 0x51A734u);
    ctx->pc = 0x323DF0u;
    if (runtime->hasFunction(0x323DF0u)) {
        auto targetFn = runtime->lookupFunction(0x323DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A734u; }
        if (ctx->pc != 0x51A734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323DF0_0x323df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A734u; }
        if (ctx->pc != 0x51A734u) { return; }
    }
    ctx->pc = 0x51A734u;
label_51a734:
    // 0x51a734: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x51a734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51a738:
    // 0x51a738: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x51a738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_51a73c:
    // 0x51a73c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x51a73cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51a740:
    // 0x51a740: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x51a740u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51a744:
    // 0x51a744: 0xc0fd020  jal         func_3F4080
label_51a748:
    if (ctx->pc == 0x51A748u) {
        ctx->pc = 0x51A748u;
            // 0x51a748: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51A74Cu;
        goto label_51a74c;
    }
    ctx->pc = 0x51A744u;
    SET_GPR_U32(ctx, 31, 0x51A74Cu);
    ctx->pc = 0x51A748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A744u;
            // 0x51a748: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4080u;
    if (runtime->hasFunction(0x3F4080u)) {
        auto targetFn = runtime->lookupFunction(0x3F4080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A74Cu; }
        if (ctx->pc != 0x51A74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4080_0x3f4080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A74Cu; }
        if (ctx->pc != 0x51A74Cu) { return; }
    }
    ctx->pc = 0x51A74Cu;
label_51a74c:
    // 0x51a74c: 0x3c0400be  lui         $a0, 0xBE
    ctx->pc = 0x51a74cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)190 << 16));
label_51a750:
    // 0x51a750: 0xc146c60  jal         func_51B180
label_51a754:
    if (ctx->pc == 0x51A754u) {
        ctx->pc = 0x51A754u;
            // 0x51a754: 0x2484ab30  addiu       $a0, $a0, -0x54D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945584));
        ctx->pc = 0x51A758u;
        goto label_51a758;
    }
    ctx->pc = 0x51A750u;
    SET_GPR_U32(ctx, 31, 0x51A758u);
    ctx->pc = 0x51A754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A750u;
            // 0x51a754: 0x2484ab30  addiu       $a0, $a0, -0x54D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51B180u;
    if (runtime->hasFunction(0x51B180u)) {
        auto targetFn = runtime->lookupFunction(0x51B180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A758u; }
        if (ctx->pc != 0x51A758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051B180_0x51b180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A758u; }
        if (ctx->pc != 0x51A758u) { return; }
    }
    ctx->pc = 0x51A758u;
label_51a758:
    // 0x51a758: 0x3c0400be  lui         $a0, 0xBE
    ctx->pc = 0x51a758u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)190 << 16));
label_51a75c:
    // 0x51a75c: 0xc146b88  jal         func_51AE20
label_51a760:
    if (ctx->pc == 0x51A760u) {
        ctx->pc = 0x51A760u;
            // 0x51a760: 0x2484ab30  addiu       $a0, $a0, -0x54D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945584));
        ctx->pc = 0x51A764u;
        goto label_51a764;
    }
    ctx->pc = 0x51A75Cu;
    SET_GPR_U32(ctx, 31, 0x51A764u);
    ctx->pc = 0x51A760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A75Cu;
            // 0x51a760: 0x2484ab30  addiu       $a0, $a0, -0x54D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51AE20u;
    if (runtime->hasFunction(0x51AE20u)) {
        auto targetFn = runtime->lookupFunction(0x51AE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A764u; }
        if (ctx->pc != 0x51A764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051AE20_0x51ae20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A764u; }
        if (ctx->pc != 0x51A764u) { return; }
    }
    ctx->pc = 0x51A764u;
label_51a764:
    // 0x51a764: 0xc0aa47c  jal         func_2A91F0
label_51a768:
    if (ctx->pc == 0x51A768u) {
        ctx->pc = 0x51A768u;
            // 0x51a768: 0x27a400a4  addiu       $a0, $sp, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
        ctx->pc = 0x51A76Cu;
        goto label_51a76c;
    }
    ctx->pc = 0x51A764u;
    SET_GPR_U32(ctx, 31, 0x51A76Cu);
    ctx->pc = 0x51A768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A764u;
            // 0x51a768: 0x27a400a4  addiu       $a0, $sp, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A91F0u;
    if (runtime->hasFunction(0x2A91F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A91F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A76Cu; }
        if (ctx->pc != 0x51A76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A91F0_0x2a91f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A76Cu; }
        if (ctx->pc != 0x51A76Cu) { return; }
    }
    ctx->pc = 0x51A76Cu;
label_51a76c:
    // 0x51a76c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x51a76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_51a770:
    // 0x51a770: 0xc0e0bf4  jal         func_382FD0
label_51a774:
    if (ctx->pc == 0x51A774u) {
        ctx->pc = 0x51A774u;
            // 0x51a774: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x51A778u;
        goto label_51a778;
    }
    ctx->pc = 0x51A770u;
    SET_GPR_U32(ctx, 31, 0x51A778u);
    ctx->pc = 0x51A774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A770u;
            // 0x51a774: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382FD0u;
    if (runtime->hasFunction(0x382FD0u)) {
        auto targetFn = runtime->lookupFunction(0x382FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A778u; }
        if (ctx->pc != 0x51A778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382FD0_0x382fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A778u; }
        if (ctx->pc != 0x51A778u) { return; }
    }
    ctx->pc = 0x51A778u;
label_51a778:
    // 0x51a778: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x51a778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_51a77c:
    // 0x51a77c: 0xc146b58  jal         func_51AD60
label_51a780:
    if (ctx->pc == 0x51A780u) {
        ctx->pc = 0x51A780u;
            // 0x51a780: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x51A784u;
        goto label_51a784;
    }
    ctx->pc = 0x51A77Cu;
    SET_GPR_U32(ctx, 31, 0x51A784u);
    ctx->pc = 0x51A780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A77Cu;
            // 0x51a780: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51AD60u;
    if (runtime->hasFunction(0x51AD60u)) {
        auto targetFn = runtime->lookupFunction(0x51AD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A784u; }
        if (ctx->pc != 0x51A784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051AD60_0x51ad60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A784u; }
        if (ctx->pc != 0x51A784u) { return; }
    }
    ctx->pc = 0x51A784u;
label_51a784:
    // 0x51a784: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x51a784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_51a788:
    // 0x51a788: 0xc146b3c  jal         func_51ACF0
label_51a78c:
    if (ctx->pc == 0x51A78Cu) {
        ctx->pc = 0x51A78Cu;
            // 0x51a78c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x51A790u;
        goto label_51a790;
    }
    ctx->pc = 0x51A788u;
    SET_GPR_U32(ctx, 31, 0x51A790u);
    ctx->pc = 0x51A78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A788u;
            // 0x51a78c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51ACF0u;
    if (runtime->hasFunction(0x51ACF0u)) {
        auto targetFn = runtime->lookupFunction(0x51ACF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A790u; }
        if (ctx->pc != 0x51A790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051ACF0_0x51acf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A790u; }
        if (ctx->pc != 0x51A790u) { return; }
    }
    ctx->pc = 0x51A790u;
label_51a790:
    // 0x51a790: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x51a790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_51a794:
    // 0x51a794: 0xc0aa238  jal         func_2A88E0
label_51a798:
    if (ctx->pc == 0x51A798u) {
        ctx->pc = 0x51A798u;
            // 0x51a798: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x51A79Cu;
        goto label_51a79c;
    }
    ctx->pc = 0x51A794u;
    SET_GPR_U32(ctx, 31, 0x51A79Cu);
    ctx->pc = 0x51A798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A794u;
            // 0x51a798: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A88E0u;
    if (runtime->hasFunction(0x2A88E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A88E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A79Cu; }
        if (ctx->pc != 0x51A79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A88E0_0x2a88e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A79Cu; }
        if (ctx->pc != 0x51A79Cu) { return; }
    }
    ctx->pc = 0x51A79Cu;
label_51a79c:
    // 0x51a79c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x51a79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_51a7a0:
    // 0x51a7a0: 0xc0584ec  jal         func_1613B0
label_51a7a4:
    if (ctx->pc == 0x51A7A4u) {
        ctx->pc = 0x51A7A4u;
            // 0x51a7a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x51A7A8u;
        goto label_51a7a8;
    }
    ctx->pc = 0x51A7A0u;
    SET_GPR_U32(ctx, 31, 0x51A7A8u);
    ctx->pc = 0x51A7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A7A0u;
            // 0x51a7a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1613B0u;
    if (runtime->hasFunction(0x1613B0u)) {
        auto targetFn = runtime->lookupFunction(0x1613B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A7A8u; }
        if (ctx->pc != 0x51A7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001613B0_0x1613b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A7A8u; }
        if (ctx->pc != 0x51A7A8u) { return; }
    }
    ctx->pc = 0x51A7A8u;
label_51a7a8:
    // 0x51a7a8: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x51a7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_51a7ac:
    // 0x51a7ac: 0xc0a96ac  jal         func_2A5AB0
label_51a7b0:
    if (ctx->pc == 0x51A7B0u) {
        ctx->pc = 0x51A7B0u;
            // 0x51a7b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x51A7B4u;
        goto label_51a7b4;
    }
    ctx->pc = 0x51A7ACu;
    SET_GPR_U32(ctx, 31, 0x51A7B4u);
    ctx->pc = 0x51A7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A7ACu;
            // 0x51a7b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5AB0u;
    if (runtime->hasFunction(0x2A5AB0u)) {
        auto targetFn = runtime->lookupFunction(0x2A5AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A7B4u; }
        if (ctx->pc != 0x51A7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A5AB0_0x2a5ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A7B4u; }
        if (ctx->pc != 0x51A7B4u) { return; }
    }
    ctx->pc = 0x51A7B4u;
label_51a7b4:
    // 0x51a7b4: 0x27a402f0  addiu       $a0, $sp, 0x2F0
    ctx->pc = 0x51a7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_51a7b8:
    // 0x51a7b8: 0xc146ae8  jal         func_51ABA0
label_51a7bc:
    if (ctx->pc == 0x51A7BCu) {
        ctx->pc = 0x51A7BCu;
            // 0x51a7bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x51A7C0u;
        goto label_51a7c0;
    }
    ctx->pc = 0x51A7B8u;
    SET_GPR_U32(ctx, 31, 0x51A7C0u);
    ctx->pc = 0x51A7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A7B8u;
            // 0x51a7bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51ABA0u;
    if (runtime->hasFunction(0x51ABA0u)) {
        auto targetFn = runtime->lookupFunction(0x51ABA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A7C0u; }
        if (ctx->pc != 0x51A7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051ABA0_0x51aba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A7C0u; }
        if (ctx->pc != 0x51A7C0u) { return; }
    }
    ctx->pc = 0x51A7C0u;
label_51a7c0:
    // 0x51a7c0: 0x3c0400be  lui         $a0, 0xBE
    ctx->pc = 0x51a7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)190 << 16));
label_51a7c4:
    // 0x51a7c4: 0xc146ae4  jal         func_51AB90
label_51a7c8:
    if (ctx->pc == 0x51A7C8u) {
        ctx->pc = 0x51A7C8u;
            // 0x51a7c8: 0x2484ab30  addiu       $a0, $a0, -0x54D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945584));
        ctx->pc = 0x51A7CCu;
        goto label_51a7cc;
    }
    ctx->pc = 0x51A7C4u;
    SET_GPR_U32(ctx, 31, 0x51A7CCu);
    ctx->pc = 0x51A7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A7C4u;
            // 0x51a7c8: 0x2484ab30  addiu       $a0, $a0, -0x54D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51AB90u;
    if (runtime->hasFunction(0x51AB90u)) {
        auto targetFn = runtime->lookupFunction(0x51AB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A7CCu; }
        if (ctx->pc != 0x51A7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051AB90_0x51ab90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A7CCu; }
        if (ctx->pc != 0x51A7CCu) { return; }
    }
    ctx->pc = 0x51A7CCu;
label_51a7cc:
    // 0x51a7cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x51a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_51a7d0:
    // 0x51a7d0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_51a7d4:
    if (ctx->pc == 0x51A7D4u) {
        ctx->pc = 0x51A7D8u;
        goto label_51a7d8;
    }
    ctx->pc = 0x51A7D0u;
    {
        const bool branch_taken_0x51a7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51a7d0) {
            ctx->pc = 0x51A810u;
            goto label_51a810;
        }
    }
    ctx->pc = 0x51A7D8u;
label_51a7d8:
    // 0x51a7d8: 0xc0aab8c  jal         func_2AAE30
label_51a7dc:
    if (ctx->pc == 0x51A7DCu) {
        ctx->pc = 0x51A7E0u;
        goto label_51a7e0;
    }
    ctx->pc = 0x51A7D8u;
    SET_GPR_U32(ctx, 31, 0x51A7E0u);
    ctx->pc = 0x2AAE30u;
    if (runtime->hasFunction(0x2AAE30u)) {
        auto targetFn = runtime->lookupFunction(0x2AAE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A7E0u; }
        if (ctx->pc != 0x51A7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AAE30_0x2aae30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A7E0u; }
        if (ctx->pc != 0x51A7E0u) { return; }
    }
    ctx->pc = 0x51A7E0u;
label_51a7e0:
    // 0x51a7e0: 0x3c0400be  lui         $a0, 0xBE
    ctx->pc = 0x51a7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)190 << 16));
label_51a7e4:
    // 0x51a7e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x51a7e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51a7e8:
    // 0x51a7e8: 0xc146ae4  jal         func_51AB90
label_51a7ec:
    if (ctx->pc == 0x51A7ECu) {
        ctx->pc = 0x51A7ECu;
            // 0x51a7ec: 0x2484ab30  addiu       $a0, $a0, -0x54D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945584));
        ctx->pc = 0x51A7F0u;
        goto label_51a7f0;
    }
    ctx->pc = 0x51A7E8u;
    SET_GPR_U32(ctx, 31, 0x51A7F0u);
    ctx->pc = 0x51A7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A7E8u;
            // 0x51a7ec: 0x2484ab30  addiu       $a0, $a0, -0x54D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51AB90u;
    if (runtime->hasFunction(0x51AB90u)) {
        auto targetFn = runtime->lookupFunction(0x51AB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A7F0u; }
        if (ctx->pc != 0x51A7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051AB90_0x51ab90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A7F0u; }
        if (ctx->pc != 0x51A7F0u) { return; }
    }
    ctx->pc = 0x51A7F0u;
label_51a7f0:
    // 0x51a7f0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x51a7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_51a7f4:
    // 0x51a7f4: 0xc0fe404  jal         func_3F9010
label_51a7f8:
    if (ctx->pc == 0x51A7F8u) {
        ctx->pc = 0x51A7F8u;
            // 0x51a7f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51A7FCu;
        goto label_51a7fc;
    }
    ctx->pc = 0x51A7F4u;
    SET_GPR_U32(ctx, 31, 0x51A7FCu);
    ctx->pc = 0x51A7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A7F4u;
            // 0x51a7f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9010u;
    if (runtime->hasFunction(0x3F9010u)) {
        auto targetFn = runtime->lookupFunction(0x3F9010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A7FCu; }
        if (ctx->pc != 0x51A7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9010_0x3f9010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A7FCu; }
        if (ctx->pc != 0x51A7FCu) { return; }
    }
    ctx->pc = 0x51A7FCu;
label_51a7fc:
    // 0x51a7fc: 0x3c0400be  lui         $a0, 0xBE
    ctx->pc = 0x51a7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)190 << 16));
label_51a800:
    // 0x51a800: 0xc146ae4  jal         func_51AB90
label_51a804:
    if (ctx->pc == 0x51A804u) {
        ctx->pc = 0x51A804u;
            // 0x51a804: 0x2484ab30  addiu       $a0, $a0, -0x54D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945584));
        ctx->pc = 0x51A808u;
        goto label_51a808;
    }
    ctx->pc = 0x51A800u;
    SET_GPR_U32(ctx, 31, 0x51A808u);
    ctx->pc = 0x51A804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A800u;
            // 0x51a804: 0x2484ab30  addiu       $a0, $a0, -0x54D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51AB90u;
    if (runtime->hasFunction(0x51AB90u)) {
        auto targetFn = runtime->lookupFunction(0x51AB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A808u; }
        if (ctx->pc != 0x51A808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051AB90_0x51ab90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A808u; }
        if (ctx->pc != 0x51A808u) { return; }
    }
    ctx->pc = 0x51A808u;
label_51a808:
    // 0x51a808: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x51a808u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_51a80c:
    // 0x51a80c: 0x0  nop
    ctx->pc = 0x51a80cu;
    // NOP
label_51a810:
    // 0x51a810: 0xc0b6e84  jal         func_2DBA10
label_51a814:
    if (ctx->pc == 0x51A814u) {
        ctx->pc = 0x51A818u;
        goto label_51a818;
    }
    ctx->pc = 0x51A810u;
    SET_GPR_U32(ctx, 31, 0x51A818u);
    ctx->pc = 0x2DBA10u;
    if (runtime->hasFunction(0x2DBA10u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A818u; }
        if (ctx->pc != 0x51A818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA10_0x2dba10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A818u; }
        if (ctx->pc != 0x51A818u) { return; }
    }
    ctx->pc = 0x51A818u;
label_51a818:
    // 0x51a818: 0xc078a2c  jal         func_1E28B0
label_51a81c:
    if (ctx->pc == 0x51A81Cu) {
        ctx->pc = 0x51A81Cu;
            // 0x51a81c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51A820u;
        goto label_51a820;
    }
    ctx->pc = 0x51A818u;
    SET_GPR_U32(ctx, 31, 0x51A820u);
    ctx->pc = 0x51A81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A818u;
            // 0x51a81c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E28B0u;
    if (runtime->hasFunction(0x1E28B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E28B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A820u; }
        if (ctx->pc != 0x51A820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E28B0_0x1e28b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A820u; }
        if (ctx->pc != 0x51A820u) { return; }
    }
    ctx->pc = 0x51A820u;
label_51a820:
    // 0x51a820: 0x3c0400be  lui         $a0, 0xBE
    ctx->pc = 0x51a820u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)190 << 16));
label_51a824:
    // 0x51a824: 0xc146a74  jal         func_51A9D0
label_51a828:
    if (ctx->pc == 0x51A828u) {
        ctx->pc = 0x51A828u;
            // 0x51a828: 0x2484ab30  addiu       $a0, $a0, -0x54D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945584));
        ctx->pc = 0x51A82Cu;
        goto label_51a82c;
    }
    ctx->pc = 0x51A824u;
    SET_GPR_U32(ctx, 31, 0x51A82Cu);
    ctx->pc = 0x51A828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A824u;
            // 0x51a828: 0x2484ab30  addiu       $a0, $a0, -0x54D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51A9D0u;
    if (runtime->hasFunction(0x51A9D0u)) {
        auto targetFn = runtime->lookupFunction(0x51A9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A82Cu; }
        if (ctx->pc != 0x51A82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051A9D0_0x51a9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A82Cu; }
        if (ctx->pc != 0x51A82Cu) { return; }
    }
    ctx->pc = 0x51A82Cu;
label_51a82c:
    // 0x51a82c: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x51a82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_51a830:
    // 0x51a830: 0xc146a70  jal         func_51A9C0
label_51a834:
    if (ctx->pc == 0x51A834u) {
        ctx->pc = 0x51A834u;
            // 0x51a834: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x51A838u;
        goto label_51a838;
    }
    ctx->pc = 0x51A830u;
    SET_GPR_U32(ctx, 31, 0x51A838u);
    ctx->pc = 0x51A834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A830u;
            // 0x51a834: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51A9C0u;
    if (runtime->hasFunction(0x51A9C0u)) {
        auto targetFn = runtime->lookupFunction(0x51A9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A838u; }
        if (ctx->pc != 0x51A838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051A9C0_0x51a9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A838u; }
        if (ctx->pc != 0x51A838u) { return; }
    }
    ctx->pc = 0x51A838u;
label_51a838:
    // 0x51a838: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x51a838u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_51a83c:
    // 0x51a83c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x51a83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_51a840:
    // 0x51a840: 0x5440ff8d  bnel        $v0, $zero, . + 4 + (-0x73 << 2)
label_51a844:
    if (ctx->pc == 0x51A844u) {
        ctx->pc = 0x51A844u;
            // 0x51a844: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x51A848u;
        goto label_51a848;
    }
    ctx->pc = 0x51A840u;
    {
        const bool branch_taken_0x51a840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x51a840) {
            ctx->pc = 0x51A844u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51A840u;
            // 0x51a844: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51A678u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_51a678;
        }
    }
    ctx->pc = 0x51A848u;
label_51a848:
    // 0x51a848: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x51a848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_51a84c:
    // 0x51a84c: 0xc146a24  jal         func_51A890
label_51a850:
    if (ctx->pc == 0x51A850u) {
        ctx->pc = 0x51A850u;
            // 0x51a850: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x51A854u;
        goto label_51a854;
    }
    ctx->pc = 0x51A84Cu;
    SET_GPR_U32(ctx, 31, 0x51A854u);
    ctx->pc = 0x51A850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A84Cu;
            // 0x51a850: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51A890u;
    if (runtime->hasFunction(0x51A890u)) {
        auto targetFn = runtime->lookupFunction(0x51A890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A854u; }
        if (ctx->pc != 0x51A854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051A890_0x51a890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A854u; }
        if (ctx->pc != 0x51A854u) { return; }
    }
    ctx->pc = 0x51A854u;
label_51a854:
    // 0x51a854: 0x27a40340  addiu       $a0, $sp, 0x340
    ctx->pc = 0x51a854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_51a858:
    // 0x51a858: 0xc14d68c  jal         func_535A30
label_51a85c:
    if (ctx->pc == 0x51A85Cu) {
        ctx->pc = 0x51A85Cu;
            // 0x51a85c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x51A860u;
        goto label_51a860;
    }
    ctx->pc = 0x51A858u;
    SET_GPR_U32(ctx, 31, 0x51A860u);
    ctx->pc = 0x51A85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A858u;
            // 0x51a85c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x535A30u;
    if (runtime->hasFunction(0x535A30u)) {
        auto targetFn = runtime->lookupFunction(0x535A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A860u; }
        if (ctx->pc != 0x51A860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00535A30_0x535a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A860u; }
        if (ctx->pc != 0x51A860u) { return; }
    }
    ctx->pc = 0x51A860u;
label_51a860:
    // 0x51a860: 0x27a40b10  addiu       $a0, $sp, 0xB10
    ctx->pc = 0x51a860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2832));
label_51a864:
    // 0x51a864: 0xc0fe620  jal         func_3F9880
label_51a868:
    if (ctx->pc == 0x51A868u) {
        ctx->pc = 0x51A868u;
            // 0x51a868: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x51A86Cu;
        goto label_51a86c;
    }
    ctx->pc = 0x51A864u;
    SET_GPR_U32(ctx, 31, 0x51A86Cu);
    ctx->pc = 0x51A868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A864u;
            // 0x51a868: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9880u;
    if (runtime->hasFunction(0x3F9880u)) {
        auto targetFn = runtime->lookupFunction(0x3F9880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A86Cu; }
        if (ctx->pc != 0x51A86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9880_0x3f9880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A86Cu; }
        if (ctx->pc != 0x51A86Cu) { return; }
    }
    ctx->pc = 0x51A86Cu;
label_51a86c:
    // 0x51a86c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x51a86cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_51a870:
    // 0x51a870: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x51a870u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_51a874:
    // 0x51a874: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51a874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_51a878:
    // 0x51a878: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51a878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_51a87c:
    // 0x51a87c: 0x3e00008  jr          $ra
label_51a880:
    if (ctx->pc == 0x51A880u) {
        ctx->pc = 0x51A880u;
            // 0x51a880: 0x27bd0b40  addiu       $sp, $sp, 0xB40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2880));
        ctx->pc = 0x51A884u;
        goto label_51a884;
    }
    ctx->pc = 0x51A87Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51A880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51A87Cu;
            // 0x51a880: 0x27bd0b40  addiu       $sp, $sp, 0xB40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2880));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51A884u;
label_51a884:
    // 0x51a884: 0x0  nop
    ctx->pc = 0x51a884u;
    // NOP
label_51a888:
    // 0x51a888: 0x0  nop
    ctx->pc = 0x51a888u;
    // NOP
label_51a88c:
    // 0x51a88c: 0x0  nop
    ctx->pc = 0x51a88cu;
    // NOP
}
