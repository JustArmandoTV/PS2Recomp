#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CB348
// Address: 0x1cb348 - 0x1cb7b8
void sub_001CB348_0x1cb348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB348_0x1cb348");
#endif

    switch (ctx->pc) {
        case 0x1cb348u: goto label_1cb348;
        case 0x1cb34cu: goto label_1cb34c;
        case 0x1cb350u: goto label_1cb350;
        case 0x1cb354u: goto label_1cb354;
        case 0x1cb358u: goto label_1cb358;
        case 0x1cb35cu: goto label_1cb35c;
        case 0x1cb360u: goto label_1cb360;
        case 0x1cb364u: goto label_1cb364;
        case 0x1cb368u: goto label_1cb368;
        case 0x1cb36cu: goto label_1cb36c;
        case 0x1cb370u: goto label_1cb370;
        case 0x1cb374u: goto label_1cb374;
        case 0x1cb378u: goto label_1cb378;
        case 0x1cb37cu: goto label_1cb37c;
        case 0x1cb380u: goto label_1cb380;
        case 0x1cb384u: goto label_1cb384;
        case 0x1cb388u: goto label_1cb388;
        case 0x1cb38cu: goto label_1cb38c;
        case 0x1cb390u: goto label_1cb390;
        case 0x1cb394u: goto label_1cb394;
        case 0x1cb398u: goto label_1cb398;
        case 0x1cb39cu: goto label_1cb39c;
        case 0x1cb3a0u: goto label_1cb3a0;
        case 0x1cb3a4u: goto label_1cb3a4;
        case 0x1cb3a8u: goto label_1cb3a8;
        case 0x1cb3acu: goto label_1cb3ac;
        case 0x1cb3b0u: goto label_1cb3b0;
        case 0x1cb3b4u: goto label_1cb3b4;
        case 0x1cb3b8u: goto label_1cb3b8;
        case 0x1cb3bcu: goto label_1cb3bc;
        case 0x1cb3c0u: goto label_1cb3c0;
        case 0x1cb3c4u: goto label_1cb3c4;
        case 0x1cb3c8u: goto label_1cb3c8;
        case 0x1cb3ccu: goto label_1cb3cc;
        case 0x1cb3d0u: goto label_1cb3d0;
        case 0x1cb3d4u: goto label_1cb3d4;
        case 0x1cb3d8u: goto label_1cb3d8;
        case 0x1cb3dcu: goto label_1cb3dc;
        case 0x1cb3e0u: goto label_1cb3e0;
        case 0x1cb3e4u: goto label_1cb3e4;
        case 0x1cb3e8u: goto label_1cb3e8;
        case 0x1cb3ecu: goto label_1cb3ec;
        case 0x1cb3f0u: goto label_1cb3f0;
        case 0x1cb3f4u: goto label_1cb3f4;
        case 0x1cb3f8u: goto label_1cb3f8;
        case 0x1cb3fcu: goto label_1cb3fc;
        case 0x1cb400u: goto label_1cb400;
        case 0x1cb404u: goto label_1cb404;
        case 0x1cb408u: goto label_1cb408;
        case 0x1cb40cu: goto label_1cb40c;
        case 0x1cb410u: goto label_1cb410;
        case 0x1cb414u: goto label_1cb414;
        case 0x1cb418u: goto label_1cb418;
        case 0x1cb41cu: goto label_1cb41c;
        case 0x1cb420u: goto label_1cb420;
        case 0x1cb424u: goto label_1cb424;
        case 0x1cb428u: goto label_1cb428;
        case 0x1cb42cu: goto label_1cb42c;
        case 0x1cb430u: goto label_1cb430;
        case 0x1cb434u: goto label_1cb434;
        case 0x1cb438u: goto label_1cb438;
        case 0x1cb43cu: goto label_1cb43c;
        case 0x1cb440u: goto label_1cb440;
        case 0x1cb444u: goto label_1cb444;
        case 0x1cb448u: goto label_1cb448;
        case 0x1cb44cu: goto label_1cb44c;
        case 0x1cb450u: goto label_1cb450;
        case 0x1cb454u: goto label_1cb454;
        case 0x1cb458u: goto label_1cb458;
        case 0x1cb45cu: goto label_1cb45c;
        case 0x1cb460u: goto label_1cb460;
        case 0x1cb464u: goto label_1cb464;
        case 0x1cb468u: goto label_1cb468;
        case 0x1cb46cu: goto label_1cb46c;
        case 0x1cb470u: goto label_1cb470;
        case 0x1cb474u: goto label_1cb474;
        case 0x1cb478u: goto label_1cb478;
        case 0x1cb47cu: goto label_1cb47c;
        case 0x1cb480u: goto label_1cb480;
        case 0x1cb484u: goto label_1cb484;
        case 0x1cb488u: goto label_1cb488;
        case 0x1cb48cu: goto label_1cb48c;
        case 0x1cb490u: goto label_1cb490;
        case 0x1cb494u: goto label_1cb494;
        case 0x1cb498u: goto label_1cb498;
        case 0x1cb49cu: goto label_1cb49c;
        case 0x1cb4a0u: goto label_1cb4a0;
        case 0x1cb4a4u: goto label_1cb4a4;
        case 0x1cb4a8u: goto label_1cb4a8;
        case 0x1cb4acu: goto label_1cb4ac;
        case 0x1cb4b0u: goto label_1cb4b0;
        case 0x1cb4b4u: goto label_1cb4b4;
        case 0x1cb4b8u: goto label_1cb4b8;
        case 0x1cb4bcu: goto label_1cb4bc;
        case 0x1cb4c0u: goto label_1cb4c0;
        case 0x1cb4c4u: goto label_1cb4c4;
        case 0x1cb4c8u: goto label_1cb4c8;
        case 0x1cb4ccu: goto label_1cb4cc;
        case 0x1cb4d0u: goto label_1cb4d0;
        case 0x1cb4d4u: goto label_1cb4d4;
        case 0x1cb4d8u: goto label_1cb4d8;
        case 0x1cb4dcu: goto label_1cb4dc;
        case 0x1cb4e0u: goto label_1cb4e0;
        case 0x1cb4e4u: goto label_1cb4e4;
        case 0x1cb4e8u: goto label_1cb4e8;
        case 0x1cb4ecu: goto label_1cb4ec;
        case 0x1cb4f0u: goto label_1cb4f0;
        case 0x1cb4f4u: goto label_1cb4f4;
        case 0x1cb4f8u: goto label_1cb4f8;
        case 0x1cb4fcu: goto label_1cb4fc;
        case 0x1cb500u: goto label_1cb500;
        case 0x1cb504u: goto label_1cb504;
        case 0x1cb508u: goto label_1cb508;
        case 0x1cb50cu: goto label_1cb50c;
        case 0x1cb510u: goto label_1cb510;
        case 0x1cb514u: goto label_1cb514;
        case 0x1cb518u: goto label_1cb518;
        case 0x1cb51cu: goto label_1cb51c;
        case 0x1cb520u: goto label_1cb520;
        case 0x1cb524u: goto label_1cb524;
        case 0x1cb528u: goto label_1cb528;
        case 0x1cb52cu: goto label_1cb52c;
        case 0x1cb530u: goto label_1cb530;
        case 0x1cb534u: goto label_1cb534;
        case 0x1cb538u: goto label_1cb538;
        case 0x1cb53cu: goto label_1cb53c;
        case 0x1cb540u: goto label_1cb540;
        case 0x1cb544u: goto label_1cb544;
        case 0x1cb548u: goto label_1cb548;
        case 0x1cb54cu: goto label_1cb54c;
        case 0x1cb550u: goto label_1cb550;
        case 0x1cb554u: goto label_1cb554;
        case 0x1cb558u: goto label_1cb558;
        case 0x1cb55cu: goto label_1cb55c;
        case 0x1cb560u: goto label_1cb560;
        case 0x1cb564u: goto label_1cb564;
        case 0x1cb568u: goto label_1cb568;
        case 0x1cb56cu: goto label_1cb56c;
        case 0x1cb570u: goto label_1cb570;
        case 0x1cb574u: goto label_1cb574;
        case 0x1cb578u: goto label_1cb578;
        case 0x1cb57cu: goto label_1cb57c;
        case 0x1cb580u: goto label_1cb580;
        case 0x1cb584u: goto label_1cb584;
        case 0x1cb588u: goto label_1cb588;
        case 0x1cb58cu: goto label_1cb58c;
        case 0x1cb590u: goto label_1cb590;
        case 0x1cb594u: goto label_1cb594;
        case 0x1cb598u: goto label_1cb598;
        case 0x1cb59cu: goto label_1cb59c;
        case 0x1cb5a0u: goto label_1cb5a0;
        case 0x1cb5a4u: goto label_1cb5a4;
        case 0x1cb5a8u: goto label_1cb5a8;
        case 0x1cb5acu: goto label_1cb5ac;
        case 0x1cb5b0u: goto label_1cb5b0;
        case 0x1cb5b4u: goto label_1cb5b4;
        case 0x1cb5b8u: goto label_1cb5b8;
        case 0x1cb5bcu: goto label_1cb5bc;
        case 0x1cb5c0u: goto label_1cb5c0;
        case 0x1cb5c4u: goto label_1cb5c4;
        case 0x1cb5c8u: goto label_1cb5c8;
        case 0x1cb5ccu: goto label_1cb5cc;
        case 0x1cb5d0u: goto label_1cb5d0;
        case 0x1cb5d4u: goto label_1cb5d4;
        case 0x1cb5d8u: goto label_1cb5d8;
        case 0x1cb5dcu: goto label_1cb5dc;
        case 0x1cb5e0u: goto label_1cb5e0;
        case 0x1cb5e4u: goto label_1cb5e4;
        case 0x1cb5e8u: goto label_1cb5e8;
        case 0x1cb5ecu: goto label_1cb5ec;
        case 0x1cb5f0u: goto label_1cb5f0;
        case 0x1cb5f4u: goto label_1cb5f4;
        case 0x1cb5f8u: goto label_1cb5f8;
        case 0x1cb5fcu: goto label_1cb5fc;
        case 0x1cb600u: goto label_1cb600;
        case 0x1cb604u: goto label_1cb604;
        case 0x1cb608u: goto label_1cb608;
        case 0x1cb60cu: goto label_1cb60c;
        case 0x1cb610u: goto label_1cb610;
        case 0x1cb614u: goto label_1cb614;
        case 0x1cb618u: goto label_1cb618;
        case 0x1cb61cu: goto label_1cb61c;
        case 0x1cb620u: goto label_1cb620;
        case 0x1cb624u: goto label_1cb624;
        case 0x1cb628u: goto label_1cb628;
        case 0x1cb62cu: goto label_1cb62c;
        case 0x1cb630u: goto label_1cb630;
        case 0x1cb634u: goto label_1cb634;
        case 0x1cb638u: goto label_1cb638;
        case 0x1cb63cu: goto label_1cb63c;
        case 0x1cb640u: goto label_1cb640;
        case 0x1cb644u: goto label_1cb644;
        case 0x1cb648u: goto label_1cb648;
        case 0x1cb64cu: goto label_1cb64c;
        case 0x1cb650u: goto label_1cb650;
        case 0x1cb654u: goto label_1cb654;
        case 0x1cb658u: goto label_1cb658;
        case 0x1cb65cu: goto label_1cb65c;
        case 0x1cb660u: goto label_1cb660;
        case 0x1cb664u: goto label_1cb664;
        case 0x1cb668u: goto label_1cb668;
        case 0x1cb66cu: goto label_1cb66c;
        case 0x1cb670u: goto label_1cb670;
        case 0x1cb674u: goto label_1cb674;
        case 0x1cb678u: goto label_1cb678;
        case 0x1cb67cu: goto label_1cb67c;
        case 0x1cb680u: goto label_1cb680;
        case 0x1cb684u: goto label_1cb684;
        case 0x1cb688u: goto label_1cb688;
        case 0x1cb68cu: goto label_1cb68c;
        case 0x1cb690u: goto label_1cb690;
        case 0x1cb694u: goto label_1cb694;
        case 0x1cb698u: goto label_1cb698;
        case 0x1cb69cu: goto label_1cb69c;
        case 0x1cb6a0u: goto label_1cb6a0;
        case 0x1cb6a4u: goto label_1cb6a4;
        case 0x1cb6a8u: goto label_1cb6a8;
        case 0x1cb6acu: goto label_1cb6ac;
        case 0x1cb6b0u: goto label_1cb6b0;
        case 0x1cb6b4u: goto label_1cb6b4;
        case 0x1cb6b8u: goto label_1cb6b8;
        case 0x1cb6bcu: goto label_1cb6bc;
        case 0x1cb6c0u: goto label_1cb6c0;
        case 0x1cb6c4u: goto label_1cb6c4;
        case 0x1cb6c8u: goto label_1cb6c8;
        case 0x1cb6ccu: goto label_1cb6cc;
        case 0x1cb6d0u: goto label_1cb6d0;
        case 0x1cb6d4u: goto label_1cb6d4;
        case 0x1cb6d8u: goto label_1cb6d8;
        case 0x1cb6dcu: goto label_1cb6dc;
        case 0x1cb6e0u: goto label_1cb6e0;
        case 0x1cb6e4u: goto label_1cb6e4;
        case 0x1cb6e8u: goto label_1cb6e8;
        case 0x1cb6ecu: goto label_1cb6ec;
        case 0x1cb6f0u: goto label_1cb6f0;
        case 0x1cb6f4u: goto label_1cb6f4;
        case 0x1cb6f8u: goto label_1cb6f8;
        case 0x1cb6fcu: goto label_1cb6fc;
        case 0x1cb700u: goto label_1cb700;
        case 0x1cb704u: goto label_1cb704;
        case 0x1cb708u: goto label_1cb708;
        case 0x1cb70cu: goto label_1cb70c;
        case 0x1cb710u: goto label_1cb710;
        case 0x1cb714u: goto label_1cb714;
        case 0x1cb718u: goto label_1cb718;
        case 0x1cb71cu: goto label_1cb71c;
        case 0x1cb720u: goto label_1cb720;
        case 0x1cb724u: goto label_1cb724;
        case 0x1cb728u: goto label_1cb728;
        case 0x1cb72cu: goto label_1cb72c;
        case 0x1cb730u: goto label_1cb730;
        case 0x1cb734u: goto label_1cb734;
        case 0x1cb738u: goto label_1cb738;
        case 0x1cb73cu: goto label_1cb73c;
        case 0x1cb740u: goto label_1cb740;
        case 0x1cb744u: goto label_1cb744;
        case 0x1cb748u: goto label_1cb748;
        case 0x1cb74cu: goto label_1cb74c;
        case 0x1cb750u: goto label_1cb750;
        case 0x1cb754u: goto label_1cb754;
        case 0x1cb758u: goto label_1cb758;
        case 0x1cb75cu: goto label_1cb75c;
        case 0x1cb760u: goto label_1cb760;
        case 0x1cb764u: goto label_1cb764;
        case 0x1cb768u: goto label_1cb768;
        case 0x1cb76cu: goto label_1cb76c;
        case 0x1cb770u: goto label_1cb770;
        case 0x1cb774u: goto label_1cb774;
        case 0x1cb778u: goto label_1cb778;
        case 0x1cb77cu: goto label_1cb77c;
        case 0x1cb780u: goto label_1cb780;
        case 0x1cb784u: goto label_1cb784;
        case 0x1cb788u: goto label_1cb788;
        case 0x1cb78cu: goto label_1cb78c;
        case 0x1cb790u: goto label_1cb790;
        case 0x1cb794u: goto label_1cb794;
        case 0x1cb798u: goto label_1cb798;
        case 0x1cb79cu: goto label_1cb79c;
        case 0x1cb7a0u: goto label_1cb7a0;
        case 0x1cb7a4u: goto label_1cb7a4;
        case 0x1cb7a8u: goto label_1cb7a8;
        case 0x1cb7acu: goto label_1cb7ac;
        case 0x1cb7b0u: goto label_1cb7b0;
        case 0x1cb7b4u: goto label_1cb7b4;
        default: break;
    }

    ctx->pc = 0x1cb348u;

label_1cb348:
    // 0x1cb348: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1cb348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1cb34c:
    // 0x1cb34c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cb34cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1cb350:
    // 0x1cb350: 0x8c43a6f8  lw          $v1, -0x5908($v0)
    ctx->pc = 0x1cb350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944504)));
label_1cb354:
    // 0x1cb354: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cb354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cb358:
    // 0x1cb358: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1cb358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1cb35c:
    // 0x1cb35c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1cb35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1cb360:
    // 0x1cb360: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1cb360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1cb364:
    // 0x1cb364: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1cb364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1cb368:
    // 0x1cb368: 0x146400d5  bne         $v1, $a0, . + 4 + (0xD5 << 2)
label_1cb36c:
    if (ctx->pc == 0x1CB36Cu) {
        ctx->pc = 0x1CB36Cu;
            // 0x1cb36c: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->pc = 0x1CB370u;
        goto label_1cb370;
    }
    ctx->pc = 0x1CB368u;
    {
        const bool branch_taken_0x1cb368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1CB36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB368u;
            // 0x1cb36c: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb368) {
            ctx->pc = 0x1CB6C0u;
            goto label_1cb6c0;
        }
    }
    ctx->pc = 0x1CB370u;
label_1cb370:
    // 0x1cb370: 0x3c12006e  lui         $s2, 0x6E
    ctx->pc = 0x1cb370u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)110 << 16));
label_1cb374:
    // 0x1cb374: 0x26503e80  addiu       $s0, $s2, 0x3E80
    ctx->pc = 0x1cb374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16000));
label_1cb378:
    // 0x1cb378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cb37c:
    // 0x1cb37c: 0xc043366  jal         func_10CD98
label_1cb380:
    if (ctx->pc == 0x1CB380u) {
        ctx->pc = 0x1CB380u;
            // 0x1cb380: 0x2605307f  addiu       $a1, $s0, 0x307F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12415));
        ctx->pc = 0x1CB384u;
        goto label_1cb384;
    }
    ctx->pc = 0x1CB37Cu;
    SET_GPR_U32(ctx, 31, 0x1CB384u);
    ctx->pc = 0x1CB380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB37Cu;
            // 0x1cb380: 0x2605307f  addiu       $a1, $s0, 0x307F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12415));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (runtime->hasFunction(0x10CD98u)) {
        auto targetFn = runtime->lookupFunction(0x10CD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB384u; }
        if (ctx->pc != 0x1CB384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CD98_0x10cd98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB384u; }
        if (ctx->pc != 0x1CB384u) { return; }
    }
    ctx->pc = 0x1CB384u;
label_1cb384:
    // 0x1cb384: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1cb384u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1cb388:
    // 0x1cb388: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_1cb38c:
    if (ctx->pc == 0x1CB38Cu) {
        ctx->pc = 0x1CB38Cu;
            // 0x1cb38c: 0x3c130060  lui         $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
        ctx->pc = 0x1CB390u;
        goto label_1cb390;
    }
    ctx->pc = 0x1CB388u;
    {
        const bool branch_taken_0x1cb388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB388u;
            // 0x1cb38c: 0x3c130060  lui         $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb388) {
            ctx->pc = 0x1CB41Cu;
            goto label_1cb41c;
        }
    }
    ctx->pc = 0x1CB390u;
label_1cb390:
    // 0x1cb390: 0x26052b4f  addiu       $a1, $s0, 0x2B4F
    ctx->pc = 0x1cb390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11087));
label_1cb394:
    // 0x1cb394: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cb394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb398:
    // 0x1cb398: 0x2668a70c  addiu       $t0, $s3, -0x58F4
    ctx->pc = 0x1cb398u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 4294944524));
label_1cb39c:
    // 0x1cb39c: 0x24070ac0  addiu       $a3, $zero, 0xAC0
    ctx->pc = 0x1cb39cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2752));
label_1cb3a0:
    // 0x1cb3a0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1cb3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1cb3a4:
    // 0x1cb3a4: 0x26230b80  addiu       $v1, $s1, 0xB80
    ctx->pc = 0x1cb3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2944));
label_1cb3a8:
    // 0x1cb3a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1cb3a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1cb3ac:
    // 0x1cb3ac: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1cb3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1cb3b0:
    // 0x1cb3b0: 0x2e290030  sltiu       $t1, $s1, 0x30
    ctx->pc = 0x1cb3b0u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
label_1cb3b4:
    // 0x1cb3b4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1cb3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cb3b8:
    // 0x1cb3b8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1cb3b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1cb3bc:
    // 0x1cb3bc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1cb3c0:
    if (ctx->pc == 0x1CB3C0u) {
        ctx->pc = 0x1CB3C0u;
            // 0x1cb3c0: 0x473021  addu        $a2, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->pc = 0x1CB3C4u;
        goto label_1cb3c4;
    }
    ctx->pc = 0x1CB3BCu;
    {
        const bool branch_taken_0x1cb3bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB3BCu;
            // 0x1cb3c0: 0x473021  addu        $a2, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb3bc) {
            ctx->pc = 0x1CB3D0u;
            goto label_1cb3d0;
        }
    }
    ctx->pc = 0x1CB3C4u;
label_1cb3c4:
    // 0x1cb3c4: 0x90a2fffd  lbu         $v0, -0x3($a1)
    ctx->pc = 0x1cb3c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967293)));
label_1cb3c8:
    // 0x1cb3c8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1cb3cc:
    if (ctx->pc == 0x1CB3CCu) {
        ctx->pc = 0x1CB3CCu;
            // 0x1cb3cc: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1CB3D0u;
        goto label_1cb3d0;
    }
    ctx->pc = 0x1CB3C8u;
    {
        const bool branch_taken_0x1cb3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB3C8u;
            // 0x1cb3cc: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb3c8) {
            ctx->pc = 0x1CB3D4u;
            goto label_1cb3d4;
        }
    }
    ctx->pc = 0x1CB3D0u;
label_1cb3d0:
    // 0x1cb3d0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1cb3d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_1cb3d4:
    // 0x1cb3d4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1cb3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1cb3d8:
    // 0x1cb3d8: 0x90a4fffe  lbu         $a0, -0x2($a1)
    ctx->pc = 0x1cb3d8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967294)));
label_1cb3dc:
    // 0x1cb3dc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1cb3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1cb3e0:
    // 0x1cb3e0: 0xa044000d  sb          $a0, 0xD($v0)
    ctx->pc = 0x1cb3e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 13), (uint8_t)GPR_U32(ctx, 4));
label_1cb3e4:
    // 0x1cb3e4: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1cb3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1cb3e8:
    // 0x1cb3e8: 0x90a4ffff  lbu         $a0, -0x1($a1)
    ctx->pc = 0x1cb3e8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
label_1cb3ec:
    // 0x1cb3ec: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1cb3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1cb3f0:
    // 0x1cb3f0: 0xa064000e  sb          $a0, 0xE($v1)
    ctx->pc = 0x1cb3f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 14), (uint8_t)GPR_U32(ctx, 4));
label_1cb3f4:
    // 0x1cb3f4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1cb3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1cb3f8:
    // 0x1cb3f8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1cb3f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1cb3fc:
    // 0x1cb3fc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1cb3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_1cb400:
    // 0x1cb400: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1cb400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1cb404:
    // 0x1cb404: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1cb404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_1cb408:
    // 0x1cb408: 0x1520ffe5  bnez        $t1, . + 4 + (-0x1B << 2)
label_1cb40c:
    if (ctx->pc == 0x1CB40Cu) {
        ctx->pc = 0x1CB40Cu;
            // 0x1cb40c: 0xa043000f  sb          $v1, 0xF($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 15), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1CB410u;
        goto label_1cb410;
    }
    ctx->pc = 0x1CB408u;
    {
        const bool branch_taken_0x1cb408 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB408u;
            // 0x1cb40c: 0xa043000f  sb          $v1, 0xF($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 15), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb408) {
            ctx->pc = 0x1CB3A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cb3a0;
        }
    }
    ctx->pc = 0x1CB410u;
label_1cb410:
    // 0x1cb410: 0x26433e80  addiu       $v1, $s2, 0x3E80
    ctx->pc = 0x1cb410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16000));
label_1cb414:
    // 0x1cb414: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cb414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cb418:
    // 0x1cb418: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x1cb418u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
label_1cb41c:
    // 0x1cb41c: 0x2664a70c  addiu       $a0, $s3, -0x58F4
    ctx->pc = 0x1cb41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294944524));
label_1cb420:
    // 0x1cb420: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cb420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cb424:
    // 0x1cb424: 0x90430ab4  lbu         $v1, 0xAB4($v0)
    ctx->pc = 0x1cb424u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2740)));
label_1cb428:
    // 0x1cb428: 0x10600068  beqz        $v1, . + 4 + (0x68 << 2)
label_1cb42c:
    if (ctx->pc == 0x1CB42Cu) {
        ctx->pc = 0x1CB42Cu;
            // 0x1cb42c: 0x3c02006e  lui         $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
        ctx->pc = 0x1CB430u;
        goto label_1cb430;
    }
    ctx->pc = 0x1CB428u;
    {
        const bool branch_taken_0x1cb428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB428u;
            // 0x1cb42c: 0x3c02006e  lui         $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb428) {
            ctx->pc = 0x1CB5CCu;
            goto label_1cb5cc;
        }
    }
    ctx->pc = 0x1CB430u;
label_1cb430:
    // 0x1cb430: 0x24423200  addiu       $v0, $v0, 0x3200
    ctx->pc = 0x1cb430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12800));
label_1cb434:
    // 0x1cb434: 0x8c430a00  lw          $v1, 0xA00($v0)
    ctx->pc = 0x1cb434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2560)));
label_1cb438:
    // 0x1cb438: 0x54600065  bnel        $v1, $zero, . + 4 + (0x65 << 2)
label_1cb43c:
    if (ctx->pc == 0x1CB43Cu) {
        ctx->pc = 0x1CB43Cu;
            // 0x1cb43c: 0x3c02006e  lui         $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
        ctx->pc = 0x1CB440u;
        goto label_1cb440;
    }
    ctx->pc = 0x1CB438u;
    {
        const bool branch_taken_0x1cb438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb438) {
            ctx->pc = 0x1CB43Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB438u;
            // 0x1cb43c: 0x3c02006e  lui         $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CB5D0u;
            goto label_1cb5d0;
        }
    }
    ctx->pc = 0x1CB440u;
label_1cb440:
    // 0x1cb440: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1cb440u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cb444:
    // 0x1cb444: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x1cb444u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cb448:
    // 0x1cb448: 0x250d0004  addiu       $t5, $t0, 0x4
    ctx->pc = 0x1cb448u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_1cb44c:
    // 0x1cb44c: 0x250c0008  addiu       $t4, $t0, 0x8
    ctx->pc = 0x1cb44cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_1cb450:
    // 0x1cb450: 0x250b000c  addiu       $t3, $t0, 0xC
    ctx->pc = 0x1cb450u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_1cb454:
    // 0x1cb454: 0x8d470000  lw          $a3, 0x0($t2)
    ctx->pc = 0x1cb454u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1cb458:
    // 0x1cb458: 0x8d030a00  lw          $v1, 0xA00($t0)
    ctx->pc = 0x1cb458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2560)));
label_1cb45c:
    // 0x1cb45c: 0x90e40ab6  lbu         $a0, 0xAB6($a3)
    ctx->pc = 0x1cb45cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2742)));
label_1cb460:
    // 0x1cb460: 0x24e90010  addiu       $t1, $a3, 0x10
    ctx->pc = 0x1cb460u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_1cb464:
    // 0x1cb464: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1cb464u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1cb468:
    // 0x1cb468: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1cb468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1cb46c:
    // 0x1cb46c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1cb46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1cb470:
    // 0x1cb470: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1cb470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1cb474:
    // 0x1cb474: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1cb474u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1cb478:
    // 0x1cb478: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cb478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1cb47c:
    // 0x1cb47c: 0xa83021  addu        $a2, $a1, $t0
    ctx->pc = 0x1cb47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_1cb480:
    // 0x1cb480: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1cb480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1cb484:
    // 0x1cb484: 0xad2821  addu        $a1, $a1, $t5
    ctx->pc = 0x1cb484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
label_1cb488:
    // 0x1cb488: 0x944300b4  lhu         $v1, 0xB4($v0)
    ctx->pc = 0x1cb488u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 180)));
label_1cb48c:
    // 0x1cb48c: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x1cb48cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
label_1cb490:
    // 0x1cb490: 0x90e40ab6  lbu         $a0, 0xAB6($a3)
    ctx->pc = 0x1cb490u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2742)));
label_1cb494:
    // 0x1cb494: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1cb494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1cb498:
    // 0x1cb498: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1cb498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1cb49c:
    // 0x1cb49c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cb49cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1cb4a0:
    // 0x1cb4a0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1cb4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1cb4a4:
    // 0x1cb4a4: 0x944300b6  lhu         $v1, 0xB6($v0)
    ctx->pc = 0x1cb4a4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 182)));
label_1cb4a8:
    // 0x1cb4a8: 0xa4c30002  sh          $v1, 0x2($a2)
    ctx->pc = 0x1cb4a8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 3));
label_1cb4ac:
    // 0x1cb4ac: 0x90e40ab6  lbu         $a0, 0xAB6($a3)
    ctx->pc = 0x1cb4acu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2742)));
label_1cb4b0:
    // 0x1cb4b0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1cb4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1cb4b4:
    // 0x1cb4b4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1cb4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1cb4b8:
    // 0x1cb4b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cb4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1cb4bc:
    // 0x1cb4bc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1cb4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1cb4c0:
    // 0x1cb4c0: 0x8c4300b8  lw          $v1, 0xB8($v0)
    ctx->pc = 0x1cb4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
label_1cb4c4:
    // 0x1cb4c4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1cb4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1cb4c8:
    // 0x1cb4c8: 0x90e40ab6  lbu         $a0, 0xAB6($a3)
    ctx->pc = 0x1cb4c8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2742)));
label_1cb4cc:
    // 0x1cb4cc: 0x8d050a00  lw          $a1, 0xA00($t0)
    ctx->pc = 0x1cb4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2560)));
label_1cb4d0:
    // 0x1cb4d0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1cb4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1cb4d4:
    // 0x1cb4d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1cb4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1cb4d8:
    // 0x1cb4d8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1cb4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1cb4dc:
    // 0x1cb4dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cb4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1cb4e0:
    // 0x1cb4e0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1cb4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1cb4e4:
    // 0x1cb4e4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1cb4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1cb4e8:
    // 0x1cb4e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cb4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1cb4ec:
    // 0x1cb4ec: 0x8c4400bc  lw          $a0, 0xBC($v0)
    ctx->pc = 0x1cb4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_1cb4f0:
    // 0x1cb4f0: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x1cb4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
label_1cb4f4:
    // 0x1cb4f4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1cb4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1cb4f8:
    // 0x1cb4f8: 0x90e50ab6  lbu         $a1, 0xAB6($a3)
    ctx->pc = 0x1cb4f8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2742)));
label_1cb4fc:
    // 0x1cb4fc: 0x8d040a00  lw          $a0, 0xA00($t0)
    ctx->pc = 0x1cb4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2560)));
label_1cb500:
    // 0x1cb500: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1cb500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1cb504:
    // 0x1cb504: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1cb504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1cb508:
    // 0x1cb508: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1cb508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1cb50c:
    // 0x1cb50c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cb50cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1cb510:
    // 0x1cb510: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cb510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1cb514:
    // 0x1cb514: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1cb514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_1cb518:
    // 0x1cb518: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cb518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1cb51c:
    // 0x1cb51c: 0x8c4400b0  lw          $a0, 0xB0($v0)
    ctx->pc = 0x1cb51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_1cb520:
    // 0x1cb520: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x1cb520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_1cb524:
    // 0x1cb524: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1cb524u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1cb528:
    // 0x1cb528: 0x90e50ab6  lbu         $a1, 0xAB6($a3)
    ctx->pc = 0x1cb528u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2742)));
label_1cb52c:
    // 0x1cb52c: 0x8d040a00  lw          $a0, 0xA00($t0)
    ctx->pc = 0x1cb52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2560)));
label_1cb530:
    // 0x1cb530: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1cb530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1cb534:
    // 0x1cb534: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1cb534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1cb538:
    // 0x1cb538: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1cb538u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1cb53c:
    // 0x1cb53c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cb53cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1cb540:
    // 0x1cb540: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cb540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1cb544:
    // 0x1cb544: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1cb544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1cb548:
    // 0x1cb548: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cb548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1cb54c:
    // 0x1cb54c: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x1cb54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1cb550:
    // 0x1cb550: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1cb550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1cb554:
    // 0x1cb554: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x1cb554u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
label_1cb558:
    // 0x1cb558: 0x8d020a00  lw          $v0, 0xA00($t0)
    ctx->pc = 0x1cb558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2560)));
label_1cb55c:
    // 0x1cb55c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cb55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1cb560:
    // 0x1cb560: 0x2c430080  sltiu       $v1, $v0, 0x80
    ctx->pc = 0x1cb560u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_1cb564:
    // 0x1cb564: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_1cb568:
    if (ctx->pc == 0x1CB568u) {
        ctx->pc = 0x1CB568u;
            // 0x1cb568: 0xad020a00  sw          $v0, 0xA00($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 2560), GPR_U32(ctx, 2));
        ctx->pc = 0x1CB56Cu;
        goto label_1cb56c;
    }
    ctx->pc = 0x1CB564u;
    {
        const bool branch_taken_0x1cb564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB564u;
            // 0x1cb568: 0xad020a00  sw          $v0, 0xA00($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 2560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb564) {
            ctx->pc = 0x1CB5CCu;
            goto label_1cb5cc;
        }
    }
    ctx->pc = 0x1CB56Cu;
label_1cb56c:
    // 0x1cb56c: 0x90e30ab6  lbu         $v1, 0xAB6($a3)
    ctx->pc = 0x1cb56cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2742)));
label_1cb570:
    // 0x1cb570: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1cb570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1cb574:
    // 0x1cb574: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cb574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cb578:
    // 0x1cb578: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cb578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1cb57c:
    // 0x1cb57c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1cb57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1cb580:
    // 0x1cb580: 0xa44000b4  sh          $zero, 0xB4($v0)
    ctx->pc = 0x1cb580u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 180), (uint16_t)GPR_U32(ctx, 0));
label_1cb584:
    // 0x1cb584: 0x90e30ab6  lbu         $v1, 0xAB6($a3)
    ctx->pc = 0x1cb584u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2742)));
label_1cb588:
    // 0x1cb588: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1cb588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1cb58c:
    // 0x1cb58c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cb58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cb590:
    // 0x1cb590: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cb590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1cb594:
    // 0x1cb594: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1cb594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_1cb598:
    // 0x1cb598: 0xac4000b0  sw          $zero, 0xB0($v0)
    ctx->pc = 0x1cb598u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 0));
label_1cb59c:
    // 0x1cb59c: 0x90e30ab6  lbu         $v1, 0xAB6($a3)
    ctx->pc = 0x1cb59cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2742)));
label_1cb5a0:
    // 0x1cb5a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cb5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1cb5a4:
    // 0x1cb5a4: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x1cb5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
label_1cb5a8:
    // 0x1cb5a8: 0xa0e30ab6  sb          $v1, 0xAB6($a3)
    ctx->pc = 0x1cb5a8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2742), (uint8_t)GPR_U32(ctx, 3));
label_1cb5ac:
    // 0x1cb5ac: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x1cb5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1cb5b0:
    // 0x1cb5b0: 0x90820ab4  lbu         $v0, 0xAB4($a0)
    ctx->pc = 0x1cb5b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2740)));
label_1cb5b4:
    // 0x1cb5b4: 0x244200ff  addiu       $v0, $v0, 0xFF
    ctx->pc = 0x1cb5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
label_1cb5b8:
    // 0x1cb5b8: 0xa0820ab4  sb          $v0, 0xAB4($a0)
    ctx->pc = 0x1cb5b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2740), (uint8_t)GPR_U32(ctx, 2));
label_1cb5bc:
    // 0x1cb5bc: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1cb5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1cb5c0:
    // 0x1cb5c0: 0x90620ab4  lbu         $v0, 0xAB4($v1)
    ctx->pc = 0x1cb5c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2740)));
label_1cb5c4:
    // 0x1cb5c4: 0x5440ffa4  bnel        $v0, $zero, . + 4 + (-0x5C << 2)
label_1cb5c8:
    if (ctx->pc == 0x1CB5C8u) {
        ctx->pc = 0x1CB5C8u;
            // 0x1cb5c8: 0x8d470000  lw          $a3, 0x0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->pc = 0x1CB5CCu;
        goto label_1cb5cc;
    }
    ctx->pc = 0x1CB5C4u;
    {
        const bool branch_taken_0x1cb5c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb5c4) {
            ctx->pc = 0x1CB5C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB5C4u;
            // 0x1cb5c8: 0x8d470000  lw          $a3, 0x0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CB458u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cb458;
        }
    }
    ctx->pc = 0x1CB5CCu;
label_1cb5cc:
    // 0x1cb5cc: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1cb5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
label_1cb5d0:
    // 0x1cb5d0: 0x24513e28  addiu       $s1, $v0, 0x3E28
    ctx->pc = 0x1cb5d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 15912));
label_1cb5d4:
    // 0x1cb5d4: 0xc04418c  jal         func_110630
label_1cb5d8:
    if (ctx->pc == 0x1CB5D8u) {
        ctx->pc = 0x1CB5D8u;
            // 0x1cb5d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CB5DCu;
        goto label_1cb5dc;
    }
    ctx->pc = 0x1CB5D4u;
    SET_GPR_U32(ctx, 31, 0x1CB5DCu);
    ctx->pc = 0x1CB5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB5D4u;
            // 0x1cb5d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110630u;
    if (runtime->hasFunction(0x110630u)) {
        auto targetFn = runtime->lookupFunction(0x110630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB5DCu; }
        if (ctx->pc != 0x1CB5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110630_0x110630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB5DCu; }
        if (ctx->pc != 0x1CB5DCu) { return; }
    }
    ctx->pc = 0x1CB5DCu;
label_1cb5dc:
    // 0x1cb5dc: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_1cb5e0:
    if (ctx->pc == 0x1CB5E0u) {
        ctx->pc = 0x1CB5E0u;
            // 0x1cb5e0: 0x2664a70c  addiu       $a0, $s3, -0x58F4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294944524));
        ctx->pc = 0x1CB5E4u;
        goto label_1cb5e4;
    }
    ctx->pc = 0x1CB5DCu;
    {
        const bool branch_taken_0x1cb5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB5DCu;
            // 0x1cb5e0: 0x2664a70c  addiu       $a0, $s3, -0x58F4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294944524));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb5dc) {
            ctx->pc = 0x1CB630u;
            goto label_1cb630;
        }
    }
    ctx->pc = 0x1CB5E4u;
label_1cb5e4:
    // 0x1cb5e4: 0x3c10006e  lui         $s0, 0x6E
    ctx->pc = 0x1cb5e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)110 << 16));
label_1cb5e8:
    // 0x1cb5e8: 0x26103200  addiu       $s0, $s0, 0x3200
    ctx->pc = 0x1cb5e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12800));
label_1cb5ec:
    // 0x1cb5ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cb5f0:
    // 0x1cb5f0: 0xc043316  jal         func_10CC58
label_1cb5f4:
    if (ctx->pc == 0x1CB5F4u) {
        ctx->pc = 0x1CB5F4u;
            // 0x1cb5f4: 0x26050a3f  addiu       $a1, $s0, 0xA3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2623));
        ctx->pc = 0x1CB5F8u;
        goto label_1cb5f8;
    }
    ctx->pc = 0x1CB5F0u;
    SET_GPR_U32(ctx, 31, 0x1CB5F8u);
    ctx->pc = 0x1CB5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB5F0u;
            // 0x1cb5f4: 0x26050a3f  addiu       $a1, $s0, 0xA3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2623));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC58u;
    if (runtime->hasFunction(0x10CC58u)) {
        auto targetFn = runtime->lookupFunction(0x10CC58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB5F8u; }
        if (ctx->pc != 0x1CB5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC58_0x10cc58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB5F8u; }
        if (ctx->pc != 0x1CB5F8u) { return; }
    }
    ctx->pc = 0x1CB5F8u;
label_1cb5f8:
    // 0x1cb5f8: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1cb5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
label_1cb5fc:
    // 0x1cb5fc: 0x24423c40  addiu       $v0, $v0, 0x3C40
    ctx->pc = 0x1cb5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15424));
label_1cb600:
    // 0x1cb600: 0x3c0b001d  lui         $t3, 0x1D
    ctx->pc = 0x1cb600u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)29 << 16));
label_1cb604:
    // 0x1cb604: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cb608:
    // 0x1cb608: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1cb608u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cb60c:
    // 0x1cb60c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1cb60cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cb610:
    // 0x1cb610: 0x256bafb0  addiu       $t3, $t3, -0x5050
    ctx->pc = 0x1cb610u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294946736));
label_1cb614:
    // 0x1cb614: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1cb614u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1cb618:
    // 0x1cb618: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cb618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cb61c:
    // 0x1cb61c: 0x24080a40  addiu       $t0, $zero, 0xA40
    ctx->pc = 0x1cb61cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2624));
label_1cb620:
    // 0x1cb620: 0x240a01c0  addiu       $t2, $zero, 0x1C0
    ctx->pc = 0x1cb620u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1cb624:
    // 0x1cb624: 0xc04410c  jal         func_110430
label_1cb628:
    if (ctx->pc == 0x1CB628u) {
        ctx->pc = 0x1CB628u;
            // 0x1cb628: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1CB62Cu;
        goto label_1cb62c;
    }
    ctx->pc = 0x1CB624u;
    SET_GPR_U32(ctx, 31, 0x1CB62Cu);
    ctx->pc = 0x1CB628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB624u;
            // 0x1cb628: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110430u;
    if (runtime->hasFunction(0x110430u)) {
        auto targetFn = runtime->lookupFunction(0x110430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB62Cu; }
        if (ctx->pc != 0x1CB62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110430_0x110430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB62Cu; }
        if (ctx->pc != 0x1CB62Cu) { return; }
    }
    ctx->pc = 0x1CB62Cu;
label_1cb62c:
    // 0x1cb62c: 0x2664a70c  addiu       $a0, $s3, -0x58F4
    ctx->pc = 0x1cb62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294944524));
label_1cb630:
    // 0x1cb630: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cb630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cb634:
    // 0x1cb634: 0x8c43187c  lw          $v1, 0x187C($v0)
    ctx->pc = 0x1cb634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6268)));
label_1cb638:
    // 0x1cb638: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_1cb63c:
    if (ctx->pc == 0x1CB63Cu) {
        ctx->pc = 0x1CB63Cu;
            // 0x1cb63c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CB640u;
        goto label_1cb640;
    }
    ctx->pc = 0x1CB638u;
    {
        const bool branch_taken_0x1cb638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB638u;
            // 0x1cb63c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb638) {
            ctx->pc = 0x1CB6A8u;
            goto label_1cb6a8;
        }
    }
    ctx->pc = 0x1CB640u;
label_1cb640:
    // 0x1cb640: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1cb640u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cb644:
    // 0x1cb644: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1cb644u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cb648:
    // 0x1cb648: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1cb648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1cb64c:
    // 0x1cb64c: 0x0  nop
    ctx->pc = 0x1cb64cu;
    // NOP
label_1cb650:
    // 0x1cb650: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x1cb650u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1cb654:
    // 0x1cb654: 0x24a2000c  addiu       $v0, $a1, 0xC
    ctx->pc = 0x1cb654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_1cb658:
    // 0x1cb658: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x1cb658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1cb65c:
    // 0x1cb65c: 0x8c830c70  lw          $v1, 0xC70($a0)
    ctx->pc = 0x1cb65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3184)));
label_1cb660:
    // 0x1cb660: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1cb660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_1cb664:
    // 0x1cb664: 0x1473000a  bne         $v1, $s3, . + 4 + (0xA << 2)
label_1cb668:
    if (ctx->pc == 0x1CB668u) {
        ctx->pc = 0x1CB668u;
            // 0x1cb668: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CB66Cu;
        goto label_1cb66c;
    }
    ctx->pc = 0x1CB664u;
    {
        const bool branch_taken_0x1cb664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x1CB668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB664u;
            // 0x1cb668: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb664) {
            ctx->pc = 0x1CB690u;
            goto label_1cb690;
        }
    }
    ctx->pc = 0x1CB66Cu;
label_1cb66c:
    // 0x1cb66c: 0x8c420bb0  lw          $v0, 0xBB0($v0)
    ctx->pc = 0x1cb66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2992)));
label_1cb670:
    // 0x1cb670: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
label_1cb674:
    if (ctx->pc == 0x1CB674u) {
        ctx->pc = 0x1CB674u;
            // 0x1cb674: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x1CB678u;
        goto label_1cb678;
    }
    ctx->pc = 0x1CB670u;
    {
        const bool branch_taken_0x1cb670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cb670) {
            ctx->pc = 0x1CB674u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB670u;
            // 0x1cb674: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CB694u;
            goto label_1cb694;
        }
    }
    ctx->pc = 0x1CB678u;
label_1cb678:
    // 0x1cb678: 0x8ca2187c  lw          $v0, 0x187C($a1)
    ctx->pc = 0x1cb678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 6268)));
label_1cb67c:
    // 0x1cb67c: 0x40f809  jalr        $v0
label_1cb680:
    if (ctx->pc == 0x1CB680u) {
        ctx->pc = 0x1CB680u;
            // 0x1cb680: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CB684u;
        goto label_1cb684;
    }
    ctx->pc = 0x1CB67Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CB684u);
        ctx->pc = 0x1CB680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB67Cu;
            // 0x1cb680: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CB684u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CB684u; }
            if (ctx->pc != 0x1CB684u) { return; }
        }
        }
    }
    ctx->pc = 0x1CB684u;
label_1cb684:
    // 0x1cb684: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1cb684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1cb688:
    // 0x1cb688: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1cb688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1cb68c:
    // 0x1cb68c: 0xac620d3c  sw          $v0, 0xD3C($v1)
    ctx->pc = 0x1cb68cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3388), GPR_U32(ctx, 2));
label_1cb690:
    // 0x1cb690: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1cb690u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1cb694:
    // 0x1cb694: 0x2e220030  sltiu       $v0, $s1, 0x30
    ctx->pc = 0x1cb694u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
label_1cb698:
    // 0x1cb698: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
label_1cb69c:
    if (ctx->pc == 0x1CB69Cu) {
        ctx->pc = 0x1CB69Cu;
            // 0x1cb69c: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x1CB6A0u;
        goto label_1cb6a0;
    }
    ctx->pc = 0x1CB698u;
    {
        const bool branch_taken_0x1cb698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb698) {
            ctx->pc = 0x1CB69Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB698u;
            // 0x1cb69c: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CB650u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cb650;
        }
    }
    ctx->pc = 0x1CB6A0u;
label_1cb6a0:
    // 0x1cb6a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cb6a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb6a4:
    // 0x1cb6a4: 0x0  nop
    ctx->pc = 0x1cb6a4u;
    // NOP
label_1cb6a8:
    // 0x1cb6a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cb6ac:
    // 0x1cb6ac: 0xc072c1e  jal         func_1CB078
label_1cb6b0:
    if (ctx->pc == 0x1CB6B0u) {
        ctx->pc = 0x1CB6B0u;
            // 0x1cb6b0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x1CB6B4u;
        goto label_1cb6b4;
    }
    ctx->pc = 0x1CB6ACu;
    SET_GPR_U32(ctx, 31, 0x1CB6B4u);
    ctx->pc = 0x1CB6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB6ACu;
            // 0x1cb6b0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CB078u;
    if (runtime->hasFunction(0x1CB078u)) {
        auto targetFn = runtime->lookupFunction(0x1CB078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB6B4u; }
        if (ctx->pc != 0x1CB6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CB078_0x1cb078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB6B4u; }
        if (ctx->pc != 0x1CB6B4u) { return; }
    }
    ctx->pc = 0x1CB6B4u;
label_1cb6b4:
    // 0x1cb6b4: 0x2e220030  sltiu       $v0, $s1, 0x30
    ctx->pc = 0x1cb6b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
label_1cb6b8:
    // 0x1cb6b8: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
label_1cb6bc:
    if (ctx->pc == 0x1CB6BCu) {
        ctx->pc = 0x1CB6BCu;
            // 0x1cb6bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CB6C0u;
        goto label_1cb6c0;
    }
    ctx->pc = 0x1CB6B8u;
    {
        const bool branch_taken_0x1cb6b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB6B8u;
            // 0x1cb6bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb6b8) {
            ctx->pc = 0x1CB6ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cb6ac;
        }
    }
    ctx->pc = 0x1CB6C0u;
label_1cb6c0:
    // 0x1cb6c0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1cb6c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cb6c4:
    // 0x1cb6c4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1cb6c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1cb6c8:
    // 0x1cb6c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1cb6c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1cb6cc:
    // 0x1cb6cc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1cb6ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1cb6d0:
    // 0x1cb6d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cb6d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1cb6d4:
    // 0x1cb6d4: 0x3e00008  jr          $ra
label_1cb6d8:
    if (ctx->pc == 0x1CB6D8u) {
        ctx->pc = 0x1CB6D8u;
            // 0x1cb6d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1CB6DCu;
        goto label_1cb6dc;
    }
    ctx->pc = 0x1CB6D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB6D4u;
            // 0x1cb6d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CB6DCu;
label_1cb6dc:
    // 0x1cb6dc: 0x0  nop
    ctx->pc = 0x1cb6dcu;
    // NOP
label_1cb6e0:
    // 0x1cb6e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cb6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1cb6e4:
    // 0x1cb6e4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1cb6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1cb6e8:
    // 0x1cb6e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cb6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1cb6ec:
    // 0x1cb6ec: 0x3c120060  lui         $s2, 0x60
    ctx->pc = 0x1cb6ecu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
label_1cb6f0:
    // 0x1cb6f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1cb6f4:
    // 0x1cb6f4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1cb6f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cb6f8:
    // 0x1cb6f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cb6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1cb6fc:
    // 0x1cb6fc: 0x24110030  addiu       $s1, $zero, 0x30
    ctx->pc = 0x1cb6fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1cb700:
    // 0x1cb700: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cb700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1cb704:
    // 0x1cb704: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cb704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1cb708:
    // 0x1cb708: 0x8e42a70c  lw          $v0, -0x58F4($s2)
    ctx->pc = 0x1cb708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294944524)));
label_1cb70c:
    // 0x1cb70c: 0x90430ab8  lbu         $v1, 0xAB8($v0)
    ctx->pc = 0x1cb70cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2744)));
label_1cb710:
    // 0x1cb710: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1cb710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1cb714:
    // 0x1cb714: 0xa3880a  movz        $s1, $a1, $v1
    ctx->pc = 0x1cb714u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 5));
label_1cb718:
    // 0x1cb718: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_1cb71c:
    if (ctx->pc == 0x1CB71Cu) {
        ctx->pc = 0x1CB71Cu;
            // 0x1cb71c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CB720u;
        goto label_1cb720;
    }
    ctx->pc = 0x1CB718u;
    {
        const bool branch_taken_0x1cb718 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB718u;
            // 0x1cb71c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb718) {
            ctx->pc = 0x1CB73Cu;
            goto label_1cb73c;
        }
    }
    ctx->pc = 0x1CB720u;
label_1cb720:
    // 0x1cb720: 0xc0735ae  jal         func_1CD6B8
label_1cb724:
    if (ctx->pc == 0x1CB724u) {
        ctx->pc = 0x1CB724u;
            // 0x1cb724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CB728u;
        goto label_1cb728;
    }
    ctx->pc = 0x1CB720u;
    SET_GPR_U32(ctx, 31, 0x1CB728u);
    ctx->pc = 0x1CB724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB720u;
            // 0x1cb724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CD6B8u;
    if (runtime->hasFunction(0x1CD6B8u)) {
        auto targetFn = runtime->lookupFunction(0x1CD6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB728u; }
        if (ctx->pc != 0x1CB728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD6B8_0x1cd6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB728u; }
        if (ctx->pc != 0x1CB728u) { return; }
    }
    ctx->pc = 0x1CB728u;
label_1cb728:
    // 0x1cb728: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1cb728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1cb72c:
    // 0x1cb72c: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1cb72cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1cb730:
    // 0x1cb730: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x1cb730u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1cb734:
    // 0x1cb734: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_1cb738:
    if (ctx->pc == 0x1CB738u) {
        ctx->pc = 0x1CB73Cu;
        goto label_1cb73c;
    }
    ctx->pc = 0x1CB734u;
    {
        const bool branch_taken_0x1cb734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb734) {
            ctx->pc = 0x1CB720u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cb720;
        }
    }
    ctx->pc = 0x1CB73Cu;
label_1cb73c:
    // 0x1cb73c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_1cb740:
    if (ctx->pc == 0x1CB740u) {
        ctx->pc = 0x1CB740u;
            // 0x1cb740: 0x8e43a70c  lw          $v1, -0x58F4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294944524)));
        ctx->pc = 0x1CB744u;
        goto label_1cb744;
    }
    ctx->pc = 0x1CB73Cu;
    {
        const bool branch_taken_0x1cb73c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB73Cu;
            // 0x1cb740: 0x8e43a70c  lw          $v1, -0x58F4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294944524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb73c) {
            ctx->pc = 0x1CB750u;
            goto label_1cb750;
        }
    }
    ctx->pc = 0x1CB744u;
label_1cb744:
    // 0x1cb744: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cb744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cb748:
    // 0x1cb748: 0x10000003  b           . + 4 + (0x3 << 2)
label_1cb74c:
    if (ctx->pc == 0x1CB74Cu) {
        ctx->pc = 0x1CB74Cu;
            // 0x1cb74c: 0xa0620ab8  sb          $v0, 0xAB8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2744), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1CB750u;
        goto label_1cb750;
    }
    ctx->pc = 0x1CB748u;
    {
        const bool branch_taken_0x1cb748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB748u;
            // 0x1cb74c: 0xa0620ab8  sb          $v0, 0xAB8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2744), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb748) {
            ctx->pc = 0x1CB758u;
            goto label_1cb758;
        }
    }
    ctx->pc = 0x1CB750u;
label_1cb750:
    // 0x1cb750: 0x8e42a70c  lw          $v0, -0x58F4($s2)
    ctx->pc = 0x1cb750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294944524)));
label_1cb754:
    // 0x1cb754: 0xa0400ab8  sb          $zero, 0xAB8($v0)
    ctx->pc = 0x1cb754u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2744), (uint8_t)GPR_U32(ctx, 0));
label_1cb758:
    // 0x1cb758: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb75c:
    // 0x1cb75c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cb75cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1cb760:
    // 0x1cb760: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cb760u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cb764:
    // 0x1cb764: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cb764u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1cb768:
    // 0x1cb768: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cb768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1cb76c:
    // 0x1cb76c: 0x3e00008  jr          $ra
label_1cb770:
    if (ctx->pc == 0x1CB770u) {
        ctx->pc = 0x1CB770u;
            // 0x1cb770: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1CB774u;
        goto label_1cb774;
    }
    ctx->pc = 0x1CB76Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB76Cu;
            // 0x1cb770: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CB774u;
label_1cb774:
    // 0x1cb774: 0x0  nop
    ctx->pc = 0x1cb774u;
    // NOP
label_1cb778:
    // 0x1cb778: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1cb778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1cb77c:
    // 0x1cb77c: 0x8c43a70c  lw          $v1, -0x58F4($v0)
    ctx->pc = 0x1cb77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944524)));
label_1cb780:
    // 0x1cb780: 0x90620ab8  lbu         $v0, 0xAB8($v1)
    ctx->pc = 0x1cb780u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2744)));
label_1cb784:
    // 0x1cb784: 0x3e00008  jr          $ra
label_1cb788:
    if (ctx->pc == 0x1CB788u) {
        ctx->pc = 0x1CB788u;
            // 0x1cb788: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x1CB78Cu;
        goto label_1cb78c;
    }
    ctx->pc = 0x1CB784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB784u;
            // 0x1cb788: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CB78Cu;
label_1cb78c:
    // 0x1cb78c: 0x0  nop
    ctx->pc = 0x1cb78cu;
    // NOP
label_1cb790:
    // 0x1cb790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1cb794:
    // 0x1cb794: 0x3404f700  ori         $a0, $zero, 0xF700
    ctx->pc = 0x1cb794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63232);
label_1cb798:
    // 0x1cb798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1cb79c:
    // 0x1cb79c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb7a0:
    // 0x1cb7a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cb7a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb7a4:
    // 0x1cb7a4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1cb7a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cb7a8:
    // 0x1cb7a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb7ac:
    // 0x1cb7ac: 0x80728d0  j           func_1CA340
label_1cb7b0:
    if (ctx->pc == 0x1CB7B0u) {
        ctx->pc = 0x1CB7B0u;
            // 0x1cb7b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1CB7B4u;
        goto label_1cb7b4;
    }
    ctx->pc = 0x1CB7ACu;
    ctx->pc = 0x1CB7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB7ACu;
            // 0x1cb7b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA340u;
    if (runtime->hasFunction(0x1CA340u)) {
        auto targetFn = runtime->lookupFunction(0x1CA340u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CA340_0x1ca340(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1CB7B4u;
label_1cb7b4:
    // 0x1cb7b4: 0x0  nop
    ctx->pc = 0x1cb7b4u;
    // NOP
}
