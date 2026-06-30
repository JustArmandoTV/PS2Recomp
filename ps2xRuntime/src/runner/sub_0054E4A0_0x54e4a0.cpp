#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0054E4A0
// Address: 0x54e4a0 - 0x54e870
void sub_0054E4A0_0x54e4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0054E4A0_0x54e4a0");
#endif

    switch (ctx->pc) {
        case 0x54e4a0u: goto label_54e4a0;
        case 0x54e4a4u: goto label_54e4a4;
        case 0x54e4a8u: goto label_54e4a8;
        case 0x54e4acu: goto label_54e4ac;
        case 0x54e4b0u: goto label_54e4b0;
        case 0x54e4b4u: goto label_54e4b4;
        case 0x54e4b8u: goto label_54e4b8;
        case 0x54e4bcu: goto label_54e4bc;
        case 0x54e4c0u: goto label_54e4c0;
        case 0x54e4c4u: goto label_54e4c4;
        case 0x54e4c8u: goto label_54e4c8;
        case 0x54e4ccu: goto label_54e4cc;
        case 0x54e4d0u: goto label_54e4d0;
        case 0x54e4d4u: goto label_54e4d4;
        case 0x54e4d8u: goto label_54e4d8;
        case 0x54e4dcu: goto label_54e4dc;
        case 0x54e4e0u: goto label_54e4e0;
        case 0x54e4e4u: goto label_54e4e4;
        case 0x54e4e8u: goto label_54e4e8;
        case 0x54e4ecu: goto label_54e4ec;
        case 0x54e4f0u: goto label_54e4f0;
        case 0x54e4f4u: goto label_54e4f4;
        case 0x54e4f8u: goto label_54e4f8;
        case 0x54e4fcu: goto label_54e4fc;
        case 0x54e500u: goto label_54e500;
        case 0x54e504u: goto label_54e504;
        case 0x54e508u: goto label_54e508;
        case 0x54e50cu: goto label_54e50c;
        case 0x54e510u: goto label_54e510;
        case 0x54e514u: goto label_54e514;
        case 0x54e518u: goto label_54e518;
        case 0x54e51cu: goto label_54e51c;
        case 0x54e520u: goto label_54e520;
        case 0x54e524u: goto label_54e524;
        case 0x54e528u: goto label_54e528;
        case 0x54e52cu: goto label_54e52c;
        case 0x54e530u: goto label_54e530;
        case 0x54e534u: goto label_54e534;
        case 0x54e538u: goto label_54e538;
        case 0x54e53cu: goto label_54e53c;
        case 0x54e540u: goto label_54e540;
        case 0x54e544u: goto label_54e544;
        case 0x54e548u: goto label_54e548;
        case 0x54e54cu: goto label_54e54c;
        case 0x54e550u: goto label_54e550;
        case 0x54e554u: goto label_54e554;
        case 0x54e558u: goto label_54e558;
        case 0x54e55cu: goto label_54e55c;
        case 0x54e560u: goto label_54e560;
        case 0x54e564u: goto label_54e564;
        case 0x54e568u: goto label_54e568;
        case 0x54e56cu: goto label_54e56c;
        case 0x54e570u: goto label_54e570;
        case 0x54e574u: goto label_54e574;
        case 0x54e578u: goto label_54e578;
        case 0x54e57cu: goto label_54e57c;
        case 0x54e580u: goto label_54e580;
        case 0x54e584u: goto label_54e584;
        case 0x54e588u: goto label_54e588;
        case 0x54e58cu: goto label_54e58c;
        case 0x54e590u: goto label_54e590;
        case 0x54e594u: goto label_54e594;
        case 0x54e598u: goto label_54e598;
        case 0x54e59cu: goto label_54e59c;
        case 0x54e5a0u: goto label_54e5a0;
        case 0x54e5a4u: goto label_54e5a4;
        case 0x54e5a8u: goto label_54e5a8;
        case 0x54e5acu: goto label_54e5ac;
        case 0x54e5b0u: goto label_54e5b0;
        case 0x54e5b4u: goto label_54e5b4;
        case 0x54e5b8u: goto label_54e5b8;
        case 0x54e5bcu: goto label_54e5bc;
        case 0x54e5c0u: goto label_54e5c0;
        case 0x54e5c4u: goto label_54e5c4;
        case 0x54e5c8u: goto label_54e5c8;
        case 0x54e5ccu: goto label_54e5cc;
        case 0x54e5d0u: goto label_54e5d0;
        case 0x54e5d4u: goto label_54e5d4;
        case 0x54e5d8u: goto label_54e5d8;
        case 0x54e5dcu: goto label_54e5dc;
        case 0x54e5e0u: goto label_54e5e0;
        case 0x54e5e4u: goto label_54e5e4;
        case 0x54e5e8u: goto label_54e5e8;
        case 0x54e5ecu: goto label_54e5ec;
        case 0x54e5f0u: goto label_54e5f0;
        case 0x54e5f4u: goto label_54e5f4;
        case 0x54e5f8u: goto label_54e5f8;
        case 0x54e5fcu: goto label_54e5fc;
        case 0x54e600u: goto label_54e600;
        case 0x54e604u: goto label_54e604;
        case 0x54e608u: goto label_54e608;
        case 0x54e60cu: goto label_54e60c;
        case 0x54e610u: goto label_54e610;
        case 0x54e614u: goto label_54e614;
        case 0x54e618u: goto label_54e618;
        case 0x54e61cu: goto label_54e61c;
        case 0x54e620u: goto label_54e620;
        case 0x54e624u: goto label_54e624;
        case 0x54e628u: goto label_54e628;
        case 0x54e62cu: goto label_54e62c;
        case 0x54e630u: goto label_54e630;
        case 0x54e634u: goto label_54e634;
        case 0x54e638u: goto label_54e638;
        case 0x54e63cu: goto label_54e63c;
        case 0x54e640u: goto label_54e640;
        case 0x54e644u: goto label_54e644;
        case 0x54e648u: goto label_54e648;
        case 0x54e64cu: goto label_54e64c;
        case 0x54e650u: goto label_54e650;
        case 0x54e654u: goto label_54e654;
        case 0x54e658u: goto label_54e658;
        case 0x54e65cu: goto label_54e65c;
        case 0x54e660u: goto label_54e660;
        case 0x54e664u: goto label_54e664;
        case 0x54e668u: goto label_54e668;
        case 0x54e66cu: goto label_54e66c;
        case 0x54e670u: goto label_54e670;
        case 0x54e674u: goto label_54e674;
        case 0x54e678u: goto label_54e678;
        case 0x54e67cu: goto label_54e67c;
        case 0x54e680u: goto label_54e680;
        case 0x54e684u: goto label_54e684;
        case 0x54e688u: goto label_54e688;
        case 0x54e68cu: goto label_54e68c;
        case 0x54e690u: goto label_54e690;
        case 0x54e694u: goto label_54e694;
        case 0x54e698u: goto label_54e698;
        case 0x54e69cu: goto label_54e69c;
        case 0x54e6a0u: goto label_54e6a0;
        case 0x54e6a4u: goto label_54e6a4;
        case 0x54e6a8u: goto label_54e6a8;
        case 0x54e6acu: goto label_54e6ac;
        case 0x54e6b0u: goto label_54e6b0;
        case 0x54e6b4u: goto label_54e6b4;
        case 0x54e6b8u: goto label_54e6b8;
        case 0x54e6bcu: goto label_54e6bc;
        case 0x54e6c0u: goto label_54e6c0;
        case 0x54e6c4u: goto label_54e6c4;
        case 0x54e6c8u: goto label_54e6c8;
        case 0x54e6ccu: goto label_54e6cc;
        case 0x54e6d0u: goto label_54e6d0;
        case 0x54e6d4u: goto label_54e6d4;
        case 0x54e6d8u: goto label_54e6d8;
        case 0x54e6dcu: goto label_54e6dc;
        case 0x54e6e0u: goto label_54e6e0;
        case 0x54e6e4u: goto label_54e6e4;
        case 0x54e6e8u: goto label_54e6e8;
        case 0x54e6ecu: goto label_54e6ec;
        case 0x54e6f0u: goto label_54e6f0;
        case 0x54e6f4u: goto label_54e6f4;
        case 0x54e6f8u: goto label_54e6f8;
        case 0x54e6fcu: goto label_54e6fc;
        case 0x54e700u: goto label_54e700;
        case 0x54e704u: goto label_54e704;
        case 0x54e708u: goto label_54e708;
        case 0x54e70cu: goto label_54e70c;
        case 0x54e710u: goto label_54e710;
        case 0x54e714u: goto label_54e714;
        case 0x54e718u: goto label_54e718;
        case 0x54e71cu: goto label_54e71c;
        case 0x54e720u: goto label_54e720;
        case 0x54e724u: goto label_54e724;
        case 0x54e728u: goto label_54e728;
        case 0x54e72cu: goto label_54e72c;
        case 0x54e730u: goto label_54e730;
        case 0x54e734u: goto label_54e734;
        case 0x54e738u: goto label_54e738;
        case 0x54e73cu: goto label_54e73c;
        case 0x54e740u: goto label_54e740;
        case 0x54e744u: goto label_54e744;
        case 0x54e748u: goto label_54e748;
        case 0x54e74cu: goto label_54e74c;
        case 0x54e750u: goto label_54e750;
        case 0x54e754u: goto label_54e754;
        case 0x54e758u: goto label_54e758;
        case 0x54e75cu: goto label_54e75c;
        case 0x54e760u: goto label_54e760;
        case 0x54e764u: goto label_54e764;
        case 0x54e768u: goto label_54e768;
        case 0x54e76cu: goto label_54e76c;
        case 0x54e770u: goto label_54e770;
        case 0x54e774u: goto label_54e774;
        case 0x54e778u: goto label_54e778;
        case 0x54e77cu: goto label_54e77c;
        case 0x54e780u: goto label_54e780;
        case 0x54e784u: goto label_54e784;
        case 0x54e788u: goto label_54e788;
        case 0x54e78cu: goto label_54e78c;
        case 0x54e790u: goto label_54e790;
        case 0x54e794u: goto label_54e794;
        case 0x54e798u: goto label_54e798;
        case 0x54e79cu: goto label_54e79c;
        case 0x54e7a0u: goto label_54e7a0;
        case 0x54e7a4u: goto label_54e7a4;
        case 0x54e7a8u: goto label_54e7a8;
        case 0x54e7acu: goto label_54e7ac;
        case 0x54e7b0u: goto label_54e7b0;
        case 0x54e7b4u: goto label_54e7b4;
        case 0x54e7b8u: goto label_54e7b8;
        case 0x54e7bcu: goto label_54e7bc;
        case 0x54e7c0u: goto label_54e7c0;
        case 0x54e7c4u: goto label_54e7c4;
        case 0x54e7c8u: goto label_54e7c8;
        case 0x54e7ccu: goto label_54e7cc;
        case 0x54e7d0u: goto label_54e7d0;
        case 0x54e7d4u: goto label_54e7d4;
        case 0x54e7d8u: goto label_54e7d8;
        case 0x54e7dcu: goto label_54e7dc;
        case 0x54e7e0u: goto label_54e7e0;
        case 0x54e7e4u: goto label_54e7e4;
        case 0x54e7e8u: goto label_54e7e8;
        case 0x54e7ecu: goto label_54e7ec;
        case 0x54e7f0u: goto label_54e7f0;
        case 0x54e7f4u: goto label_54e7f4;
        case 0x54e7f8u: goto label_54e7f8;
        case 0x54e7fcu: goto label_54e7fc;
        case 0x54e800u: goto label_54e800;
        case 0x54e804u: goto label_54e804;
        case 0x54e808u: goto label_54e808;
        case 0x54e80cu: goto label_54e80c;
        case 0x54e810u: goto label_54e810;
        case 0x54e814u: goto label_54e814;
        case 0x54e818u: goto label_54e818;
        case 0x54e81cu: goto label_54e81c;
        case 0x54e820u: goto label_54e820;
        case 0x54e824u: goto label_54e824;
        case 0x54e828u: goto label_54e828;
        case 0x54e82cu: goto label_54e82c;
        case 0x54e830u: goto label_54e830;
        case 0x54e834u: goto label_54e834;
        case 0x54e838u: goto label_54e838;
        case 0x54e83cu: goto label_54e83c;
        case 0x54e840u: goto label_54e840;
        case 0x54e844u: goto label_54e844;
        case 0x54e848u: goto label_54e848;
        case 0x54e84cu: goto label_54e84c;
        case 0x54e850u: goto label_54e850;
        case 0x54e854u: goto label_54e854;
        case 0x54e858u: goto label_54e858;
        case 0x54e85cu: goto label_54e85c;
        case 0x54e860u: goto label_54e860;
        case 0x54e864u: goto label_54e864;
        case 0x54e868u: goto label_54e868;
        case 0x54e86cu: goto label_54e86c;
        default: break;
    }

    ctx->pc = 0x54e4a0u;

label_54e4a0:
    // 0x54e4a0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x54e4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_54e4a4:
    // 0x54e4a4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54e4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54e4a8:
    // 0x54e4a8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x54e4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_54e4ac:
    // 0x54e4ac: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x54e4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_54e4b0:
    // 0x54e4b0: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x54e4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_54e4b4:
    // 0x54e4b4: 0x3c1e0067  lui         $fp, 0x67
    ctx->pc = 0x54e4b4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)103 << 16));
label_54e4b8:
    // 0x54e4b8: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x54e4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_54e4bc:
    // 0x54e4bc: 0x3c170063  lui         $s7, 0x63
    ctx->pc = 0x54e4bcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)99 << 16));
label_54e4c0:
    // 0x54e4c0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x54e4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_54e4c4:
    // 0x54e4c4: 0x27dee080  addiu       $fp, $fp, -0x1F80
    ctx->pc = 0x54e4c4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294959232));
label_54e4c8:
    // 0x54e4c8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x54e4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_54e4cc:
    // 0x54e4cc: 0x26f7d960  addiu       $s7, $s7, -0x26A0
    ctx->pc = 0x54e4ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294957408));
label_54e4d0:
    // 0x54e4d0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x54e4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_54e4d4:
    // 0x54e4d4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x54e4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_54e4d8:
    // 0x54e4d8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x54e4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_54e4dc:
    // 0x54e4dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x54e4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_54e4e0:
    // 0x54e4e0: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x54e4e0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_54e4e4:
    // 0x54e4e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x54e4e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_54e4e8:
    // 0x54e4e8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x54e4e8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_54e4ec:
    // 0x54e4ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x54e4ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54e4f0:
    // 0x54e4f0: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x54e4f0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_54e4f4:
    // 0x54e4f4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x54e4f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_54e4f8:
    // 0x54e4f8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x54e4f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_54e4fc:
    // 0x54e4fc: 0x9452db10  lhu         $s2, -0x24F0($v0)
    ctx->pc = 0x54e4fcu;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957840)));
label_54e500:
    // 0x54e500: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x54e500u;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
label_54e504:
    // 0x54e504: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54e504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54e508:
    // 0x54e508: 0x9451db12  lhu         $s1, -0x24EE($v0)
    ctx->pc = 0x54e508u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957842)));
label_54e50c:
    // 0x54e50c: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x54e50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_54e510:
    // 0x54e510: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x54e510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_54e514:
    // 0x54e514: 0xc0506ac  jal         func_141AB0
label_54e518:
    if (ctx->pc == 0x54E518u) {
        ctx->pc = 0x54E518u;
            // 0x54e518: 0x46006dc6  mov.s       $f23, $f13 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x54E51Cu;
        goto label_54e51c;
    }
    ctx->pc = 0x54E514u;
    SET_GPR_U32(ctx, 31, 0x54E51Cu);
    ctx->pc = 0x54E518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54E514u;
            // 0x54e518: 0x46006dc6  mov.s       $f23, $f13 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54E51Cu; }
        if (ctx->pc != 0x54E51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54E51Cu; }
        if (ctx->pc != 0x54E51Cu) { return; }
    }
    ctx->pc = 0x54E51Cu;
label_54e51c:
    // 0x54e51c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54e51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54e520:
    // 0x54e520: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x54e520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_54e524:
    // 0x54e524: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54e524u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54e528:
    // 0x54e528: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x54e528u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_54e52c:
    // 0x54e52c: 0x320f809  jalr        $t9
label_54e530:
    if (ctx->pc == 0x54E530u) {
        ctx->pc = 0x54E530u;
            // 0x54e530: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x54E534u;
        goto label_54e534;
    }
    ctx->pc = 0x54E52Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54E534u);
        ctx->pc = 0x54E530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54E52Cu;
            // 0x54e530: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54E534u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54E534u; }
            if (ctx->pc != 0x54E534u) { return; }
        }
        }
    }
    ctx->pc = 0x54E534u;
label_54e534:
    // 0x54e534: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x54e534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_54e538:
    // 0x54e538: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x54e538u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_54e53c:
    // 0x54e53c: 0x2442de80  addiu       $v0, $v0, -0x2180
    ctx->pc = 0x54e53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958720));
label_54e540:
    // 0x54e540: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x54e540u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54e544:
    // 0x54e544: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x54e544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_54e548:
    // 0x54e548: 0x86e4002c  lh          $a0, 0x2C($s7)
    ctx->pc = 0x54e548u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 44)));
label_54e54c:
    // 0x54e54c: 0x2682000a  addiu       $v0, $s4, 0xA
    ctx->pc = 0x54e54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 10));
label_54e550:
    // 0x54e550: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x54e550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_54e554:
    // 0x54e554: 0x86e3002e  lh          $v1, 0x2E($s7)
    ctx->pc = 0x54e554u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 46)));
label_54e558:
    // 0x54e558: 0x3c22821  addu        $a1, $fp, $v0
    ctx->pc = 0x54e558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_54e55c:
    // 0x54e55c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x54e55cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54e560:
    // 0x54e560: 0x86e20032  lh          $v0, 0x32($s7)
    ctx->pc = 0x54e560u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 50)));
label_54e564:
    // 0x54e564: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54e564u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54e568:
    // 0x54e568: 0x541018  mult        $v0, $v0, $s4
    ctx->pc = 0x54e568u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_54e56c:
    // 0x54e56c: 0x4600c300  add.s       $f12, $f24, $f0
    ctx->pc = 0x54e56cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
label_54e570:
    // 0x54e570: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54e570u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54e574:
    // 0x54e574: 0x0  nop
    ctx->pc = 0x54e574u;
    // NOP
label_54e578:
    // 0x54e578: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54e578u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54e57c:
    // 0x54e57c: 0x4600b840  add.s       $f1, $f23, $f0
    ctx->pc = 0x54e57cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_54e580:
    // 0x54e580: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x54e580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54e584:
    // 0x54e584: 0x0  nop
    ctx->pc = 0x54e584u;
    // NOP
label_54e588:
    // 0x54e588: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54e588u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54e58c:
    // 0x54e58c: 0x46000d40  add.s       $f21, $f1, $f0
    ctx->pc = 0x54e58cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_54e590:
    // 0x54e590: 0xc4b4000c  lwc1        $f20, 0xC($a1)
    ctx->pc = 0x54e590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_54e594:
    // 0x54e594: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_54e598:
    if (ctx->pc == 0x54E598u) {
        ctx->pc = 0x54E598u;
            // 0x54e598: 0xc4a10008  lwc1        $f1, 0x8($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x54E59Cu;
        goto label_54e59c;
    }
    ctx->pc = 0x54E594u;
    {
        const bool branch_taken_0x54e594 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x54E598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54E594u;
            // 0x54e598: 0xc4a10008  lwc1        $f1, 0x8($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54e594) {
            ctx->pc = 0x54E5A8u;
            goto label_54e5a8;
        }
    }
    ctx->pc = 0x54E59Cu;
label_54e59c:
    // 0x54e59c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x54e59cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54e5a0:
    // 0x54e5a0: 0x10000008  b           . + 4 + (0x8 << 2)
label_54e5a4:
    if (ctx->pc == 0x54E5A4u) {
        ctx->pc = 0x54E5A4u;
            // 0x54e5a4: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54E5A8u;
        goto label_54e5a8;
    }
    ctx->pc = 0x54E5A0u;
    {
        const bool branch_taken_0x54e5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54E5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54E5A0u;
            // 0x54e5a4: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54e5a0) {
            ctx->pc = 0x54E5C4u;
            goto label_54e5c4;
        }
    }
    ctx->pc = 0x54E5A8u;
label_54e5a8:
    // 0x54e5a8: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x54e5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_54e5ac:
    // 0x54e5ac: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x54e5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_54e5b0:
    // 0x54e5b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54e5b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54e5b4:
    // 0x54e5b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54e5b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54e5b8:
    // 0x54e5b8: 0x0  nop
    ctx->pc = 0x54e5b8u;
    // NOP
label_54e5bc:
    // 0x54e5bc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54e5bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54e5c0:
    // 0x54e5c0: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54e5c0u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54e5c4:
    // 0x54e5c4: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_54e5c8:
    if (ctx->pc == 0x54E5C8u) {
        ctx->pc = 0x54E5C8u;
            // 0x54e5c8: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x54E5CCu;
        goto label_54e5cc;
    }
    ctx->pc = 0x54E5C4u;
    {
        const bool branch_taken_0x54e5c4 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x54e5c4) {
            ctx->pc = 0x54E5C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54E5C4u;
            // 0x54e5c8: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54E5D8u;
            goto label_54e5d8;
        }
    }
    ctx->pc = 0x54E5CCu;
label_54e5cc:
    // 0x54e5cc: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54e5ccu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54e5d0:
    // 0x54e5d0: 0x10000007  b           . + 4 + (0x7 << 2)
label_54e5d4:
    if (ctx->pc == 0x54E5D4u) {
        ctx->pc = 0x54E5D4u;
            // 0x54e5d4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54E5D8u;
        goto label_54e5d8;
    }
    ctx->pc = 0x54E5D0u;
    {
        const bool branch_taken_0x54e5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54E5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54E5D0u;
            // 0x54e5d4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54e5d0) {
            ctx->pc = 0x54E5F0u;
            goto label_54e5f0;
        }
    }
    ctx->pc = 0x54E5D8u;
label_54e5d8:
    // 0x54e5d8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54e5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54e5dc:
    // 0x54e5dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54e5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54e5e0:
    // 0x54e5e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54e5e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54e5e4:
    // 0x54e5e4: 0x0  nop
    ctx->pc = 0x54e5e4u;
    // NOP
label_54e5e8:
    // 0x54e5e8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54e5e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54e5ec:
    // 0x54e5ec: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54e5ecu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54e5f0:
    // 0x54e5f0: 0x46016380  add.s       $f14, $f12, $f1
    ctx->pc = 0x54e5f0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
label_54e5f4:
    // 0x54e5f4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54e5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54e5f8:
    // 0x54e5f8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54e5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54e5fc:
    // 0x54e5fc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x54e5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_54e600:
    // 0x54e600: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54e600u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54e604:
    // 0x54e604: 0x4614abc0  add.s       $f15, $f21, $f20
    ctx->pc = 0x54e604u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
label_54e608:
    // 0x54e608: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54e608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54e60c:
    // 0x54e60c: 0xc0bc284  jal         func_2F0A10
label_54e610:
    if (ctx->pc == 0x54E610u) {
        ctx->pc = 0x54E610u;
            // 0x54e610: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x54E614u;
        goto label_54e614;
    }
    ctx->pc = 0x54E60Cu;
    SET_GPR_U32(ctx, 31, 0x54E614u);
    ctx->pc = 0x54E610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54E60Cu;
            // 0x54e610: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54E614u; }
        if (ctx->pc != 0x54E614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54E614u; }
        if (ctx->pc != 0x54E614u) { return; }
    }
    ctx->pc = 0x54E614u;
label_54e614:
    // 0x54e614: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x54e614u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54e618:
    // 0x54e618: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x54e618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_54e61c:
    // 0x54e61c: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x54e61cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_54e620:
    // 0x54e620: 0x27d602f0  addiu       $s6, $fp, 0x2F0
    ctx->pc = 0x54e620u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 752));
label_54e624:
    // 0x54e624: 0xc7c002fc  lwc1        $f0, 0x2FC($fp)
    ctx->pc = 0x54e624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_54e628:
    // 0x54e628: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x54e628u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54e62c:
    // 0x54e62c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x54e62cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_54e630:
    // 0x54e630: 0x0  nop
    ctx->pc = 0x54e630u;
    // NOP
label_54e634:
    // 0x54e634: 0x4614105c  madd.s      $f1, $f2, $f20
    ctx->pc = 0x54e634u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[20]));
label_54e638:
    // 0x54e638: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x54e638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_54e63c:
    // 0x54e63c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x54e63cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_54e640:
    // 0x54e640: 0x34557fff  ori         $s5, $v0, 0x7FFF
    ctx->pc = 0x54e640u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_54e644:
    // 0x54e644: 0x46000d80  add.s       $f22, $f1, $f0
    ctx->pc = 0x54e644u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_54e648:
    // 0x54e648: 0x46000d41  sub.s       $f21, $f1, $f0
    ctx->pc = 0x54e648u;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_54e64c:
    // 0x54e64c: 0xc7d402f8  lwc1        $f20, 0x2F8($fp)
    ctx->pc = 0x54e64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_54e650:
    // 0x54e650: 0x86e40030  lh          $a0, 0x30($s7)
    ctx->pc = 0x54e650u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 48)));
label_54e654:
    // 0x54e654: 0x86e30034  lh          $v1, 0x34($s7)
    ctx->pc = 0x54e654u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 52)));
label_54e658:
    // 0x54e658: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x54e658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54e65c:
    // 0x54e65c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x54e65cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54e660:
    // 0x54e660: 0x0  nop
    ctx->pc = 0x54e660u;
    // NOP
label_54e664:
    // 0x54e664: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54e664u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54e668:
    // 0x54e668: 0x731818  mult        $v1, $v1, $s3
    ctx->pc = 0x54e668u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_54e66c:
    // 0x54e66c: 0x4600c040  add.s       $f1, $f24, $f0
    ctx->pc = 0x54e66cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
label_54e670:
    // 0x54e670: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54e670u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54e674:
    // 0x54e674: 0x0  nop
    ctx->pc = 0x54e674u;
    // NOP
label_54e678:
    // 0x54e678: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54e678u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54e67c:
    // 0x54e67c: 0x12820030  beq         $s4, $v0, . + 4 + (0x30 << 2)
label_54e680:
    if (ctx->pc == 0x54E680u) {
        ctx->pc = 0x54E680u;
            // 0x54e680: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x54E684u;
        goto label_54e684;
    }
    ctx->pc = 0x54E67Cu;
    {
        const bool branch_taken_0x54e67c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x54E680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54E67Cu;
            // 0x54e680: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54e67c) {
            ctx->pc = 0x54E740u;
            goto label_54e740;
        }
    }
    ctx->pc = 0x54E684u;
label_54e684:
    // 0x54e684: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x54e684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_54e688:
    // 0x54e688: 0x12820021  beq         $s4, $v0, . + 4 + (0x21 << 2)
label_54e68c:
    if (ctx->pc == 0x54E68Cu) {
        ctx->pc = 0x54E690u;
        goto label_54e690;
    }
    ctx->pc = 0x54E688u;
    {
        const bool branch_taken_0x54e688 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x54e688) {
            ctx->pc = 0x54E710u;
            goto label_54e710;
        }
    }
    ctx->pc = 0x54E690u;
label_54e690:
    // 0x54e690: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x54e690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54e694:
    // 0x54e694: 0x12820012  beq         $s4, $v0, . + 4 + (0x12 << 2)
label_54e698:
    if (ctx->pc == 0x54E698u) {
        ctx->pc = 0x54E69Cu;
        goto label_54e69c;
    }
    ctx->pc = 0x54E694u;
    {
        const bool branch_taken_0x54e694 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x54e694) {
            ctx->pc = 0x54E6E0u;
            goto label_54e6e0;
        }
    }
    ctx->pc = 0x54E69Cu;
label_54e69c:
    // 0x54e69c: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_54e6a0:
    if (ctx->pc == 0x54E6A0u) {
        ctx->pc = 0x54E6A4u;
        goto label_54e6a4;
    }
    ctx->pc = 0x54E69Cu;
    {
        const bool branch_taken_0x54e69c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x54e69c) {
            ctx->pc = 0x54E6B0u;
            goto label_54e6b0;
        }
    }
    ctx->pc = 0x54E6A4u;
label_54e6a4:
    // 0x54e6a4: 0x10000030  b           . + 4 + (0x30 << 2)
label_54e6a8:
    if (ctx->pc == 0x54E6A8u) {
        ctx->pc = 0x54E6ACu;
        goto label_54e6ac;
    }
    ctx->pc = 0x54E6A4u;
    {
        const bool branch_taken_0x54e6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54e6a4) {
            ctx->pc = 0x54E768u;
            goto label_54e768;
        }
    }
    ctx->pc = 0x54E6ACu;
label_54e6ac:
    // 0x54e6ac: 0x0  nop
    ctx->pc = 0x54e6acu;
    // NOP
label_54e6b0:
    // 0x54e6b0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x54e6b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_54e6b4:
    // 0x54e6b4: 0x262082a  slt         $at, $s3, $v0
    ctx->pc = 0x54e6b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_54e6b8:
    // 0x54e6b8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_54e6bc:
    if (ctx->pc == 0x54E6BCu) {
        ctx->pc = 0x54E6C0u;
        goto label_54e6c0;
    }
    ctx->pc = 0x54E6B8u;
    {
        const bool branch_taken_0x54e6b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x54e6b8) {
            ctx->pc = 0x54E6D0u;
            goto label_54e6d0;
        }
    }
    ctx->pc = 0x54E6C0u;
label_54e6c0:
    // 0x54e6c0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x54e6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_54e6c4:
    // 0x54e6c4: 0x10000028  b           . + 4 + (0x28 << 2)
label_54e6c8:
    if (ctx->pc == 0x54E6C8u) {
        ctx->pc = 0x54E6C8u;
            // 0x54e6c8: 0x345500ff  ori         $s5, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->pc = 0x54E6CCu;
        goto label_54e6cc;
    }
    ctx->pc = 0x54E6C4u;
    {
        const bool branch_taken_0x54e6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54E6C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54E6C4u;
            // 0x54e6c8: 0x345500ff  ori         $s5, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54e6c4) {
            ctx->pc = 0x54E768u;
            goto label_54e768;
        }
    }
    ctx->pc = 0x54E6CCu;
label_54e6cc:
    // 0x54e6cc: 0x0  nop
    ctx->pc = 0x54e6ccu;
    // NOP
label_54e6d0:
    // 0x54e6d0: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x54e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_54e6d4:
    // 0x54e6d4: 0x10000024  b           . + 4 + (0x24 << 2)
label_54e6d8:
    if (ctx->pc == 0x54E6D8u) {
        ctx->pc = 0x54E6D8u;
            // 0x54e6d8: 0x34557fff  ori         $s5, $v0, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
        ctx->pc = 0x54E6DCu;
        goto label_54e6dc;
    }
    ctx->pc = 0x54E6D4u;
    {
        const bool branch_taken_0x54e6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54E6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54E6D4u;
            // 0x54e6d8: 0x34557fff  ori         $s5, $v0, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54e6d4) {
            ctx->pc = 0x54E768u;
            goto label_54e768;
        }
    }
    ctx->pc = 0x54E6DCu;
label_54e6dc:
    // 0x54e6dc: 0x0  nop
    ctx->pc = 0x54e6dcu;
    // NOP
label_54e6e0:
    // 0x54e6e0: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x54e6e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_54e6e4:
    // 0x54e6e4: 0x262082a  slt         $at, $s3, $v0
    ctx->pc = 0x54e6e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_54e6e8:
    // 0x54e6e8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_54e6ec:
    if (ctx->pc == 0x54E6ECu) {
        ctx->pc = 0x54E6F0u;
        goto label_54e6f0;
    }
    ctx->pc = 0x54E6E8u;
    {
        const bool branch_taken_0x54e6e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x54e6e8) {
            ctx->pc = 0x54E700u;
            goto label_54e700;
        }
    }
    ctx->pc = 0x54E6F0u;
label_54e6f0:
    // 0x54e6f0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x54e6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_54e6f4:
    // 0x54e6f4: 0x1000001c  b           . + 4 + (0x1C << 2)
label_54e6f8:
    if (ctx->pc == 0x54E6F8u) {
        ctx->pc = 0x54E6F8u;
            // 0x54e6f8: 0x345500ff  ori         $s5, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->pc = 0x54E6FCu;
        goto label_54e6fc;
    }
    ctx->pc = 0x54E6F4u;
    {
        const bool branch_taken_0x54e6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54E6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54E6F4u;
            // 0x54e6f8: 0x345500ff  ori         $s5, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54e6f4) {
            ctx->pc = 0x54E768u;
            goto label_54e768;
        }
    }
    ctx->pc = 0x54E6FCu;
label_54e6fc:
    // 0x54e6fc: 0x0  nop
    ctx->pc = 0x54e6fcu;
    // NOP
label_54e700:
    // 0x54e700: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x54e700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_54e704:
    // 0x54e704: 0x10000018  b           . + 4 + (0x18 << 2)
label_54e708:
    if (ctx->pc == 0x54E708u) {
        ctx->pc = 0x54E708u;
            // 0x54e708: 0x34557fff  ori         $s5, $v0, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
        ctx->pc = 0x54E70Cu;
        goto label_54e70c;
    }
    ctx->pc = 0x54E704u;
    {
        const bool branch_taken_0x54e704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54E708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54E704u;
            // 0x54e708: 0x34557fff  ori         $s5, $v0, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54e704) {
            ctx->pc = 0x54E768u;
            goto label_54e768;
        }
    }
    ctx->pc = 0x54E70Cu;
label_54e70c:
    // 0x54e70c: 0x0  nop
    ctx->pc = 0x54e70cu;
    // NOP
label_54e710:
    // 0x54e710: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x54e710u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_54e714:
    // 0x54e714: 0x262082a  slt         $at, $s3, $v0
    ctx->pc = 0x54e714u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_54e718:
    // 0x54e718: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_54e71c:
    if (ctx->pc == 0x54E71Cu) {
        ctx->pc = 0x54E720u;
        goto label_54e720;
    }
    ctx->pc = 0x54E718u;
    {
        const bool branch_taken_0x54e718 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x54e718) {
            ctx->pc = 0x54E730u;
            goto label_54e730;
        }
    }
    ctx->pc = 0x54E720u;
label_54e720:
    // 0x54e720: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x54e720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_54e724:
    // 0x54e724: 0x10000010  b           . + 4 + (0x10 << 2)
label_54e728:
    if (ctx->pc == 0x54E728u) {
        ctx->pc = 0x54E728u;
            // 0x54e728: 0x345500ff  ori         $s5, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->pc = 0x54E72Cu;
        goto label_54e72c;
    }
    ctx->pc = 0x54E724u;
    {
        const bool branch_taken_0x54e724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54E728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54E724u;
            // 0x54e728: 0x345500ff  ori         $s5, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54e724) {
            ctx->pc = 0x54E768u;
            goto label_54e768;
        }
    }
    ctx->pc = 0x54E72Cu;
label_54e72c:
    // 0x54e72c: 0x0  nop
    ctx->pc = 0x54e72cu;
    // NOP
label_54e730:
    // 0x54e730: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x54e730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_54e734:
    // 0x54e734: 0x1000000c  b           . + 4 + (0xC << 2)
label_54e738:
    if (ctx->pc == 0x54E738u) {
        ctx->pc = 0x54E738u;
            // 0x54e738: 0x34557fff  ori         $s5, $v0, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
        ctx->pc = 0x54E73Cu;
        goto label_54e73c;
    }
    ctx->pc = 0x54E734u;
    {
        const bool branch_taken_0x54e734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54E738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54E734u;
            // 0x54e738: 0x34557fff  ori         $s5, $v0, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54e734) {
            ctx->pc = 0x54E768u;
            goto label_54e768;
        }
    }
    ctx->pc = 0x54E73Cu;
label_54e73c:
    // 0x54e73c: 0x0  nop
    ctx->pc = 0x54e73cu;
    // NOP
label_54e740:
    // 0x54e740: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x54e740u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_54e744:
    // 0x54e744: 0x262082a  slt         $at, $s3, $v0
    ctx->pc = 0x54e744u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_54e748:
    // 0x54e748: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_54e74c:
    if (ctx->pc == 0x54E74Cu) {
        ctx->pc = 0x54E750u;
        goto label_54e750;
    }
    ctx->pc = 0x54E748u;
    {
        const bool branch_taken_0x54e748 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x54e748) {
            ctx->pc = 0x54E760u;
            goto label_54e760;
        }
    }
    ctx->pc = 0x54E750u;
label_54e750:
    // 0x54e750: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x54e750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_54e754:
    // 0x54e754: 0x10000004  b           . + 4 + (0x4 << 2)
label_54e758:
    if (ctx->pc == 0x54E758u) {
        ctx->pc = 0x54E758u;
            // 0x54e758: 0x345500ff  ori         $s5, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->pc = 0x54E75Cu;
        goto label_54e75c;
    }
    ctx->pc = 0x54E754u;
    {
        const bool branch_taken_0x54e754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54E758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54E754u;
            // 0x54e758: 0x345500ff  ori         $s5, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54e754) {
            ctx->pc = 0x54E768u;
            goto label_54e768;
        }
    }
    ctx->pc = 0x54E75Cu;
label_54e75c:
    // 0x54e75c: 0x0  nop
    ctx->pc = 0x54e75cu;
    // NOP
label_54e760:
    // 0x54e760: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x54e760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_54e764:
    // 0x54e764: 0x34557fff  ori         $s5, $v0, 0x7FFF
    ctx->pc = 0x54e764u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_54e768:
    // 0x54e768: 0x6420004  bltzl       $s2, . + 4 + (0x4 << 2)
label_54e76c:
    if (ctx->pc == 0x54E76Cu) {
        ctx->pc = 0x54E76Cu;
            // 0x54e76c: 0x121842  srl         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x54E770u;
        goto label_54e770;
    }
    ctx->pc = 0x54E768u;
    {
        const bool branch_taken_0x54e768 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x54e768) {
            ctx->pc = 0x54E76Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54E768u;
            // 0x54e76c: 0x121842  srl         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54E77Cu;
            goto label_54e77c;
        }
    }
    ctx->pc = 0x54E770u;
label_54e770:
    // 0x54e770: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x54e770u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54e774:
    // 0x54e774: 0x10000007  b           . + 4 + (0x7 << 2)
label_54e778:
    if (ctx->pc == 0x54E778u) {
        ctx->pc = 0x54E778u;
            // 0x54e778: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54E77Cu;
        goto label_54e77c;
    }
    ctx->pc = 0x54E774u;
    {
        const bool branch_taken_0x54e774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54E778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54E774u;
            // 0x54e778: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54e774) {
            ctx->pc = 0x54E794u;
            goto label_54e794;
        }
    }
    ctx->pc = 0x54E77Cu;
label_54e77c:
    // 0x54e77c: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x54e77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_54e780:
    // 0x54e780: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54e780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54e784:
    // 0x54e784: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54e784u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54e788:
    // 0x54e788: 0x0  nop
    ctx->pc = 0x54e788u;
    // NOP
label_54e78c:
    // 0x54e78c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54e78cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54e790:
    // 0x54e790: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54e790u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54e794:
    // 0x54e794: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_54e798:
    if (ctx->pc == 0x54E798u) {
        ctx->pc = 0x54E798u;
            // 0x54e798: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x54E79Cu;
        goto label_54e79c;
    }
    ctx->pc = 0x54E794u;
    {
        const bool branch_taken_0x54e794 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x54e794) {
            ctx->pc = 0x54E798u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54E794u;
            // 0x54e798: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54E7A8u;
            goto label_54e7a8;
        }
    }
    ctx->pc = 0x54E79Cu;
label_54e79c:
    // 0x54e79c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54e79cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54e7a0:
    // 0x54e7a0: 0x10000007  b           . + 4 + (0x7 << 2)
label_54e7a4:
    if (ctx->pc == 0x54E7A4u) {
        ctx->pc = 0x54E7A4u;
            // 0x54e7a4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54E7A8u;
        goto label_54e7a8;
    }
    ctx->pc = 0x54E7A0u;
    {
        const bool branch_taken_0x54e7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54E7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54E7A0u;
            // 0x54e7a4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54e7a0) {
            ctx->pc = 0x54E7C0u;
            goto label_54e7c0;
        }
    }
    ctx->pc = 0x54E7A8u;
label_54e7a8:
    // 0x54e7a8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54e7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54e7ac:
    // 0x54e7ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54e7acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54e7b0:
    // 0x54e7b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54e7b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54e7b4:
    // 0x54e7b4: 0x0  nop
    ctx->pc = 0x54e7b4u;
    // NOP
label_54e7b8:
    // 0x54e7b8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54e7b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54e7bc:
    // 0x54e7bc: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54e7bcu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54e7c0:
    // 0x54e7c0: 0x46146380  add.s       $f14, $f12, $f20
    ctx->pc = 0x54e7c0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
label_54e7c4:
    // 0x54e7c4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54e7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54e7c8:
    // 0x54e7c8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54e7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54e7cc:
    // 0x54e7cc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x54e7ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_54e7d0:
    // 0x54e7d0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x54e7d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_54e7d4:
    // 0x54e7d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54e7d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54e7d8:
    // 0x54e7d8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x54e7d8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_54e7dc:
    // 0x54e7dc: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54e7dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54e7e0:
    // 0x54e7e0: 0xc0bc284  jal         func_2F0A10
label_54e7e4:
    if (ctx->pc == 0x54E7E4u) {
        ctx->pc = 0x54E7E4u;
            // 0x54e7e4: 0x4600b3c6  mov.s       $f15, $f22 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x54E7E8u;
        goto label_54e7e8;
    }
    ctx->pc = 0x54E7E0u;
    SET_GPR_U32(ctx, 31, 0x54E7E8u);
    ctx->pc = 0x54E7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54E7E0u;
            // 0x54e7e4: 0x4600b3c6  mov.s       $f15, $f22 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54E7E8u; }
        if (ctx->pc != 0x54E7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54E7E8u; }
        if (ctx->pc != 0x54E7E8u) { return; }
    }
    ctx->pc = 0x54E7E8u;
label_54e7e8:
    // 0x54e7e8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x54e7e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_54e7ec:
    // 0x54e7ec: 0x2a620006  slti        $v0, $s3, 0x6
    ctx->pc = 0x54e7ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
label_54e7f0:
    // 0x54e7f0: 0x1440ff97  bnez        $v0, . + 4 + (-0x69 << 2)
label_54e7f4:
    if (ctx->pc == 0x54E7F4u) {
        ctx->pc = 0x54E7F8u;
        goto label_54e7f8;
    }
    ctx->pc = 0x54E7F0u;
    {
        const bool branch_taken_0x54e7f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x54e7f0) {
            ctx->pc = 0x54E650u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_54e650;
        }
    }
    ctx->pc = 0x54E7F8u;
label_54e7f8:
    // 0x54e7f8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x54e7f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_54e7fc:
    // 0x54e7fc: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x54e7fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
label_54e800:
    // 0x54e800: 0x5440ff52  bnel        $v0, $zero, . + 4 + (-0xAE << 2)
label_54e804:
    if (ctx->pc == 0x54E804u) {
        ctx->pc = 0x54E804u;
            // 0x54e804: 0x86e4002c  lh          $a0, 0x2C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 44)));
        ctx->pc = 0x54E808u;
        goto label_54e808;
    }
    ctx->pc = 0x54E800u;
    {
        const bool branch_taken_0x54e800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x54e800) {
            ctx->pc = 0x54E804u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54E800u;
            // 0x54e804: 0x86e4002c  lh          $a0, 0x2C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54E54Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_54e54c;
        }
    }
    ctx->pc = 0x54E808u;
label_54e808:
    // 0x54e808: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54e808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54e80c:
    // 0x54e80c: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x54e80cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_54e810:
    // 0x54e810: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54e810u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54e814:
    // 0x54e814: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x54e814u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_54e818:
    // 0x54e818: 0x320f809  jalr        $t9
label_54e81c:
    if (ctx->pc == 0x54E81Cu) {
        ctx->pc = 0x54E820u;
        goto label_54e820;
    }
    ctx->pc = 0x54E818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54E820u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54E820u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54E820u; }
            if (ctx->pc != 0x54E820u) { return; }
        }
        }
    }
    ctx->pc = 0x54E820u;
label_54e820:
    // 0x54e820: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x54e820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_54e824:
    // 0x54e824: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x54e824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_54e828:
    // 0x54e828: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x54e828u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_54e82c:
    // 0x54e82c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x54e82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_54e830:
    // 0x54e830: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x54e830u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_54e834:
    // 0x54e834: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x54e834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_54e838:
    // 0x54e838: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x54e838u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_54e83c:
    // 0x54e83c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x54e83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_54e840:
    // 0x54e840: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x54e840u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_54e844:
    // 0x54e844: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x54e844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_54e848:
    // 0x54e848: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x54e848u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_54e84c:
    // 0x54e84c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x54e84cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_54e850:
    // 0x54e850: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x54e850u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_54e854:
    // 0x54e854: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x54e854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_54e858:
    // 0x54e858: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x54e858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_54e85c:
    // 0x54e85c: 0x3e00008  jr          $ra
label_54e860:
    if (ctx->pc == 0x54E860u) {
        ctx->pc = 0x54E860u;
            // 0x54e860: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x54E864u;
        goto label_54e864;
    }
    ctx->pc = 0x54E85Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x54E860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54E85Cu;
            // 0x54e860: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x54E864u;
label_54e864:
    // 0x54e864: 0x0  nop
    ctx->pc = 0x54e864u;
    // NOP
label_54e868:
    // 0x54e868: 0x0  nop
    ctx->pc = 0x54e868u;
    // NOP
label_54e86c:
    // 0x54e86c: 0x0  nop
    ctx->pc = 0x54e86cu;
    // NOP
}
