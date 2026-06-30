#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0044B3C0
// Address: 0x44b3c0 - 0x44b8c0
void sub_0044B3C0_0x44b3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044B3C0_0x44b3c0");
#endif

    switch (ctx->pc) {
        case 0x44b3c0u: goto label_44b3c0;
        case 0x44b3c4u: goto label_44b3c4;
        case 0x44b3c8u: goto label_44b3c8;
        case 0x44b3ccu: goto label_44b3cc;
        case 0x44b3d0u: goto label_44b3d0;
        case 0x44b3d4u: goto label_44b3d4;
        case 0x44b3d8u: goto label_44b3d8;
        case 0x44b3dcu: goto label_44b3dc;
        case 0x44b3e0u: goto label_44b3e0;
        case 0x44b3e4u: goto label_44b3e4;
        case 0x44b3e8u: goto label_44b3e8;
        case 0x44b3ecu: goto label_44b3ec;
        case 0x44b3f0u: goto label_44b3f0;
        case 0x44b3f4u: goto label_44b3f4;
        case 0x44b3f8u: goto label_44b3f8;
        case 0x44b3fcu: goto label_44b3fc;
        case 0x44b400u: goto label_44b400;
        case 0x44b404u: goto label_44b404;
        case 0x44b408u: goto label_44b408;
        case 0x44b40cu: goto label_44b40c;
        case 0x44b410u: goto label_44b410;
        case 0x44b414u: goto label_44b414;
        case 0x44b418u: goto label_44b418;
        case 0x44b41cu: goto label_44b41c;
        case 0x44b420u: goto label_44b420;
        case 0x44b424u: goto label_44b424;
        case 0x44b428u: goto label_44b428;
        case 0x44b42cu: goto label_44b42c;
        case 0x44b430u: goto label_44b430;
        case 0x44b434u: goto label_44b434;
        case 0x44b438u: goto label_44b438;
        case 0x44b43cu: goto label_44b43c;
        case 0x44b440u: goto label_44b440;
        case 0x44b444u: goto label_44b444;
        case 0x44b448u: goto label_44b448;
        case 0x44b44cu: goto label_44b44c;
        case 0x44b450u: goto label_44b450;
        case 0x44b454u: goto label_44b454;
        case 0x44b458u: goto label_44b458;
        case 0x44b45cu: goto label_44b45c;
        case 0x44b460u: goto label_44b460;
        case 0x44b464u: goto label_44b464;
        case 0x44b468u: goto label_44b468;
        case 0x44b46cu: goto label_44b46c;
        case 0x44b470u: goto label_44b470;
        case 0x44b474u: goto label_44b474;
        case 0x44b478u: goto label_44b478;
        case 0x44b47cu: goto label_44b47c;
        case 0x44b480u: goto label_44b480;
        case 0x44b484u: goto label_44b484;
        case 0x44b488u: goto label_44b488;
        case 0x44b48cu: goto label_44b48c;
        case 0x44b490u: goto label_44b490;
        case 0x44b494u: goto label_44b494;
        case 0x44b498u: goto label_44b498;
        case 0x44b49cu: goto label_44b49c;
        case 0x44b4a0u: goto label_44b4a0;
        case 0x44b4a4u: goto label_44b4a4;
        case 0x44b4a8u: goto label_44b4a8;
        case 0x44b4acu: goto label_44b4ac;
        case 0x44b4b0u: goto label_44b4b0;
        case 0x44b4b4u: goto label_44b4b4;
        case 0x44b4b8u: goto label_44b4b8;
        case 0x44b4bcu: goto label_44b4bc;
        case 0x44b4c0u: goto label_44b4c0;
        case 0x44b4c4u: goto label_44b4c4;
        case 0x44b4c8u: goto label_44b4c8;
        case 0x44b4ccu: goto label_44b4cc;
        case 0x44b4d0u: goto label_44b4d0;
        case 0x44b4d4u: goto label_44b4d4;
        case 0x44b4d8u: goto label_44b4d8;
        case 0x44b4dcu: goto label_44b4dc;
        case 0x44b4e0u: goto label_44b4e0;
        case 0x44b4e4u: goto label_44b4e4;
        case 0x44b4e8u: goto label_44b4e8;
        case 0x44b4ecu: goto label_44b4ec;
        case 0x44b4f0u: goto label_44b4f0;
        case 0x44b4f4u: goto label_44b4f4;
        case 0x44b4f8u: goto label_44b4f8;
        case 0x44b4fcu: goto label_44b4fc;
        case 0x44b500u: goto label_44b500;
        case 0x44b504u: goto label_44b504;
        case 0x44b508u: goto label_44b508;
        case 0x44b50cu: goto label_44b50c;
        case 0x44b510u: goto label_44b510;
        case 0x44b514u: goto label_44b514;
        case 0x44b518u: goto label_44b518;
        case 0x44b51cu: goto label_44b51c;
        case 0x44b520u: goto label_44b520;
        case 0x44b524u: goto label_44b524;
        case 0x44b528u: goto label_44b528;
        case 0x44b52cu: goto label_44b52c;
        case 0x44b530u: goto label_44b530;
        case 0x44b534u: goto label_44b534;
        case 0x44b538u: goto label_44b538;
        case 0x44b53cu: goto label_44b53c;
        case 0x44b540u: goto label_44b540;
        case 0x44b544u: goto label_44b544;
        case 0x44b548u: goto label_44b548;
        case 0x44b54cu: goto label_44b54c;
        case 0x44b550u: goto label_44b550;
        case 0x44b554u: goto label_44b554;
        case 0x44b558u: goto label_44b558;
        case 0x44b55cu: goto label_44b55c;
        case 0x44b560u: goto label_44b560;
        case 0x44b564u: goto label_44b564;
        case 0x44b568u: goto label_44b568;
        case 0x44b56cu: goto label_44b56c;
        case 0x44b570u: goto label_44b570;
        case 0x44b574u: goto label_44b574;
        case 0x44b578u: goto label_44b578;
        case 0x44b57cu: goto label_44b57c;
        case 0x44b580u: goto label_44b580;
        case 0x44b584u: goto label_44b584;
        case 0x44b588u: goto label_44b588;
        case 0x44b58cu: goto label_44b58c;
        case 0x44b590u: goto label_44b590;
        case 0x44b594u: goto label_44b594;
        case 0x44b598u: goto label_44b598;
        case 0x44b59cu: goto label_44b59c;
        case 0x44b5a0u: goto label_44b5a0;
        case 0x44b5a4u: goto label_44b5a4;
        case 0x44b5a8u: goto label_44b5a8;
        case 0x44b5acu: goto label_44b5ac;
        case 0x44b5b0u: goto label_44b5b0;
        case 0x44b5b4u: goto label_44b5b4;
        case 0x44b5b8u: goto label_44b5b8;
        case 0x44b5bcu: goto label_44b5bc;
        case 0x44b5c0u: goto label_44b5c0;
        case 0x44b5c4u: goto label_44b5c4;
        case 0x44b5c8u: goto label_44b5c8;
        case 0x44b5ccu: goto label_44b5cc;
        case 0x44b5d0u: goto label_44b5d0;
        case 0x44b5d4u: goto label_44b5d4;
        case 0x44b5d8u: goto label_44b5d8;
        case 0x44b5dcu: goto label_44b5dc;
        case 0x44b5e0u: goto label_44b5e0;
        case 0x44b5e4u: goto label_44b5e4;
        case 0x44b5e8u: goto label_44b5e8;
        case 0x44b5ecu: goto label_44b5ec;
        case 0x44b5f0u: goto label_44b5f0;
        case 0x44b5f4u: goto label_44b5f4;
        case 0x44b5f8u: goto label_44b5f8;
        case 0x44b5fcu: goto label_44b5fc;
        case 0x44b600u: goto label_44b600;
        case 0x44b604u: goto label_44b604;
        case 0x44b608u: goto label_44b608;
        case 0x44b60cu: goto label_44b60c;
        case 0x44b610u: goto label_44b610;
        case 0x44b614u: goto label_44b614;
        case 0x44b618u: goto label_44b618;
        case 0x44b61cu: goto label_44b61c;
        case 0x44b620u: goto label_44b620;
        case 0x44b624u: goto label_44b624;
        case 0x44b628u: goto label_44b628;
        case 0x44b62cu: goto label_44b62c;
        case 0x44b630u: goto label_44b630;
        case 0x44b634u: goto label_44b634;
        case 0x44b638u: goto label_44b638;
        case 0x44b63cu: goto label_44b63c;
        case 0x44b640u: goto label_44b640;
        case 0x44b644u: goto label_44b644;
        case 0x44b648u: goto label_44b648;
        case 0x44b64cu: goto label_44b64c;
        case 0x44b650u: goto label_44b650;
        case 0x44b654u: goto label_44b654;
        case 0x44b658u: goto label_44b658;
        case 0x44b65cu: goto label_44b65c;
        case 0x44b660u: goto label_44b660;
        case 0x44b664u: goto label_44b664;
        case 0x44b668u: goto label_44b668;
        case 0x44b66cu: goto label_44b66c;
        case 0x44b670u: goto label_44b670;
        case 0x44b674u: goto label_44b674;
        case 0x44b678u: goto label_44b678;
        case 0x44b67cu: goto label_44b67c;
        case 0x44b680u: goto label_44b680;
        case 0x44b684u: goto label_44b684;
        case 0x44b688u: goto label_44b688;
        case 0x44b68cu: goto label_44b68c;
        case 0x44b690u: goto label_44b690;
        case 0x44b694u: goto label_44b694;
        case 0x44b698u: goto label_44b698;
        case 0x44b69cu: goto label_44b69c;
        case 0x44b6a0u: goto label_44b6a0;
        case 0x44b6a4u: goto label_44b6a4;
        case 0x44b6a8u: goto label_44b6a8;
        case 0x44b6acu: goto label_44b6ac;
        case 0x44b6b0u: goto label_44b6b0;
        case 0x44b6b4u: goto label_44b6b4;
        case 0x44b6b8u: goto label_44b6b8;
        case 0x44b6bcu: goto label_44b6bc;
        case 0x44b6c0u: goto label_44b6c0;
        case 0x44b6c4u: goto label_44b6c4;
        case 0x44b6c8u: goto label_44b6c8;
        case 0x44b6ccu: goto label_44b6cc;
        case 0x44b6d0u: goto label_44b6d0;
        case 0x44b6d4u: goto label_44b6d4;
        case 0x44b6d8u: goto label_44b6d8;
        case 0x44b6dcu: goto label_44b6dc;
        case 0x44b6e0u: goto label_44b6e0;
        case 0x44b6e4u: goto label_44b6e4;
        case 0x44b6e8u: goto label_44b6e8;
        case 0x44b6ecu: goto label_44b6ec;
        case 0x44b6f0u: goto label_44b6f0;
        case 0x44b6f4u: goto label_44b6f4;
        case 0x44b6f8u: goto label_44b6f8;
        case 0x44b6fcu: goto label_44b6fc;
        case 0x44b700u: goto label_44b700;
        case 0x44b704u: goto label_44b704;
        case 0x44b708u: goto label_44b708;
        case 0x44b70cu: goto label_44b70c;
        case 0x44b710u: goto label_44b710;
        case 0x44b714u: goto label_44b714;
        case 0x44b718u: goto label_44b718;
        case 0x44b71cu: goto label_44b71c;
        case 0x44b720u: goto label_44b720;
        case 0x44b724u: goto label_44b724;
        case 0x44b728u: goto label_44b728;
        case 0x44b72cu: goto label_44b72c;
        case 0x44b730u: goto label_44b730;
        case 0x44b734u: goto label_44b734;
        case 0x44b738u: goto label_44b738;
        case 0x44b73cu: goto label_44b73c;
        case 0x44b740u: goto label_44b740;
        case 0x44b744u: goto label_44b744;
        case 0x44b748u: goto label_44b748;
        case 0x44b74cu: goto label_44b74c;
        case 0x44b750u: goto label_44b750;
        case 0x44b754u: goto label_44b754;
        case 0x44b758u: goto label_44b758;
        case 0x44b75cu: goto label_44b75c;
        case 0x44b760u: goto label_44b760;
        case 0x44b764u: goto label_44b764;
        case 0x44b768u: goto label_44b768;
        case 0x44b76cu: goto label_44b76c;
        case 0x44b770u: goto label_44b770;
        case 0x44b774u: goto label_44b774;
        case 0x44b778u: goto label_44b778;
        case 0x44b77cu: goto label_44b77c;
        case 0x44b780u: goto label_44b780;
        case 0x44b784u: goto label_44b784;
        case 0x44b788u: goto label_44b788;
        case 0x44b78cu: goto label_44b78c;
        case 0x44b790u: goto label_44b790;
        case 0x44b794u: goto label_44b794;
        case 0x44b798u: goto label_44b798;
        case 0x44b79cu: goto label_44b79c;
        case 0x44b7a0u: goto label_44b7a0;
        case 0x44b7a4u: goto label_44b7a4;
        case 0x44b7a8u: goto label_44b7a8;
        case 0x44b7acu: goto label_44b7ac;
        case 0x44b7b0u: goto label_44b7b0;
        case 0x44b7b4u: goto label_44b7b4;
        case 0x44b7b8u: goto label_44b7b8;
        case 0x44b7bcu: goto label_44b7bc;
        case 0x44b7c0u: goto label_44b7c0;
        case 0x44b7c4u: goto label_44b7c4;
        case 0x44b7c8u: goto label_44b7c8;
        case 0x44b7ccu: goto label_44b7cc;
        case 0x44b7d0u: goto label_44b7d0;
        case 0x44b7d4u: goto label_44b7d4;
        case 0x44b7d8u: goto label_44b7d8;
        case 0x44b7dcu: goto label_44b7dc;
        case 0x44b7e0u: goto label_44b7e0;
        case 0x44b7e4u: goto label_44b7e4;
        case 0x44b7e8u: goto label_44b7e8;
        case 0x44b7ecu: goto label_44b7ec;
        case 0x44b7f0u: goto label_44b7f0;
        case 0x44b7f4u: goto label_44b7f4;
        case 0x44b7f8u: goto label_44b7f8;
        case 0x44b7fcu: goto label_44b7fc;
        case 0x44b800u: goto label_44b800;
        case 0x44b804u: goto label_44b804;
        case 0x44b808u: goto label_44b808;
        case 0x44b80cu: goto label_44b80c;
        case 0x44b810u: goto label_44b810;
        case 0x44b814u: goto label_44b814;
        case 0x44b818u: goto label_44b818;
        case 0x44b81cu: goto label_44b81c;
        case 0x44b820u: goto label_44b820;
        case 0x44b824u: goto label_44b824;
        case 0x44b828u: goto label_44b828;
        case 0x44b82cu: goto label_44b82c;
        case 0x44b830u: goto label_44b830;
        case 0x44b834u: goto label_44b834;
        case 0x44b838u: goto label_44b838;
        case 0x44b83cu: goto label_44b83c;
        case 0x44b840u: goto label_44b840;
        case 0x44b844u: goto label_44b844;
        case 0x44b848u: goto label_44b848;
        case 0x44b84cu: goto label_44b84c;
        case 0x44b850u: goto label_44b850;
        case 0x44b854u: goto label_44b854;
        case 0x44b858u: goto label_44b858;
        case 0x44b85cu: goto label_44b85c;
        case 0x44b860u: goto label_44b860;
        case 0x44b864u: goto label_44b864;
        case 0x44b868u: goto label_44b868;
        case 0x44b86cu: goto label_44b86c;
        case 0x44b870u: goto label_44b870;
        case 0x44b874u: goto label_44b874;
        case 0x44b878u: goto label_44b878;
        case 0x44b87cu: goto label_44b87c;
        case 0x44b880u: goto label_44b880;
        case 0x44b884u: goto label_44b884;
        case 0x44b888u: goto label_44b888;
        case 0x44b88cu: goto label_44b88c;
        case 0x44b890u: goto label_44b890;
        case 0x44b894u: goto label_44b894;
        case 0x44b898u: goto label_44b898;
        case 0x44b89cu: goto label_44b89c;
        case 0x44b8a0u: goto label_44b8a0;
        case 0x44b8a4u: goto label_44b8a4;
        case 0x44b8a8u: goto label_44b8a8;
        case 0x44b8acu: goto label_44b8ac;
        case 0x44b8b0u: goto label_44b8b0;
        case 0x44b8b4u: goto label_44b8b4;
        case 0x44b8b8u: goto label_44b8b8;
        case 0x44b8bcu: goto label_44b8bc;
        default: break;
    }

    ctx->pc = 0x44b3c0u;

label_44b3c0:
    // 0x44b3c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44b3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_44b3c4:
    // 0x44b3c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x44b3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_44b3c8:
    // 0x44b3c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44b3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44b3cc:
    // 0x44b3cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44b3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44b3d0:
    // 0x44b3d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x44b3d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44b3d4:
    // 0x44b3d4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_44b3d8:
    if (ctx->pc == 0x44B3D8u) {
        ctx->pc = 0x44B3D8u;
            // 0x44b3d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44B3DCu;
        goto label_44b3dc;
    }
    ctx->pc = 0x44B3D4u;
    {
        const bool branch_taken_0x44b3d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44B3D4u;
            // 0x44b3d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b3d4) {
            ctx->pc = 0x44B508u;
            goto label_44b508;
        }
    }
    ctx->pc = 0x44B3DCu;
label_44b3dc:
    // 0x44b3dc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44b3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_44b3e0:
    // 0x44b3e0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x44b3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_44b3e4:
    // 0x44b3e4: 0x2463d970  addiu       $v1, $v1, -0x2690
    ctx->pc = 0x44b3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957424));
label_44b3e8:
    // 0x44b3e8: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x44b3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_44b3ec:
    // 0x44b3ec: 0x2442d9a8  addiu       $v0, $v0, -0x2658
    ctx->pc = 0x44b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957480));
label_44b3f0:
    // 0x44b3f0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x44b3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_44b3f4:
    // 0x44b3f4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x44b3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_44b3f8:
    // 0x44b3f8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x44b3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_44b3fc:
    // 0x44b3fc: 0xc0407c0  jal         func_101F00
label_44b400:
    if (ctx->pc == 0x44B400u) {
        ctx->pc = 0x44B400u;
            // 0x44b400: 0x24a5b520  addiu       $a1, $a1, -0x4AE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948128));
        ctx->pc = 0x44B404u;
        goto label_44b404;
    }
    ctx->pc = 0x44B3FCu;
    SET_GPR_U32(ctx, 31, 0x44B404u);
    ctx->pc = 0x44B400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44B3FCu;
            // 0x44b400: 0x24a5b520  addiu       $a1, $a1, -0x4AE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B404u; }
        if (ctx->pc != 0x44B404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B404u; }
        if (ctx->pc != 0x44B404u) { return; }
    }
    ctx->pc = 0x44B404u;
label_44b404:
    // 0x44b404: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x44b404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_44b408:
    // 0x44b408: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_44b40c:
    if (ctx->pc == 0x44B40Cu) {
        ctx->pc = 0x44B40Cu;
            // 0x44b40c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x44B410u;
        goto label_44b410;
    }
    ctx->pc = 0x44B408u;
    {
        const bool branch_taken_0x44b408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44b408) {
            ctx->pc = 0x44B40Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44B408u;
            // 0x44b40c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44B41Cu;
            goto label_44b41c;
        }
    }
    ctx->pc = 0x44B410u;
label_44b410:
    // 0x44b410: 0xc07507c  jal         func_1D41F0
label_44b414:
    if (ctx->pc == 0x44B414u) {
        ctx->pc = 0x44B414u;
            // 0x44b414: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x44B418u;
        goto label_44b418;
    }
    ctx->pc = 0x44B410u;
    SET_GPR_U32(ctx, 31, 0x44B418u);
    ctx->pc = 0x44B414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44B410u;
            // 0x44b414: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B418u; }
        if (ctx->pc != 0x44B418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B418u; }
        if (ctx->pc != 0x44B418u) { return; }
    }
    ctx->pc = 0x44B418u;
label_44b418:
    // 0x44b418: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x44b418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_44b41c:
    // 0x44b41c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_44b420:
    if (ctx->pc == 0x44B420u) {
        ctx->pc = 0x44B420u;
            // 0x44b420: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x44B424u;
        goto label_44b424;
    }
    ctx->pc = 0x44B41Cu;
    {
        const bool branch_taken_0x44b41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44b41c) {
            ctx->pc = 0x44B420u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44B41Cu;
            // 0x44b420: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44B44Cu;
            goto label_44b44c;
        }
    }
    ctx->pc = 0x44B424u;
label_44b424:
    // 0x44b424: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_44b428:
    if (ctx->pc == 0x44B428u) {
        ctx->pc = 0x44B42Cu;
        goto label_44b42c;
    }
    ctx->pc = 0x44B424u;
    {
        const bool branch_taken_0x44b424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44b424) {
            ctx->pc = 0x44B448u;
            goto label_44b448;
        }
    }
    ctx->pc = 0x44B42Cu;
label_44b42c:
    // 0x44b42c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_44b430:
    if (ctx->pc == 0x44B430u) {
        ctx->pc = 0x44B434u;
        goto label_44b434;
    }
    ctx->pc = 0x44B42Cu;
    {
        const bool branch_taken_0x44b42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44b42c) {
            ctx->pc = 0x44B448u;
            goto label_44b448;
        }
    }
    ctx->pc = 0x44B434u;
label_44b434:
    // 0x44b434: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x44b434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_44b438:
    // 0x44b438: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_44b43c:
    if (ctx->pc == 0x44B43Cu) {
        ctx->pc = 0x44B440u;
        goto label_44b440;
    }
    ctx->pc = 0x44B438u;
    {
        const bool branch_taken_0x44b438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44b438) {
            ctx->pc = 0x44B448u;
            goto label_44b448;
        }
    }
    ctx->pc = 0x44B440u;
label_44b440:
    // 0x44b440: 0xc0400a8  jal         func_1002A0
label_44b444:
    if (ctx->pc == 0x44B444u) {
        ctx->pc = 0x44B448u;
        goto label_44b448;
    }
    ctx->pc = 0x44B440u;
    SET_GPR_U32(ctx, 31, 0x44B448u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B448u; }
        if (ctx->pc != 0x44B448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B448u; }
        if (ctx->pc != 0x44B448u) { return; }
    }
    ctx->pc = 0x44B448u;
label_44b448:
    // 0x44b448: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x44b448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_44b44c:
    // 0x44b44c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_44b450:
    if (ctx->pc == 0x44B450u) {
        ctx->pc = 0x44B450u;
            // 0x44b450: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x44B454u;
        goto label_44b454;
    }
    ctx->pc = 0x44B44Cu;
    {
        const bool branch_taken_0x44b44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44b44c) {
            ctx->pc = 0x44B450u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44B44Cu;
            // 0x44b450: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44B47Cu;
            goto label_44b47c;
        }
    }
    ctx->pc = 0x44B454u;
label_44b454:
    // 0x44b454: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_44b458:
    if (ctx->pc == 0x44B458u) {
        ctx->pc = 0x44B45Cu;
        goto label_44b45c;
    }
    ctx->pc = 0x44B454u;
    {
        const bool branch_taken_0x44b454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44b454) {
            ctx->pc = 0x44B478u;
            goto label_44b478;
        }
    }
    ctx->pc = 0x44B45Cu;
label_44b45c:
    // 0x44b45c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_44b460:
    if (ctx->pc == 0x44B460u) {
        ctx->pc = 0x44B464u;
        goto label_44b464;
    }
    ctx->pc = 0x44B45Cu;
    {
        const bool branch_taken_0x44b45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44b45c) {
            ctx->pc = 0x44B478u;
            goto label_44b478;
        }
    }
    ctx->pc = 0x44B464u;
label_44b464:
    // 0x44b464: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x44b464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_44b468:
    // 0x44b468: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_44b46c:
    if (ctx->pc == 0x44B46Cu) {
        ctx->pc = 0x44B470u;
        goto label_44b470;
    }
    ctx->pc = 0x44B468u;
    {
        const bool branch_taken_0x44b468 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44b468) {
            ctx->pc = 0x44B478u;
            goto label_44b478;
        }
    }
    ctx->pc = 0x44B470u;
label_44b470:
    // 0x44b470: 0xc0400a8  jal         func_1002A0
label_44b474:
    if (ctx->pc == 0x44B474u) {
        ctx->pc = 0x44B478u;
        goto label_44b478;
    }
    ctx->pc = 0x44B470u;
    SET_GPR_U32(ctx, 31, 0x44B478u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B478u; }
        if (ctx->pc != 0x44B478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B478u; }
        if (ctx->pc != 0x44B478u) { return; }
    }
    ctx->pc = 0x44B478u;
label_44b478:
    // 0x44b478: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x44b478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_44b47c:
    // 0x44b47c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_44b480:
    if (ctx->pc == 0x44B480u) {
        ctx->pc = 0x44B484u;
        goto label_44b484;
    }
    ctx->pc = 0x44B47Cu;
    {
        const bool branch_taken_0x44b47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44b47c) {
            ctx->pc = 0x44B498u;
            goto label_44b498;
        }
    }
    ctx->pc = 0x44B484u;
label_44b484:
    // 0x44b484: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44b484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_44b488:
    // 0x44b488: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44b488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_44b48c:
    // 0x44b48c: 0x2463d960  addiu       $v1, $v1, -0x26A0
    ctx->pc = 0x44b48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957408));
label_44b490:
    // 0x44b490: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x44b490u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_44b494:
    // 0x44b494: 0xac407590  sw          $zero, 0x7590($v0)
    ctx->pc = 0x44b494u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 30096), GPR_U32(ctx, 0));
label_44b498:
    // 0x44b498: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_44b49c:
    if (ctx->pc == 0x44B49Cu) {
        ctx->pc = 0x44B49Cu;
            // 0x44b49c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x44B4A0u;
        goto label_44b4a0;
    }
    ctx->pc = 0x44B498u;
    {
        const bool branch_taken_0x44b498 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x44b498) {
            ctx->pc = 0x44B49Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44B498u;
            // 0x44b49c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44B4F4u;
            goto label_44b4f4;
        }
    }
    ctx->pc = 0x44B4A0u;
label_44b4a0:
    // 0x44b4a0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x44b4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_44b4a4:
    // 0x44b4a4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x44b4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_44b4a8:
    // 0x44b4a8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x44b4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_44b4ac:
    // 0x44b4ac: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x44b4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_44b4b0:
    // 0x44b4b0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_44b4b4:
    if (ctx->pc == 0x44B4B4u) {
        ctx->pc = 0x44B4B4u;
            // 0x44b4b4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x44B4B8u;
        goto label_44b4b8;
    }
    ctx->pc = 0x44B4B0u;
    {
        const bool branch_taken_0x44b4b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44b4b0) {
            ctx->pc = 0x44B4B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44B4B0u;
            // 0x44b4b4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44B4CCu;
            goto label_44b4cc;
        }
    }
    ctx->pc = 0x44B4B8u;
label_44b4b8:
    // 0x44b4b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44b4b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44b4bc:
    // 0x44b4bc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x44b4bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_44b4c0:
    // 0x44b4c0: 0x320f809  jalr        $t9
label_44b4c4:
    if (ctx->pc == 0x44B4C4u) {
        ctx->pc = 0x44B4C4u;
            // 0x44b4c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x44B4C8u;
        goto label_44b4c8;
    }
    ctx->pc = 0x44B4C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44B4C8u);
        ctx->pc = 0x44B4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44B4C0u;
            // 0x44b4c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x44B4C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44B4C8u; }
            if (ctx->pc != 0x44B4C8u) { return; }
        }
        }
    }
    ctx->pc = 0x44B4C8u;
label_44b4c8:
    // 0x44b4c8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x44b4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_44b4cc:
    // 0x44b4cc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_44b4d0:
    if (ctx->pc == 0x44B4D0u) {
        ctx->pc = 0x44B4D0u;
            // 0x44b4d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44B4D4u;
        goto label_44b4d4;
    }
    ctx->pc = 0x44B4CCu;
    {
        const bool branch_taken_0x44b4cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44b4cc) {
            ctx->pc = 0x44B4D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44B4CCu;
            // 0x44b4d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44B4E8u;
            goto label_44b4e8;
        }
    }
    ctx->pc = 0x44B4D4u;
label_44b4d4:
    // 0x44b4d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44b4d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44b4d8:
    // 0x44b4d8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x44b4d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_44b4dc:
    // 0x44b4dc: 0x320f809  jalr        $t9
label_44b4e0:
    if (ctx->pc == 0x44B4E0u) {
        ctx->pc = 0x44B4E0u;
            // 0x44b4e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x44B4E4u;
        goto label_44b4e4;
    }
    ctx->pc = 0x44B4DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44B4E4u);
        ctx->pc = 0x44B4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44B4DCu;
            // 0x44b4e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x44B4E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44B4E4u; }
            if (ctx->pc != 0x44B4E4u) { return; }
        }
        }
    }
    ctx->pc = 0x44B4E4u;
label_44b4e4:
    // 0x44b4e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44b4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44b4e8:
    // 0x44b4e8: 0xc075bf8  jal         func_1D6FE0
label_44b4ec:
    if (ctx->pc == 0x44B4ECu) {
        ctx->pc = 0x44B4ECu;
            // 0x44b4ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44B4F0u;
        goto label_44b4f0;
    }
    ctx->pc = 0x44B4E8u;
    SET_GPR_U32(ctx, 31, 0x44B4F0u);
    ctx->pc = 0x44B4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44B4E8u;
            // 0x44b4ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B4F0u; }
        if (ctx->pc != 0x44B4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B4F0u; }
        if (ctx->pc != 0x44B4F0u) { return; }
    }
    ctx->pc = 0x44B4F0u;
label_44b4f0:
    // 0x44b4f0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x44b4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_44b4f4:
    // 0x44b4f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x44b4f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_44b4f8:
    // 0x44b4f8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_44b4fc:
    if (ctx->pc == 0x44B4FCu) {
        ctx->pc = 0x44B4FCu;
            // 0x44b4fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44B500u;
        goto label_44b500;
    }
    ctx->pc = 0x44B4F8u;
    {
        const bool branch_taken_0x44b4f8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x44b4f8) {
            ctx->pc = 0x44B4FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44B4F8u;
            // 0x44b4fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44B50Cu;
            goto label_44b50c;
        }
    }
    ctx->pc = 0x44B500u;
label_44b500:
    // 0x44b500: 0xc0400a8  jal         func_1002A0
label_44b504:
    if (ctx->pc == 0x44B504u) {
        ctx->pc = 0x44B504u;
            // 0x44b504: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44B508u;
        goto label_44b508;
    }
    ctx->pc = 0x44B500u;
    SET_GPR_U32(ctx, 31, 0x44B508u);
    ctx->pc = 0x44B504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44B500u;
            // 0x44b504: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B508u; }
        if (ctx->pc != 0x44B508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B508u; }
        if (ctx->pc != 0x44B508u) { return; }
    }
    ctx->pc = 0x44B508u;
label_44b508:
    // 0x44b508: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x44b508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44b50c:
    // 0x44b50c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44b50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_44b510:
    // 0x44b510: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44b510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44b514:
    // 0x44b514: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44b514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44b518:
    // 0x44b518: 0x3e00008  jr          $ra
label_44b51c:
    if (ctx->pc == 0x44B51Cu) {
        ctx->pc = 0x44B51Cu;
            // 0x44b51c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x44B520u;
        goto label_44b520;
    }
    ctx->pc = 0x44B518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44B51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44B518u;
            // 0x44b51c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44B520u;
label_44b520:
    // 0x44b520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44b520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_44b524:
    // 0x44b524: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x44b524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_44b528:
    // 0x44b528: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44b528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44b52c:
    // 0x44b52c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44b52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44b530:
    // 0x44b530: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44b530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44b534:
    // 0x44b534: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_44b538:
    if (ctx->pc == 0x44B538u) {
        ctx->pc = 0x44B538u;
            // 0x44b538: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44B53Cu;
        goto label_44b53c;
    }
    ctx->pc = 0x44B534u;
    {
        const bool branch_taken_0x44b534 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44B534u;
            // 0x44b538: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b534) {
            ctx->pc = 0x44B5FCu;
            goto label_44b5fc;
        }
    }
    ctx->pc = 0x44B53Cu;
label_44b53c:
    // 0x44b53c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44b53cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_44b540:
    // 0x44b540: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x44b540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_44b544:
    // 0x44b544: 0x2463d8c0  addiu       $v1, $v1, -0x2740
    ctx->pc = 0x44b544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957248));
label_44b548:
    // 0x44b548: 0x2442d900  addiu       $v0, $v0, -0x2700
    ctx->pc = 0x44b548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957312));
label_44b54c:
    // 0x44b54c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x44b54cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_44b550:
    // 0x44b550: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x44b550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_44b554:
    // 0x44b554: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44b554u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44b558:
    // 0x44b558: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x44b558u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_44b55c:
    // 0x44b55c: 0x320f809  jalr        $t9
label_44b560:
    if (ctx->pc == 0x44B560u) {
        ctx->pc = 0x44B564u;
        goto label_44b564;
    }
    ctx->pc = 0x44B55Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44B564u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x44B564u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44B564u; }
            if (ctx->pc != 0x44B564u) { return; }
        }
        }
    }
    ctx->pc = 0x44B564u;
label_44b564:
    // 0x44b564: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_44b568:
    if (ctx->pc == 0x44B568u) {
        ctx->pc = 0x44B568u;
            // 0x44b568: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x44B56Cu;
        goto label_44b56c;
    }
    ctx->pc = 0x44B564u;
    {
        const bool branch_taken_0x44b564 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x44b564) {
            ctx->pc = 0x44B568u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44B564u;
            // 0x44b568: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44B5E8u;
            goto label_44b5e8;
        }
    }
    ctx->pc = 0x44B56Cu;
label_44b56c:
    // 0x44b56c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x44b56cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_44b570:
    // 0x44b570: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x44b570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_44b574:
    // 0x44b574: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x44b574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_44b578:
    // 0x44b578: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x44b578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_44b57c:
    // 0x44b57c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x44b57cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_44b580:
    // 0x44b580: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x44b580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_44b584:
    // 0x44b584: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x44b584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_44b588:
    // 0x44b588: 0xc0aecc4  jal         func_2BB310
label_44b58c:
    if (ctx->pc == 0x44B58Cu) {
        ctx->pc = 0x44B58Cu;
            // 0x44b58c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x44B590u;
        goto label_44b590;
    }
    ctx->pc = 0x44B588u;
    SET_GPR_U32(ctx, 31, 0x44B590u);
    ctx->pc = 0x44B58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44B588u;
            // 0x44b58c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B590u; }
        if (ctx->pc != 0x44B590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B590u; }
        if (ctx->pc != 0x44B590u) { return; }
    }
    ctx->pc = 0x44B590u;
label_44b590:
    // 0x44b590: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x44b590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_44b594:
    // 0x44b594: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x44b594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_44b598:
    // 0x44b598: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_44b59c:
    if (ctx->pc == 0x44B59Cu) {
        ctx->pc = 0x44B59Cu;
            // 0x44b59c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x44B5A0u;
        goto label_44b5a0;
    }
    ctx->pc = 0x44B598u;
    {
        const bool branch_taken_0x44b598 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44b598) {
            ctx->pc = 0x44B59Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44B598u;
            // 0x44b59c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44B5B4u;
            goto label_44b5b4;
        }
    }
    ctx->pc = 0x44B5A0u;
label_44b5a0:
    // 0x44b5a0: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x44b5a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_44b5a4:
    // 0x44b5a4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x44b5a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_44b5a8:
    // 0x44b5a8: 0x320f809  jalr        $t9
label_44b5ac:
    if (ctx->pc == 0x44B5ACu) {
        ctx->pc = 0x44B5ACu;
            // 0x44b5ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x44B5B0u;
        goto label_44b5b0;
    }
    ctx->pc = 0x44B5A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44B5B0u);
        ctx->pc = 0x44B5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44B5A8u;
            // 0x44b5ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x44B5B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44B5B0u; }
            if (ctx->pc != 0x44B5B0u) { return; }
        }
        }
    }
    ctx->pc = 0x44B5B0u;
label_44b5b0:
    // 0x44b5b0: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x44b5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_44b5b4:
    // 0x44b5b4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x44b5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_44b5b8:
    // 0x44b5b8: 0xc0aec9c  jal         func_2BB270
label_44b5bc:
    if (ctx->pc == 0x44B5BCu) {
        ctx->pc = 0x44B5BCu;
            // 0x44b5bc: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x44B5C0u;
        goto label_44b5c0;
    }
    ctx->pc = 0x44B5B8u;
    SET_GPR_U32(ctx, 31, 0x44B5C0u);
    ctx->pc = 0x44B5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44B5B8u;
            // 0x44b5bc: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B5C0u; }
        if (ctx->pc != 0x44B5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B5C0u; }
        if (ctx->pc != 0x44B5C0u) { return; }
    }
    ctx->pc = 0x44B5C0u;
label_44b5c0:
    // 0x44b5c0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x44b5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_44b5c4:
    // 0x44b5c4: 0xc0aec88  jal         func_2BB220
label_44b5c8:
    if (ctx->pc == 0x44B5C8u) {
        ctx->pc = 0x44B5C8u;
            // 0x44b5c8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x44B5CCu;
        goto label_44b5cc;
    }
    ctx->pc = 0x44B5C4u;
    SET_GPR_U32(ctx, 31, 0x44B5CCu);
    ctx->pc = 0x44B5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44B5C4u;
            // 0x44b5c8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B5CCu; }
        if (ctx->pc != 0x44B5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B5CCu; }
        if (ctx->pc != 0x44B5CCu) { return; }
    }
    ctx->pc = 0x44B5CCu;
label_44b5cc:
    // 0x44b5cc: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x44b5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_44b5d0:
    // 0x44b5d0: 0xc0aec0c  jal         func_2BB030
label_44b5d4:
    if (ctx->pc == 0x44B5D4u) {
        ctx->pc = 0x44B5D4u;
            // 0x44b5d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44B5D8u;
        goto label_44b5d8;
    }
    ctx->pc = 0x44B5D0u;
    SET_GPR_U32(ctx, 31, 0x44B5D8u);
    ctx->pc = 0x44B5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44B5D0u;
            // 0x44b5d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B5D8u; }
        if (ctx->pc != 0x44B5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B5D8u; }
        if (ctx->pc != 0x44B5D8u) { return; }
    }
    ctx->pc = 0x44B5D8u;
label_44b5d8:
    // 0x44b5d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44b5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44b5dc:
    // 0x44b5dc: 0xc0aeaa8  jal         func_2BAAA0
label_44b5e0:
    if (ctx->pc == 0x44B5E0u) {
        ctx->pc = 0x44B5E0u;
            // 0x44b5e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44B5E4u;
        goto label_44b5e4;
    }
    ctx->pc = 0x44B5DCu;
    SET_GPR_U32(ctx, 31, 0x44B5E4u);
    ctx->pc = 0x44B5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44B5DCu;
            // 0x44b5e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B5E4u; }
        if (ctx->pc != 0x44B5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B5E4u; }
        if (ctx->pc != 0x44B5E4u) { return; }
    }
    ctx->pc = 0x44B5E4u;
label_44b5e4:
    // 0x44b5e4: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x44b5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_44b5e8:
    // 0x44b5e8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x44b5e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_44b5ec:
    // 0x44b5ec: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_44b5f0:
    if (ctx->pc == 0x44B5F0u) {
        ctx->pc = 0x44B5F0u;
            // 0x44b5f0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44B5F4u;
        goto label_44b5f4;
    }
    ctx->pc = 0x44B5ECu;
    {
        const bool branch_taken_0x44b5ec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x44b5ec) {
            ctx->pc = 0x44B5F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44B5ECu;
            // 0x44b5f0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44B600u;
            goto label_44b600;
        }
    }
    ctx->pc = 0x44B5F4u;
label_44b5f4:
    // 0x44b5f4: 0xc0400a8  jal         func_1002A0
label_44b5f8:
    if (ctx->pc == 0x44B5F8u) {
        ctx->pc = 0x44B5F8u;
            // 0x44b5f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44B5FCu;
        goto label_44b5fc;
    }
    ctx->pc = 0x44B5F4u;
    SET_GPR_U32(ctx, 31, 0x44B5FCu);
    ctx->pc = 0x44B5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44B5F4u;
            // 0x44b5f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B5FCu; }
        if (ctx->pc != 0x44B5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B5FCu; }
        if (ctx->pc != 0x44B5FCu) { return; }
    }
    ctx->pc = 0x44B5FCu;
label_44b5fc:
    // 0x44b5fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x44b5fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44b600:
    // 0x44b600: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44b600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_44b604:
    // 0x44b604: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44b604u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44b608:
    // 0x44b608: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44b608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44b60c:
    // 0x44b60c: 0x3e00008  jr          $ra
label_44b610:
    if (ctx->pc == 0x44B610u) {
        ctx->pc = 0x44B610u;
            // 0x44b610: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x44B614u;
        goto label_44b614;
    }
    ctx->pc = 0x44B60Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44B610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44B60Cu;
            // 0x44b610: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44B614u;
label_44b614:
    // 0x44b614: 0x0  nop
    ctx->pc = 0x44b614u;
    // NOP
label_44b618:
    // 0x44b618: 0x0  nop
    ctx->pc = 0x44b618u;
    // NOP
label_44b61c:
    // 0x44b61c: 0x0  nop
    ctx->pc = 0x44b61cu;
    // NOP
label_44b620:
    // 0x44b620: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x44b620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_44b624:
    // 0x44b624: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x44b624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_44b628:
    // 0x44b628: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x44b628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_44b62c:
    // 0x44b62c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x44b62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_44b630:
    // 0x44b630: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x44b630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_44b634:
    // 0x44b634: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x44b634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_44b638:
    // 0x44b638: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x44b638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_44b63c:
    // 0x44b63c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x44b63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_44b640:
    // 0x44b640: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x44b640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_44b644:
    // 0x44b644: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x44b644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_44b648:
    // 0x44b648: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x44b648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_44b64c:
    // 0x44b64c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x44b64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_44b650:
    // 0x44b650: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x44b650u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_44b654:
    // 0x44b654: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x44b654u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_44b658:
    // 0x44b658: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_44b65c:
    if (ctx->pc == 0x44B65Cu) {
        ctx->pc = 0x44B65Cu;
            // 0x44b65c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44B660u;
        goto label_44b660;
    }
    ctx->pc = 0x44B658u;
    {
        const bool branch_taken_0x44b658 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x44B65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44B658u;
            // 0x44b65c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b658) {
            ctx->pc = 0x44B6A8u;
            goto label_44b6a8;
        }
    }
    ctx->pc = 0x44B660u;
label_44b660:
    // 0x44b660: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x44b660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_44b664:
    // 0x44b664: 0x50a30088  beql        $a1, $v1, . + 4 + (0x88 << 2)
label_44b668:
    if (ctx->pc == 0x44B668u) {
        ctx->pc = 0x44B668u;
            // 0x44b668: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x44B66Cu;
        goto label_44b66c;
    }
    ctx->pc = 0x44B664u;
    {
        const bool branch_taken_0x44b664 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x44b664) {
            ctx->pc = 0x44B668u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44B664u;
            // 0x44b668: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44B888u;
            goto label_44b888;
        }
    }
    ctx->pc = 0x44B66Cu;
label_44b66c:
    // 0x44b66c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x44b66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_44b670:
    // 0x44b670: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_44b674:
    if (ctx->pc == 0x44B674u) {
        ctx->pc = 0x44B678u;
        goto label_44b678;
    }
    ctx->pc = 0x44B670u;
    {
        const bool branch_taken_0x44b670 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x44b670) {
            ctx->pc = 0x44B680u;
            goto label_44b680;
        }
    }
    ctx->pc = 0x44B678u;
label_44b678:
    // 0x44b678: 0x10000082  b           . + 4 + (0x82 << 2)
label_44b67c:
    if (ctx->pc == 0x44B67Cu) {
        ctx->pc = 0x44B680u;
        goto label_44b680;
    }
    ctx->pc = 0x44B678u;
    {
        const bool branch_taken_0x44b678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44b678) {
            ctx->pc = 0x44B884u;
            goto label_44b884;
        }
    }
    ctx->pc = 0x44B680u;
label_44b680:
    // 0x44b680: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44b680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_44b684:
    // 0x44b684: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44b684u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44b688:
    // 0x44b688: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x44b688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_44b68c:
    // 0x44b68c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x44b68cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_44b690:
    // 0x44b690: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x44b690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_44b694:
    // 0x44b694: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x44b694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_44b698:
    // 0x44b698: 0x320f809  jalr        $t9
label_44b69c:
    if (ctx->pc == 0x44B69Cu) {
        ctx->pc = 0x44B69Cu;
            // 0x44b69c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x44B6A0u;
        goto label_44b6a0;
    }
    ctx->pc = 0x44B698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44B6A0u);
        ctx->pc = 0x44B69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44B698u;
            // 0x44b69c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x44B6A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44B6A0u; }
            if (ctx->pc != 0x44B6A0u) { return; }
        }
        }
    }
    ctx->pc = 0x44B6A0u;
label_44b6a0:
    // 0x44b6a0: 0x10000078  b           . + 4 + (0x78 << 2)
label_44b6a4:
    if (ctx->pc == 0x44B6A4u) {
        ctx->pc = 0x44B6A8u;
        goto label_44b6a8;
    }
    ctx->pc = 0x44B6A0u;
    {
        const bool branch_taken_0x44b6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44b6a0) {
            ctx->pc = 0x44B884u;
            goto label_44b884;
        }
    }
    ctx->pc = 0x44B6A8u;
label_44b6a8:
    // 0x44b6a8: 0x8ed70070  lw          $s7, 0x70($s6)
    ctx->pc = 0x44b6a8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_44b6ac:
    // 0x44b6ac: 0x12e00075  beqz        $s7, . + 4 + (0x75 << 2)
label_44b6b0:
    if (ctx->pc == 0x44B6B0u) {
        ctx->pc = 0x44B6B4u;
        goto label_44b6b4;
    }
    ctx->pc = 0x44B6ACu;
    {
        const bool branch_taken_0x44b6ac = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x44b6ac) {
            ctx->pc = 0x44B884u;
            goto label_44b884;
        }
    }
    ctx->pc = 0x44B6B4u;
label_44b6b4:
    // 0x44b6b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44b6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44b6b8:
    // 0x44b6b8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44b6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44b6bc:
    // 0x44b6bc: 0x8c42e378  lw          $v0, -0x1C88($v0)
    ctx->pc = 0x44b6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_44b6c0:
    // 0x44b6c0: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x44b6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_44b6c4:
    // 0x44b6c4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x44b6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_44b6c8:
    // 0x44b6c8: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x44b6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_44b6cc:
    // 0x44b6cc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x44b6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_44b6d0:
    // 0x44b6d0: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x44b6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_44b6d4:
    // 0x44b6d4: 0x8c44d120  lw          $a0, -0x2EE0($v0)
    ctx->pc = 0x44b6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_44b6d8:
    // 0x44b6d8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x44b6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_44b6dc:
    // 0x44b6dc: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x44b6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_44b6e0:
    // 0x44b6e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44b6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44b6e4:
    // 0x44b6e4: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x44b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_44b6e8:
    // 0x44b6e8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x44b6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_44b6ec:
    // 0x44b6ec: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x44b6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44b6f0:
    // 0x44b6f0: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x44b6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_44b6f4:
    // 0x44b6f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44b6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44b6f8:
    // 0x44b6f8: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x44b6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_44b6fc:
    // 0x44b6fc: 0x249e0010  addiu       $fp, $a0, 0x10
    ctx->pc = 0x44b6fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_44b700:
    // 0x44b700: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x44b700u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_44b704:
    // 0x44b704: 0x8ec40088  lw          $a0, 0x88($s6)
    ctx->pc = 0x44b704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
label_44b708:
    // 0x44b708: 0xc04e738  jal         func_139CE0
label_44b70c:
    if (ctx->pc == 0x44B70Cu) {
        ctx->pc = 0x44B70Cu;
            // 0x44b70c: 0x26d20084  addiu       $s2, $s6, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
        ctx->pc = 0x44B710u;
        goto label_44b710;
    }
    ctx->pc = 0x44B708u;
    SET_GPR_U32(ctx, 31, 0x44B710u);
    ctx->pc = 0x44B70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44B708u;
            // 0x44b70c: 0x26d20084  addiu       $s2, $s6, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B710u; }
        if (ctx->pc != 0x44B710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B710u; }
        if (ctx->pc != 0x44B710u) { return; }
    }
    ctx->pc = 0x44B710u;
label_44b710:
    // 0x44b710: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x44b710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_44b714:
    // 0x44b714: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x44b714u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44b718:
    // 0x44b718: 0xc454d878  lwc1        $f20, -0x2788($v0)
    ctx->pc = 0x44b718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_44b71c:
    // 0x44b71c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x44b71cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44b720:
    // 0x44b720: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x44b720u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_44b724:
    // 0x44b724: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x44b724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
label_44b728:
    // 0x44b728: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x44b728u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_44b72c:
    // 0x44b72c: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x44b72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_44b730:
    // 0x44b730: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x44b730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_44b734:
    // 0x44b734: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x44b734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_44b738:
    // 0x44b738: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x44b738u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_44b73c:
    // 0x44b73c: 0xc0d639c  jal         func_358E70
label_44b740:
    if (ctx->pc == 0x44B740u) {
        ctx->pc = 0x44B740u;
            // 0x44b740: 0x2684006c  addiu       $a0, $s4, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
        ctx->pc = 0x44B744u;
        goto label_44b744;
    }
    ctx->pc = 0x44B73Cu;
    SET_GPR_U32(ctx, 31, 0x44B744u);
    ctx->pc = 0x44B740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44B73Cu;
            // 0x44b740: 0x2684006c  addiu       $a0, $s4, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B744u; }
        if (ctx->pc != 0x44B744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B744u; }
        if (ctx->pc != 0x44B744u) { return; }
    }
    ctx->pc = 0x44B744u;
label_44b744:
    // 0x44b744: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_44b748:
    if (ctx->pc == 0x44B748u) {
        ctx->pc = 0x44B74Cu;
        goto label_44b74c;
    }
    ctx->pc = 0x44B744u;
    {
        const bool branch_taken_0x44b744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44b744) {
            ctx->pc = 0x44B828u;
            goto label_44b828;
        }
    }
    ctx->pc = 0x44B74Cu;
label_44b74c:
    // 0x44b74c: 0xc0d1c14  jal         func_347050
label_44b750:
    if (ctx->pc == 0x44B750u) {
        ctx->pc = 0x44B750u;
            // 0x44b750: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44B754u;
        goto label_44b754;
    }
    ctx->pc = 0x44B74Cu;
    SET_GPR_U32(ctx, 31, 0x44B754u);
    ctx->pc = 0x44B750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44B74Cu;
            // 0x44b750: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B754u; }
        if (ctx->pc != 0x44B754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B754u; }
        if (ctx->pc != 0x44B754u) { return; }
    }
    ctx->pc = 0x44B754u;
label_44b754:
    // 0x44b754: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x44b754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44b758:
    // 0x44b758: 0xc04f278  jal         func_13C9E0
label_44b75c:
    if (ctx->pc == 0x44B75Cu) {
        ctx->pc = 0x44B75Cu;
            // 0x44b75c: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x44B760u;
        goto label_44b760;
    }
    ctx->pc = 0x44B758u;
    SET_GPR_U32(ctx, 31, 0x44B760u);
    ctx->pc = 0x44B75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44B758u;
            // 0x44b75c: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B760u; }
        if (ctx->pc != 0x44B760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B760u; }
        if (ctx->pc != 0x44B760u) { return; }
    }
    ctx->pc = 0x44B760u;
label_44b760:
    // 0x44b760: 0xc0d1c10  jal         func_347040
label_44b764:
    if (ctx->pc == 0x44B764u) {
        ctx->pc = 0x44B764u;
            // 0x44b764: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44B768u;
        goto label_44b768;
    }
    ctx->pc = 0x44B760u;
    SET_GPR_U32(ctx, 31, 0x44B768u);
    ctx->pc = 0x44B764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44B760u;
            // 0x44b764: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B768u; }
        if (ctx->pc != 0x44B768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B768u; }
        if (ctx->pc != 0x44B768u) { return; }
    }
    ctx->pc = 0x44B768u;
label_44b768:
    // 0x44b768: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x44b768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44b76c:
    // 0x44b76c: 0xc04ce80  jal         func_133A00
label_44b770:
    if (ctx->pc == 0x44B770u) {
        ctx->pc = 0x44B770u;
            // 0x44b770: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x44B774u;
        goto label_44b774;
    }
    ctx->pc = 0x44B76Cu;
    SET_GPR_U32(ctx, 31, 0x44B774u);
    ctx->pc = 0x44B770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44B76Cu;
            // 0x44b770: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B774u; }
        if (ctx->pc != 0x44B774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B774u; }
        if (ctx->pc != 0x44B774u) { return; }
    }
    ctx->pc = 0x44B774u;
label_44b774:
    // 0x44b774: 0xc0d4108  jal         func_350420
label_44b778:
    if (ctx->pc == 0x44B778u) {
        ctx->pc = 0x44B77Cu;
        goto label_44b77c;
    }
    ctx->pc = 0x44B774u;
    SET_GPR_U32(ctx, 31, 0x44B77Cu);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B77Cu; }
        if (ctx->pc != 0x44B77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B77Cu; }
        if (ctx->pc != 0x44B77Cu) { return; }
    }
    ctx->pc = 0x44B77Cu;
label_44b77c:
    // 0x44b77c: 0xc0b36b4  jal         func_2CDAD0
label_44b780:
    if (ctx->pc == 0x44B780u) {
        ctx->pc = 0x44B780u;
            // 0x44b780: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44B784u;
        goto label_44b784;
    }
    ctx->pc = 0x44B77Cu;
    SET_GPR_U32(ctx, 31, 0x44B784u);
    ctx->pc = 0x44B780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44B77Cu;
            // 0x44b780: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B784u; }
        if (ctx->pc != 0x44B784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B784u; }
        if (ctx->pc != 0x44B784u) { return; }
    }
    ctx->pc = 0x44B784u;
label_44b784:
    // 0x44b784: 0xc0b9c64  jal         func_2E7190
label_44b788:
    if (ctx->pc == 0x44B788u) {
        ctx->pc = 0x44B788u;
            // 0x44b788: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44B78Cu;
        goto label_44b78c;
    }
    ctx->pc = 0x44B784u;
    SET_GPR_U32(ctx, 31, 0x44B78Cu);
    ctx->pc = 0x44B788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44B784u;
            // 0x44b788: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B78Cu; }
        if (ctx->pc != 0x44B78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B78Cu; }
        if (ctx->pc != 0x44B78Cu) { return; }
    }
    ctx->pc = 0x44B78Cu;
label_44b78c:
    // 0x44b78c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x44b78cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44b790:
    // 0x44b790: 0xc0d4104  jal         func_350410
label_44b794:
    if (ctx->pc == 0x44B794u) {
        ctx->pc = 0x44B794u;
            // 0x44b794: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44B798u;
        goto label_44b798;
    }
    ctx->pc = 0x44B790u;
    SET_GPR_U32(ctx, 31, 0x44B798u);
    ctx->pc = 0x44B794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44B790u;
            // 0x44b794: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B798u; }
        if (ctx->pc != 0x44B798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B798u; }
        if (ctx->pc != 0x44B798u) { return; }
    }
    ctx->pc = 0x44B798u;
label_44b798:
    // 0x44b798: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x44b798u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_44b79c:
    // 0x44b79c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44b79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44b7a0:
    // 0x44b7a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x44b7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44b7a4:
    // 0x44b7a4: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x44b7a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_44b7a8:
    // 0x44b7a8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x44b7a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44b7ac:
    // 0x44b7ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x44b7acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44b7b0:
    // 0x44b7b0: 0xc0d40ac  jal         func_3502B0
label_44b7b4:
    if (ctx->pc == 0x44B7B4u) {
        ctx->pc = 0x44B7B4u;
            // 0x44b7b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x44B7B8u;
        goto label_44b7b8;
    }
    ctx->pc = 0x44B7B0u;
    SET_GPR_U32(ctx, 31, 0x44B7B8u);
    ctx->pc = 0x44B7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44B7B0u;
            // 0x44b7b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B7B8u; }
        if (ctx->pc != 0x44B7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B7B8u; }
        if (ctx->pc != 0x44B7B8u) { return; }
    }
    ctx->pc = 0x44B7B8u;
label_44b7b8:
    // 0x44b7b8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x44b7b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_44b7bc:
    // 0x44b7bc: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
label_44b7c0:
    if (ctx->pc == 0x44B7C0u) {
        ctx->pc = 0x44B7C0u;
            // 0x44b7c0: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x44B7C4u;
        goto label_44b7c4;
    }
    ctx->pc = 0x44B7BCu;
    {
        const bool branch_taken_0x44b7bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44B7BCu;
            // 0x44b7c0: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b7bc) {
            ctx->pc = 0x44B840u;
            goto label_44b840;
        }
    }
    ctx->pc = 0x44B7C4u;
label_44b7c4:
    // 0x44b7c4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x44b7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_44b7c8:
    // 0x44b7c8: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x44b7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_44b7cc:
    // 0x44b7cc: 0xc112e30  jal         func_44B8C0
label_44b7d0:
    if (ctx->pc == 0x44B7D0u) {
        ctx->pc = 0x44B7D0u;
            // 0x44b7d0: 0x27a6011c  addiu       $a2, $sp, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
        ctx->pc = 0x44B7D4u;
        goto label_44b7d4;
    }
    ctx->pc = 0x44B7CCu;
    SET_GPR_U32(ctx, 31, 0x44B7D4u);
    ctx->pc = 0x44B7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44B7CCu;
            // 0x44b7d0: 0x27a6011c  addiu       $a2, $sp, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44B8C0u;
    if (runtime->hasFunction(0x44B8C0u)) {
        auto targetFn = runtime->lookupFunction(0x44B8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B7D4u; }
        if (ctx->pc != 0x44B7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044B8C0_0x44b8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B7D4u; }
        if (ctx->pc != 0x44B7D4u) { return; }
    }
    ctx->pc = 0x44B7D4u;
label_44b7d4:
    // 0x44b7d4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x44b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_44b7d8:
    // 0x44b7d8: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x44b7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_44b7dc:
    // 0x44b7dc: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x44b7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_44b7e0:
    // 0x44b7e0: 0xc04e4a4  jal         func_139290
label_44b7e4:
    if (ctx->pc == 0x44B7E4u) {
        ctx->pc = 0x44B7E4u;
            // 0x44b7e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44B7E8u;
        goto label_44b7e8;
    }
    ctx->pc = 0x44B7E0u;
    SET_GPR_U32(ctx, 31, 0x44B7E8u);
    ctx->pc = 0x44B7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44B7E0u;
            // 0x44b7e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B7E8u; }
        if (ctx->pc != 0x44B7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B7E8u; }
        if (ctx->pc != 0x44B7E8u) { return; }
    }
    ctx->pc = 0x44B7E8u;
label_44b7e8:
    // 0x44b7e8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x44b7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_44b7ec:
    // 0x44b7ec: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x44b7ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_44b7f0:
    // 0x44b7f0: 0xc04cd60  jal         func_133580
label_44b7f4:
    if (ctx->pc == 0x44B7F4u) {
        ctx->pc = 0x44B7F4u;
            // 0x44b7f4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44B7F8u;
        goto label_44b7f8;
    }
    ctx->pc = 0x44B7F0u;
    SET_GPR_U32(ctx, 31, 0x44B7F8u);
    ctx->pc = 0x44B7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44B7F0u;
            // 0x44b7f4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B7F8u; }
        if (ctx->pc != 0x44B7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B7F8u; }
        if (ctx->pc != 0x44B7F8u) { return; }
    }
    ctx->pc = 0x44B7F8u;
label_44b7f8:
    // 0x44b7f8: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x44b7f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_44b7fc:
    // 0x44b7fc: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x44b7fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_44b800:
    // 0x44b800: 0x320f809  jalr        $t9
label_44b804:
    if (ctx->pc == 0x44B804u) {
        ctx->pc = 0x44B804u;
            // 0x44b804: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44B808u;
        goto label_44b808;
    }
    ctx->pc = 0x44B800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44B808u);
        ctx->pc = 0x44B804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44B800u;
            // 0x44b804: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x44B808u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44B808u; }
            if (ctx->pc != 0x44B808u) { return; }
        }
        }
    }
    ctx->pc = 0x44B808u;
label_44b808:
    // 0x44b808: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x44b808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_44b80c:
    // 0x44b80c: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x44b80cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_44b810:
    // 0x44b810: 0x8fa5011c  lw          $a1, 0x11C($sp)
    ctx->pc = 0x44b810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_44b814:
    // 0x44b814: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x44b814u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44b818:
    // 0x44b818: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x44b818u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_44b81c:
    // 0x44b81c: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x44b81cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_44b820:
    // 0x44b820: 0xc04cfcc  jal         func_133F30
label_44b824:
    if (ctx->pc == 0x44B824u) {
        ctx->pc = 0x44B824u;
            // 0x44b824: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->pc = 0x44B828u;
        goto label_44b828;
    }
    ctx->pc = 0x44B820u;
    SET_GPR_U32(ctx, 31, 0x44B828u);
    ctx->pc = 0x44B824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44B820u;
            // 0x44b824: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B828u; }
        if (ctx->pc != 0x44B828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B828u; }
        if (ctx->pc != 0x44B828u) { return; }
    }
    ctx->pc = 0x44B828u;
label_44b828:
    // 0x44b828: 0x8e84009c  lw          $a0, 0x9C($s4)
    ctx->pc = 0x44b828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
label_44b82c:
    // 0x44b82c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x44b82cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_44b830:
    // 0x44b830: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x44b830u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_44b834:
    // 0x44b834: 0xc0e31f8  jal         func_38C7E0
label_44b838:
    if (ctx->pc == 0x44B838u) {
        ctx->pc = 0x44B838u;
            // 0x44b838: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44B83Cu;
        goto label_44b83c;
    }
    ctx->pc = 0x44B834u;
    SET_GPR_U32(ctx, 31, 0x44B83Cu);
    ctx->pc = 0x44B838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44B834u;
            // 0x44b838: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38C7E0u;
    if (runtime->hasFunction(0x38C7E0u)) {
        auto targetFn = runtime->lookupFunction(0x38C7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B83Cu; }
        if (ctx->pc != 0x44B83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038C7E0_0x38c7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B83Cu; }
        if (ctx->pc != 0x44B83Cu) { return; }
    }
    ctx->pc = 0x44B83Cu;
label_44b83c:
    // 0x44b83c: 0x0  nop
    ctx->pc = 0x44b83cu;
    // NOP
label_44b840:
    // 0x44b840: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x44b840u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_44b844:
    // 0x44b844: 0x2b7182b  sltu        $v1, $s5, $s7
    ctx->pc = 0x44b844u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_44b848:
    // 0x44b848: 0x1460ffb5  bnez        $v1, . + 4 + (-0x4B << 2)
label_44b84c:
    if (ctx->pc == 0x44B84Cu) {
        ctx->pc = 0x44B84Cu;
            // 0x44b84c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x44B850u;
        goto label_44b850;
    }
    ctx->pc = 0x44B848u;
    {
        const bool branch_taken_0x44b848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x44B84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44B848u;
            // 0x44b84c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b848) {
            ctx->pc = 0x44B720u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_44b720;
        }
    }
    ctx->pc = 0x44B850u;
label_44b850:
    // 0x44b850: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44b850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44b854:
    // 0x44b854: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x44b854u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_44b858:
    // 0x44b858: 0x1920000a  blez        $t1, . + 4 + (0xA << 2)
label_44b85c:
    if (ctx->pc == 0x44B85Cu) {
        ctx->pc = 0x44B85Cu;
            // 0x44b85c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x44B860u;
        goto label_44b860;
    }
    ctx->pc = 0x44B858u;
    {
        const bool branch_taken_0x44b858 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x44B85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44B858u;
            // 0x44b85c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b858) {
            ctx->pc = 0x44B884u;
            goto label_44b884;
        }
    }
    ctx->pc = 0x44B860u;
label_44b860:
    // 0x44b860: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44b860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44b864:
    // 0x44b864: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44b864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44b868:
    // 0x44b868: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x44b868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_44b86c:
    // 0x44b86c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x44b86cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_44b870:
    // 0x44b870: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x44b870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_44b874:
    // 0x44b874: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x44b874u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44b878:
    // 0x44b878: 0x3c020280  lui         $v0, 0x280
    ctx->pc = 0x44b878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)640 << 16));
label_44b87c:
    // 0x44b87c: 0xc055ea8  jal         func_157AA0
label_44b880:
    if (ctx->pc == 0x44B880u) {
        ctx->pc = 0x44B880u;
            // 0x44b880: 0x34480400  ori         $t0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->pc = 0x44B884u;
        goto label_44b884;
    }
    ctx->pc = 0x44B87Cu;
    SET_GPR_U32(ctx, 31, 0x44B884u);
    ctx->pc = 0x44B880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44B87Cu;
            // 0x44b880: 0x34480400  ori         $t0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B884u; }
        if (ctx->pc != 0x44B884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44B884u; }
        if (ctx->pc != 0x44B884u) { return; }
    }
    ctx->pc = 0x44B884u;
label_44b884:
    // 0x44b884: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x44b884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_44b888:
    // 0x44b888: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x44b888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_44b88c:
    // 0x44b88c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x44b88cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_44b890:
    // 0x44b890: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x44b890u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_44b894:
    // 0x44b894: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x44b894u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_44b898:
    // 0x44b898: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x44b898u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_44b89c:
    // 0x44b89c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x44b89cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_44b8a0:
    // 0x44b8a0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x44b8a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_44b8a4:
    // 0x44b8a4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x44b8a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_44b8a8:
    // 0x44b8a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x44b8a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44b8ac:
    // 0x44b8ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x44b8acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44b8b0:
    // 0x44b8b0: 0x3e00008  jr          $ra
label_44b8b4:
    if (ctx->pc == 0x44B8B4u) {
        ctx->pc = 0x44B8B4u;
            // 0x44b8b4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x44B8B8u;
        goto label_44b8b8;
    }
    ctx->pc = 0x44B8B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44B8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44B8B0u;
            // 0x44b8b4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44B8B8u;
label_44b8b8:
    // 0x44b8b8: 0x0  nop
    ctx->pc = 0x44b8b8u;
    // NOP
label_44b8bc:
    // 0x44b8bc: 0x0  nop
    ctx->pc = 0x44b8bcu;
    // NOP
}
