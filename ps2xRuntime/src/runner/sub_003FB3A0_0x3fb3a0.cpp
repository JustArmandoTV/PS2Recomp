#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003FB3A0
// Address: 0x3fb3a0 - 0x3fb800
void sub_003FB3A0_0x3fb3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FB3A0_0x3fb3a0");
#endif

    switch (ctx->pc) {
        case 0x3fb3a0u: goto label_3fb3a0;
        case 0x3fb3a4u: goto label_3fb3a4;
        case 0x3fb3a8u: goto label_3fb3a8;
        case 0x3fb3acu: goto label_3fb3ac;
        case 0x3fb3b0u: goto label_3fb3b0;
        case 0x3fb3b4u: goto label_3fb3b4;
        case 0x3fb3b8u: goto label_3fb3b8;
        case 0x3fb3bcu: goto label_3fb3bc;
        case 0x3fb3c0u: goto label_3fb3c0;
        case 0x3fb3c4u: goto label_3fb3c4;
        case 0x3fb3c8u: goto label_3fb3c8;
        case 0x3fb3ccu: goto label_3fb3cc;
        case 0x3fb3d0u: goto label_3fb3d0;
        case 0x3fb3d4u: goto label_3fb3d4;
        case 0x3fb3d8u: goto label_3fb3d8;
        case 0x3fb3dcu: goto label_3fb3dc;
        case 0x3fb3e0u: goto label_3fb3e0;
        case 0x3fb3e4u: goto label_3fb3e4;
        case 0x3fb3e8u: goto label_3fb3e8;
        case 0x3fb3ecu: goto label_3fb3ec;
        case 0x3fb3f0u: goto label_3fb3f0;
        case 0x3fb3f4u: goto label_3fb3f4;
        case 0x3fb3f8u: goto label_3fb3f8;
        case 0x3fb3fcu: goto label_3fb3fc;
        case 0x3fb400u: goto label_3fb400;
        case 0x3fb404u: goto label_3fb404;
        case 0x3fb408u: goto label_3fb408;
        case 0x3fb40cu: goto label_3fb40c;
        case 0x3fb410u: goto label_3fb410;
        case 0x3fb414u: goto label_3fb414;
        case 0x3fb418u: goto label_3fb418;
        case 0x3fb41cu: goto label_3fb41c;
        case 0x3fb420u: goto label_3fb420;
        case 0x3fb424u: goto label_3fb424;
        case 0x3fb428u: goto label_3fb428;
        case 0x3fb42cu: goto label_3fb42c;
        case 0x3fb430u: goto label_3fb430;
        case 0x3fb434u: goto label_3fb434;
        case 0x3fb438u: goto label_3fb438;
        case 0x3fb43cu: goto label_3fb43c;
        case 0x3fb440u: goto label_3fb440;
        case 0x3fb444u: goto label_3fb444;
        case 0x3fb448u: goto label_3fb448;
        case 0x3fb44cu: goto label_3fb44c;
        case 0x3fb450u: goto label_3fb450;
        case 0x3fb454u: goto label_3fb454;
        case 0x3fb458u: goto label_3fb458;
        case 0x3fb45cu: goto label_3fb45c;
        case 0x3fb460u: goto label_3fb460;
        case 0x3fb464u: goto label_3fb464;
        case 0x3fb468u: goto label_3fb468;
        case 0x3fb46cu: goto label_3fb46c;
        case 0x3fb470u: goto label_3fb470;
        case 0x3fb474u: goto label_3fb474;
        case 0x3fb478u: goto label_3fb478;
        case 0x3fb47cu: goto label_3fb47c;
        case 0x3fb480u: goto label_3fb480;
        case 0x3fb484u: goto label_3fb484;
        case 0x3fb488u: goto label_3fb488;
        case 0x3fb48cu: goto label_3fb48c;
        case 0x3fb490u: goto label_3fb490;
        case 0x3fb494u: goto label_3fb494;
        case 0x3fb498u: goto label_3fb498;
        case 0x3fb49cu: goto label_3fb49c;
        case 0x3fb4a0u: goto label_3fb4a0;
        case 0x3fb4a4u: goto label_3fb4a4;
        case 0x3fb4a8u: goto label_3fb4a8;
        case 0x3fb4acu: goto label_3fb4ac;
        case 0x3fb4b0u: goto label_3fb4b0;
        case 0x3fb4b4u: goto label_3fb4b4;
        case 0x3fb4b8u: goto label_3fb4b8;
        case 0x3fb4bcu: goto label_3fb4bc;
        case 0x3fb4c0u: goto label_3fb4c0;
        case 0x3fb4c4u: goto label_3fb4c4;
        case 0x3fb4c8u: goto label_3fb4c8;
        case 0x3fb4ccu: goto label_3fb4cc;
        case 0x3fb4d0u: goto label_3fb4d0;
        case 0x3fb4d4u: goto label_3fb4d4;
        case 0x3fb4d8u: goto label_3fb4d8;
        case 0x3fb4dcu: goto label_3fb4dc;
        case 0x3fb4e0u: goto label_3fb4e0;
        case 0x3fb4e4u: goto label_3fb4e4;
        case 0x3fb4e8u: goto label_3fb4e8;
        case 0x3fb4ecu: goto label_3fb4ec;
        case 0x3fb4f0u: goto label_3fb4f0;
        case 0x3fb4f4u: goto label_3fb4f4;
        case 0x3fb4f8u: goto label_3fb4f8;
        case 0x3fb4fcu: goto label_3fb4fc;
        case 0x3fb500u: goto label_3fb500;
        case 0x3fb504u: goto label_3fb504;
        case 0x3fb508u: goto label_3fb508;
        case 0x3fb50cu: goto label_3fb50c;
        case 0x3fb510u: goto label_3fb510;
        case 0x3fb514u: goto label_3fb514;
        case 0x3fb518u: goto label_3fb518;
        case 0x3fb51cu: goto label_3fb51c;
        case 0x3fb520u: goto label_3fb520;
        case 0x3fb524u: goto label_3fb524;
        case 0x3fb528u: goto label_3fb528;
        case 0x3fb52cu: goto label_3fb52c;
        case 0x3fb530u: goto label_3fb530;
        case 0x3fb534u: goto label_3fb534;
        case 0x3fb538u: goto label_3fb538;
        case 0x3fb53cu: goto label_3fb53c;
        case 0x3fb540u: goto label_3fb540;
        case 0x3fb544u: goto label_3fb544;
        case 0x3fb548u: goto label_3fb548;
        case 0x3fb54cu: goto label_3fb54c;
        case 0x3fb550u: goto label_3fb550;
        case 0x3fb554u: goto label_3fb554;
        case 0x3fb558u: goto label_3fb558;
        case 0x3fb55cu: goto label_3fb55c;
        case 0x3fb560u: goto label_3fb560;
        case 0x3fb564u: goto label_3fb564;
        case 0x3fb568u: goto label_3fb568;
        case 0x3fb56cu: goto label_3fb56c;
        case 0x3fb570u: goto label_3fb570;
        case 0x3fb574u: goto label_3fb574;
        case 0x3fb578u: goto label_3fb578;
        case 0x3fb57cu: goto label_3fb57c;
        case 0x3fb580u: goto label_3fb580;
        case 0x3fb584u: goto label_3fb584;
        case 0x3fb588u: goto label_3fb588;
        case 0x3fb58cu: goto label_3fb58c;
        case 0x3fb590u: goto label_3fb590;
        case 0x3fb594u: goto label_3fb594;
        case 0x3fb598u: goto label_3fb598;
        case 0x3fb59cu: goto label_3fb59c;
        case 0x3fb5a0u: goto label_3fb5a0;
        case 0x3fb5a4u: goto label_3fb5a4;
        case 0x3fb5a8u: goto label_3fb5a8;
        case 0x3fb5acu: goto label_3fb5ac;
        case 0x3fb5b0u: goto label_3fb5b0;
        case 0x3fb5b4u: goto label_3fb5b4;
        case 0x3fb5b8u: goto label_3fb5b8;
        case 0x3fb5bcu: goto label_3fb5bc;
        case 0x3fb5c0u: goto label_3fb5c0;
        case 0x3fb5c4u: goto label_3fb5c4;
        case 0x3fb5c8u: goto label_3fb5c8;
        case 0x3fb5ccu: goto label_3fb5cc;
        case 0x3fb5d0u: goto label_3fb5d0;
        case 0x3fb5d4u: goto label_3fb5d4;
        case 0x3fb5d8u: goto label_3fb5d8;
        case 0x3fb5dcu: goto label_3fb5dc;
        case 0x3fb5e0u: goto label_3fb5e0;
        case 0x3fb5e4u: goto label_3fb5e4;
        case 0x3fb5e8u: goto label_3fb5e8;
        case 0x3fb5ecu: goto label_3fb5ec;
        case 0x3fb5f0u: goto label_3fb5f0;
        case 0x3fb5f4u: goto label_3fb5f4;
        case 0x3fb5f8u: goto label_3fb5f8;
        case 0x3fb5fcu: goto label_3fb5fc;
        case 0x3fb600u: goto label_3fb600;
        case 0x3fb604u: goto label_3fb604;
        case 0x3fb608u: goto label_3fb608;
        case 0x3fb60cu: goto label_3fb60c;
        case 0x3fb610u: goto label_3fb610;
        case 0x3fb614u: goto label_3fb614;
        case 0x3fb618u: goto label_3fb618;
        case 0x3fb61cu: goto label_3fb61c;
        case 0x3fb620u: goto label_3fb620;
        case 0x3fb624u: goto label_3fb624;
        case 0x3fb628u: goto label_3fb628;
        case 0x3fb62cu: goto label_3fb62c;
        case 0x3fb630u: goto label_3fb630;
        case 0x3fb634u: goto label_3fb634;
        case 0x3fb638u: goto label_3fb638;
        case 0x3fb63cu: goto label_3fb63c;
        case 0x3fb640u: goto label_3fb640;
        case 0x3fb644u: goto label_3fb644;
        case 0x3fb648u: goto label_3fb648;
        case 0x3fb64cu: goto label_3fb64c;
        case 0x3fb650u: goto label_3fb650;
        case 0x3fb654u: goto label_3fb654;
        case 0x3fb658u: goto label_3fb658;
        case 0x3fb65cu: goto label_3fb65c;
        case 0x3fb660u: goto label_3fb660;
        case 0x3fb664u: goto label_3fb664;
        case 0x3fb668u: goto label_3fb668;
        case 0x3fb66cu: goto label_3fb66c;
        case 0x3fb670u: goto label_3fb670;
        case 0x3fb674u: goto label_3fb674;
        case 0x3fb678u: goto label_3fb678;
        case 0x3fb67cu: goto label_3fb67c;
        case 0x3fb680u: goto label_3fb680;
        case 0x3fb684u: goto label_3fb684;
        case 0x3fb688u: goto label_3fb688;
        case 0x3fb68cu: goto label_3fb68c;
        case 0x3fb690u: goto label_3fb690;
        case 0x3fb694u: goto label_3fb694;
        case 0x3fb698u: goto label_3fb698;
        case 0x3fb69cu: goto label_3fb69c;
        case 0x3fb6a0u: goto label_3fb6a0;
        case 0x3fb6a4u: goto label_3fb6a4;
        case 0x3fb6a8u: goto label_3fb6a8;
        case 0x3fb6acu: goto label_3fb6ac;
        case 0x3fb6b0u: goto label_3fb6b0;
        case 0x3fb6b4u: goto label_3fb6b4;
        case 0x3fb6b8u: goto label_3fb6b8;
        case 0x3fb6bcu: goto label_3fb6bc;
        case 0x3fb6c0u: goto label_3fb6c0;
        case 0x3fb6c4u: goto label_3fb6c4;
        case 0x3fb6c8u: goto label_3fb6c8;
        case 0x3fb6ccu: goto label_3fb6cc;
        case 0x3fb6d0u: goto label_3fb6d0;
        case 0x3fb6d4u: goto label_3fb6d4;
        case 0x3fb6d8u: goto label_3fb6d8;
        case 0x3fb6dcu: goto label_3fb6dc;
        case 0x3fb6e0u: goto label_3fb6e0;
        case 0x3fb6e4u: goto label_3fb6e4;
        case 0x3fb6e8u: goto label_3fb6e8;
        case 0x3fb6ecu: goto label_3fb6ec;
        case 0x3fb6f0u: goto label_3fb6f0;
        case 0x3fb6f4u: goto label_3fb6f4;
        case 0x3fb6f8u: goto label_3fb6f8;
        case 0x3fb6fcu: goto label_3fb6fc;
        case 0x3fb700u: goto label_3fb700;
        case 0x3fb704u: goto label_3fb704;
        case 0x3fb708u: goto label_3fb708;
        case 0x3fb70cu: goto label_3fb70c;
        case 0x3fb710u: goto label_3fb710;
        case 0x3fb714u: goto label_3fb714;
        case 0x3fb718u: goto label_3fb718;
        case 0x3fb71cu: goto label_3fb71c;
        case 0x3fb720u: goto label_3fb720;
        case 0x3fb724u: goto label_3fb724;
        case 0x3fb728u: goto label_3fb728;
        case 0x3fb72cu: goto label_3fb72c;
        case 0x3fb730u: goto label_3fb730;
        case 0x3fb734u: goto label_3fb734;
        case 0x3fb738u: goto label_3fb738;
        case 0x3fb73cu: goto label_3fb73c;
        case 0x3fb740u: goto label_3fb740;
        case 0x3fb744u: goto label_3fb744;
        case 0x3fb748u: goto label_3fb748;
        case 0x3fb74cu: goto label_3fb74c;
        case 0x3fb750u: goto label_3fb750;
        case 0x3fb754u: goto label_3fb754;
        case 0x3fb758u: goto label_3fb758;
        case 0x3fb75cu: goto label_3fb75c;
        case 0x3fb760u: goto label_3fb760;
        case 0x3fb764u: goto label_3fb764;
        case 0x3fb768u: goto label_3fb768;
        case 0x3fb76cu: goto label_3fb76c;
        case 0x3fb770u: goto label_3fb770;
        case 0x3fb774u: goto label_3fb774;
        case 0x3fb778u: goto label_3fb778;
        case 0x3fb77cu: goto label_3fb77c;
        case 0x3fb780u: goto label_3fb780;
        case 0x3fb784u: goto label_3fb784;
        case 0x3fb788u: goto label_3fb788;
        case 0x3fb78cu: goto label_3fb78c;
        case 0x3fb790u: goto label_3fb790;
        case 0x3fb794u: goto label_3fb794;
        case 0x3fb798u: goto label_3fb798;
        case 0x3fb79cu: goto label_3fb79c;
        case 0x3fb7a0u: goto label_3fb7a0;
        case 0x3fb7a4u: goto label_3fb7a4;
        case 0x3fb7a8u: goto label_3fb7a8;
        case 0x3fb7acu: goto label_3fb7ac;
        case 0x3fb7b0u: goto label_3fb7b0;
        case 0x3fb7b4u: goto label_3fb7b4;
        case 0x3fb7b8u: goto label_3fb7b8;
        case 0x3fb7bcu: goto label_3fb7bc;
        case 0x3fb7c0u: goto label_3fb7c0;
        case 0x3fb7c4u: goto label_3fb7c4;
        case 0x3fb7c8u: goto label_3fb7c8;
        case 0x3fb7ccu: goto label_3fb7cc;
        case 0x3fb7d0u: goto label_3fb7d0;
        case 0x3fb7d4u: goto label_3fb7d4;
        case 0x3fb7d8u: goto label_3fb7d8;
        case 0x3fb7dcu: goto label_3fb7dc;
        case 0x3fb7e0u: goto label_3fb7e0;
        case 0x3fb7e4u: goto label_3fb7e4;
        case 0x3fb7e8u: goto label_3fb7e8;
        case 0x3fb7ecu: goto label_3fb7ec;
        case 0x3fb7f0u: goto label_3fb7f0;
        case 0x3fb7f4u: goto label_3fb7f4;
        case 0x3fb7f8u: goto label_3fb7f8;
        case 0x3fb7fcu: goto label_3fb7fc;
        default: break;
    }

    ctx->pc = 0x3fb3a0u;

label_3fb3a0:
    // 0x3fb3a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3fb3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3fb3a4:
    // 0x3fb3a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3fb3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fb3a8:
    // 0x3fb3a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3fb3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3fb3ac:
    // 0x3fb3ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3fb3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3fb3b0:
    // 0x3fb3b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3fb3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3fb3b4:
    // 0x3fb3b4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3fb3b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fb3b8:
    // 0x3fb3b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3fb3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3fb3bc:
    // 0x3fb3bc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3fb3bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3fb3c0:
    // 0x3fb3c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3fb3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3fb3c4:
    // 0x3fb3c4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3fb3c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3fb3c8:
    // 0x3fb3c8: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
label_3fb3cc:
    if (ctx->pc == 0x3FB3CCu) {
        ctx->pc = 0x3FB3CCu;
            // 0x3fb3cc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FB3D0u;
        goto label_3fb3d0;
    }
    ctx->pc = 0x3FB3C8u;
    {
        const bool branch_taken_0x3fb3c8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FB3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB3C8u;
            // 0x3fb3cc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb3c8) {
            ctx->pc = 0x3FB3D8u;
            goto label_3fb3d8;
        }
    }
    ctx->pc = 0x3FB3D0u;
label_3fb3d0:
    // 0x3fb3d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_3fb3d4:
    if (ctx->pc == 0x3FB3D4u) {
        ctx->pc = 0x3FB3D4u;
            // 0x3fb3d4: 0x96240050  lhu         $a0, 0x50($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x3FB3D8u;
        goto label_3fb3d8;
    }
    ctx->pc = 0x3FB3D0u;
    {
        const bool branch_taken_0x3fb3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB3D0u;
            // 0x3fb3d4: 0x96240050  lhu         $a0, 0x50($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb3d0) {
            ctx->pc = 0x3FB3DCu;
            goto label_3fb3dc;
        }
    }
    ctx->pc = 0x3FB3D8u;
label_3fb3d8:
    // 0x3fb3d8: 0x96240056  lhu         $a0, 0x56($s1)
    ctx->pc = 0x3fb3d8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 86)));
label_3fb3dc:
    // 0x3fb3dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3fb3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fb3e0:
    // 0x3fb3e0: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_3fb3e4:
    if (ctx->pc == 0x3FB3E4u) {
        ctx->pc = 0x3FB3E4u;
            // 0x3fb3e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3FB3E8u;
        goto label_3fb3e8;
    }
    ctx->pc = 0x3FB3E0u;
    {
        const bool branch_taken_0x3fb3e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3fb3e0) {
            ctx->pc = 0x3FB3E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB3E0u;
            // 0x3fb3e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FB3F0u;
            goto label_3fb3f0;
        }
    }
    ctx->pc = 0x3FB3E8u;
label_3fb3e8:
    // 0x3fb3e8: 0x10000004  b           . + 4 + (0x4 << 2)
label_3fb3ec:
    if (ctx->pc == 0x3FB3ECu) {
        ctx->pc = 0x3FB3ECu;
            // 0x3fb3ec: 0xae6000c4  sw          $zero, 0xC4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 196), GPR_U32(ctx, 0));
        ctx->pc = 0x3FB3F0u;
        goto label_3fb3f0;
    }
    ctx->pc = 0x3FB3E8u;
    {
        const bool branch_taken_0x3fb3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB3E8u;
            // 0x3fb3ec: 0xae6000c4  sw          $zero, 0xC4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb3e8) {
            ctx->pc = 0x3FB3FCu;
            goto label_3fb3fc;
        }
    }
    ctx->pc = 0x3FB3F0u;
label_3fb3f0:
    // 0x3fb3f0: 0x54820003  bnel        $a0, $v0, . + 4 + (0x3 << 2)
label_3fb3f4:
    if (ctx->pc == 0x3FB3F4u) {
        ctx->pc = 0x3FB3F4u;
            // 0x3fb3f4: 0x8e220040  lw          $v0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->pc = 0x3FB3F8u;
        goto label_3fb3f8;
    }
    ctx->pc = 0x3FB3F0u;
    {
        const bool branch_taken_0x3fb3f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3fb3f0) {
            ctx->pc = 0x3FB3F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB3F0u;
            // 0x3fb3f4: 0x8e220040  lw          $v0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FB400u;
            goto label_3fb400;
        }
    }
    ctx->pc = 0x3FB3F8u;
label_3fb3f8:
    // 0x3fb3f8: 0xae6300c4  sw          $v1, 0xC4($s3)
    ctx->pc = 0x3fb3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 196), GPR_U32(ctx, 3));
label_3fb3fc:
    // 0x3fb3fc: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x3fb3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_3fb400:
    // 0x3fb400: 0x26640040  addiu       $a0, $s3, 0x40
    ctx->pc = 0x3fb400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_3fb404:
    // 0x3fb404: 0x96230052  lhu         $v1, 0x52($s1)
    ctx->pc = 0x3fb404u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 82)));
label_3fb408:
    // 0x3fb408: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x3fb408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3fb40c:
    // 0x3fb40c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3fb40cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3fb410:
    // 0x3fb410: 0xc04cc04  jal         func_133010
label_3fb414:
    if (ctx->pc == 0x3FB414u) {
        ctx->pc = 0x3FB414u;
            // 0x3fb414: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3FB418u;
        goto label_3fb418;
    }
    ctx->pc = 0x3FB410u;
    SET_GPR_U32(ctx, 31, 0x3FB418u);
    ctx->pc = 0x3FB414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB410u;
            // 0x3fb414: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB418u; }
        if (ctx->pc != 0x3FB418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB418u; }
        if (ctx->pc != 0x3FB418u) { return; }
    }
    ctx->pc = 0x3FB418u;
label_3fb418:
    // 0x3fb418: 0x96230050  lhu         $v1, 0x50($s1)
    ctx->pc = 0x3fb418u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 80)));
label_3fb41c:
    // 0x3fb41c: 0x26640050  addiu       $a0, $s3, 0x50
    ctx->pc = 0x3fb41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
label_3fb420:
    // 0x3fb420: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x3fb420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_3fb424:
    // 0x3fb424: 0x96260052  lhu         $a2, 0x52($s1)
    ctx->pc = 0x3fb424u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 82)));
label_3fb428:
    // 0x3fb428: 0x38650001  xori        $a1, $v1, 0x1
    ctx->pc = 0x3fb428u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_3fb42c:
    // 0x3fb42c: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x3fb42cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
label_3fb430:
    // 0x3fb430: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x3fb430u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3fb434:
    // 0x3fb434: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x3fb434u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3fb438:
    // 0x3fb438: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x3fb438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_3fb43c:
    // 0x3fb43c: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x3fb43cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3fb440:
    // 0x3fb440: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x3fb440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3fb444:
    // 0x3fb444: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3fb444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3fb448:
    // 0x3fb448: 0xc04cc04  jal         func_133010
label_3fb44c:
    if (ctx->pc == 0x3FB44Cu) {
        ctx->pc = 0x3FB44Cu;
            // 0x3fb44c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3FB450u;
        goto label_3fb450;
    }
    ctx->pc = 0x3FB448u;
    SET_GPR_U32(ctx, 31, 0x3FB450u);
    ctx->pc = 0x3FB44Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB448u;
            // 0x3fb44c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB450u; }
        if (ctx->pc != 0x3FB450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB450u; }
        if (ctx->pc != 0x3FB450u) { return; }
    }
    ctx->pc = 0x3FB450u;
label_3fb450:
    // 0x3fb450: 0x26640080  addiu       $a0, $s3, 0x80
    ctx->pc = 0x3fb450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
label_3fb454:
    // 0x3fb454: 0x26650050  addiu       $a1, $s3, 0x50
    ctx->pc = 0x3fb454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
label_3fb458:
    // 0x3fb458: 0xc04cc90  jal         func_133240
label_3fb45c:
    if (ctx->pc == 0x3FB45Cu) {
        ctx->pc = 0x3FB45Cu;
            // 0x3fb45c: 0x26660040  addiu       $a2, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->pc = 0x3FB460u;
        goto label_3fb460;
    }
    ctx->pc = 0x3FB458u;
    SET_GPR_U32(ctx, 31, 0x3FB460u);
    ctx->pc = 0x3FB45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB458u;
            // 0x3fb45c: 0x26660040  addiu       $a2, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB460u; }
        if (ctx->pc != 0x3FB460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB460u; }
        if (ctx->pc != 0x3FB460u) { return; }
    }
    ctx->pc = 0x3FB460u;
label_3fb460:
    // 0x3fb460: 0x26640080  addiu       $a0, $s3, 0x80
    ctx->pc = 0x3fb460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
label_3fb464:
    // 0x3fb464: 0xc04cc44  jal         func_133110
label_3fb468:
    if (ctx->pc == 0x3FB468u) {
        ctx->pc = 0x3FB468u;
            // 0x3fb468: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FB46Cu;
        goto label_3fb46c;
    }
    ctx->pc = 0x3FB464u;
    SET_GPR_U32(ctx, 31, 0x3FB46Cu);
    ctx->pc = 0x3FB468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB464u;
            // 0x3fb468: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB46Cu; }
        if (ctx->pc != 0x3FB46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB46Cu; }
        if (ctx->pc != 0x3FB46Cu) { return; }
    }
    ctx->pc = 0x3FB46Cu;
label_3fb46c:
    // 0x3fb46c: 0x26640090  addiu       $a0, $s3, 0x90
    ctx->pc = 0x3fb46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_3fb470:
    // 0x3fb470: 0xc04cc04  jal         func_133010
label_3fb474:
    if (ctx->pc == 0x3FB474u) {
        ctx->pc = 0x3FB474u;
            // 0x3fb474: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FB478u;
        goto label_3fb478;
    }
    ctx->pc = 0x3FB470u;
    SET_GPR_U32(ctx, 31, 0x3FB478u);
    ctx->pc = 0x3FB474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB470u;
            // 0x3fb474: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB478u; }
        if (ctx->pc != 0x3FB478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB478u; }
        if (ctx->pc != 0x3FB478u) { return; }
    }
    ctx->pc = 0x3FB478u;
label_3fb478:
    // 0x3fb478: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3fb478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3fb47c:
    // 0x3fb47c: 0x26650090  addiu       $a1, $s3, 0x90
    ctx->pc = 0x3fb47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_3fb480:
    // 0x3fb480: 0xc04cbf0  jal         func_132FC0
label_3fb484:
    if (ctx->pc == 0x3FB484u) {
        ctx->pc = 0x3FB484u;
            // 0x3fb484: 0x26660080  addiu       $a2, $s3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
        ctx->pc = 0x3FB488u;
        goto label_3fb488;
    }
    ctx->pc = 0x3FB480u;
    SET_GPR_U32(ctx, 31, 0x3FB488u);
    ctx->pc = 0x3FB484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB480u;
            // 0x3fb484: 0x26660080  addiu       $a2, $s3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB488u; }
        if (ctx->pc != 0x3FB488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB488u; }
        if (ctx->pc != 0x3FB488u) { return; }
    }
    ctx->pc = 0x3FB488u;
label_3fb488:
    // 0x3fb488: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x3fb488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fb48c:
    // 0x3fb48c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3fb48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3fb490:
    // 0x3fb490: 0xc443b820  lwc1        $f3, -0x47E0($v0)
    ctx->pc = 0x3fb490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3fb494:
    // 0x3fb494: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3fb494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_3fb498:
    // 0x3fb498: 0xc461b828  lwc1        $f1, -0x47D8($v1)
    ctx->pc = 0x3fb498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294948904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fb49c:
    // 0x3fb49c: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x3fb49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_3fb4a0:
    // 0x3fb4a0: 0xc7a40054  lwc1        $f4, 0x54($sp)
    ctx->pc = 0x3fb4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3fb4a4:
    // 0x3fb4a4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3fb4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3fb4a8:
    // 0x3fb4a8: 0xc442b824  lwc1        $f2, -0x47DC($v0)
    ctx->pc = 0x3fb4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3fb4ac:
    // 0x3fb4ac: 0xe6640004  swc1        $f4, 0x4($s3)
    ctx->pc = 0x3fb4acu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_3fb4b0:
    // 0x3fb4b0: 0xc7a40058  lwc1        $f4, 0x58($sp)
    ctx->pc = 0x3fb4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3fb4b4:
    // 0x3fb4b4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3fb4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3fb4b8:
    // 0x3fb4b8: 0xc440b82c  lwc1        $f0, -0x47D4($v0)
    ctx->pc = 0x3fb4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fb4bc:
    // 0x3fb4bc: 0xe6640008  swc1        $f4, 0x8($s3)
    ctx->pc = 0x3fb4bcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_3fb4c0:
    // 0x3fb4c0: 0xc7a4005c  lwc1        $f4, 0x5C($sp)
    ctx->pc = 0x3fb4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3fb4c4:
    // 0x3fb4c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3fb4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fb4c8:
    // 0x3fb4c8: 0xe664000c  swc1        $f4, 0xC($s3)
    ctx->pc = 0x3fb4c8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_3fb4cc:
    // 0x3fb4cc: 0xc6640090  lwc1        $f4, 0x90($s3)
    ctx->pc = 0x3fb4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3fb4d0:
    // 0x3fb4d0: 0xe6640010  swc1        $f4, 0x10($s3)
    ctx->pc = 0x3fb4d0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
label_3fb4d4:
    // 0x3fb4d4: 0xc6640094  lwc1        $f4, 0x94($s3)
    ctx->pc = 0x3fb4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3fb4d8:
    // 0x3fb4d8: 0xe6640014  swc1        $f4, 0x14($s3)
    ctx->pc = 0x3fb4d8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
label_3fb4dc:
    // 0x3fb4dc: 0xc6640098  lwc1        $f4, 0x98($s3)
    ctx->pc = 0x3fb4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3fb4e0:
    // 0x3fb4e0: 0xe6640018  swc1        $f4, 0x18($s3)
    ctx->pc = 0x3fb4e0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
label_3fb4e4:
    // 0x3fb4e4: 0xc664009c  lwc1        $f4, 0x9C($s3)
    ctx->pc = 0x3fb4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3fb4e8:
    // 0x3fb4e8: 0xe664001c  swc1        $f4, 0x1C($s3)
    ctx->pc = 0x3fb4e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
label_3fb4ec:
    // 0x3fb4ec: 0xc6640080  lwc1        $f4, 0x80($s3)
    ctx->pc = 0x3fb4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3fb4f0:
    // 0x3fb4f0: 0xe6640020  swc1        $f4, 0x20($s3)
    ctx->pc = 0x3fb4f0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
label_3fb4f4:
    // 0x3fb4f4: 0xc6640084  lwc1        $f4, 0x84($s3)
    ctx->pc = 0x3fb4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3fb4f8:
    // 0x3fb4f8: 0xe6640024  swc1        $f4, 0x24($s3)
    ctx->pc = 0x3fb4f8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
label_3fb4fc:
    // 0x3fb4fc: 0xc6640088  lwc1        $f4, 0x88($s3)
    ctx->pc = 0x3fb4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3fb500:
    // 0x3fb500: 0xe6640028  swc1        $f4, 0x28($s3)
    ctx->pc = 0x3fb500u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
label_3fb504:
    // 0x3fb504: 0xc664008c  lwc1        $f4, 0x8C($s3)
    ctx->pc = 0x3fb504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3fb508:
    // 0x3fb508: 0xe664002c  swc1        $f4, 0x2C($s3)
    ctx->pc = 0x3fb508u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
label_3fb50c:
    // 0x3fb50c: 0xe6630030  swc1        $f3, 0x30($s3)
    ctx->pc = 0x3fb50cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
label_3fb510:
    // 0x3fb510: 0xe6620034  swc1        $f2, 0x34($s3)
    ctx->pc = 0x3fb510u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
label_3fb514:
    // 0x3fb514: 0xe6610038  swc1        $f1, 0x38($s3)
    ctx->pc = 0x3fb514u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
label_3fb518:
    // 0x3fb518: 0xe660003c  swc1        $f0, 0x3C($s3)
    ctx->pc = 0x3fb518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 60), bits); }
label_3fb51c:
    // 0x3fb51c: 0xae60002c  sw          $zero, 0x2C($s3)
    ctx->pc = 0x3fb51cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 0));
label_3fb520:
    // 0x3fb520: 0xae60001c  sw          $zero, 0x1C($s3)
    ctx->pc = 0x3fb520u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
label_3fb524:
    // 0x3fb524: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x3fb524u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_3fb528:
    // 0x3fb528: 0x96230050  lhu         $v1, 0x50($s1)
    ctx->pc = 0x3fb528u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 80)));
label_3fb52c:
    // 0x3fb52c: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_3fb530:
    if (ctx->pc == 0x3FB530u) {
        ctx->pc = 0x3FB530u;
            // 0x3fb530: 0x8e230040  lw          $v1, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->pc = 0x3FB534u;
        goto label_3fb534;
    }
    ctx->pc = 0x3FB52Cu;
    {
        const bool branch_taken_0x3fb52c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3fb52c) {
            ctx->pc = 0x3FB530u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB52Cu;
            // 0x3fb530: 0x8e230040  lw          $v1, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FB53Cu;
            goto label_3fb53c;
        }
    }
    ctx->pc = 0x3FB534u;
label_3fb534:
    // 0x3fb534: 0x10000008  b           . + 4 + (0x8 << 2)
label_3fb538:
    if (ctx->pc == 0x3FB538u) {
        ctx->pc = 0x3FB538u;
            // 0x3fb538: 0x96230052  lhu         $v1, 0x52($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 82)));
        ctx->pc = 0x3FB53Cu;
        goto label_3fb53c;
    }
    ctx->pc = 0x3FB534u;
    {
        const bool branch_taken_0x3fb534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB534u;
            // 0x3fb538: 0x96230052  lhu         $v1, 0x52($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 82)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb534) {
            ctx->pc = 0x3FB558u;
            goto label_3fb558;
        }
    }
    ctx->pc = 0x3FB53Cu;
label_3fb53c:
    // 0x3fb53c: 0x96240052  lhu         $a0, 0x52($s1)
    ctx->pc = 0x3fb53cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 82)));
label_3fb540:
    // 0x3fb540: 0x9463001c  lhu         $v1, 0x1C($v1)
    ctx->pc = 0x3fb540u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
label_3fb544:
    // 0x3fb544: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3fb544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3fb548:
    // 0x3fb548: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x3fb548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_3fb54c:
    // 0x3fb54c: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x3fb54cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
label_3fb550:
    // 0x3fb550: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x3fb550u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3fb554:
    // 0x3fb554: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x3fb554u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3fb558:
    // 0x3fb558: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3fb558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3fb55c:
    // 0x3fb55c: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x3fb55cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_3fb560:
    // 0x3fb560: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x3fb560u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3fb564:
    // 0x3fb564: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x3fb564u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3fb568:
    // 0x3fb568: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3fb568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fb56c:
    // 0x3fb56c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3fb56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3fb570:
    // 0x3fb570: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3fb570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3fb574:
    // 0x3fb574: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x3fb574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fb578:
    // 0x3fb578: 0xe66000a0  swc1        $f0, 0xA0($s3)
    ctx->pc = 0x3fb578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 160), bits); }
label_3fb57c:
    // 0x3fb57c: 0x96230050  lhu         $v1, 0x50($s1)
    ctx->pc = 0x3fb57cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 80)));
label_3fb580:
    // 0x3fb580: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_3fb584:
    if (ctx->pc == 0x3FB584u) {
        ctx->pc = 0x3FB584u;
            // 0x3fb584: 0x96230052  lhu         $v1, 0x52($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 82)));
        ctx->pc = 0x3FB588u;
        goto label_3fb588;
    }
    ctx->pc = 0x3FB580u;
    {
        const bool branch_taken_0x3fb580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3fb580) {
            ctx->pc = 0x3FB584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB580u;
            // 0x3fb584: 0x96230052  lhu         $v1, 0x52($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 82)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FB5A8u;
            goto label_3fb5a8;
        }
    }
    ctx->pc = 0x3FB588u;
label_3fb588:
    // 0x3fb588: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x3fb588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_3fb58c:
    // 0x3fb58c: 0x96240052  lhu         $a0, 0x52($s1)
    ctx->pc = 0x3fb58cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 82)));
label_3fb590:
    // 0x3fb590: 0x9463001c  lhu         $v1, 0x1C($v1)
    ctx->pc = 0x3fb590u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
label_3fb594:
    // 0x3fb594: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3fb594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3fb598:
    // 0x3fb598: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x3fb598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_3fb59c:
    // 0x3fb59c: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x3fb59cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
label_3fb5a0:
    // 0x3fb5a0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x3fb5a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3fb5a4:
    // 0x3fb5a4: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x3fb5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3fb5a8:
    // 0x3fb5a8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3fb5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3fb5ac:
    // 0x3fb5ac: 0x8e260040  lw          $a2, 0x40($s1)
    ctx->pc = 0x3fb5acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_3fb5b0:
    // 0x3fb5b0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3fb5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3fb5b4:
    // 0x3fb5b4: 0x261002c0  addiu       $s0, $s0, 0x2C0
    ctx->pc = 0x3fb5b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_3fb5b8:
    // 0x3fb5b8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3fb5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3fb5bc:
    // 0x3fb5bc: 0x26640060  addiu       $a0, $s3, 0x60
    ctx->pc = 0x3fb5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_3fb5c0:
    // 0x3fb5c0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3fb5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3fb5c4:
    // 0x3fb5c4: 0x26650040  addiu       $a1, $s3, 0x40
    ctx->pc = 0x3fb5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_3fb5c8:
    // 0x3fb5c8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3fb5c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fb5cc:
    // 0x3fb5cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3fb5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3fb5d0:
    // 0x3fb5d0: 0x26660050  addiu       $a2, $s3, 0x50
    ctx->pc = 0x3fb5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
label_3fb5d4:
    // 0x3fb5d4: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x3fb5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fb5d8:
    // 0x3fb5d8: 0xc0bc5e8  jal         func_2F17A0
label_3fb5dc:
    if (ctx->pc == 0x3FB5DCu) {
        ctx->pc = 0x3FB5DCu;
            // 0x3fb5dc: 0xe66000a4  swc1        $f0, 0xA4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 164), bits); }
        ctx->pc = 0x3FB5E0u;
        goto label_3fb5e0;
    }
    ctx->pc = 0x3FB5D8u;
    SET_GPR_U32(ctx, 31, 0x3FB5E0u);
    ctx->pc = 0x3FB5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB5D8u;
            // 0x3fb5dc: 0xe66000a4  swc1        $f0, 0xA4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 164), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F17A0u;
    if (runtime->hasFunction(0x2F17A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F17A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB5E0u; }
        if (ctx->pc != 0x3FB5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F17A0_0x2f17a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB5E0u; }
        if (ctx->pc != 0x3FB5E0u) { return; }
    }
    ctx->pc = 0x3FB5E0u;
label_3fb5e0:
    // 0x3fb5e0: 0xe66000b0  swc1        $f0, 0xB0($s3)
    ctx->pc = 0x3fb5e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 176), bits); }
label_3fb5e4:
    // 0x3fb5e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fb5e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fb5e8:
    // 0x3fb5e8: 0xc66300a0  lwc1        $f3, 0xA0($s3)
    ctx->pc = 0x3fb5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3fb5ec:
    // 0x3fb5ec: 0x26640060  addiu       $a0, $s3, 0x60
    ctx->pc = 0x3fb5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_3fb5f0:
    // 0x3fb5f0: 0xc66100a4  lwc1        $f1, 0xA4($s3)
    ctx->pc = 0x3fb5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fb5f4:
    // 0x3fb5f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3fb5f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fb5f8:
    // 0x3fb5f8: 0x0  nop
    ctx->pc = 0x3fb5f8u;
    // NOP
label_3fb5fc:
    // 0x3fb5fc: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x3fb5fcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_3fb600:
    // 0x3fb600: 0x46030801  sub.s       $f0, $f1, $f3
    ctx->pc = 0x3fb600u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_3fb604:
    // 0x3fb604: 0xc66200b0  lwc1        $f2, 0xB0($s3)
    ctx->pc = 0x3fb604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3fb608:
    // 0x3fb608: 0x4600101c  madd.s      $f0, $f2, $f0
    ctx->pc = 0x3fb608u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_3fb60c:
    // 0x3fb60c: 0xc04cc1c  jal         func_133070
label_3fb610:
    if (ctx->pc == 0x3FB610u) {
        ctx->pc = 0x3FB610u;
            // 0x3fb610: 0xe66000a8  swc1        $f0, 0xA8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 168), bits); }
        ctx->pc = 0x3FB614u;
        goto label_3fb614;
    }
    ctx->pc = 0x3FB60Cu;
    SET_GPR_U32(ctx, 31, 0x3FB614u);
    ctx->pc = 0x3FB610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB60Cu;
            // 0x3fb610: 0xe66000a8  swc1        $f0, 0xA8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 168), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB614u; }
        if (ctx->pc != 0x3FB614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB614u; }
        if (ctx->pc != 0x3FB614u) { return; }
    }
    ctx->pc = 0x3FB614u;
label_3fb614:
    // 0x3fb614: 0xc66300a8  lwc1        $f3, 0xA8($s3)
    ctx->pc = 0x3fb614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3fb618:
    // 0x3fb618: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x3fb618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_3fb61c:
    // 0x3fb61c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3fb61cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3fb620:
    // 0x3fb620: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x3fb620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_3fb624:
    // 0x3fb624: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x3fb624u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
label_3fb628:
    // 0x3fb628: 0xe66000b8  swc1        $f0, 0xB8($s3)
    ctx->pc = 0x3fb628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 184), bits); }
label_3fb62c:
    // 0x3fb62c: 0xc6230044  lwc1        $f3, 0x44($s1)
    ctx->pc = 0x3fb62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3fb630:
    // 0x3fb630: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3fb630u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3fb634:
    // 0x3fb634: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3fb634u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fb638:
    // 0x3fb638: 0x0  nop
    ctx->pc = 0x3fb638u;
    // NOP
label_3fb63c:
    // 0x3fb63c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3fb63cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3fb640:
    // 0x3fb640: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x3fb640u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_3fb644:
    // 0x3fb644: 0xe66000c0  swc1        $f0, 0xC0($s3)
    ctx->pc = 0x3fb644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 192), bits); }
label_3fb648:
    // 0x3fb648: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
label_3fb64c:
    if (ctx->pc == 0x3FB64Cu) {
        ctx->pc = 0x3FB64Cu;
            // 0x3fb64c: 0xae7200cc  sw          $s2, 0xCC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 204), GPR_U32(ctx, 18));
        ctx->pc = 0x3FB650u;
        goto label_3fb650;
    }
    ctx->pc = 0x3FB648u;
    {
        const bool branch_taken_0x3fb648 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FB64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB648u;
            // 0x3fb64c: 0xae7200cc  sw          $s2, 0xCC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 204), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb648) {
            ctx->pc = 0x3FB660u;
            goto label_3fb660;
        }
    }
    ctx->pc = 0x3FB650u;
label_3fb650:
    // 0x3fb650: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x3fb650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_3fb654:
    // 0x3fb654: 0x84630026  lh          $v1, 0x26($v1)
    ctx->pc = 0x3fb654u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 38)));
label_3fb658:
    // 0x3fb658: 0x10000002  b           . + 4 + (0x2 << 2)
label_3fb65c:
    if (ctx->pc == 0x3FB65Cu) {
        ctx->pc = 0x3FB65Cu;
            // 0x3fb65c: 0xae6300c8  sw          $v1, 0xC8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 200), GPR_U32(ctx, 3));
        ctx->pc = 0x3FB660u;
        goto label_3fb660;
    }
    ctx->pc = 0x3FB658u;
    {
        const bool branch_taken_0x3fb658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB658u;
            // 0x3fb65c: 0xae6300c8  sw          $v1, 0xC8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 200), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb658) {
            ctx->pc = 0x3FB664u;
            goto label_3fb664;
        }
    }
    ctx->pc = 0x3FB660u;
label_3fb660:
    // 0x3fb660: 0xae6000c8  sw          $zero, 0xC8($s3)
    ctx->pc = 0x3fb660u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 200), GPR_U32(ctx, 0));
label_3fb664:
    // 0x3fb664: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3fb664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3fb668:
    // 0x3fb668: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3fb668u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3fb66c:
    // 0x3fb66c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3fb66cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fb670:
    // 0x3fb670: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3fb670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3fb674:
    // 0x3fb674: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3fb674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3fb678:
    // 0x3fb678: 0x3e00008  jr          $ra
label_3fb67c:
    if (ctx->pc == 0x3FB67Cu) {
        ctx->pc = 0x3FB67Cu;
            // 0x3fb67c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3FB680u;
        goto label_3fb680;
    }
    ctx->pc = 0x3FB678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FB67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB678u;
            // 0x3fb67c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FB680u;
label_3fb680:
    // 0x3fb680: 0x3e00008  jr          $ra
label_3fb684:
    if (ctx->pc == 0x3FB684u) {
        ctx->pc = 0x3FB688u;
        goto label_3fb688;
    }
    ctx->pc = 0x3FB680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FB688u;
label_3fb688:
    // 0x3fb688: 0x0  nop
    ctx->pc = 0x3fb688u;
    // NOP
label_3fb68c:
    // 0x3fb68c: 0x0  nop
    ctx->pc = 0x3fb68cu;
    // NOP
label_3fb690:
    // 0x3fb690: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3fb690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3fb694:
    // 0x3fb694: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3fb694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3fb698:
    // 0x3fb698: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3fb698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3fb69c:
    // 0x3fb69c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3fb69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3fb6a0:
    // 0x3fb6a0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3fb6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3fb6a4:
    // 0x3fb6a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3fb6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3fb6a8:
    // 0x3fb6a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3fb6a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fb6ac:
    // 0x3fb6ac: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x3fb6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_3fb6b0:
    // 0x3fb6b0: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x3fb6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3fb6b4:
    // 0x3fb6b4: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x3fb6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fb6b8:
    // 0x3fb6b8: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x3fb6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fb6bc:
    // 0x3fb6bc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3fb6bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3fb6c0:
    // 0x3fb6c0: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x3fb6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_3fb6c4:
    // 0x3fb6c4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x3fb6c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3fb6c8:
    // 0x3fb6c8: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x3fb6c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3fb6cc:
    // 0x3fb6cc: 0xc483002c  lwc1        $f3, 0x2C($a0)
    ctx->pc = 0x3fb6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3fb6d0:
    // 0x3fb6d0: 0xc4820028  lwc1        $f2, 0x28($a0)
    ctx->pc = 0x3fb6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3fb6d4:
    // 0x3fb6d4: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x3fb6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fb6d8:
    // 0x3fb6d8: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x3fb6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fb6dc:
    // 0x3fb6dc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3fb6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3fb6e0:
    // 0x3fb6e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3fb6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fb6e4:
    // 0x3fb6e4: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x3fb6e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3fb6e8:
    // 0x3fb6e8: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x3fb6e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_3fb6ec:
    // 0x3fb6ec: 0xc0892b0  jal         func_224AC0
label_3fb6f0:
    if (ctx->pc == 0x3FB6F0u) {
        ctx->pc = 0x3FB6F0u;
            // 0x3fb6f0: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x3FB6F4u;
        goto label_3fb6f4;
    }
    ctx->pc = 0x3FB6ECu;
    SET_GPR_U32(ctx, 31, 0x3FB6F4u);
    ctx->pc = 0x3FB6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB6ECu;
            // 0x3fb6f0: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB6F4u; }
        if (ctx->pc != 0x3FB6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB6F4u; }
        if (ctx->pc != 0x3FB6F4u) { return; }
    }
    ctx->pc = 0x3FB6F4u;
label_3fb6f4:
    // 0x3fb6f4: 0xc0e393c  jal         func_38E4F0
label_3fb6f8:
    if (ctx->pc == 0x3FB6F8u) {
        ctx->pc = 0x3FB6F8u;
            // 0x3fb6f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FB6FCu;
        goto label_3fb6fc;
    }
    ctx->pc = 0x3FB6F4u;
    SET_GPR_U32(ctx, 31, 0x3FB6FCu);
    ctx->pc = 0x3FB6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB6F4u;
            // 0x3fb6f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB6FCu; }
        if (ctx->pc != 0x3FB6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB6FCu; }
        if (ctx->pc != 0x3FB6FCu) { return; }
    }
    ctx->pc = 0x3FB6FCu;
label_3fb6fc:
    // 0x3fb6fc: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x3fb6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_3fb700:
    // 0x3fb700: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x3fb700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_3fb704:
    // 0x3fb704: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x3fb704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_3fb708:
    // 0x3fb708: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x3fb708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_3fb70c:
    // 0x3fb70c: 0x8e300050  lw          $s0, 0x50($s1)
    ctx->pc = 0x3fb70cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_3fb710:
    // 0x3fb710: 0xc088b74  jal         func_222DD0
label_3fb714:
    if (ctx->pc == 0x3FB714u) {
        ctx->pc = 0x3FB714u;
            // 0x3fb714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FB718u;
        goto label_3fb718;
    }
    ctx->pc = 0x3FB710u;
    SET_GPR_U32(ctx, 31, 0x3FB718u);
    ctx->pc = 0x3FB714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB710u;
            // 0x3fb714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB718u; }
        if (ctx->pc != 0x3FB718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB718u; }
        if (ctx->pc != 0x3FB718u) { return; }
    }
    ctx->pc = 0x3FB718u;
label_3fb718:
    // 0x3fb718: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x3fb718u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_3fb71c:
    // 0x3fb71c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x3fb71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_3fb720:
    // 0x3fb720: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3fb720u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3fb724:
    // 0x3fb724: 0x320f809  jalr        $t9
label_3fb728:
    if (ctx->pc == 0x3FB728u) {
        ctx->pc = 0x3FB728u;
            // 0x3fb728: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3FB72Cu;
        goto label_3fb72c;
    }
    ctx->pc = 0x3FB724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3FB72Cu);
        ctx->pc = 0x3FB728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB724u;
            // 0x3fb728: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3FB72Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3FB72Cu; }
            if (ctx->pc != 0x3FB72Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3FB72Cu;
label_3fb72c:
    // 0x3fb72c: 0xa2200064  sb          $zero, 0x64($s1)
    ctx->pc = 0x3fb72cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 0));
label_3fb730:
    // 0x3fb730: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fb730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fb734:
    // 0x3fb734: 0xa2200065  sb          $zero, 0x65($s1)
    ctx->pc = 0x3fb734u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 0));
label_3fb738:
    // 0x3fb738: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3fb738u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fb73c:
    // 0x3fb73c: 0xa2200066  sb          $zero, 0x66($s1)
    ctx->pc = 0x3fb73cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 102), (uint8_t)GPR_U32(ctx, 0));
label_3fb740:
    // 0x3fb740: 0xa2200067  sb          $zero, 0x67($s1)
    ctx->pc = 0x3fb740u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 103), (uint8_t)GPR_U32(ctx, 0));
label_3fb744:
    // 0x3fb744: 0xa2200068  sb          $zero, 0x68($s1)
    ctx->pc = 0x3fb744u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 0));
label_3fb748:
    // 0x3fb748: 0xa2200069  sb          $zero, 0x69($s1)
    ctx->pc = 0x3fb748u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 0));
label_3fb74c:
    // 0x3fb74c: 0xa220006a  sb          $zero, 0x6A($s1)
    ctx->pc = 0x3fb74cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 106), (uint8_t)GPR_U32(ctx, 0));
label_3fb750:
    // 0x3fb750: 0xa220006b  sb          $zero, 0x6B($s1)
    ctx->pc = 0x3fb750u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 107), (uint8_t)GPR_U32(ctx, 0));
label_3fb754:
    // 0x3fb754: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x3fb754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_3fb758:
    // 0x3fb758: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x3fb758u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_3fb75c:
    // 0x3fb75c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3fb75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3fb760:
    // 0x3fb760: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3fb760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3fb764:
    // 0x3fb764: 0xc08bff0  jal         func_22FFC0
label_3fb768:
    if (ctx->pc == 0x3FB768u) {
        ctx->pc = 0x3FB768u;
            // 0x3fb768: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FB76Cu;
        goto label_3fb76c;
    }
    ctx->pc = 0x3FB764u;
    SET_GPR_U32(ctx, 31, 0x3FB76Cu);
    ctx->pc = 0x3FB768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB764u;
            // 0x3fb768: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB76Cu; }
        if (ctx->pc != 0x3FB76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB76Cu; }
        if (ctx->pc != 0x3FB76Cu) { return; }
    }
    ctx->pc = 0x3FB76Cu;
label_3fb76c:
    // 0x3fb76c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3fb76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3fb770:
    // 0x3fb770: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3fb770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3fb774:
    // 0x3fb774: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3fb774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3fb778:
    // 0x3fb778: 0x3e00008  jr          $ra
label_3fb77c:
    if (ctx->pc == 0x3FB77Cu) {
        ctx->pc = 0x3FB77Cu;
            // 0x3fb77c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3FB780u;
        goto label_3fb780;
    }
    ctx->pc = 0x3FB778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FB77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB778u;
            // 0x3fb77c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FB780u;
label_3fb780:
    // 0x3fb780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3fb780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3fb784:
    // 0x3fb784: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x3fb784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_3fb788:
    // 0x3fb788: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3fb788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3fb78c:
    // 0x3fb78c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3fb78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3fb790:
    // 0x3fb790: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3fb790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3fb794:
    // 0x3fb794: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3fb794u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fb798:
    // 0x3fb798: 0x8c420dc0  lw          $v0, 0xDC0($v0)
    ctx->pc = 0x3fb798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3520)));
label_3fb79c:
    // 0x3fb79c: 0x8c4500bc  lw          $a1, 0xBC($v0)
    ctx->pc = 0x3fb79cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_3fb7a0:
    // 0x3fb7a0: 0xc0fee00  jal         func_3FB800
label_3fb7a4:
    if (ctx->pc == 0x3FB7A4u) {
        ctx->pc = 0x3FB7A4u;
            // 0x3fb7a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FB7A8u;
        goto label_3fb7a8;
    }
    ctx->pc = 0x3FB7A0u;
    SET_GPR_U32(ctx, 31, 0x3FB7A8u);
    ctx->pc = 0x3FB7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB7A0u;
            // 0x3fb7a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FB800u;
    if (runtime->hasFunction(0x3FB800u)) {
        auto targetFn = runtime->lookupFunction(0x3FB800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB7A8u; }
        if (ctx->pc != 0x3FB7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FB800_0x3fb800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB7A8u; }
        if (ctx->pc != 0x3FB7A8u) { return; }
    }
    ctx->pc = 0x3FB7A8u;
label_3fb7a8:
    // 0x3fb7a8: 0xa20000d1  sb          $zero, 0xD1($s0)
    ctx->pc = 0x3fb7a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 209), (uint8_t)GPR_U32(ctx, 0));
label_3fb7ac:
    // 0x3fb7ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fb7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fb7b0:
    // 0x3fb7b0: 0xa2000064  sb          $zero, 0x64($s0)
    ctx->pc = 0x3fb7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 0));
label_3fb7b4:
    // 0x3fb7b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3fb7b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fb7b8:
    // 0x3fb7b8: 0xa2000065  sb          $zero, 0x65($s0)
    ctx->pc = 0x3fb7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 0));
label_3fb7bc:
    // 0x3fb7bc: 0xa2000066  sb          $zero, 0x66($s0)
    ctx->pc = 0x3fb7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 102), (uint8_t)GPR_U32(ctx, 0));
label_3fb7c0:
    // 0x3fb7c0: 0xa2000067  sb          $zero, 0x67($s0)
    ctx->pc = 0x3fb7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 103), (uint8_t)GPR_U32(ctx, 0));
label_3fb7c4:
    // 0x3fb7c4: 0xa2000068  sb          $zero, 0x68($s0)
    ctx->pc = 0x3fb7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 0));
label_3fb7c8:
    // 0x3fb7c8: 0xa2000069  sb          $zero, 0x69($s0)
    ctx->pc = 0x3fb7c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 0));
label_3fb7cc:
    // 0x3fb7cc: 0xa200006a  sb          $zero, 0x6A($s0)
    ctx->pc = 0x3fb7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 0));
label_3fb7d0:
    // 0x3fb7d0: 0xa200006b  sb          $zero, 0x6B($s0)
    ctx->pc = 0x3fb7d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 107), (uint8_t)GPR_U32(ctx, 0));
label_3fb7d4:
    // 0x3fb7d4: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x3fb7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3fb7d8:
    // 0x3fb7d8: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x3fb7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_3fb7dc:
    // 0x3fb7dc: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3fb7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3fb7e0:
    // 0x3fb7e0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3fb7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3fb7e4:
    // 0x3fb7e4: 0xc08bff0  jal         func_22FFC0
label_3fb7e8:
    if (ctx->pc == 0x3FB7E8u) {
        ctx->pc = 0x3FB7E8u;
            // 0x3fb7e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FB7ECu;
        goto label_3fb7ec;
    }
    ctx->pc = 0x3FB7E4u;
    SET_GPR_U32(ctx, 31, 0x3FB7ECu);
    ctx->pc = 0x3FB7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB7E4u;
            // 0x3fb7e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB7ECu; }
        if (ctx->pc != 0x3FB7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB7ECu; }
        if (ctx->pc != 0x3FB7ECu) { return; }
    }
    ctx->pc = 0x3FB7ECu;
label_3fb7ec:
    // 0x3fb7ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3fb7ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3fb7f0:
    // 0x3fb7f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3fb7f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3fb7f4:
    // 0x3fb7f4: 0x3e00008  jr          $ra
label_3fb7f8:
    if (ctx->pc == 0x3FB7F8u) {
        ctx->pc = 0x3FB7F8u;
            // 0x3fb7f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3FB7FCu;
        goto label_3fb7fc;
    }
    ctx->pc = 0x3FB7F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FB7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB7F4u;
            // 0x3fb7f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FB7FCu;
label_3fb7fc:
    // 0x3fb7fc: 0x0  nop
    ctx->pc = 0x3fb7fcu;
    // NOP
}
