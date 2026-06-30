#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003AD5B0
// Address: 0x3ad5b0 - 0x3ad950
void sub_003AD5B0_0x3ad5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AD5B0_0x3ad5b0");
#endif

    switch (ctx->pc) {
        case 0x3ad5b0u: goto label_3ad5b0;
        case 0x3ad5b4u: goto label_3ad5b4;
        case 0x3ad5b8u: goto label_3ad5b8;
        case 0x3ad5bcu: goto label_3ad5bc;
        case 0x3ad5c0u: goto label_3ad5c0;
        case 0x3ad5c4u: goto label_3ad5c4;
        case 0x3ad5c8u: goto label_3ad5c8;
        case 0x3ad5ccu: goto label_3ad5cc;
        case 0x3ad5d0u: goto label_3ad5d0;
        case 0x3ad5d4u: goto label_3ad5d4;
        case 0x3ad5d8u: goto label_3ad5d8;
        case 0x3ad5dcu: goto label_3ad5dc;
        case 0x3ad5e0u: goto label_3ad5e0;
        case 0x3ad5e4u: goto label_3ad5e4;
        case 0x3ad5e8u: goto label_3ad5e8;
        case 0x3ad5ecu: goto label_3ad5ec;
        case 0x3ad5f0u: goto label_3ad5f0;
        case 0x3ad5f4u: goto label_3ad5f4;
        case 0x3ad5f8u: goto label_3ad5f8;
        case 0x3ad5fcu: goto label_3ad5fc;
        case 0x3ad600u: goto label_3ad600;
        case 0x3ad604u: goto label_3ad604;
        case 0x3ad608u: goto label_3ad608;
        case 0x3ad60cu: goto label_3ad60c;
        case 0x3ad610u: goto label_3ad610;
        case 0x3ad614u: goto label_3ad614;
        case 0x3ad618u: goto label_3ad618;
        case 0x3ad61cu: goto label_3ad61c;
        case 0x3ad620u: goto label_3ad620;
        case 0x3ad624u: goto label_3ad624;
        case 0x3ad628u: goto label_3ad628;
        case 0x3ad62cu: goto label_3ad62c;
        case 0x3ad630u: goto label_3ad630;
        case 0x3ad634u: goto label_3ad634;
        case 0x3ad638u: goto label_3ad638;
        case 0x3ad63cu: goto label_3ad63c;
        case 0x3ad640u: goto label_3ad640;
        case 0x3ad644u: goto label_3ad644;
        case 0x3ad648u: goto label_3ad648;
        case 0x3ad64cu: goto label_3ad64c;
        case 0x3ad650u: goto label_3ad650;
        case 0x3ad654u: goto label_3ad654;
        case 0x3ad658u: goto label_3ad658;
        case 0x3ad65cu: goto label_3ad65c;
        case 0x3ad660u: goto label_3ad660;
        case 0x3ad664u: goto label_3ad664;
        case 0x3ad668u: goto label_3ad668;
        case 0x3ad66cu: goto label_3ad66c;
        case 0x3ad670u: goto label_3ad670;
        case 0x3ad674u: goto label_3ad674;
        case 0x3ad678u: goto label_3ad678;
        case 0x3ad67cu: goto label_3ad67c;
        case 0x3ad680u: goto label_3ad680;
        case 0x3ad684u: goto label_3ad684;
        case 0x3ad688u: goto label_3ad688;
        case 0x3ad68cu: goto label_3ad68c;
        case 0x3ad690u: goto label_3ad690;
        case 0x3ad694u: goto label_3ad694;
        case 0x3ad698u: goto label_3ad698;
        case 0x3ad69cu: goto label_3ad69c;
        case 0x3ad6a0u: goto label_3ad6a0;
        case 0x3ad6a4u: goto label_3ad6a4;
        case 0x3ad6a8u: goto label_3ad6a8;
        case 0x3ad6acu: goto label_3ad6ac;
        case 0x3ad6b0u: goto label_3ad6b0;
        case 0x3ad6b4u: goto label_3ad6b4;
        case 0x3ad6b8u: goto label_3ad6b8;
        case 0x3ad6bcu: goto label_3ad6bc;
        case 0x3ad6c0u: goto label_3ad6c0;
        case 0x3ad6c4u: goto label_3ad6c4;
        case 0x3ad6c8u: goto label_3ad6c8;
        case 0x3ad6ccu: goto label_3ad6cc;
        case 0x3ad6d0u: goto label_3ad6d0;
        case 0x3ad6d4u: goto label_3ad6d4;
        case 0x3ad6d8u: goto label_3ad6d8;
        case 0x3ad6dcu: goto label_3ad6dc;
        case 0x3ad6e0u: goto label_3ad6e0;
        case 0x3ad6e4u: goto label_3ad6e4;
        case 0x3ad6e8u: goto label_3ad6e8;
        case 0x3ad6ecu: goto label_3ad6ec;
        case 0x3ad6f0u: goto label_3ad6f0;
        case 0x3ad6f4u: goto label_3ad6f4;
        case 0x3ad6f8u: goto label_3ad6f8;
        case 0x3ad6fcu: goto label_3ad6fc;
        case 0x3ad700u: goto label_3ad700;
        case 0x3ad704u: goto label_3ad704;
        case 0x3ad708u: goto label_3ad708;
        case 0x3ad70cu: goto label_3ad70c;
        case 0x3ad710u: goto label_3ad710;
        case 0x3ad714u: goto label_3ad714;
        case 0x3ad718u: goto label_3ad718;
        case 0x3ad71cu: goto label_3ad71c;
        case 0x3ad720u: goto label_3ad720;
        case 0x3ad724u: goto label_3ad724;
        case 0x3ad728u: goto label_3ad728;
        case 0x3ad72cu: goto label_3ad72c;
        case 0x3ad730u: goto label_3ad730;
        case 0x3ad734u: goto label_3ad734;
        case 0x3ad738u: goto label_3ad738;
        case 0x3ad73cu: goto label_3ad73c;
        case 0x3ad740u: goto label_3ad740;
        case 0x3ad744u: goto label_3ad744;
        case 0x3ad748u: goto label_3ad748;
        case 0x3ad74cu: goto label_3ad74c;
        case 0x3ad750u: goto label_3ad750;
        case 0x3ad754u: goto label_3ad754;
        case 0x3ad758u: goto label_3ad758;
        case 0x3ad75cu: goto label_3ad75c;
        case 0x3ad760u: goto label_3ad760;
        case 0x3ad764u: goto label_3ad764;
        case 0x3ad768u: goto label_3ad768;
        case 0x3ad76cu: goto label_3ad76c;
        case 0x3ad770u: goto label_3ad770;
        case 0x3ad774u: goto label_3ad774;
        case 0x3ad778u: goto label_3ad778;
        case 0x3ad77cu: goto label_3ad77c;
        case 0x3ad780u: goto label_3ad780;
        case 0x3ad784u: goto label_3ad784;
        case 0x3ad788u: goto label_3ad788;
        case 0x3ad78cu: goto label_3ad78c;
        case 0x3ad790u: goto label_3ad790;
        case 0x3ad794u: goto label_3ad794;
        case 0x3ad798u: goto label_3ad798;
        case 0x3ad79cu: goto label_3ad79c;
        case 0x3ad7a0u: goto label_3ad7a0;
        case 0x3ad7a4u: goto label_3ad7a4;
        case 0x3ad7a8u: goto label_3ad7a8;
        case 0x3ad7acu: goto label_3ad7ac;
        case 0x3ad7b0u: goto label_3ad7b0;
        case 0x3ad7b4u: goto label_3ad7b4;
        case 0x3ad7b8u: goto label_3ad7b8;
        case 0x3ad7bcu: goto label_3ad7bc;
        case 0x3ad7c0u: goto label_3ad7c0;
        case 0x3ad7c4u: goto label_3ad7c4;
        case 0x3ad7c8u: goto label_3ad7c8;
        case 0x3ad7ccu: goto label_3ad7cc;
        case 0x3ad7d0u: goto label_3ad7d0;
        case 0x3ad7d4u: goto label_3ad7d4;
        case 0x3ad7d8u: goto label_3ad7d8;
        case 0x3ad7dcu: goto label_3ad7dc;
        case 0x3ad7e0u: goto label_3ad7e0;
        case 0x3ad7e4u: goto label_3ad7e4;
        case 0x3ad7e8u: goto label_3ad7e8;
        case 0x3ad7ecu: goto label_3ad7ec;
        case 0x3ad7f0u: goto label_3ad7f0;
        case 0x3ad7f4u: goto label_3ad7f4;
        case 0x3ad7f8u: goto label_3ad7f8;
        case 0x3ad7fcu: goto label_3ad7fc;
        case 0x3ad800u: goto label_3ad800;
        case 0x3ad804u: goto label_3ad804;
        case 0x3ad808u: goto label_3ad808;
        case 0x3ad80cu: goto label_3ad80c;
        case 0x3ad810u: goto label_3ad810;
        case 0x3ad814u: goto label_3ad814;
        case 0x3ad818u: goto label_3ad818;
        case 0x3ad81cu: goto label_3ad81c;
        case 0x3ad820u: goto label_3ad820;
        case 0x3ad824u: goto label_3ad824;
        case 0x3ad828u: goto label_3ad828;
        case 0x3ad82cu: goto label_3ad82c;
        case 0x3ad830u: goto label_3ad830;
        case 0x3ad834u: goto label_3ad834;
        case 0x3ad838u: goto label_3ad838;
        case 0x3ad83cu: goto label_3ad83c;
        case 0x3ad840u: goto label_3ad840;
        case 0x3ad844u: goto label_3ad844;
        case 0x3ad848u: goto label_3ad848;
        case 0x3ad84cu: goto label_3ad84c;
        case 0x3ad850u: goto label_3ad850;
        case 0x3ad854u: goto label_3ad854;
        case 0x3ad858u: goto label_3ad858;
        case 0x3ad85cu: goto label_3ad85c;
        case 0x3ad860u: goto label_3ad860;
        case 0x3ad864u: goto label_3ad864;
        case 0x3ad868u: goto label_3ad868;
        case 0x3ad86cu: goto label_3ad86c;
        case 0x3ad870u: goto label_3ad870;
        case 0x3ad874u: goto label_3ad874;
        case 0x3ad878u: goto label_3ad878;
        case 0x3ad87cu: goto label_3ad87c;
        case 0x3ad880u: goto label_3ad880;
        case 0x3ad884u: goto label_3ad884;
        case 0x3ad888u: goto label_3ad888;
        case 0x3ad88cu: goto label_3ad88c;
        case 0x3ad890u: goto label_3ad890;
        case 0x3ad894u: goto label_3ad894;
        case 0x3ad898u: goto label_3ad898;
        case 0x3ad89cu: goto label_3ad89c;
        case 0x3ad8a0u: goto label_3ad8a0;
        case 0x3ad8a4u: goto label_3ad8a4;
        case 0x3ad8a8u: goto label_3ad8a8;
        case 0x3ad8acu: goto label_3ad8ac;
        case 0x3ad8b0u: goto label_3ad8b0;
        case 0x3ad8b4u: goto label_3ad8b4;
        case 0x3ad8b8u: goto label_3ad8b8;
        case 0x3ad8bcu: goto label_3ad8bc;
        case 0x3ad8c0u: goto label_3ad8c0;
        case 0x3ad8c4u: goto label_3ad8c4;
        case 0x3ad8c8u: goto label_3ad8c8;
        case 0x3ad8ccu: goto label_3ad8cc;
        case 0x3ad8d0u: goto label_3ad8d0;
        case 0x3ad8d4u: goto label_3ad8d4;
        case 0x3ad8d8u: goto label_3ad8d8;
        case 0x3ad8dcu: goto label_3ad8dc;
        case 0x3ad8e0u: goto label_3ad8e0;
        case 0x3ad8e4u: goto label_3ad8e4;
        case 0x3ad8e8u: goto label_3ad8e8;
        case 0x3ad8ecu: goto label_3ad8ec;
        case 0x3ad8f0u: goto label_3ad8f0;
        case 0x3ad8f4u: goto label_3ad8f4;
        case 0x3ad8f8u: goto label_3ad8f8;
        case 0x3ad8fcu: goto label_3ad8fc;
        case 0x3ad900u: goto label_3ad900;
        case 0x3ad904u: goto label_3ad904;
        case 0x3ad908u: goto label_3ad908;
        case 0x3ad90cu: goto label_3ad90c;
        case 0x3ad910u: goto label_3ad910;
        case 0x3ad914u: goto label_3ad914;
        case 0x3ad918u: goto label_3ad918;
        case 0x3ad91cu: goto label_3ad91c;
        case 0x3ad920u: goto label_3ad920;
        case 0x3ad924u: goto label_3ad924;
        case 0x3ad928u: goto label_3ad928;
        case 0x3ad92cu: goto label_3ad92c;
        case 0x3ad930u: goto label_3ad930;
        case 0x3ad934u: goto label_3ad934;
        case 0x3ad938u: goto label_3ad938;
        case 0x3ad93cu: goto label_3ad93c;
        case 0x3ad940u: goto label_3ad940;
        case 0x3ad944u: goto label_3ad944;
        case 0x3ad948u: goto label_3ad948;
        case 0x3ad94cu: goto label_3ad94c;
        default: break;
    }

    ctx->pc = 0x3ad5b0u;

label_3ad5b0:
    // 0x3ad5b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3ad5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3ad5b4:
    // 0x3ad5b4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3ad5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3ad5b8:
    // 0x3ad5b8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3ad5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3ad5bc:
    // 0x3ad5bc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3ad5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3ad5c0:
    // 0x3ad5c0: 0x64160001  daddiu      $s6, $zero, 0x1
    ctx->pc = 0x3ad5c0u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3ad5c4:
    // 0x3ad5c4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3ad5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3ad5c8:
    // 0x3ad5c8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3ad5c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ad5cc:
    // 0x3ad5cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3ad5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3ad5d0:
    // 0x3ad5d0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3ad5d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ad5d4:
    // 0x3ad5d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3ad5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3ad5d8:
    // 0x3ad5d8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3ad5d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3ad5dc:
    // 0x3ad5dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ad5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3ad5e0:
    // 0x3ad5e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ad5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3ad5e4:
    // 0x3ad5e4: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x3ad5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_3ad5e8:
    // 0x3ad5e8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3ad5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3ad5ec:
    // 0x3ad5ec: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x3ad5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3ad5f0:
    // 0x3ad5f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3ad5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3ad5f4:
    // 0x3ad5f4: 0x8c650d70  lw          $a1, 0xD70($v1)
    ctx->pc = 0x3ad5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3440)));
label_3ad5f8:
    // 0x3ad5f8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3ad5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_3ad5fc:
    // 0x3ad5fc: 0x90b00108  lbu         $s0, 0x108($a1)
    ctx->pc = 0x3ad5fcu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 264)));
label_3ad600:
    // 0x3ad600: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ad600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3ad604:
    // 0x3ad604: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3ad604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3ad608:
    // 0x3ad608: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3ad608u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3ad60c:
    // 0x3ad60c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3ad60cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3ad610:
    // 0x3ad610: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x3ad610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_3ad614:
    // 0x3ad614: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3ad618:
    if (ctx->pc == 0x3AD618u) {
        ctx->pc = 0x3AD618u;
            // 0x3ad618: 0x24720090  addiu       $s2, $v1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
        ctx->pc = 0x3AD61Cu;
        goto label_3ad61c;
    }
    ctx->pc = 0x3AD614u;
    {
        const bool branch_taken_0x3ad614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD614u;
            // 0x3ad618: 0x24720090  addiu       $s2, $v1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad614) {
            ctx->pc = 0x3AD630u;
            goto label_3ad630;
        }
    }
    ctx->pc = 0x3AD61Cu;
label_3ad61c:
    // 0x3ad61c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3ad61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3ad620:
    // 0x3ad620: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3ad620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3ad624:
    // 0x3ad624: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_3ad628:
    if (ctx->pc == 0x3AD628u) {
        ctx->pc = 0x3AD628u;
            // 0x3ad628: 0x8ea30000  lw          $v1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x3AD62Cu;
        goto label_3ad62c;
    }
    ctx->pc = 0x3AD624u;
    {
        const bool branch_taken_0x3ad624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ad624) {
            ctx->pc = 0x3AD628u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD624u;
            // 0x3ad628: 0x8ea30000  lw          $v1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AD634u;
            goto label_3ad634;
        }
    }
    ctx->pc = 0x3AD62Cu;
label_3ad62c:
    // 0x3ad62c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3ad62cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ad630:
    // 0x3ad630: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3ad630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3ad634:
    // 0x3ad634: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x3ad634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_3ad638:
    // 0x3ad638: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ad638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3ad63c:
    // 0x3ad63c: 0x904200e4  lbu         $v0, 0xE4($v0)
    ctx->pc = 0x3ad63cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 228)));
label_3ad640:
    // 0x3ad640: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3ad640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3ad644:
    // 0x3ad644: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_3ad648:
    if (ctx->pc == 0x3AD648u) {
        ctx->pc = 0x3AD648u;
            // 0x3ad648: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3AD64Cu;
        goto label_3ad64c;
    }
    ctx->pc = 0x3AD644u;
    {
        const bool branch_taken_0x3ad644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD644u;
            // 0x3ad648: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad644) {
            ctx->pc = 0x3AD650u;
            goto label_3ad650;
        }
    }
    ctx->pc = 0x3AD64Cu;
label_3ad64c:
    // 0x3ad64c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3ad64cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ad650:
    // 0x3ad650: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ad650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ad654:
    // 0x3ad654: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3ad654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3ad658:
    // 0x3ad658: 0xc0506ac  jal         func_141AB0
label_3ad65c:
    if (ctx->pc == 0x3AD65Cu) {
        ctx->pc = 0x3AD65Cu;
            // 0x3ad65c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3AD660u;
        goto label_3ad660;
    }
    ctx->pc = 0x3AD658u;
    SET_GPR_U32(ctx, 31, 0x3AD660u);
    ctx->pc = 0x3AD65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD658u;
            // 0x3ad65c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD660u; }
        if (ctx->pc != 0x3AD660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD660u; }
        if (ctx->pc != 0x3AD660u) { return; }
    }
    ctx->pc = 0x3AD660u;
label_3ad660:
    // 0x3ad660: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3ad660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3ad664:
    // 0x3ad664: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3ad664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3ad668:
    // 0x3ad668: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ad668u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ad66c:
    // 0x3ad66c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3ad66cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3ad670:
    // 0x3ad670: 0x320f809  jalr        $t9
label_3ad674:
    if (ctx->pc == 0x3AD674u) {
        ctx->pc = 0x3AD674u;
            // 0x3ad674: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3AD678u;
        goto label_3ad678;
    }
    ctx->pc = 0x3AD670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3AD678u);
        ctx->pc = 0x3AD674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD670u;
            // 0x3ad674: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3AD678u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3AD678u; }
            if (ctx->pc != 0x3AD678u) { return; }
        }
        }
    }
    ctx->pc = 0x3AD678u;
label_3ad678:
    // 0x3ad678: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x3ad678u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_3ad67c:
    // 0x3ad67c: 0x5a00000a  blezl       $s0, . + 4 + (0xA << 2)
label_3ad680:
    if (ctx->pc == 0x3AD680u) {
        ctx->pc = 0x3AD680u;
            // 0x3ad680: 0x32c300ff  andi        $v1, $s6, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3AD684u;
        goto label_3ad684;
    }
    ctx->pc = 0x3AD67Cu;
    {
        const bool branch_taken_0x3ad67c = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x3ad67c) {
            ctx->pc = 0x3AD680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD67Cu;
            // 0x3ad680: 0x32c300ff  andi        $v1, $s6, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AD6A8u;
            goto label_3ad6a8;
        }
    }
    ctx->pc = 0x3AD684u;
label_3ad684:
    // 0x3ad684: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x3ad684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3ad688:
    // 0x3ad688: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3ad688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ad68c:
    // 0x3ad68c: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x3ad68cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3ad690:
    // 0x3ad690: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3ad690u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ad694:
    // 0x3ad694: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x3ad694u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3ad698:
    // 0x3ad698: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3ad698u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ad69c:
    // 0x3ad69c: 0xc0eb9a0  jal         func_3AE680
label_3ad6a0:
    if (ctx->pc == 0x3AD6A0u) {
        ctx->pc = 0x3AD6A0u;
            // 0x3ad6a0: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3AD6A4u;
        goto label_3ad6a4;
    }
    ctx->pc = 0x3AD69Cu;
    SET_GPR_U32(ctx, 31, 0x3AD6A4u);
    ctx->pc = 0x3AD6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD69Cu;
            // 0x3ad6a0: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AE680u;
    if (runtime->hasFunction(0x3AE680u)) {
        auto targetFn = runtime->lookupFunction(0x3AE680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD6A4u; }
        if (ctx->pc != 0x3AD6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AE680_0x3ae680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD6A4u; }
        if (ctx->pc != 0x3AD6A4u) { return; }
    }
    ctx->pc = 0x3AD6A4u;
label_3ad6a4:
    // 0x3ad6a4: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x3ad6a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_3ad6a8:
    // 0x3ad6a8: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x3ad6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_3ad6ac:
    // 0x3ad6ac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3ad6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3ad6b0:
    // 0x3ad6b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3ad6b4:
    if (ctx->pc == 0x3AD6B4u) {
        ctx->pc = 0x3AD6B8u;
        goto label_3ad6b8;
    }
    ctx->pc = 0x3AD6B0u;
    {
        const bool branch_taken_0x3ad6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ad6b0) {
            ctx->pc = 0x3AD6C0u;
            goto label_3ad6c0;
        }
    }
    ctx->pc = 0x3AD6B8u;
label_3ad6b8:
    // 0x3ad6b8: 0xc110754  jal         func_441D50
label_3ad6bc:
    if (ctx->pc == 0x3AD6BCu) {
        ctx->pc = 0x3AD6BCu;
            // 0x3ad6bc: 0x8e440080  lw          $a0, 0x80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
        ctx->pc = 0x3AD6C0u;
        goto label_3ad6c0;
    }
    ctx->pc = 0x3AD6B8u;
    SET_GPR_U32(ctx, 31, 0x3AD6C0u);
    ctx->pc = 0x3AD6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD6B8u;
            // 0x3ad6bc: 0x8e440080  lw          $a0, 0x80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x441D50u;
    if (runtime->hasFunction(0x441D50u)) {
        auto targetFn = runtime->lookupFunction(0x441D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD6C0u; }
        if (ctx->pc != 0x3AD6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00441D50_0x441d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD6C0u; }
        if (ctx->pc != 0x3AD6C0u) { return; }
    }
    ctx->pc = 0x3AD6C0u;
label_3ad6c0:
    // 0x3ad6c0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3ad6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3ad6c4:
    // 0x3ad6c4: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3ad6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3ad6c8:
    // 0x3ad6c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ad6c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ad6cc:
    // 0x3ad6cc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3ad6ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3ad6d0:
    // 0x3ad6d0: 0x320f809  jalr        $t9
label_3ad6d4:
    if (ctx->pc == 0x3AD6D4u) {
        ctx->pc = 0x3AD6D8u;
        goto label_3ad6d8;
    }
    ctx->pc = 0x3AD6D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3AD6D8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3AD6D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3AD6D8u; }
            if (ctx->pc != 0x3AD6D8u) { return; }
        }
        }
    }
    ctx->pc = 0x3AD6D8u;
label_3ad6d8:
    // 0x3ad6d8: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_3ad6dc:
    if (ctx->pc == 0x3AD6DCu) {
        ctx->pc = 0x3AD6E0u;
        goto label_3ad6e0;
    }
    ctx->pc = 0x3AD6D8u;
    {
        const bool branch_taken_0x3ad6d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ad6d8) {
            ctx->pc = 0x3AD6FCu;
            goto label_3ad6fc;
        }
    }
    ctx->pc = 0x3AD6E0u;
label_3ad6e0:
    // 0x3ad6e0: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x3ad6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3ad6e4:
    // 0x3ad6e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3ad6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ad6e8:
    // 0x3ad6e8: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x3ad6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3ad6ec:
    // 0x3ad6ec: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3ad6ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ad6f0:
    // 0x3ad6f0: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x3ad6f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3ad6f4:
    // 0x3ad6f4: 0xc0eb8a4  jal         func_3AE290
label_3ad6f8:
    if (ctx->pc == 0x3AD6F8u) {
        ctx->pc = 0x3AD6F8u;
            // 0x3ad6f8: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3AD6FCu;
        goto label_3ad6fc;
    }
    ctx->pc = 0x3AD6F4u;
    SET_GPR_U32(ctx, 31, 0x3AD6FCu);
    ctx->pc = 0x3AD6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD6F4u;
            // 0x3ad6f8: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AE290u;
    if (runtime->hasFunction(0x3AE290u)) {
        auto targetFn = runtime->lookupFunction(0x3AE290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD6FCu; }
        if (ctx->pc != 0x3AD6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AE290_0x3ae290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD6FCu; }
        if (ctx->pc != 0x3AD6FCu) { return; }
    }
    ctx->pc = 0x3AD6FCu;
label_3ad6fc:
    // 0x3ad6fc: 0x5a00001d  blezl       $s0, . + 4 + (0x1D << 2)
label_3ad700:
    if (ctx->pc == 0x3AD700u) {
        ctx->pc = 0x3AD700u;
            // 0x3ad700: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x3AD704u;
        goto label_3ad704;
    }
    ctx->pc = 0x3AD6FCu;
    {
        const bool branch_taken_0x3ad6fc = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x3ad6fc) {
            ctx->pc = 0x3AD700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD6FCu;
            // 0x3ad700: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AD774u;
            goto label_3ad774;
        }
    }
    ctx->pc = 0x3AD704u;
label_3ad704:
    // 0x3ad704: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ad704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ad708:
    // 0x3ad708: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3ad708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3ad70c:
    // 0x3ad70c: 0xc0506ac  jal         func_141AB0
label_3ad710:
    if (ctx->pc == 0x3AD710u) {
        ctx->pc = 0x3AD710u;
            // 0x3ad710: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3AD714u;
        goto label_3ad714;
    }
    ctx->pc = 0x3AD70Cu;
    SET_GPR_U32(ctx, 31, 0x3AD714u);
    ctx->pc = 0x3AD710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD70Cu;
            // 0x3ad710: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD714u; }
        if (ctx->pc != 0x3AD714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD714u; }
        if (ctx->pc != 0x3AD714u) { return; }
    }
    ctx->pc = 0x3AD714u;
label_3ad714:
    // 0x3ad714: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3ad714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3ad718:
    // 0x3ad718: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3ad718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3ad71c:
    // 0x3ad71c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ad71cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ad720:
    // 0x3ad720: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3ad720u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3ad724:
    // 0x3ad724: 0x320f809  jalr        $t9
label_3ad728:
    if (ctx->pc == 0x3AD728u) {
        ctx->pc = 0x3AD728u;
            // 0x3ad728: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3AD72Cu;
        goto label_3ad72c;
    }
    ctx->pc = 0x3AD724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3AD72Cu);
        ctx->pc = 0x3AD728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD724u;
            // 0x3ad728: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3AD72Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3AD72Cu; }
            if (ctx->pc != 0x3AD72Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3AD72Cu;
label_3ad72c:
    // 0x3ad72c: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x3ad72cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3ad730:
    // 0x3ad730: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3ad730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ad734:
    // 0x3ad734: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x3ad734u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3ad738:
    // 0x3ad738: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3ad738u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ad73c:
    // 0x3ad73c: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x3ad73cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3ad740:
    // 0x3ad740: 0xc0ebadc  jal         func_3AEB70
label_3ad744:
    if (ctx->pc == 0x3AD744u) {
        ctx->pc = 0x3AD744u;
            // 0x3ad744: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3AD748u;
        goto label_3ad748;
    }
    ctx->pc = 0x3AD740u;
    SET_GPR_U32(ctx, 31, 0x3AD748u);
    ctx->pc = 0x3AD744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD740u;
            // 0x3ad744: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AEB70u;
    if (runtime->hasFunction(0x3AEB70u)) {
        auto targetFn = runtime->lookupFunction(0x3AEB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD748u; }
        if (ctx->pc != 0x3AD748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AEB70_0x3aeb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD748u; }
        if (ctx->pc != 0x3AD748u) { return; }
    }
    ctx->pc = 0x3AD748u;
label_3ad748:
    // 0x3ad748: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3ad748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3ad74c:
    // 0x3ad74c: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3ad74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3ad750:
    // 0x3ad750: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ad750u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ad754:
    // 0x3ad754: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3ad754u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3ad758:
    // 0x3ad758: 0x320f809  jalr        $t9
label_3ad75c:
    if (ctx->pc == 0x3AD75Cu) {
        ctx->pc = 0x3AD760u;
        goto label_3ad760;
    }
    ctx->pc = 0x3AD758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3AD760u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3AD760u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3AD760u; }
            if (ctx->pc != 0x3AD760u) { return; }
        }
        }
    }
    ctx->pc = 0x3AD760u;
label_3ad760:
    // 0x3ad760: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ad760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ad764:
    // 0x3ad764: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3ad764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3ad768:
    // 0x3ad768: 0xc0506ac  jal         func_141AB0
label_3ad76c:
    if (ctx->pc == 0x3AD76Cu) {
        ctx->pc = 0x3AD76Cu;
            // 0x3ad76c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3AD770u;
        goto label_3ad770;
    }
    ctx->pc = 0x3AD768u;
    SET_GPR_U32(ctx, 31, 0x3AD770u);
    ctx->pc = 0x3AD76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD768u;
            // 0x3ad76c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD770u; }
        if (ctx->pc != 0x3AD770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD770u; }
        if (ctx->pc != 0x3AD770u) { return; }
    }
    ctx->pc = 0x3AD770u;
label_3ad770:
    // 0x3ad770: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3ad770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3ad774:
    // 0x3ad774: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3ad774u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ad778:
    // 0x3ad778: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3ad778u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ad77c:
    // 0x3ad77c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3ad77cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ad780:
    // 0x3ad780: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3ad780u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ad784:
    // 0x3ad784: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ad784u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ad788:
    // 0x3ad788: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ad788u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ad78c:
    // 0x3ad78c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ad78cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ad790:
    // 0x3ad790: 0x3e00008  jr          $ra
label_3ad794:
    if (ctx->pc == 0x3AD794u) {
        ctx->pc = 0x3AD794u;
            // 0x3ad794: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3AD798u;
        goto label_3ad798;
    }
    ctx->pc = 0x3AD790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD790u;
            // 0x3ad794: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3AD798u;
label_3ad798:
    // 0x3ad798: 0x0  nop
    ctx->pc = 0x3ad798u;
    // NOP
label_3ad79c:
    // 0x3ad79c: 0x0  nop
    ctx->pc = 0x3ad79cu;
    // NOP
label_3ad7a0:
    // 0x3ad7a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3ad7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3ad7a4:
    // 0x3ad7a4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3ad7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3ad7a8:
    // 0x3ad7a8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3ad7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3ad7ac:
    // 0x3ad7ac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3ad7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3ad7b0:
    // 0x3ad7b0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3ad7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3ad7b4:
    // 0x3ad7b4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3ad7b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ad7b8:
    // 0x3ad7b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3ad7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3ad7bc:
    // 0x3ad7bc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3ad7bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ad7c0:
    // 0x3ad7c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3ad7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3ad7c4:
    // 0x3ad7c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ad7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3ad7c8:
    // 0x3ad7c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ad7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3ad7cc:
    // 0x3ad7cc: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3ad7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3ad7d0:
    // 0x3ad7d0: 0x8c63f528  lw          $v1, -0xAD8($v1)
    ctx->pc = 0x3ad7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964520)));
label_3ad7d4:
    // 0x3ad7d4: 0x8ca40da0  lw          $a0, 0xDA0($a1)
    ctx->pc = 0x3ad7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3488)));
label_3ad7d8:
    // 0x3ad7d8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3ad7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3ad7dc:
    // 0x3ad7dc: 0x14600053  bnez        $v1, . + 4 + (0x53 << 2)
label_3ad7e0:
    if (ctx->pc == 0x3AD7E0u) {
        ctx->pc = 0x3AD7E0u;
            // 0x3ad7e0: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3AD7E4u;
        goto label_3ad7e4;
    }
    ctx->pc = 0x3AD7DCu;
    {
        const bool branch_taken_0x3ad7dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AD7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD7DCu;
            // 0x3ad7e0: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad7dc) {
            ctx->pc = 0x3AD92Cu;
            goto label_3ad92c;
        }
    }
    ctx->pc = 0x3AD7E4u;
label_3ad7e4:
    // 0x3ad7e4: 0x8ca30d70  lw          $v1, 0xD70($a1)
    ctx->pc = 0x3ad7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3440)));
label_3ad7e8:
    // 0x3ad7e8: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x3ad7e8u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3ad7ec:
    // 0x3ad7ec: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x3ad7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_3ad7f0:
    // 0x3ad7f0: 0x8ea40018  lw          $a0, 0x18($s5)
    ctx->pc = 0x3ad7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_3ad7f4:
    // 0x3ad7f4: 0x90630108  lbu         $v1, 0x108($v1)
    ctx->pc = 0x3ad7f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 264)));
label_3ad7f8:
    // 0x3ad7f8: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x3ad7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_3ad7fc:
    // 0x3ad7fc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3ad7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3ad800:
    // 0x3ad800: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x3ad800u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_3ad804:
    // 0x3ad804: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x3ad804u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_3ad808:
    // 0x3ad808: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x3ad808u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3ad80c:
    // 0x3ad80c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x3ad80cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_3ad810:
    // 0x3ad810: 0x2a52821  addu        $a1, $s5, $a1
    ctx->pc = 0x3ad810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
label_3ad814:
    // 0x3ad814: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3ad818:
    if (ctx->pc == 0x3AD818u) {
        ctx->pc = 0x3AD818u;
            // 0x3ad818: 0x24b20090  addiu       $s2, $a1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
        ctx->pc = 0x3AD81Cu;
        goto label_3ad81c;
    }
    ctx->pc = 0x3AD814u;
    {
        const bool branch_taken_0x3ad814 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD814u;
            // 0x3ad818: 0x24b20090  addiu       $s2, $a1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad814) {
            ctx->pc = 0x3AD830u;
            goto label_3ad830;
        }
    }
    ctx->pc = 0x3AD81Cu;
label_3ad81c:
    // 0x3ad81c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3ad81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3ad820:
    // 0x3ad820: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x3ad820u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_3ad824:
    // 0x3ad824: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_3ad828:
    if (ctx->pc == 0x3AD828u) {
        ctx->pc = 0x3AD828u;
            // 0x3ad828: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x3AD82Cu;
        goto label_3ad82c;
    }
    ctx->pc = 0x3AD824u;
    {
        const bool branch_taken_0x3ad824 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ad824) {
            ctx->pc = 0x3AD828u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD824u;
            // 0x3ad828: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AD834u;
            goto label_3ad834;
        }
    }
    ctx->pc = 0x3AD82Cu;
label_3ad82c:
    // 0x3ad82c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3ad82cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ad830:
    // 0x3ad830: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x3ad830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3ad834:
    // 0x3ad834: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x3ad834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_3ad838:
    // 0x3ad838: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3ad838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3ad83c:
    // 0x3ad83c: 0x908400e4  lbu         $a0, 0xE4($a0)
    ctx->pc = 0x3ad83cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 228)));
label_3ad840:
    // 0x3ad840: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x3ad840u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_3ad844:
    // 0x3ad844: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_3ad848:
    if (ctx->pc == 0x3AD848u) {
        ctx->pc = 0x3AD848u;
            // 0x3ad848: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3AD84Cu;
        goto label_3ad84c;
    }
    ctx->pc = 0x3AD844u;
    {
        const bool branch_taken_0x3ad844 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD844u;
            // 0x3ad848: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad844) {
            ctx->pc = 0x3AD850u;
            goto label_3ad850;
        }
    }
    ctx->pc = 0x3AD84Cu;
label_3ad84c:
    // 0x3ad84c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ad84cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ad850:
    // 0x3ad850: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3ad850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3ad854:
    // 0x3ad854: 0x58600036  blezl       $v1, . + 4 + (0x36 << 2)
label_3ad858:
    if (ctx->pc == 0x3AD858u) {
        ctx->pc = 0x3AD858u;
            // 0x3ad858: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x3AD85Cu;
        goto label_3ad85c;
    }
    ctx->pc = 0x3AD854u;
    {
        const bool branch_taken_0x3ad854 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x3ad854) {
            ctx->pc = 0x3AD858u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD854u;
            // 0x3ad858: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AD930u;
            goto label_3ad930;
        }
    }
    ctx->pc = 0x3AD85Cu;
label_3ad85c:
    // 0x3ad85c: 0xc05068c  jal         func_141A30
label_3ad860:
    if (ctx->pc == 0x3AD860u) {
        ctx->pc = 0x3AD860u;
            // 0x3ad860: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3AD864u;
        goto label_3ad864;
    }
    ctx->pc = 0x3AD85Cu;
    SET_GPR_U32(ctx, 31, 0x3AD864u);
    ctx->pc = 0x3AD860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD85Cu;
            // 0x3ad860: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD864u; }
        if (ctx->pc != 0x3AD864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD864u; }
        if (ctx->pc != 0x3AD864u) { return; }
    }
    ctx->pc = 0x3AD864u;
label_3ad864:
    // 0x3ad864: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3ad864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3ad868:
    // 0x3ad868: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3ad868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3ad86c:
    // 0x3ad86c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ad86cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ad870:
    // 0x3ad870: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3ad870u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3ad874:
    // 0x3ad874: 0x320f809  jalr        $t9
label_3ad878:
    if (ctx->pc == 0x3AD878u) {
        ctx->pc = 0x3AD878u;
            // 0x3ad878: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3AD87Cu;
        goto label_3ad87c;
    }
    ctx->pc = 0x3AD874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3AD87Cu);
        ctx->pc = 0x3AD878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD874u;
            // 0x3ad878: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3AD87Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3AD87Cu; }
            if (ctx->pc != 0x3AD87Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3AD87Cu;
label_3ad87c:
    // 0x3ad87c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ad87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ad880:
    // 0x3ad880: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3ad880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3ad884:
    // 0x3ad884: 0x8c420960  lw          $v0, 0x960($v0)
    ctx->pc = 0x3ad884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2400)));
label_3ad888:
    // 0x3ad888: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3ad888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_3ad88c:
    // 0x3ad88c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_3ad890:
    if (ctx->pc == 0x3AD890u) {
        ctx->pc = 0x3AD890u;
            // 0x3ad890: 0x8e85000c  lw          $a1, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->pc = 0x3AD894u;
        goto label_3ad894;
    }
    ctx->pc = 0x3AD88Cu;
    {
        const bool branch_taken_0x3ad88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ad88c) {
            ctx->pc = 0x3AD890u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD88Cu;
            // 0x3ad890: 0x8e85000c  lw          $a1, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AD8B4u;
            goto label_3ad8b4;
        }
    }
    ctx->pc = 0x3AD894u;
label_3ad894:
    // 0x3ad894: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x3ad894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3ad898:
    // 0x3ad898: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3ad898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ad89c:
    // 0x3ad89c: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x3ad89cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3ad8a0:
    // 0x3ad8a0: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x3ad8a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3ad8a4:
    // 0x3ad8a4: 0x9249000c  lbu         $t1, 0xC($s2)
    ctx->pc = 0x3ad8a4u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
label_3ad8a8:
    // 0x3ad8a8: 0xc0eb844  jal         func_3AE110
label_3ad8ac:
    if (ctx->pc == 0x3AD8ACu) {
        ctx->pc = 0x3AD8ACu;
            // 0x3ad8ac: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3AD8B0u;
        goto label_3ad8b0;
    }
    ctx->pc = 0x3AD8A8u;
    SET_GPR_U32(ctx, 31, 0x3AD8B0u);
    ctx->pc = 0x3AD8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD8A8u;
            // 0x3ad8ac: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AE110u;
    if (runtime->hasFunction(0x3AE110u)) {
        auto targetFn = runtime->lookupFunction(0x3AE110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD8B0u; }
        if (ctx->pc != 0x3AD8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AE110_0x3ae110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD8B0u; }
        if (ctx->pc != 0x3AD8B0u) { return; }
    }
    ctx->pc = 0x3AD8B0u;
label_3ad8b0:
    // 0x3ad8b0: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x3ad8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3ad8b4:
    // 0x3ad8b4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3ad8b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ad8b8:
    // 0x3ad8b8: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x3ad8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3ad8bc:
    // 0x3ad8bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3ad8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ad8c0:
    // 0x3ad8c0: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x3ad8c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3ad8c4:
    // 0x3ad8c4: 0xc0eb6fc  jal         func_3ADBF0
label_3ad8c8:
    if (ctx->pc == 0x3AD8C8u) {
        ctx->pc = 0x3AD8C8u;
            // 0x3ad8c8: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3AD8CCu;
        goto label_3ad8cc;
    }
    ctx->pc = 0x3AD8C4u;
    SET_GPR_U32(ctx, 31, 0x3AD8CCu);
    ctx->pc = 0x3AD8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD8C4u;
            // 0x3ad8c8: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3ADBF0u;
    if (runtime->hasFunction(0x3ADBF0u)) {
        auto targetFn = runtime->lookupFunction(0x3ADBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD8CCu; }
        if (ctx->pc != 0x3AD8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003ADBF0_0x3adbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD8CCu; }
        if (ctx->pc != 0x3AD8CCu) { return; }
    }
    ctx->pc = 0x3AD8CCu;
label_3ad8cc:
    // 0x3ad8cc: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x3ad8ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_3ad8d0:
    // 0x3ad8d0: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x3ad8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_3ad8d4:
    // 0x3ad8d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3ad8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3ad8d8:
    // 0x3ad8d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3ad8dc:
    if (ctx->pc == 0x3AD8DCu) {
        ctx->pc = 0x3AD8E0u;
        goto label_3ad8e0;
    }
    ctx->pc = 0x3AD8D8u;
    {
        const bool branch_taken_0x3ad8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ad8d8) {
            ctx->pc = 0x3AD8E8u;
            goto label_3ad8e8;
        }
    }
    ctx->pc = 0x3AD8E0u;
label_3ad8e0:
    // 0x3ad8e0: 0xc110754  jal         func_441D50
label_3ad8e4:
    if (ctx->pc == 0x3AD8E4u) {
        ctx->pc = 0x3AD8E4u;
            // 0x3ad8e4: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
        ctx->pc = 0x3AD8E8u;
        goto label_3ad8e8;
    }
    ctx->pc = 0x3AD8E0u;
    SET_GPR_U32(ctx, 31, 0x3AD8E8u);
    ctx->pc = 0x3AD8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD8E0u;
            // 0x3ad8e4: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x441D50u;
    if (runtime->hasFunction(0x441D50u)) {
        auto targetFn = runtime->lookupFunction(0x441D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD8E8u; }
        if (ctx->pc != 0x3AD8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00441D50_0x441d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD8E8u; }
        if (ctx->pc != 0x3AD8E8u) { return; }
    }
    ctx->pc = 0x3AD8E8u;
label_3ad8e8:
    // 0x3ad8e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ad8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ad8ec:
    // 0x3ad8ec: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3ad8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3ad8f0:
    // 0x3ad8f0: 0x8c420960  lw          $v0, 0x960($v0)
    ctx->pc = 0x3ad8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2400)));
label_3ad8f4:
    // 0x3ad8f4: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x3ad8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_3ad8f8:
    // 0x3ad8f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3ad8fc:
    if (ctx->pc == 0x3AD8FCu) {
        ctx->pc = 0x3AD900u;
        goto label_3ad900;
    }
    ctx->pc = 0x3AD8F8u;
    {
        const bool branch_taken_0x3ad8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ad8f8) {
            ctx->pc = 0x3AD90Cu;
            goto label_3ad90c;
        }
    }
    ctx->pc = 0x3AD900u;
label_3ad900:
    // 0x3ad900: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3ad900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ad904:
    // 0x3ad904: 0xc0ebfac  jal         func_3AFEB0
label_3ad908:
    if (ctx->pc == 0x3AD908u) {
        ctx->pc = 0x3AD908u;
            // 0x3ad908: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3AD90Cu;
        goto label_3ad90c;
    }
    ctx->pc = 0x3AD904u;
    SET_GPR_U32(ctx, 31, 0x3AD90Cu);
    ctx->pc = 0x3AD908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD904u;
            // 0x3ad908: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AFEB0u;
    if (runtime->hasFunction(0x3AFEB0u)) {
        auto targetFn = runtime->lookupFunction(0x3AFEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD90Cu; }
        if (ctx->pc != 0x3AD90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AFEB0_0x3afeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD90Cu; }
        if (ctx->pc != 0x3AD90Cu) { return; }
    }
    ctx->pc = 0x3AD90Cu;
label_3ad90c:
    // 0x3ad90c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3ad90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3ad910:
    // 0x3ad910: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3ad910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3ad914:
    // 0x3ad914: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ad914u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ad918:
    // 0x3ad918: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3ad918u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3ad91c:
    // 0x3ad91c: 0x320f809  jalr        $t9
label_3ad920:
    if (ctx->pc == 0x3AD920u) {
        ctx->pc = 0x3AD924u;
        goto label_3ad924;
    }
    ctx->pc = 0x3AD91Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3AD924u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3AD924u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3AD924u; }
            if (ctx->pc != 0x3AD924u) { return; }
        }
        }
    }
    ctx->pc = 0x3AD924u;
label_3ad924:
    // 0x3ad924: 0xc05068c  jal         func_141A30
label_3ad928:
    if (ctx->pc == 0x3AD928u) {
        ctx->pc = 0x3AD928u;
            // 0x3ad928: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3AD92Cu;
        goto label_3ad92c;
    }
    ctx->pc = 0x3AD924u;
    SET_GPR_U32(ctx, 31, 0x3AD92Cu);
    ctx->pc = 0x3AD928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD924u;
            // 0x3ad928: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD92Cu; }
        if (ctx->pc != 0x3AD92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD92Cu; }
        if (ctx->pc != 0x3AD92Cu) { return; }
    }
    ctx->pc = 0x3AD92Cu;
label_3ad92c:
    // 0x3ad92c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3ad92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3ad930:
    // 0x3ad930: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3ad930u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ad934:
    // 0x3ad934: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3ad934u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ad938:
    // 0x3ad938: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3ad938u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ad93c:
    // 0x3ad93c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ad93cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ad940:
    // 0x3ad940: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ad940u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ad944:
    // 0x3ad944: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ad944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ad948:
    // 0x3ad948: 0x3e00008  jr          $ra
label_3ad94c:
    if (ctx->pc == 0x3AD94Cu) {
        ctx->pc = 0x3AD94Cu;
            // 0x3ad94c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3AD950u;
        goto label_fallthrough_0x3ad948;
    }
    ctx->pc = 0x3AD948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD948u;
            // 0x3ad94c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3ad948:
    ctx->pc = 0x3AD950u;
}
