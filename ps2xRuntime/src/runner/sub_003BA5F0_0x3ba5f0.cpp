#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BA5F0
// Address: 0x3ba5f0 - 0x3ba870
void sub_003BA5F0_0x3ba5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BA5F0_0x3ba5f0");
#endif

    switch (ctx->pc) {
        case 0x3ba5f0u: goto label_3ba5f0;
        case 0x3ba5f4u: goto label_3ba5f4;
        case 0x3ba5f8u: goto label_3ba5f8;
        case 0x3ba5fcu: goto label_3ba5fc;
        case 0x3ba600u: goto label_3ba600;
        case 0x3ba604u: goto label_3ba604;
        case 0x3ba608u: goto label_3ba608;
        case 0x3ba60cu: goto label_3ba60c;
        case 0x3ba610u: goto label_3ba610;
        case 0x3ba614u: goto label_3ba614;
        case 0x3ba618u: goto label_3ba618;
        case 0x3ba61cu: goto label_3ba61c;
        case 0x3ba620u: goto label_3ba620;
        case 0x3ba624u: goto label_3ba624;
        case 0x3ba628u: goto label_3ba628;
        case 0x3ba62cu: goto label_3ba62c;
        case 0x3ba630u: goto label_3ba630;
        case 0x3ba634u: goto label_3ba634;
        case 0x3ba638u: goto label_3ba638;
        case 0x3ba63cu: goto label_3ba63c;
        case 0x3ba640u: goto label_3ba640;
        case 0x3ba644u: goto label_3ba644;
        case 0x3ba648u: goto label_3ba648;
        case 0x3ba64cu: goto label_3ba64c;
        case 0x3ba650u: goto label_3ba650;
        case 0x3ba654u: goto label_3ba654;
        case 0x3ba658u: goto label_3ba658;
        case 0x3ba65cu: goto label_3ba65c;
        case 0x3ba660u: goto label_3ba660;
        case 0x3ba664u: goto label_3ba664;
        case 0x3ba668u: goto label_3ba668;
        case 0x3ba66cu: goto label_3ba66c;
        case 0x3ba670u: goto label_3ba670;
        case 0x3ba674u: goto label_3ba674;
        case 0x3ba678u: goto label_3ba678;
        case 0x3ba67cu: goto label_3ba67c;
        case 0x3ba680u: goto label_3ba680;
        case 0x3ba684u: goto label_3ba684;
        case 0x3ba688u: goto label_3ba688;
        case 0x3ba68cu: goto label_3ba68c;
        case 0x3ba690u: goto label_3ba690;
        case 0x3ba694u: goto label_3ba694;
        case 0x3ba698u: goto label_3ba698;
        case 0x3ba69cu: goto label_3ba69c;
        case 0x3ba6a0u: goto label_3ba6a0;
        case 0x3ba6a4u: goto label_3ba6a4;
        case 0x3ba6a8u: goto label_3ba6a8;
        case 0x3ba6acu: goto label_3ba6ac;
        case 0x3ba6b0u: goto label_3ba6b0;
        case 0x3ba6b4u: goto label_3ba6b4;
        case 0x3ba6b8u: goto label_3ba6b8;
        case 0x3ba6bcu: goto label_3ba6bc;
        case 0x3ba6c0u: goto label_3ba6c0;
        case 0x3ba6c4u: goto label_3ba6c4;
        case 0x3ba6c8u: goto label_3ba6c8;
        case 0x3ba6ccu: goto label_3ba6cc;
        case 0x3ba6d0u: goto label_3ba6d0;
        case 0x3ba6d4u: goto label_3ba6d4;
        case 0x3ba6d8u: goto label_3ba6d8;
        case 0x3ba6dcu: goto label_3ba6dc;
        case 0x3ba6e0u: goto label_3ba6e0;
        case 0x3ba6e4u: goto label_3ba6e4;
        case 0x3ba6e8u: goto label_3ba6e8;
        case 0x3ba6ecu: goto label_3ba6ec;
        case 0x3ba6f0u: goto label_3ba6f0;
        case 0x3ba6f4u: goto label_3ba6f4;
        case 0x3ba6f8u: goto label_3ba6f8;
        case 0x3ba6fcu: goto label_3ba6fc;
        case 0x3ba700u: goto label_3ba700;
        case 0x3ba704u: goto label_3ba704;
        case 0x3ba708u: goto label_3ba708;
        case 0x3ba70cu: goto label_3ba70c;
        case 0x3ba710u: goto label_3ba710;
        case 0x3ba714u: goto label_3ba714;
        case 0x3ba718u: goto label_3ba718;
        case 0x3ba71cu: goto label_3ba71c;
        case 0x3ba720u: goto label_3ba720;
        case 0x3ba724u: goto label_3ba724;
        case 0x3ba728u: goto label_3ba728;
        case 0x3ba72cu: goto label_3ba72c;
        case 0x3ba730u: goto label_3ba730;
        case 0x3ba734u: goto label_3ba734;
        case 0x3ba738u: goto label_3ba738;
        case 0x3ba73cu: goto label_3ba73c;
        case 0x3ba740u: goto label_3ba740;
        case 0x3ba744u: goto label_3ba744;
        case 0x3ba748u: goto label_3ba748;
        case 0x3ba74cu: goto label_3ba74c;
        case 0x3ba750u: goto label_3ba750;
        case 0x3ba754u: goto label_3ba754;
        case 0x3ba758u: goto label_3ba758;
        case 0x3ba75cu: goto label_3ba75c;
        case 0x3ba760u: goto label_3ba760;
        case 0x3ba764u: goto label_3ba764;
        case 0x3ba768u: goto label_3ba768;
        case 0x3ba76cu: goto label_3ba76c;
        case 0x3ba770u: goto label_3ba770;
        case 0x3ba774u: goto label_3ba774;
        case 0x3ba778u: goto label_3ba778;
        case 0x3ba77cu: goto label_3ba77c;
        case 0x3ba780u: goto label_3ba780;
        case 0x3ba784u: goto label_3ba784;
        case 0x3ba788u: goto label_3ba788;
        case 0x3ba78cu: goto label_3ba78c;
        case 0x3ba790u: goto label_3ba790;
        case 0x3ba794u: goto label_3ba794;
        case 0x3ba798u: goto label_3ba798;
        case 0x3ba79cu: goto label_3ba79c;
        case 0x3ba7a0u: goto label_3ba7a0;
        case 0x3ba7a4u: goto label_3ba7a4;
        case 0x3ba7a8u: goto label_3ba7a8;
        case 0x3ba7acu: goto label_3ba7ac;
        case 0x3ba7b0u: goto label_3ba7b0;
        case 0x3ba7b4u: goto label_3ba7b4;
        case 0x3ba7b8u: goto label_3ba7b8;
        case 0x3ba7bcu: goto label_3ba7bc;
        case 0x3ba7c0u: goto label_3ba7c0;
        case 0x3ba7c4u: goto label_3ba7c4;
        case 0x3ba7c8u: goto label_3ba7c8;
        case 0x3ba7ccu: goto label_3ba7cc;
        case 0x3ba7d0u: goto label_3ba7d0;
        case 0x3ba7d4u: goto label_3ba7d4;
        case 0x3ba7d8u: goto label_3ba7d8;
        case 0x3ba7dcu: goto label_3ba7dc;
        case 0x3ba7e0u: goto label_3ba7e0;
        case 0x3ba7e4u: goto label_3ba7e4;
        case 0x3ba7e8u: goto label_3ba7e8;
        case 0x3ba7ecu: goto label_3ba7ec;
        case 0x3ba7f0u: goto label_3ba7f0;
        case 0x3ba7f4u: goto label_3ba7f4;
        case 0x3ba7f8u: goto label_3ba7f8;
        case 0x3ba7fcu: goto label_3ba7fc;
        case 0x3ba800u: goto label_3ba800;
        case 0x3ba804u: goto label_3ba804;
        case 0x3ba808u: goto label_3ba808;
        case 0x3ba80cu: goto label_3ba80c;
        case 0x3ba810u: goto label_3ba810;
        case 0x3ba814u: goto label_3ba814;
        case 0x3ba818u: goto label_3ba818;
        case 0x3ba81cu: goto label_3ba81c;
        case 0x3ba820u: goto label_3ba820;
        case 0x3ba824u: goto label_3ba824;
        case 0x3ba828u: goto label_3ba828;
        case 0x3ba82cu: goto label_3ba82c;
        case 0x3ba830u: goto label_3ba830;
        case 0x3ba834u: goto label_3ba834;
        case 0x3ba838u: goto label_3ba838;
        case 0x3ba83cu: goto label_3ba83c;
        case 0x3ba840u: goto label_3ba840;
        case 0x3ba844u: goto label_3ba844;
        case 0x3ba848u: goto label_3ba848;
        case 0x3ba84cu: goto label_3ba84c;
        case 0x3ba850u: goto label_3ba850;
        case 0x3ba854u: goto label_3ba854;
        case 0x3ba858u: goto label_3ba858;
        case 0x3ba85cu: goto label_3ba85c;
        case 0x3ba860u: goto label_3ba860;
        case 0x3ba864u: goto label_3ba864;
        case 0x3ba868u: goto label_3ba868;
        case 0x3ba86cu: goto label_3ba86c;
        default: break;
    }

    ctx->pc = 0x3ba5f0u;

label_3ba5f0:
    // 0x3ba5f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3ba5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3ba5f4:
    // 0x3ba5f4: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x3ba5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_3ba5f8:
    // 0x3ba5f8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3ba5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_3ba5fc:
    // 0x3ba5fc: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3ba5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3ba600:
    // 0x3ba600: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3ba600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3ba604:
    // 0x3ba604: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3ba604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3ba608:
    // 0x3ba608: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3ba608u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ba60c:
    // 0x3ba60c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3ba60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3ba610:
    // 0x3ba610: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3ba610u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3ba614:
    // 0x3ba614: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3ba614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3ba618:
    // 0x3ba618: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ba618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ba61c:
    // 0x3ba61c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3ba61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3ba620:
    // 0x3ba620: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3ba620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3ba624:
    // 0x3ba624: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3ba624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ba628:
    // 0x3ba628: 0x3445aece  ori         $a1, $v0, 0xAECE
    ctx->pc = 0x3ba628u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44750);
label_3ba62c:
    // 0x3ba62c: 0xc0ee760  jal         func_3B9D80
label_3ba630:
    if (ctx->pc == 0x3BA630u) {
        ctx->pc = 0x3BA630u;
            // 0x3ba630: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x3BA634u;
        goto label_3ba634;
    }
    ctx->pc = 0x3BA62Cu;
    SET_GPR_U32(ctx, 31, 0x3BA634u);
    ctx->pc = 0x3BA630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA62Cu;
            // 0x3ba630: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9D80u;
    if (runtime->hasFunction(0x3B9D80u)) {
        auto targetFn = runtime->lookupFunction(0x3B9D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BA634u; }
        if (ctx->pc != 0x3BA634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9D80_0x3b9d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BA634u; }
        if (ctx->pc != 0x3BA634u) { return; }
    }
    ctx->pc = 0x3BA634u;
label_3ba634:
    // 0x3ba634: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3ba634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3ba638:
    // 0x3ba638: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x3ba638u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_3ba63c:
    // 0x3ba63c: 0x24428c40  addiu       $v0, $v0, -0x73C0
    ctx->pc = 0x3ba63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937664));
label_3ba640:
    // 0x3ba640: 0x3c110067  lui         $s1, 0x67
    ctx->pc = 0x3ba640u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)103 << 16));
label_3ba644:
    // 0x3ba644: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x3ba644u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_3ba648:
    // 0x3ba648: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x3ba648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_3ba64c:
    // 0x3ba64c: 0xa2a00058  sb          $zero, 0x58($s5)
    ctx->pc = 0x3ba64cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 88), (uint8_t)GPR_U32(ctx, 0));
label_3ba650:
    // 0x3ba650: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ba650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ba654:
    // 0x3ba654: 0xaeb4005c  sw          $s4, 0x5C($s5)
    ctx->pc = 0x3ba654u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 20));
label_3ba658:
    // 0x3ba658: 0x3c0541a0  lui         $a1, 0x41A0
    ctx->pc = 0x3ba658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16800 << 16));
label_3ba65c:
    // 0x3ba65c: 0x8c530eac  lw          $s3, 0xEAC($v0)
    ctx->pc = 0x3ba65cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_3ba660:
    // 0x3ba660: 0x3c04420c  lui         $a0, 0x420C
    ctx->pc = 0x3ba660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16908 << 16));
label_3ba664:
    // 0x3ba664: 0x2a810002  slti        $at, $s4, 0x2
    ctx->pc = 0x3ba664u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_3ba668:
    // 0x3ba668: 0x26529bc0  addiu       $s2, $s2, -0x6440
    ctx->pc = 0x3ba668u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941632));
label_3ba66c:
    // 0x3ba66c: 0x2631ab70  addiu       $s1, $s1, -0x5490
    ctx->pc = 0x3ba66cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945648));
label_3ba670:
    // 0x3ba670: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3ba670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_3ba674:
    // 0x3ba674: 0xaea20070  sw          $v0, 0x70($s5)
    ctx->pc = 0x3ba674u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 112), GPR_U32(ctx, 2));
label_3ba678:
    // 0x3ba678: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x3ba678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_3ba67c:
    // 0x3ba67c: 0xaea50074  sw          $a1, 0x74($s5)
    ctx->pc = 0x3ba67cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 116), GPR_U32(ctx, 5));
label_3ba680:
    // 0x3ba680: 0x24420094  addiu       $v0, $v0, 0x94
    ctx->pc = 0x3ba680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
label_3ba684:
    // 0x3ba684: 0xaea40078  sw          $a0, 0x78($s5)
    ctx->pc = 0x3ba684u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 120), GPR_U32(ctx, 4));
label_3ba688:
    // 0x3ba688: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_3ba68c:
    if (ctx->pc == 0x3BA68Cu) {
        ctx->pc = 0x3BA68Cu;
            // 0x3ba68c: 0xaea2007c  sw          $v0, 0x7C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 124), GPR_U32(ctx, 2));
        ctx->pc = 0x3BA690u;
        goto label_3ba690;
    }
    ctx->pc = 0x3BA688u;
    {
        const bool branch_taken_0x3ba688 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA688u;
            // 0x3ba68c: 0xaea2007c  sw          $v0, 0x7C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba688) {
            ctx->pc = 0x3BA6ACu;
            goto label_3ba6ac;
        }
    }
    ctx->pc = 0x3BA690u;
label_3ba690:
    // 0x3ba690: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x3ba690u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3ba694:
    // 0x3ba694: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3ba694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ba698:
    // 0x3ba698: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3ba698u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3ba69c:
    // 0x3ba69c: 0x320f809  jalr        $t9
label_3ba6a0:
    if (ctx->pc == 0x3BA6A0u) {
        ctx->pc = 0x3BA6A0u;
            // 0x3ba6a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BA6A4u;
        goto label_3ba6a4;
    }
    ctx->pc = 0x3BA69Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BA6A4u);
        ctx->pc = 0x3BA6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA69Cu;
            // 0x3ba6a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3BA6A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3BA6A4u; }
            if (ctx->pc != 0x3BA6A4u) { return; }
        }
        }
    }
    ctx->pc = 0x3BA6A4u;
label_3ba6a4:
    // 0x3ba6a4: 0x1000000a  b           . + 4 + (0xA << 2)
label_3ba6a8:
    if (ctx->pc == 0x3BA6A8u) {
        ctx->pc = 0x3BA6A8u;
            // 0x3ba6a8: 0x8ea3007c  lw          $v1, 0x7C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
        ctx->pc = 0x3BA6ACu;
        goto label_3ba6ac;
    }
    ctx->pc = 0x3BA6A4u;
    {
        const bool branch_taken_0x3ba6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA6A4u;
            // 0x3ba6a8: 0x8ea3007c  lw          $v1, 0x7C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba6a4) {
            ctx->pc = 0x3BA6D0u;
            goto label_3ba6d0;
        }
    }
    ctx->pc = 0x3BA6ACu;
label_3ba6ac:
    // 0x3ba6ac: 0x2a810064  slti        $at, $s4, 0x64
    ctx->pc = 0x3ba6acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)100) ? 1 : 0);
label_3ba6b0:
    // 0x3ba6b0: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
label_3ba6b4:
    if (ctx->pc == 0x3BA6B4u) {
        ctx->pc = 0x3BA6B8u;
        goto label_3ba6b8;
    }
    ctx->pc = 0x3BA6B0u;
    {
        const bool branch_taken_0x3ba6b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ba6b0) {
            ctx->pc = 0x3BA6CCu;
            goto label_3ba6cc;
        }
    }
    ctx->pc = 0x3BA6B8u;
label_3ba6b8:
    // 0x3ba6b8: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x3ba6b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3ba6bc:
    // 0x3ba6bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3ba6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ba6c0:
    // 0x3ba6c0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3ba6c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3ba6c4:
    // 0x3ba6c4: 0x320f809  jalr        $t9
label_3ba6c8:
    if (ctx->pc == 0x3BA6C8u) {
        ctx->pc = 0x3BA6C8u;
            // 0x3ba6c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BA6CCu;
        goto label_3ba6cc;
    }
    ctx->pc = 0x3BA6C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BA6CCu);
        ctx->pc = 0x3BA6C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA6C4u;
            // 0x3ba6c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3BA6CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3BA6CCu; }
            if (ctx->pc != 0x3BA6CCu) { return; }
        }
        }
    }
    ctx->pc = 0x3BA6CCu;
label_3ba6cc:
    // 0x3ba6cc: 0x8ea3007c  lw          $v1, 0x7C($s5)
    ctx->pc = 0x3ba6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
label_3ba6d0:
    // 0x3ba6d0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3ba6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3ba6d4:
    // 0x3ba6d4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3ba6d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3ba6d8:
    // 0x3ba6d8: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x3ba6d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ba6dc:
    // 0x3ba6dc: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x3ba6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3ba6e0:
    // 0x3ba6e0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x3ba6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3ba6e4:
    // 0x3ba6e4: 0xd02823  subu        $a1, $a2, $s0
    ctx->pc = 0x3ba6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_3ba6e8:
    // 0x3ba6e8: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x3ba6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3ba6ec:
    // 0x3ba6ec: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x3ba6ecu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_3ba6f0:
    // 0x3ba6f0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3ba6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3ba6f4:
    // 0x3ba6f4: 0xa6a60062  sh          $a2, 0x62($s5)
    ctx->pc = 0x3ba6f4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 98), (uint16_t)GPR_U32(ctx, 6));
label_3ba6f8:
    // 0x3ba6f8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x3ba6f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_3ba6fc:
    // 0x3ba6fc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3ba6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3ba700:
    // 0x3ba700: 0xa6a30064  sh          $v1, 0x64($s5)
    ctx->pc = 0x3ba700u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 100), (uint16_t)GPR_U32(ctx, 3));
label_3ba704:
    // 0x3ba704: 0x8e630110  lw          $v1, 0x110($s3)
    ctx->pc = 0x3ba704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
label_3ba708:
    // 0x3ba708: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_3ba70c:
    if (ctx->pc == 0x3BA70Cu) {
        ctx->pc = 0x3BA70Cu;
            // 0x3ba70c: 0x205b021  addu        $s6, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->pc = 0x3BA710u;
        goto label_3ba710;
    }
    ctx->pc = 0x3BA708u;
    {
        const bool branch_taken_0x3ba708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3BA70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA708u;
            // 0x3ba70c: 0x205b021  addu        $s6, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba708) {
            ctx->pc = 0x3BA74Cu;
            goto label_3ba74c;
        }
    }
    ctx->pc = 0x3BA710u;
label_3ba710:
    // 0x3ba710: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3ba710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ba714:
    // 0x3ba714: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
label_3ba718:
    if (ctx->pc == 0x3BA718u) {
        ctx->pc = 0x3BA718u;
            // 0x3ba718: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->pc = 0x3BA71Cu;
        goto label_3ba71c;
    }
    ctx->pc = 0x3BA714u;
    {
        const bool branch_taken_0x3ba714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ba714) {
            ctx->pc = 0x3BA718u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA714u;
            // 0x3ba718: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BA750u;
            goto label_3ba750;
        }
    }
    ctx->pc = 0x3BA71Cu;
label_3ba71c:
    // 0x3ba71c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3ba71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ba720:
    // 0x3ba720: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_3ba724:
    if (ctx->pc == 0x3BA724u) {
        ctx->pc = 0x3BA724u;
            // 0x3ba724: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->pc = 0x3BA728u;
        goto label_3ba728;
    }
    ctx->pc = 0x3BA720u;
    {
        const bool branch_taken_0x3ba720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ba720) {
            ctx->pc = 0x3BA724u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA720u;
            // 0x3ba724: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BA744u;
            goto label_3ba744;
        }
    }
    ctx->pc = 0x3BA728u;
label_3ba728:
    // 0x3ba728: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ba728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ba72c:
    // 0x3ba72c: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_3ba730:
    if (ctx->pc == 0x3BA730u) {
        ctx->pc = 0x3BA730u;
            // 0x3ba730: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->pc = 0x3BA734u;
        goto label_3ba734;
    }
    ctx->pc = 0x3BA72Cu;
    {
        const bool branch_taken_0x3ba72c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ba72c) {
            ctx->pc = 0x3BA730u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA72Cu;
            // 0x3ba730: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BA73Cu;
            goto label_3ba73c;
        }
    }
    ctx->pc = 0x3BA734u;
label_3ba734:
    // 0x3ba734: 0x10000008  b           . + 4 + (0x8 << 2)
label_3ba738:
    if (ctx->pc == 0x3BA738u) {
        ctx->pc = 0x3BA738u;
            // 0x3ba738: 0x8eb90000  lw          $t9, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x3BA73Cu;
        goto label_3ba73c;
    }
    ctx->pc = 0x3BA734u;
    {
        const bool branch_taken_0x3ba734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA734u;
            // 0x3ba738: 0x8eb90000  lw          $t9, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba734) {
            ctx->pc = 0x3BA758u;
            goto label_3ba758;
        }
    }
    ctx->pc = 0x3BA73Cu;
label_3ba73c:
    // 0x3ba73c: 0x1000000a  b           . + 4 + (0xA << 2)
label_3ba740:
    if (ctx->pc == 0x3BA740u) {
        ctx->pc = 0x3BA740u;
            // 0x3ba740: 0xaea2006c  sw          $v0, 0x6C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 108), GPR_U32(ctx, 2));
        ctx->pc = 0x3BA744u;
        goto label_3ba744;
    }
    ctx->pc = 0x3BA73Cu;
    {
        const bool branch_taken_0x3ba73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA73Cu;
            // 0x3ba740: 0xaea2006c  sw          $v0, 0x6C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba73c) {
            ctx->pc = 0x3BA768u;
            goto label_3ba768;
        }
    }
    ctx->pc = 0x3BA744u;
label_3ba744:
    // 0x3ba744: 0x10000008  b           . + 4 + (0x8 << 2)
label_3ba748:
    if (ctx->pc == 0x3BA748u) {
        ctx->pc = 0x3BA748u;
            // 0x3ba748: 0xaea2006c  sw          $v0, 0x6C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 108), GPR_U32(ctx, 2));
        ctx->pc = 0x3BA74Cu;
        goto label_3ba74c;
    }
    ctx->pc = 0x3BA744u;
    {
        const bool branch_taken_0x3ba744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA744u;
            // 0x3ba748: 0xaea2006c  sw          $v0, 0x6C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba744) {
            ctx->pc = 0x3BA768u;
            goto label_3ba768;
        }
    }
    ctx->pc = 0x3BA74Cu;
label_3ba74c:
    // 0x3ba74c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3ba74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_3ba750:
    // 0x3ba750: 0x10000005  b           . + 4 + (0x5 << 2)
label_3ba754:
    if (ctx->pc == 0x3BA754u) {
        ctx->pc = 0x3BA754u;
            // 0x3ba754: 0xaea2006c  sw          $v0, 0x6C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 108), GPR_U32(ctx, 2));
        ctx->pc = 0x3BA758u;
        goto label_3ba758;
    }
    ctx->pc = 0x3BA750u;
    {
        const bool branch_taken_0x3ba750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA750u;
            // 0x3ba754: 0xaea2006c  sw          $v0, 0x6C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba750) {
            ctx->pc = 0x3BA768u;
            goto label_3ba768;
        }
    }
    ctx->pc = 0x3BA758u;
label_3ba758:
    // 0x3ba758: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3ba758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ba75c:
    // 0x3ba75c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3ba75cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3ba760:
    // 0x3ba760: 0x320f809  jalr        $t9
label_3ba764:
    if (ctx->pc == 0x3BA764u) {
        ctx->pc = 0x3BA764u;
            // 0x3ba764: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BA768u;
        goto label_3ba768;
    }
    ctx->pc = 0x3BA760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BA768u);
        ctx->pc = 0x3BA764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA760u;
            // 0x3ba764: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3BA768u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3BA768u; }
            if (ctx->pc != 0x3BA768u) { return; }
        }
        }
    }
    ctx->pc = 0x3BA768u;
label_3ba768:
    // 0x3ba768: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ba768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ba76c:
    // 0x3ba76c: 0x8ea3005c  lw          $v1, 0x5C($s5)
    ctx->pc = 0x3ba76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
label_3ba770:
    // 0x3ba770: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3ba770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3ba774:
    // 0x3ba774: 0x8c42078c  lw          $v0, 0x78C($v0)
    ctx->pc = 0x3ba774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1932)));
label_3ba778:
    // 0x3ba778: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
label_3ba77c:
    if (ctx->pc == 0x3BA77Cu) {
        ctx->pc = 0x3BA77Cu;
            // 0x3ba77c: 0x2a82000a  slti        $v0, $s4, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->pc = 0x3BA780u;
        goto label_3ba780;
    }
    ctx->pc = 0x3BA778u;
    {
        const bool branch_taken_0x3ba778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ba778) {
            ctx->pc = 0x3BA77Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA778u;
            // 0x3ba77c: 0x2a82000a  slti        $v0, $s4, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BA79Cu;
            goto label_3ba79c;
        }
    }
    ctx->pc = 0x3BA780u;
label_3ba780:
    // 0x3ba780: 0xc6210248  lwc1        $f1, 0x248($s1)
    ctx->pc = 0x3ba780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ba784:
    // 0x3ba784: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ba784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ba788:
    // 0x3ba788: 0xc62002f8  lwc1        $f0, 0x2F8($s1)
    ctx->pc = 0x3ba788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ba78c:
    // 0x3ba78c: 0xa2a20058  sb          $v0, 0x58($s5)
    ctx->pc = 0x3ba78cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 88), (uint8_t)GPR_U32(ctx, 2));
label_3ba790:
    // 0x3ba790: 0x4601a040  add.s       $f1, $f20, $f1
    ctx->pc = 0x3ba790u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_3ba794:
    // 0x3ba794: 0x1000000d  b           . + 4 + (0xD << 2)
label_3ba798:
    if (ctx->pc == 0x3BA798u) {
        ctx->pc = 0x3BA798u;
            // 0x3ba798: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3BA79Cu;
        goto label_3ba79c;
    }
    ctx->pc = 0x3BA794u;
    {
        const bool branch_taken_0x3ba794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA794u;
            // 0x3ba798: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba794) {
            ctx->pc = 0x3BA7CCu;
            goto label_3ba7cc;
        }
    }
    ctx->pc = 0x3BA79Cu;
label_3ba79c:
    // 0x3ba79c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3ba79cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3ba7a0:
    // 0x3ba7a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3ba7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3ba7a4:
    // 0x3ba7a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ba7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3ba7a8:
    // 0x3ba7a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ba7a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ba7ac:
    // 0x3ba7ac: 0x0  nop
    ctx->pc = 0x3ba7acu;
    // NOP
label_3ba7b0:
    // 0x3ba7b0: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3ba7b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3ba7b4:
    // 0x3ba7b4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3ba7b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ba7b8:
    // 0x3ba7b8: 0xc64200d8  lwc1        $f2, 0xD8($s2)
    ctx->pc = 0x3ba7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3ba7bc:
    // 0x3ba7bc: 0x46140818  adda.s      $f1, $f20
    ctx->pc = 0x3ba7bcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_3ba7c0:
    // 0x3ba7c0: 0xc62002f8  lwc1        $f0, 0x2F8($s1)
    ctx->pc = 0x3ba7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ba7c4:
    // 0x3ba7c4: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x3ba7c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_3ba7c8:
    // 0x3ba7c8: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x3ba7c8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3ba7cc:
    // 0x3ba7cc: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x3ba7ccu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ba7d0:
    // 0x3ba7d0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x3ba7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_3ba7d4:
    // 0x3ba7d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3ba7d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ba7d8:
    // 0x3ba7d8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3ba7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_3ba7dc:
    // 0x3ba7dc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3ba7dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3ba7e0:
    // 0x3ba7e0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3ba7e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ba7e4:
    // 0x3ba7e4: 0x4601a140  add.s       $f5, $f20, $f1
    ctx->pc = 0x3ba7e4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_3ba7e8:
    // 0x3ba7e8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3ba7e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ba7ec:
    // 0x3ba7ec: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3ba7ecu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ba7f0:
    // 0x3ba7f0: 0xc6a4006c  lwc1        $f4, 0x6C($s5)
    ctx->pc = 0x3ba7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3ba7f4:
    // 0x3ba7f4: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x3ba7f4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3ba7f8:
    // 0x3ba7f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3ba7f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3ba7fc:
    // 0x3ba7fc: 0x46042882  mul.s       $f2, $f5, $f4
    ctx->pc = 0x3ba7fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_3ba800:
    // 0x3ba800: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3ba800u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3ba804:
    // 0x3ba804: 0x0  nop
    ctx->pc = 0x3ba804u;
    // NOP
label_3ba808:
    // 0x3ba808: 0x4602189d  msub.s      $f2, $f3, $f2
    ctx->pc = 0x3ba808u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_3ba80c:
    // 0x3ba80c: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x3ba80cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3ba810:
    // 0x3ba810: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ba810u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3ba814:
    // 0x3ba814: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3ba814u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3ba818:
    // 0x3ba818: 0x0  nop
    ctx->pc = 0x3ba818u;
    // NOP
label_3ba81c:
    // 0x3ba81c: 0xa6a30066  sh          $v1, 0x66($s5)
    ctx->pc = 0x3ba81cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 102), (uint16_t)GPR_U32(ctx, 3));
label_3ba820:
    // 0x3ba820: 0xc6a0006c  lwc1        $f0, 0x6C($s5)
    ctx->pc = 0x3ba820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ba824:
    // 0x3ba824: 0x4600281d  msub.s      $f0, $f5, $f0
    ctx->pc = 0x3ba824u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[0]));
label_3ba828:
    // 0x3ba828: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ba828u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3ba82c:
    // 0x3ba82c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3ba82cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3ba830:
    // 0x3ba830: 0x0  nop
    ctx->pc = 0x3ba830u;
    // NOP
label_3ba834:
    // 0x3ba834: 0xa6a30068  sh          $v1, 0x68($s5)
    ctx->pc = 0x3ba834u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 104), (uint16_t)GPR_U32(ctx, 3));
label_3ba838:
    // 0x3ba838: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3ba838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3ba83c:
    // 0x3ba83c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3ba83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ba840:
    // 0x3ba840: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3ba840u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3ba844:
    // 0x3ba844: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3ba844u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ba848:
    // 0x3ba848: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3ba848u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ba84c:
    // 0x3ba84c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3ba84cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ba850:
    // 0x3ba850: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3ba850u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ba854:
    // 0x3ba854: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3ba854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ba858:
    // 0x3ba858: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3ba858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ba85c:
    // 0x3ba85c: 0x3e00008  jr          $ra
label_3ba860:
    if (ctx->pc == 0x3BA860u) {
        ctx->pc = 0x3BA860u;
            // 0x3ba860: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3BA864u;
        goto label_3ba864;
    }
    ctx->pc = 0x3BA85Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BA860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA85Cu;
            // 0x3ba860: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BA864u;
label_3ba864:
    // 0x3ba864: 0x0  nop
    ctx->pc = 0x3ba864u;
    // NOP
label_3ba868:
    // 0x3ba868: 0x0  nop
    ctx->pc = 0x3ba868u;
    // NOP
label_3ba86c:
    // 0x3ba86c: 0x0  nop
    ctx->pc = 0x3ba86cu;
    // NOP
}
