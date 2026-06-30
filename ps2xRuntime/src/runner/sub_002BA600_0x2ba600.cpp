#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BA600
// Address: 0x2ba600 - 0x2baaa0
void sub_002BA600_0x2ba600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA600_0x2ba600");
#endif

    switch (ctx->pc) {
        case 0x2ba600u: goto label_2ba600;
        case 0x2ba604u: goto label_2ba604;
        case 0x2ba608u: goto label_2ba608;
        case 0x2ba60cu: goto label_2ba60c;
        case 0x2ba610u: goto label_2ba610;
        case 0x2ba614u: goto label_2ba614;
        case 0x2ba618u: goto label_2ba618;
        case 0x2ba61cu: goto label_2ba61c;
        case 0x2ba620u: goto label_2ba620;
        case 0x2ba624u: goto label_2ba624;
        case 0x2ba628u: goto label_2ba628;
        case 0x2ba62cu: goto label_2ba62c;
        case 0x2ba630u: goto label_2ba630;
        case 0x2ba634u: goto label_2ba634;
        case 0x2ba638u: goto label_2ba638;
        case 0x2ba63cu: goto label_2ba63c;
        case 0x2ba640u: goto label_2ba640;
        case 0x2ba644u: goto label_2ba644;
        case 0x2ba648u: goto label_2ba648;
        case 0x2ba64cu: goto label_2ba64c;
        case 0x2ba650u: goto label_2ba650;
        case 0x2ba654u: goto label_2ba654;
        case 0x2ba658u: goto label_2ba658;
        case 0x2ba65cu: goto label_2ba65c;
        case 0x2ba660u: goto label_2ba660;
        case 0x2ba664u: goto label_2ba664;
        case 0x2ba668u: goto label_2ba668;
        case 0x2ba66cu: goto label_2ba66c;
        case 0x2ba670u: goto label_2ba670;
        case 0x2ba674u: goto label_2ba674;
        case 0x2ba678u: goto label_2ba678;
        case 0x2ba67cu: goto label_2ba67c;
        case 0x2ba680u: goto label_2ba680;
        case 0x2ba684u: goto label_2ba684;
        case 0x2ba688u: goto label_2ba688;
        case 0x2ba68cu: goto label_2ba68c;
        case 0x2ba690u: goto label_2ba690;
        case 0x2ba694u: goto label_2ba694;
        case 0x2ba698u: goto label_2ba698;
        case 0x2ba69cu: goto label_2ba69c;
        case 0x2ba6a0u: goto label_2ba6a0;
        case 0x2ba6a4u: goto label_2ba6a4;
        case 0x2ba6a8u: goto label_2ba6a8;
        case 0x2ba6acu: goto label_2ba6ac;
        case 0x2ba6b0u: goto label_2ba6b0;
        case 0x2ba6b4u: goto label_2ba6b4;
        case 0x2ba6b8u: goto label_2ba6b8;
        case 0x2ba6bcu: goto label_2ba6bc;
        case 0x2ba6c0u: goto label_2ba6c0;
        case 0x2ba6c4u: goto label_2ba6c4;
        case 0x2ba6c8u: goto label_2ba6c8;
        case 0x2ba6ccu: goto label_2ba6cc;
        case 0x2ba6d0u: goto label_2ba6d0;
        case 0x2ba6d4u: goto label_2ba6d4;
        case 0x2ba6d8u: goto label_2ba6d8;
        case 0x2ba6dcu: goto label_2ba6dc;
        case 0x2ba6e0u: goto label_2ba6e0;
        case 0x2ba6e4u: goto label_2ba6e4;
        case 0x2ba6e8u: goto label_2ba6e8;
        case 0x2ba6ecu: goto label_2ba6ec;
        case 0x2ba6f0u: goto label_2ba6f0;
        case 0x2ba6f4u: goto label_2ba6f4;
        case 0x2ba6f8u: goto label_2ba6f8;
        case 0x2ba6fcu: goto label_2ba6fc;
        case 0x2ba700u: goto label_2ba700;
        case 0x2ba704u: goto label_2ba704;
        case 0x2ba708u: goto label_2ba708;
        case 0x2ba70cu: goto label_2ba70c;
        case 0x2ba710u: goto label_2ba710;
        case 0x2ba714u: goto label_2ba714;
        case 0x2ba718u: goto label_2ba718;
        case 0x2ba71cu: goto label_2ba71c;
        case 0x2ba720u: goto label_2ba720;
        case 0x2ba724u: goto label_2ba724;
        case 0x2ba728u: goto label_2ba728;
        case 0x2ba72cu: goto label_2ba72c;
        case 0x2ba730u: goto label_2ba730;
        case 0x2ba734u: goto label_2ba734;
        case 0x2ba738u: goto label_2ba738;
        case 0x2ba73cu: goto label_2ba73c;
        case 0x2ba740u: goto label_2ba740;
        case 0x2ba744u: goto label_2ba744;
        case 0x2ba748u: goto label_2ba748;
        case 0x2ba74cu: goto label_2ba74c;
        case 0x2ba750u: goto label_2ba750;
        case 0x2ba754u: goto label_2ba754;
        case 0x2ba758u: goto label_2ba758;
        case 0x2ba75cu: goto label_2ba75c;
        case 0x2ba760u: goto label_2ba760;
        case 0x2ba764u: goto label_2ba764;
        case 0x2ba768u: goto label_2ba768;
        case 0x2ba76cu: goto label_2ba76c;
        case 0x2ba770u: goto label_2ba770;
        case 0x2ba774u: goto label_2ba774;
        case 0x2ba778u: goto label_2ba778;
        case 0x2ba77cu: goto label_2ba77c;
        case 0x2ba780u: goto label_2ba780;
        case 0x2ba784u: goto label_2ba784;
        case 0x2ba788u: goto label_2ba788;
        case 0x2ba78cu: goto label_2ba78c;
        case 0x2ba790u: goto label_2ba790;
        case 0x2ba794u: goto label_2ba794;
        case 0x2ba798u: goto label_2ba798;
        case 0x2ba79cu: goto label_2ba79c;
        case 0x2ba7a0u: goto label_2ba7a0;
        case 0x2ba7a4u: goto label_2ba7a4;
        case 0x2ba7a8u: goto label_2ba7a8;
        case 0x2ba7acu: goto label_2ba7ac;
        case 0x2ba7b0u: goto label_2ba7b0;
        case 0x2ba7b4u: goto label_2ba7b4;
        case 0x2ba7b8u: goto label_2ba7b8;
        case 0x2ba7bcu: goto label_2ba7bc;
        case 0x2ba7c0u: goto label_2ba7c0;
        case 0x2ba7c4u: goto label_2ba7c4;
        case 0x2ba7c8u: goto label_2ba7c8;
        case 0x2ba7ccu: goto label_2ba7cc;
        case 0x2ba7d0u: goto label_2ba7d0;
        case 0x2ba7d4u: goto label_2ba7d4;
        case 0x2ba7d8u: goto label_2ba7d8;
        case 0x2ba7dcu: goto label_2ba7dc;
        case 0x2ba7e0u: goto label_2ba7e0;
        case 0x2ba7e4u: goto label_2ba7e4;
        case 0x2ba7e8u: goto label_2ba7e8;
        case 0x2ba7ecu: goto label_2ba7ec;
        case 0x2ba7f0u: goto label_2ba7f0;
        case 0x2ba7f4u: goto label_2ba7f4;
        case 0x2ba7f8u: goto label_2ba7f8;
        case 0x2ba7fcu: goto label_2ba7fc;
        case 0x2ba800u: goto label_2ba800;
        case 0x2ba804u: goto label_2ba804;
        case 0x2ba808u: goto label_2ba808;
        case 0x2ba80cu: goto label_2ba80c;
        case 0x2ba810u: goto label_2ba810;
        case 0x2ba814u: goto label_2ba814;
        case 0x2ba818u: goto label_2ba818;
        case 0x2ba81cu: goto label_2ba81c;
        case 0x2ba820u: goto label_2ba820;
        case 0x2ba824u: goto label_2ba824;
        case 0x2ba828u: goto label_2ba828;
        case 0x2ba82cu: goto label_2ba82c;
        case 0x2ba830u: goto label_2ba830;
        case 0x2ba834u: goto label_2ba834;
        case 0x2ba838u: goto label_2ba838;
        case 0x2ba83cu: goto label_2ba83c;
        case 0x2ba840u: goto label_2ba840;
        case 0x2ba844u: goto label_2ba844;
        case 0x2ba848u: goto label_2ba848;
        case 0x2ba84cu: goto label_2ba84c;
        case 0x2ba850u: goto label_2ba850;
        case 0x2ba854u: goto label_2ba854;
        case 0x2ba858u: goto label_2ba858;
        case 0x2ba85cu: goto label_2ba85c;
        case 0x2ba860u: goto label_2ba860;
        case 0x2ba864u: goto label_2ba864;
        case 0x2ba868u: goto label_2ba868;
        case 0x2ba86cu: goto label_2ba86c;
        case 0x2ba870u: goto label_2ba870;
        case 0x2ba874u: goto label_2ba874;
        case 0x2ba878u: goto label_2ba878;
        case 0x2ba87cu: goto label_2ba87c;
        case 0x2ba880u: goto label_2ba880;
        case 0x2ba884u: goto label_2ba884;
        case 0x2ba888u: goto label_2ba888;
        case 0x2ba88cu: goto label_2ba88c;
        case 0x2ba890u: goto label_2ba890;
        case 0x2ba894u: goto label_2ba894;
        case 0x2ba898u: goto label_2ba898;
        case 0x2ba89cu: goto label_2ba89c;
        case 0x2ba8a0u: goto label_2ba8a0;
        case 0x2ba8a4u: goto label_2ba8a4;
        case 0x2ba8a8u: goto label_2ba8a8;
        case 0x2ba8acu: goto label_2ba8ac;
        case 0x2ba8b0u: goto label_2ba8b0;
        case 0x2ba8b4u: goto label_2ba8b4;
        case 0x2ba8b8u: goto label_2ba8b8;
        case 0x2ba8bcu: goto label_2ba8bc;
        case 0x2ba8c0u: goto label_2ba8c0;
        case 0x2ba8c4u: goto label_2ba8c4;
        case 0x2ba8c8u: goto label_2ba8c8;
        case 0x2ba8ccu: goto label_2ba8cc;
        case 0x2ba8d0u: goto label_2ba8d0;
        case 0x2ba8d4u: goto label_2ba8d4;
        case 0x2ba8d8u: goto label_2ba8d8;
        case 0x2ba8dcu: goto label_2ba8dc;
        case 0x2ba8e0u: goto label_2ba8e0;
        case 0x2ba8e4u: goto label_2ba8e4;
        case 0x2ba8e8u: goto label_2ba8e8;
        case 0x2ba8ecu: goto label_2ba8ec;
        case 0x2ba8f0u: goto label_2ba8f0;
        case 0x2ba8f4u: goto label_2ba8f4;
        case 0x2ba8f8u: goto label_2ba8f8;
        case 0x2ba8fcu: goto label_2ba8fc;
        case 0x2ba900u: goto label_2ba900;
        case 0x2ba904u: goto label_2ba904;
        case 0x2ba908u: goto label_2ba908;
        case 0x2ba90cu: goto label_2ba90c;
        case 0x2ba910u: goto label_2ba910;
        case 0x2ba914u: goto label_2ba914;
        case 0x2ba918u: goto label_2ba918;
        case 0x2ba91cu: goto label_2ba91c;
        case 0x2ba920u: goto label_2ba920;
        case 0x2ba924u: goto label_2ba924;
        case 0x2ba928u: goto label_2ba928;
        case 0x2ba92cu: goto label_2ba92c;
        case 0x2ba930u: goto label_2ba930;
        case 0x2ba934u: goto label_2ba934;
        case 0x2ba938u: goto label_2ba938;
        case 0x2ba93cu: goto label_2ba93c;
        case 0x2ba940u: goto label_2ba940;
        case 0x2ba944u: goto label_2ba944;
        case 0x2ba948u: goto label_2ba948;
        case 0x2ba94cu: goto label_2ba94c;
        case 0x2ba950u: goto label_2ba950;
        case 0x2ba954u: goto label_2ba954;
        case 0x2ba958u: goto label_2ba958;
        case 0x2ba95cu: goto label_2ba95c;
        case 0x2ba960u: goto label_2ba960;
        case 0x2ba964u: goto label_2ba964;
        case 0x2ba968u: goto label_2ba968;
        case 0x2ba96cu: goto label_2ba96c;
        case 0x2ba970u: goto label_2ba970;
        case 0x2ba974u: goto label_2ba974;
        case 0x2ba978u: goto label_2ba978;
        case 0x2ba97cu: goto label_2ba97c;
        case 0x2ba980u: goto label_2ba980;
        case 0x2ba984u: goto label_2ba984;
        case 0x2ba988u: goto label_2ba988;
        case 0x2ba98cu: goto label_2ba98c;
        case 0x2ba990u: goto label_2ba990;
        case 0x2ba994u: goto label_2ba994;
        case 0x2ba998u: goto label_2ba998;
        case 0x2ba99cu: goto label_2ba99c;
        case 0x2ba9a0u: goto label_2ba9a0;
        case 0x2ba9a4u: goto label_2ba9a4;
        case 0x2ba9a8u: goto label_2ba9a8;
        case 0x2ba9acu: goto label_2ba9ac;
        case 0x2ba9b0u: goto label_2ba9b0;
        case 0x2ba9b4u: goto label_2ba9b4;
        case 0x2ba9b8u: goto label_2ba9b8;
        case 0x2ba9bcu: goto label_2ba9bc;
        case 0x2ba9c0u: goto label_2ba9c0;
        case 0x2ba9c4u: goto label_2ba9c4;
        case 0x2ba9c8u: goto label_2ba9c8;
        case 0x2ba9ccu: goto label_2ba9cc;
        case 0x2ba9d0u: goto label_2ba9d0;
        case 0x2ba9d4u: goto label_2ba9d4;
        case 0x2ba9d8u: goto label_2ba9d8;
        case 0x2ba9dcu: goto label_2ba9dc;
        case 0x2ba9e0u: goto label_2ba9e0;
        case 0x2ba9e4u: goto label_2ba9e4;
        case 0x2ba9e8u: goto label_2ba9e8;
        case 0x2ba9ecu: goto label_2ba9ec;
        case 0x2ba9f0u: goto label_2ba9f0;
        case 0x2ba9f4u: goto label_2ba9f4;
        case 0x2ba9f8u: goto label_2ba9f8;
        case 0x2ba9fcu: goto label_2ba9fc;
        case 0x2baa00u: goto label_2baa00;
        case 0x2baa04u: goto label_2baa04;
        case 0x2baa08u: goto label_2baa08;
        case 0x2baa0cu: goto label_2baa0c;
        case 0x2baa10u: goto label_2baa10;
        case 0x2baa14u: goto label_2baa14;
        case 0x2baa18u: goto label_2baa18;
        case 0x2baa1cu: goto label_2baa1c;
        case 0x2baa20u: goto label_2baa20;
        case 0x2baa24u: goto label_2baa24;
        case 0x2baa28u: goto label_2baa28;
        case 0x2baa2cu: goto label_2baa2c;
        case 0x2baa30u: goto label_2baa30;
        case 0x2baa34u: goto label_2baa34;
        case 0x2baa38u: goto label_2baa38;
        case 0x2baa3cu: goto label_2baa3c;
        case 0x2baa40u: goto label_2baa40;
        case 0x2baa44u: goto label_2baa44;
        case 0x2baa48u: goto label_2baa48;
        case 0x2baa4cu: goto label_2baa4c;
        case 0x2baa50u: goto label_2baa50;
        case 0x2baa54u: goto label_2baa54;
        case 0x2baa58u: goto label_2baa58;
        case 0x2baa5cu: goto label_2baa5c;
        case 0x2baa60u: goto label_2baa60;
        case 0x2baa64u: goto label_2baa64;
        case 0x2baa68u: goto label_2baa68;
        case 0x2baa6cu: goto label_2baa6c;
        case 0x2baa70u: goto label_2baa70;
        case 0x2baa74u: goto label_2baa74;
        case 0x2baa78u: goto label_2baa78;
        case 0x2baa7cu: goto label_2baa7c;
        case 0x2baa80u: goto label_2baa80;
        case 0x2baa84u: goto label_2baa84;
        case 0x2baa88u: goto label_2baa88;
        case 0x2baa8cu: goto label_2baa8c;
        case 0x2baa90u: goto label_2baa90;
        case 0x2baa94u: goto label_2baa94;
        case 0x2baa98u: goto label_2baa98;
        case 0x2baa9cu: goto label_2baa9c;
        default: break;
    }

    ctx->pc = 0x2ba600u;

label_2ba600:
    // 0x2ba600: 0x80788fc  j           func_1E23F0
label_2ba604:
    if (ctx->pc == 0x2BA604u) {
        ctx->pc = 0x2BA608u;
        goto label_2ba608;
    }
    ctx->pc = 0x2BA600u;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2BA608u;
label_2ba608:
    // 0x2ba608: 0x0  nop
    ctx->pc = 0x2ba608u;
    // NOP
label_2ba60c:
    // 0x2ba60c: 0x0  nop
    ctx->pc = 0x2ba60cu;
    // NOP
label_2ba610:
    // 0x2ba610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ba610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2ba614:
    // 0x2ba614: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ba614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2ba618:
    // 0x2ba618: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ba618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ba61c:
    // 0x2ba61c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ba61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ba620:
    // 0x2ba620: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ba620u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ba624:
    // 0x2ba624: 0x12200041  beqz        $s1, . + 4 + (0x41 << 2)
label_2ba628:
    if (ctx->pc == 0x2BA628u) {
        ctx->pc = 0x2BA628u;
            // 0x2ba628: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA62Cu;
        goto label_2ba62c;
    }
    ctx->pc = 0x2BA624u;
    {
        const bool branch_taken_0x2ba624 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA624u;
            // 0x2ba628: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba624) {
            ctx->pc = 0x2BA72Cu;
            goto label_2ba72c;
        }
    }
    ctx->pc = 0x2BA62Cu;
label_2ba62c:
    // 0x2ba62c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2ba62cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2ba630:
    // 0x2ba630: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2ba630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2ba634:
    // 0x2ba634: 0x24633c40  addiu       $v1, $v1, 0x3C40
    ctx->pc = 0x2ba634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15424));
label_2ba638:
    // 0x2ba638: 0x24423c80  addiu       $v0, $v0, 0x3C80
    ctx->pc = 0x2ba638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15488));
label_2ba63c:
    // 0x2ba63c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2ba63cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2ba640:
    // 0x2ba640: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x2ba640u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_2ba644:
    // 0x2ba644: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2ba644u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ba648:
    // 0x2ba648: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2ba648u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2ba64c:
    // 0x2ba64c: 0x320f809  jalr        $t9
label_2ba650:
    if (ctx->pc == 0x2BA650u) {
        ctx->pc = 0x2BA654u;
        goto label_2ba654;
    }
    ctx->pc = 0x2BA64Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BA654u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BA654u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BA654u; }
            if (ctx->pc != 0x2BA654u) { return; }
        }
        }
    }
    ctx->pc = 0x2BA654u;
label_2ba654:
    // 0x2ba654: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x2ba654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2ba658:
    // 0x2ba658: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_2ba65c:
    if (ctx->pc == 0x2BA65Cu) {
        ctx->pc = 0x2BA660u;
        goto label_2ba660;
    }
    ctx->pc = 0x2BA658u;
    {
        const bool branch_taken_0x2ba658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba658) {
            ctx->pc = 0x2BA694u;
            goto label_2ba694;
        }
    }
    ctx->pc = 0x2BA660u;
label_2ba660:
    // 0x2ba660: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ba660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2ba664:
    // 0x2ba664: 0x24422438  addiu       $v0, $v0, 0x2438
    ctx->pc = 0x2ba664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9272));
label_2ba668:
    // 0x2ba668: 0xc0b622c  jal         func_2D88B0
label_2ba66c:
    if (ctx->pc == 0x2BA66Cu) {
        ctx->pc = 0x2BA66Cu;
            // 0x2ba66c: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x2BA670u;
        goto label_2ba670;
    }
    ctx->pc = 0x2BA668u;
    SET_GPR_U32(ctx, 31, 0x2BA670u);
    ctx->pc = 0x2BA66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA668u;
            // 0x2ba66c: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D88B0u;
    if (runtime->hasFunction(0x2D88B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D88B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA670u; }
        if (ctx->pc != 0x2BA670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D88B0_0x2d88b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA670u; }
        if (ctx->pc != 0x2BA670u) { return; }
    }
    ctx->pc = 0x2BA670u;
label_2ba670:
    // 0x2ba670: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2ba670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2ba674:
    // 0x2ba674: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2ba678:
    if (ctx->pc == 0x2BA678u) {
        ctx->pc = 0x2BA67Cu;
        goto label_2ba67c;
    }
    ctx->pc = 0x2BA674u;
    {
        const bool branch_taken_0x2ba674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba674) {
            ctx->pc = 0x2BA694u;
            goto label_2ba694;
        }
    }
    ctx->pc = 0x2BA67Cu;
label_2ba67c:
    // 0x2ba67c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ba67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2ba680:
    // 0x2ba680: 0x24422428  addiu       $v0, $v0, 0x2428
    ctx->pc = 0x2ba680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9256));
label_2ba684:
    // 0x2ba684: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2ba684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2ba688:
    // 0x2ba688: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x2ba688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
label_2ba68c:
    // 0x2ba68c: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x2ba68cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
label_2ba690:
    // 0x2ba690: 0xae200070  sw          $zero, 0x70($s1)
    ctx->pc = 0x2ba690u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
label_2ba694:
    // 0x2ba694: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_2ba698:
    if (ctx->pc == 0x2BA698u) {
        ctx->pc = 0x2BA698u;
            // 0x2ba698: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2BA69Cu;
        goto label_2ba69c;
    }
    ctx->pc = 0x2BA694u;
    {
        const bool branch_taken_0x2ba694 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba694) {
            ctx->pc = 0x2BA698u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA694u;
            // 0x2ba698: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BA718u;
            goto label_2ba718;
        }
    }
    ctx->pc = 0x2BA69Cu;
label_2ba69c:
    // 0x2ba69c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ba69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2ba6a0:
    // 0x2ba6a0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ba6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2ba6a4:
    // 0x2ba6a4: 0x24422670  addiu       $v0, $v0, 0x2670
    ctx->pc = 0x2ba6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
label_2ba6a8:
    // 0x2ba6a8: 0x246326b0  addiu       $v1, $v1, 0x26B0
    ctx->pc = 0x2ba6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9904));
label_2ba6ac:
    // 0x2ba6ac: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2ba6acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2ba6b0:
    // 0x2ba6b0: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x2ba6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_2ba6b4:
    // 0x2ba6b4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2ba6b8:
    if (ctx->pc == 0x2BA6B8u) {
        ctx->pc = 0x2BA6B8u;
            // 0x2ba6b8: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x2BA6BCu;
        goto label_2ba6bc;
    }
    ctx->pc = 0x2BA6B4u;
    {
        const bool branch_taken_0x2ba6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA6B4u;
            // 0x2ba6b8: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba6b4) {
            ctx->pc = 0x2BA6F0u;
            goto label_2ba6f0;
        }
    }
    ctx->pc = 0x2BA6BCu;
label_2ba6bc:
    // 0x2ba6bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ba6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2ba6c0:
    // 0x2ba6c0: 0x24422660  addiu       $v0, $v0, 0x2660
    ctx->pc = 0x2ba6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
label_2ba6c4:
    // 0x2ba6c4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x2ba6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_2ba6c8:
    // 0x2ba6c8: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x2ba6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2ba6cc:
    // 0x2ba6cc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_2ba6d0:
    if (ctx->pc == 0x2BA6D0u) {
        ctx->pc = 0x2BA6D4u;
        goto label_2ba6d4;
    }
    ctx->pc = 0x2BA6CCu;
    {
        const bool branch_taken_0x2ba6cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba6cc) {
            ctx->pc = 0x2BA6F0u;
            goto label_2ba6f0;
        }
    }
    ctx->pc = 0x2BA6D4u;
label_2ba6d4:
    // 0x2ba6d4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ba6d8:
    if (ctx->pc == 0x2BA6D8u) {
        ctx->pc = 0x2BA6D8u;
            // 0x2ba6d8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x2BA6DCu;
        goto label_2ba6dc;
    }
    ctx->pc = 0x2BA6D4u;
    {
        const bool branch_taken_0x2ba6d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba6d4) {
            ctx->pc = 0x2BA6D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA6D4u;
            // 0x2ba6d8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BA6F0u;
            goto label_2ba6f0;
        }
    }
    ctx->pc = 0x2BA6DCu;
label_2ba6dc:
    // 0x2ba6dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2ba6dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ba6e0:
    // 0x2ba6e0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2ba6e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2ba6e4:
    // 0x2ba6e4: 0x320f809  jalr        $t9
label_2ba6e8:
    if (ctx->pc == 0x2BA6E8u) {
        ctx->pc = 0x2BA6E8u;
            // 0x2ba6e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BA6ECu;
        goto label_2ba6ec;
    }
    ctx->pc = 0x2BA6E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BA6ECu);
        ctx->pc = 0x2BA6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA6E4u;
            // 0x2ba6e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BA6ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BA6ECu; }
            if (ctx->pc != 0x2BA6ECu) { return; }
        }
        }
    }
    ctx->pc = 0x2BA6ECu;
label_2ba6ec:
    // 0x2ba6ec: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x2ba6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_2ba6f0:
    // 0x2ba6f0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2ba6f4:
    if (ctx->pc == 0x2BA6F4u) {
        ctx->pc = 0x2BA6F8u;
        goto label_2ba6f8;
    }
    ctx->pc = 0x2BA6F0u;
    {
        const bool branch_taken_0x2ba6f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba6f0) {
            ctx->pc = 0x2BA714u;
            goto label_2ba714;
        }
    }
    ctx->pc = 0x2BA6F8u;
label_2ba6f8:
    // 0x2ba6f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ba6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2ba6fc:
    // 0x2ba6fc: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x2ba6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_2ba700:
    // 0x2ba700: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2ba704:
    if (ctx->pc == 0x2BA704u) {
        ctx->pc = 0x2BA704u;
            // 0x2ba704: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2BA708u;
        goto label_2ba708;
    }
    ctx->pc = 0x2BA700u;
    {
        const bool branch_taken_0x2ba700 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA700u;
            // 0x2ba704: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba700) {
            ctx->pc = 0x2BA714u;
            goto label_2ba714;
        }
    }
    ctx->pc = 0x2BA708u;
label_2ba708:
    // 0x2ba708: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ba708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2ba70c:
    // 0x2ba70c: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2ba70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2ba710:
    // 0x2ba710: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2ba710u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2ba714:
    // 0x2ba714: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2ba714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2ba718:
    // 0x2ba718: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ba718u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2ba71c:
    // 0x2ba71c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2ba720:
    if (ctx->pc == 0x2BA720u) {
        ctx->pc = 0x2BA720u;
            // 0x2ba720: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA724u;
        goto label_2ba724;
    }
    ctx->pc = 0x2BA71Cu;
    {
        const bool branch_taken_0x2ba71c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ba71c) {
            ctx->pc = 0x2BA720u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA71Cu;
            // 0x2ba720: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BA730u;
            goto label_2ba730;
        }
    }
    ctx->pc = 0x2BA724u;
label_2ba724:
    // 0x2ba724: 0xc0400a8  jal         func_1002A0
label_2ba728:
    if (ctx->pc == 0x2BA728u) {
        ctx->pc = 0x2BA728u;
            // 0x2ba728: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA72Cu;
        goto label_2ba72c;
    }
    ctx->pc = 0x2BA724u;
    SET_GPR_U32(ctx, 31, 0x2BA72Cu);
    ctx->pc = 0x2BA728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA724u;
            // 0x2ba728: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA72Cu; }
        if (ctx->pc != 0x2BA72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA72Cu; }
        if (ctx->pc != 0x2BA72Cu) { return; }
    }
    ctx->pc = 0x2BA72Cu;
label_2ba72c:
    // 0x2ba72c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ba72cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ba730:
    // 0x2ba730: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ba730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ba734:
    // 0x2ba734: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ba734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ba738:
    // 0x2ba738: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ba738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ba73c:
    // 0x2ba73c: 0x3e00008  jr          $ra
label_2ba740:
    if (ctx->pc == 0x2BA740u) {
        ctx->pc = 0x2BA740u;
            // 0x2ba740: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2BA744u;
        goto label_2ba744;
    }
    ctx->pc = 0x2BA73Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA73Cu;
            // 0x2ba740: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BA744u;
label_2ba744:
    // 0x2ba744: 0x0  nop
    ctx->pc = 0x2ba744u;
    // NOP
label_2ba748:
    // 0x2ba748: 0x0  nop
    ctx->pc = 0x2ba748u;
    // NOP
label_2ba74c:
    // 0x2ba74c: 0x0  nop
    ctx->pc = 0x2ba74cu;
    // NOP
label_2ba750:
    // 0x2ba750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ba750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2ba754:
    // 0x2ba754: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ba754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2ba758:
    // 0x2ba758: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ba758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2ba75c:
    // 0x2ba75c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ba75cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ba760:
    // 0x2ba760: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ba760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ba764:
    // 0x2ba764: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2ba764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2ba768:
    // 0x2ba768: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ba768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2ba76c:
    // 0x2ba76c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2ba76cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2ba770:
    // 0x2ba770: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x2ba770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
label_2ba774:
    // 0x2ba774: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ba774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ba778:
    // 0x2ba778: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2ba778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2ba77c:
    // 0x2ba77c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ba77cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ba780:
    // 0x2ba780: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2ba780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_2ba784:
    // 0x2ba784: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2ba784u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2ba788:
    // 0x2ba788: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2ba788u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_2ba78c:
    // 0x2ba78c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2ba78cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2ba790:
    // 0x2ba790: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x2ba790u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
label_2ba794:
    // 0x2ba794: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x2ba794u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
label_2ba798:
    // 0x2ba798: 0xc04cbd8  jal         func_132F60
label_2ba79c:
    if (ctx->pc == 0x2BA79Cu) {
        ctx->pc = 0x2BA79Cu;
            // 0x2ba79c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x2BA7A0u;
        goto label_2ba7a0;
    }
    ctx->pc = 0x2BA798u;
    SET_GPR_U32(ctx, 31, 0x2BA7A0u);
    ctx->pc = 0x2BA79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA798u;
            // 0x2ba79c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA7A0u; }
        if (ctx->pc != 0x2BA7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA7A0u; }
        if (ctx->pc != 0x2BA7A0u) { return; }
    }
    ctx->pc = 0x2BA7A0u;
label_2ba7a0:
    // 0x2ba7a0: 0xc04c968  jal         func_1325A0
label_2ba7a4:
    if (ctx->pc == 0x2BA7A4u) {
        ctx->pc = 0x2BA7A4u;
            // 0x2ba7a4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x2BA7A8u;
        goto label_2ba7a8;
    }
    ctx->pc = 0x2BA7A0u;
    SET_GPR_U32(ctx, 31, 0x2BA7A8u);
    ctx->pc = 0x2BA7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA7A0u;
            // 0x2ba7a4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA7A8u; }
        if (ctx->pc != 0x2BA7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA7A8u; }
        if (ctx->pc != 0x2BA7A8u) { return; }
    }
    ctx->pc = 0x2BA7A8u;
label_2ba7a8:
    // 0x2ba7a8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ba7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2ba7ac:
    // 0x2ba7ac: 0x3c0c0064  lui         $t4, 0x64
    ctx->pc = 0x2ba7acu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)100 << 16));
label_2ba7b0:
    // 0x2ba7b0: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x2ba7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_2ba7b4:
    // 0x2ba7b4: 0x3c0b006a  lui         $t3, 0x6A
    ctx->pc = 0x2ba7b4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)106 << 16));
label_2ba7b8:
    // 0x2ba7b8: 0x3c0a006a  lui         $t2, 0x6A
    ctx->pc = 0x2ba7b8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)106 << 16));
label_2ba7bc:
    // 0x2ba7bc: 0x3c09006a  lui         $t1, 0x6A
    ctx->pc = 0x2ba7bcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)106 << 16));
label_2ba7c0:
    // 0x2ba7c0: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x2ba7c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
label_2ba7c4:
    // 0x2ba7c4: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x2ba7c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
label_2ba7c8:
    // 0x2ba7c8: 0x8c4d0788  lw          $t5, 0x788($v0)
    ctx->pc = 0x2ba7c8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
label_2ba7cc:
    // 0x2ba7cc: 0x258cc560  addiu       $t4, $t4, -0x3AA0
    ctx->pc = 0x2ba7ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294952288));
label_2ba7d0:
    // 0x2ba7d0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ba7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2ba7d4:
    // 0x2ba7d4: 0x256b2660  addiu       $t3, $t3, 0x2660
    ctx->pc = 0x2ba7d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 9824));
label_2ba7d8:
    // 0x2ba7d8: 0x254a2670  addiu       $t2, $t2, 0x2670
    ctx->pc = 0x2ba7d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 9840));
label_2ba7dc:
    // 0x2ba7dc: 0x252926b0  addiu       $t1, $t1, 0x26B0
    ctx->pc = 0x2ba7dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 9904));
label_2ba7e0:
    // 0x2ba7e0: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x2ba7e0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
label_2ba7e4:
    // 0x2ba7e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ba7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2ba7e8:
    // 0x2ba7e8: 0x918c0000  lbu         $t4, 0x0($t4)
    ctx->pc = 0x2ba7e8u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
label_2ba7ec:
    // 0x2ba7ec: 0x25083c40  addiu       $t0, $t0, 0x3C40
    ctx->pc = 0x2ba7ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15424));
label_2ba7f0:
    // 0x2ba7f0: 0x24e73c80  addiu       $a3, $a3, 0x3C80
    ctx->pc = 0x2ba7f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15488));
label_2ba7f4:
    // 0x2ba7f4: 0x24632428  addiu       $v1, $v1, 0x2428
    ctx->pc = 0x2ba7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9256));
label_2ba7f8:
    // 0x2ba7f8: 0x24422438  addiu       $v0, $v0, 0x2438
    ctx->pc = 0x2ba7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9272));
label_2ba7fc:
    // 0x2ba7fc: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2ba7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_2ba800:
    // 0x2ba800: 0xa20c004d  sb          $t4, 0x4D($s0)
    ctx->pc = 0x2ba800u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 12));
label_2ba804:
    // 0x2ba804: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ba804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ba808:
    // 0x2ba808: 0xae0b0054  sw          $t3, 0x54($s0)
    ctx->pc = 0x2ba808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 11));
label_2ba80c:
    // 0x2ba80c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2ba80cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2ba810:
    // 0x2ba810: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2ba810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_2ba814:
    // 0x2ba814: 0xae0a0000  sw          $t2, 0x0($s0)
    ctx->pc = 0x2ba814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
label_2ba818:
    // 0x2ba818: 0xae090054  sw          $t1, 0x54($s0)
    ctx->pc = 0x2ba818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 9));
label_2ba81c:
    // 0x2ba81c: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x2ba81cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
label_2ba820:
    // 0x2ba820: 0xae070054  sw          $a3, 0x54($s0)
    ctx->pc = 0x2ba820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 7));
label_2ba824:
    // 0x2ba824: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x2ba824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_2ba828:
    // 0x2ba828: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x2ba828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
label_2ba82c:
    // 0x2ba82c: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x2ba82cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
label_2ba830:
    // 0x2ba830: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x2ba830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
label_2ba834:
    // 0x2ba834: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x2ba834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_2ba838:
    // 0x2ba838: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2ba838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_2ba83c:
    // 0x2ba83c: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x2ba83cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
label_2ba840:
    // 0x2ba840: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x2ba840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
label_2ba844:
    // 0x2ba844: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x2ba844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
label_2ba848:
    // 0x2ba848: 0xc04a576  jal         func_1295D8
label_2ba84c:
    if (ctx->pc == 0x2BA84Cu) {
        ctx->pc = 0x2BA84Cu;
            // 0x2ba84c: 0xae000080  sw          $zero, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
        ctx->pc = 0x2BA850u;
        goto label_2ba850;
    }
    ctx->pc = 0x2BA848u;
    SET_GPR_U32(ctx, 31, 0x2BA850u);
    ctx->pc = 0x2BA84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA848u;
            // 0x2ba84c: 0xae000080  sw          $zero, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA850u; }
        if (ctx->pc != 0x2BA850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA850u; }
        if (ctx->pc != 0x2BA850u) { return; }
    }
    ctx->pc = 0x2BA850u;
label_2ba850:
    // 0x2ba850: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ba850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ba854:
    // 0x2ba854: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ba854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ba858:
    // 0x2ba858: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ba858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ba85c:
    // 0x2ba85c: 0x3e00008  jr          $ra
label_2ba860:
    if (ctx->pc == 0x2BA860u) {
        ctx->pc = 0x2BA860u;
            // 0x2ba860: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2BA864u;
        goto label_2ba864;
    }
    ctx->pc = 0x2BA85Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA85Cu;
            // 0x2ba860: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BA864u;
label_2ba864:
    // 0x2ba864: 0x0  nop
    ctx->pc = 0x2ba864u;
    // NOP
label_2ba868:
    // 0x2ba868: 0x0  nop
    ctx->pc = 0x2ba868u;
    // NOP
label_2ba86c:
    // 0x2ba86c: 0x0  nop
    ctx->pc = 0x2ba86cu;
    // NOP
label_2ba870:
    // 0x2ba870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ba870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2ba874:
    // 0x2ba874: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ba874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2ba878:
    // 0x2ba878: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ba878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ba87c:
    // 0x2ba87c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ba87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ba880:
    // 0x2ba880: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ba880u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ba884:
    // 0x2ba884: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_2ba888:
    if (ctx->pc == 0x2BA888u) {
        ctx->pc = 0x2BA888u;
            // 0x2ba888: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA88Cu;
        goto label_2ba88c;
    }
    ctx->pc = 0x2BA884u;
    {
        const bool branch_taken_0x2ba884 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA884u;
            // 0x2ba888: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba884) {
            ctx->pc = 0x2BA8D4u;
            goto label_2ba8d4;
        }
    }
    ctx->pc = 0x2BA88Cu;
label_2ba88c:
    // 0x2ba88c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ba88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2ba890:
    // 0x2ba890: 0x24422438  addiu       $v0, $v0, 0x2438
    ctx->pc = 0x2ba890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9272));
label_2ba894:
    // 0x2ba894: 0xc0b622c  jal         func_2D88B0
label_2ba898:
    if (ctx->pc == 0x2BA898u) {
        ctx->pc = 0x2BA898u;
            // 0x2ba898: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2BA89Cu;
        goto label_2ba89c;
    }
    ctx->pc = 0x2BA894u;
    SET_GPR_U32(ctx, 31, 0x2BA89Cu);
    ctx->pc = 0x2BA898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA894u;
            // 0x2ba898: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D88B0u;
    if (runtime->hasFunction(0x2D88B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D88B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA89Cu; }
        if (ctx->pc != 0x2BA89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D88B0_0x2d88b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA89Cu; }
        if (ctx->pc != 0x2BA89Cu) { return; }
    }
    ctx->pc = 0x2BA89Cu;
label_2ba89c:
    // 0x2ba89c: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
label_2ba8a0:
    if (ctx->pc == 0x2BA8A0u) {
        ctx->pc = 0x2BA8A0u;
            // 0x2ba8a0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2BA8A4u;
        goto label_2ba8a4;
    }
    ctx->pc = 0x2BA89Cu;
    {
        const bool branch_taken_0x2ba89c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba89c) {
            ctx->pc = 0x2BA8A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA89Cu;
            // 0x2ba8a0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BA8C0u;
            goto label_2ba8c0;
        }
    }
    ctx->pc = 0x2BA8A4u;
label_2ba8a4:
    // 0x2ba8a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ba8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2ba8a8:
    // 0x2ba8a8: 0x24422428  addiu       $v0, $v0, 0x2428
    ctx->pc = 0x2ba8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9256));
label_2ba8ac:
    // 0x2ba8ac: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2ba8acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2ba8b0:
    // 0x2ba8b0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2ba8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2ba8b4:
    // 0x2ba8b4: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2ba8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_2ba8b8:
    // 0x2ba8b8: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x2ba8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_2ba8bc:
    // 0x2ba8bc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2ba8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2ba8c0:
    // 0x2ba8c0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ba8c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2ba8c4:
    // 0x2ba8c4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2ba8c8:
    if (ctx->pc == 0x2BA8C8u) {
        ctx->pc = 0x2BA8C8u;
            // 0x2ba8c8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA8CCu;
        goto label_2ba8cc;
    }
    ctx->pc = 0x2BA8C4u;
    {
        const bool branch_taken_0x2ba8c4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ba8c4) {
            ctx->pc = 0x2BA8C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA8C4u;
            // 0x2ba8c8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BA8D8u;
            goto label_2ba8d8;
        }
    }
    ctx->pc = 0x2BA8CCu;
label_2ba8cc:
    // 0x2ba8cc: 0xc0400a8  jal         func_1002A0
label_2ba8d0:
    if (ctx->pc == 0x2BA8D0u) {
        ctx->pc = 0x2BA8D0u;
            // 0x2ba8d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA8D4u;
        goto label_2ba8d4;
    }
    ctx->pc = 0x2BA8CCu;
    SET_GPR_U32(ctx, 31, 0x2BA8D4u);
    ctx->pc = 0x2BA8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA8CCu;
            // 0x2ba8d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA8D4u; }
        if (ctx->pc != 0x2BA8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA8D4u; }
        if (ctx->pc != 0x2BA8D4u) { return; }
    }
    ctx->pc = 0x2BA8D4u;
label_2ba8d4:
    // 0x2ba8d4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ba8d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ba8d8:
    // 0x2ba8d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ba8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ba8dc:
    // 0x2ba8dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ba8dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ba8e0:
    // 0x2ba8e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ba8e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ba8e4:
    // 0x2ba8e4: 0x3e00008  jr          $ra
label_2ba8e8:
    if (ctx->pc == 0x2BA8E8u) {
        ctx->pc = 0x2BA8E8u;
            // 0x2ba8e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2BA8ECu;
        goto label_2ba8ec;
    }
    ctx->pc = 0x2BA8E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA8E4u;
            // 0x2ba8e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BA8ECu;
label_2ba8ec:
    // 0x2ba8ec: 0x0  nop
    ctx->pc = 0x2ba8ecu;
    // NOP
label_2ba8f0:
    // 0x2ba8f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ba8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2ba8f4:
    // 0x2ba8f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ba8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2ba8f8:
    // 0x2ba8f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ba8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ba8fc:
    // 0x2ba8fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ba8fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ba900:
    // 0x2ba900: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
label_2ba904:
    if (ctx->pc == 0x2BA904u) {
        ctx->pc = 0x2BA904u;
            // 0x2ba904: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA908u;
        goto label_2ba908;
    }
    ctx->pc = 0x2BA900u;
    {
        const bool branch_taken_0x2ba900 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba900) {
            ctx->pc = 0x2BA904u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA900u;
            // 0x2ba904: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BA938u;
            goto label_2ba938;
        }
    }
    ctx->pc = 0x2BA908u;
label_2ba908:
    // 0x2ba908: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ba908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2ba90c:
    // 0x2ba90c: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2ba90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_2ba910:
    // 0x2ba910: 0x24632428  addiu       $v1, $v1, 0x2428
    ctx->pc = 0x2ba910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9256));
label_2ba914:
    // 0x2ba914: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ba914u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2ba918:
    // 0x2ba918: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2ba918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2ba91c:
    // 0x2ba91c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2ba91cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2ba920:
    // 0x2ba920: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2ba920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_2ba924:
    // 0x2ba924: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_2ba928:
    if (ctx->pc == 0x2BA928u) {
        ctx->pc = 0x2BA928u;
            // 0x2ba928: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x2BA92Cu;
        goto label_2ba92c;
    }
    ctx->pc = 0x2BA924u;
    {
        const bool branch_taken_0x2ba924 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2BA928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA924u;
            // 0x2ba928: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba924) {
            ctx->pc = 0x2BA934u;
            goto label_2ba934;
        }
    }
    ctx->pc = 0x2BA92Cu;
label_2ba92c:
    // 0x2ba92c: 0xc0400a8  jal         func_1002A0
label_2ba930:
    if (ctx->pc == 0x2BA930u) {
        ctx->pc = 0x2BA934u;
        goto label_2ba934;
    }
    ctx->pc = 0x2BA92Cu;
    SET_GPR_U32(ctx, 31, 0x2BA934u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA934u; }
        if (ctx->pc != 0x2BA934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA934u; }
        if (ctx->pc != 0x2BA934u) { return; }
    }
    ctx->pc = 0x2BA934u;
label_2ba934:
    // 0x2ba934: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ba934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ba938:
    // 0x2ba938: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ba938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ba93c:
    // 0x2ba93c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ba93cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ba940:
    // 0x2ba940: 0x3e00008  jr          $ra
label_2ba944:
    if (ctx->pc == 0x2BA944u) {
        ctx->pc = 0x2BA944u;
            // 0x2ba944: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2BA948u;
        goto label_2ba948;
    }
    ctx->pc = 0x2BA940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA940u;
            // 0x2ba944: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BA948u;
label_2ba948:
    // 0x2ba948: 0x0  nop
    ctx->pc = 0x2ba948u;
    // NOP
label_2ba94c:
    // 0x2ba94c: 0x0  nop
    ctx->pc = 0x2ba94cu;
    // NOP
label_2ba950:
    // 0x2ba950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ba950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2ba954:
    // 0x2ba954: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ba954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2ba958:
    // 0x2ba958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ba958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ba95c:
    // 0x2ba95c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ba95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ba960:
    // 0x2ba960: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ba960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ba964:
    // 0x2ba964: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
label_2ba968:
    if (ctx->pc == 0x2BA968u) {
        ctx->pc = 0x2BA968u;
            // 0x2ba968: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA96Cu;
        goto label_2ba96c;
    }
    ctx->pc = 0x2BA964u;
    {
        const bool branch_taken_0x2ba964 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA964u;
            // 0x2ba968: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba964) {
            ctx->pc = 0x2BA9FCu;
            goto label_2ba9fc;
        }
    }
    ctx->pc = 0x2BA96Cu;
label_2ba96c:
    // 0x2ba96c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ba96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2ba970:
    // 0x2ba970: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ba970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2ba974:
    // 0x2ba974: 0x24422670  addiu       $v0, $v0, 0x2670
    ctx->pc = 0x2ba974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
label_2ba978:
    // 0x2ba978: 0x246326b0  addiu       $v1, $v1, 0x26B0
    ctx->pc = 0x2ba978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9904));
label_2ba97c:
    // 0x2ba97c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2ba97cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2ba980:
    // 0x2ba980: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x2ba980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_2ba984:
    // 0x2ba984: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2ba988:
    if (ctx->pc == 0x2BA988u) {
        ctx->pc = 0x2BA988u;
            // 0x2ba988: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x2BA98Cu;
        goto label_2ba98c;
    }
    ctx->pc = 0x2BA984u;
    {
        const bool branch_taken_0x2ba984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA984u;
            // 0x2ba988: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba984) {
            ctx->pc = 0x2BA9C0u;
            goto label_2ba9c0;
        }
    }
    ctx->pc = 0x2BA98Cu;
label_2ba98c:
    // 0x2ba98c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ba98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2ba990:
    // 0x2ba990: 0x24422660  addiu       $v0, $v0, 0x2660
    ctx->pc = 0x2ba990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
label_2ba994:
    // 0x2ba994: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x2ba994u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_2ba998:
    // 0x2ba998: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x2ba998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2ba99c:
    // 0x2ba99c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_2ba9a0:
    if (ctx->pc == 0x2BA9A0u) {
        ctx->pc = 0x2BA9A4u;
        goto label_2ba9a4;
    }
    ctx->pc = 0x2BA99Cu;
    {
        const bool branch_taken_0x2ba99c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba99c) {
            ctx->pc = 0x2BA9C0u;
            goto label_2ba9c0;
        }
    }
    ctx->pc = 0x2BA9A4u;
label_2ba9a4:
    // 0x2ba9a4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ba9a8:
    if (ctx->pc == 0x2BA9A8u) {
        ctx->pc = 0x2BA9A8u;
            // 0x2ba9a8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x2BA9ACu;
        goto label_2ba9ac;
    }
    ctx->pc = 0x2BA9A4u;
    {
        const bool branch_taken_0x2ba9a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba9a4) {
            ctx->pc = 0x2BA9A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA9A4u;
            // 0x2ba9a8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BA9C0u;
            goto label_2ba9c0;
        }
    }
    ctx->pc = 0x2BA9ACu;
label_2ba9ac:
    // 0x2ba9ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2ba9acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ba9b0:
    // 0x2ba9b0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2ba9b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2ba9b4:
    // 0x2ba9b4: 0x320f809  jalr        $t9
label_2ba9b8:
    if (ctx->pc == 0x2BA9B8u) {
        ctx->pc = 0x2BA9B8u;
            // 0x2ba9b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BA9BCu;
        goto label_2ba9bc;
    }
    ctx->pc = 0x2BA9B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BA9BCu);
        ctx->pc = 0x2BA9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA9B4u;
            // 0x2ba9b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BA9BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BA9BCu; }
            if (ctx->pc != 0x2BA9BCu) { return; }
        }
        }
    }
    ctx->pc = 0x2BA9BCu;
label_2ba9bc:
    // 0x2ba9bc: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x2ba9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_2ba9c0:
    // 0x2ba9c0: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2ba9c4:
    if (ctx->pc == 0x2BA9C4u) {
        ctx->pc = 0x2BA9C4u;
            // 0x2ba9c4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2BA9C8u;
        goto label_2ba9c8;
    }
    ctx->pc = 0x2BA9C0u;
    {
        const bool branch_taken_0x2ba9c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba9c0) {
            ctx->pc = 0x2BA9C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA9C0u;
            // 0x2ba9c4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BA9E8u;
            goto label_2ba9e8;
        }
    }
    ctx->pc = 0x2BA9C8u;
label_2ba9c8:
    // 0x2ba9c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ba9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2ba9cc:
    // 0x2ba9cc: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x2ba9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_2ba9d0:
    // 0x2ba9d0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2ba9d4:
    if (ctx->pc == 0x2BA9D4u) {
        ctx->pc = 0x2BA9D4u;
            // 0x2ba9d4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2BA9D8u;
        goto label_2ba9d8;
    }
    ctx->pc = 0x2BA9D0u;
    {
        const bool branch_taken_0x2ba9d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA9D0u;
            // 0x2ba9d4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba9d0) {
            ctx->pc = 0x2BA9E4u;
            goto label_2ba9e4;
        }
    }
    ctx->pc = 0x2BA9D8u;
label_2ba9d8:
    // 0x2ba9d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ba9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2ba9dc:
    // 0x2ba9dc: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2ba9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2ba9e0:
    // 0x2ba9e0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2ba9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2ba9e4:
    // 0x2ba9e4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2ba9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2ba9e8:
    // 0x2ba9e8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ba9e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2ba9ec:
    // 0x2ba9ec: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2ba9f0:
    if (ctx->pc == 0x2BA9F0u) {
        ctx->pc = 0x2BA9F0u;
            // 0x2ba9f0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA9F4u;
        goto label_2ba9f4;
    }
    ctx->pc = 0x2BA9ECu;
    {
        const bool branch_taken_0x2ba9ec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ba9ec) {
            ctx->pc = 0x2BA9F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA9ECu;
            // 0x2ba9f0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BAA00u;
            goto label_2baa00;
        }
    }
    ctx->pc = 0x2BA9F4u;
label_2ba9f4:
    // 0x2ba9f4: 0xc0400a8  jal         func_1002A0
label_2ba9f8:
    if (ctx->pc == 0x2BA9F8u) {
        ctx->pc = 0x2BA9F8u;
            // 0x2ba9f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BA9FCu;
        goto label_2ba9fc;
    }
    ctx->pc = 0x2BA9F4u;
    SET_GPR_U32(ctx, 31, 0x2BA9FCu);
    ctx->pc = 0x2BA9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA9F4u;
            // 0x2ba9f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA9FCu; }
        if (ctx->pc != 0x2BA9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA9FCu; }
        if (ctx->pc != 0x2BA9FCu) { return; }
    }
    ctx->pc = 0x2BA9FCu;
label_2ba9fc:
    // 0x2ba9fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ba9fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2baa00:
    // 0x2baa00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2baa00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2baa04:
    // 0x2baa04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2baa04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2baa08:
    // 0x2baa08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2baa08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2baa0c:
    // 0x2baa0c: 0x3e00008  jr          $ra
label_2baa10:
    if (ctx->pc == 0x2BAA10u) {
        ctx->pc = 0x2BAA10u;
            // 0x2baa10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2BAA14u;
        goto label_2baa14;
    }
    ctx->pc = 0x2BAA0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAA0Cu;
            // 0x2baa10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BAA14u;
label_2baa14:
    // 0x2baa14: 0x0  nop
    ctx->pc = 0x2baa14u;
    // NOP
label_2baa18:
    // 0x2baa18: 0x0  nop
    ctx->pc = 0x2baa18u;
    // NOP
label_2baa1c:
    // 0x2baa1c: 0x0  nop
    ctx->pc = 0x2baa1cu;
    // NOP
label_2baa20:
    // 0x2baa20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2baa20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2baa24:
    // 0x2baa24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2baa24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2baa28:
    // 0x2baa28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2baa28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2baa2c:
    // 0x2baa2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2baa2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2baa30:
    // 0x2baa30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2baa30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2baa34:
    // 0x2baa34: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_2baa38:
    if (ctx->pc == 0x2BAA38u) {
        ctx->pc = 0x2BAA38u;
            // 0x2baa38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BAA3Cu;
        goto label_2baa3c;
    }
    ctx->pc = 0x2BAA34u;
    {
        const bool branch_taken_0x2baa34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAA34u;
            // 0x2baa38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baa34) {
            ctx->pc = 0x2BAA88u;
            goto label_2baa88;
        }
    }
    ctx->pc = 0x2BAA3Cu;
label_2baa3c:
    // 0x2baa3c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2baa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2baa40:
    // 0x2baa40: 0x24422660  addiu       $v0, $v0, 0x2660
    ctx->pc = 0x2baa40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
label_2baa44:
    // 0x2baa44: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2baa44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_2baa48:
    // 0x2baa48: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2baa48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2baa4c:
    // 0x2baa4c: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_2baa50:
    if (ctx->pc == 0x2BAA50u) {
        ctx->pc = 0x2BAA50u;
            // 0x2baa50: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2BAA54u;
        goto label_2baa54;
    }
    ctx->pc = 0x2BAA4Cu;
    {
        const bool branch_taken_0x2baa4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2baa4c) {
            ctx->pc = 0x2BAA50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAA4Cu;
            // 0x2baa50: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BAA74u;
            goto label_2baa74;
        }
    }
    ctx->pc = 0x2BAA54u;
label_2baa54:
    // 0x2baa54: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2baa58:
    if (ctx->pc == 0x2BAA58u) {
        ctx->pc = 0x2BAA58u;
            // 0x2baa58: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x2BAA5Cu;
        goto label_2baa5c;
    }
    ctx->pc = 0x2BAA54u;
    {
        const bool branch_taken_0x2baa54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2baa54) {
            ctx->pc = 0x2BAA58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAA54u;
            // 0x2baa58: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BAA70u;
            goto label_2baa70;
        }
    }
    ctx->pc = 0x2BAA5Cu;
label_2baa5c:
    // 0x2baa5c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2baa5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2baa60:
    // 0x2baa60: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2baa60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2baa64:
    // 0x2baa64: 0x320f809  jalr        $t9
label_2baa68:
    if (ctx->pc == 0x2BAA68u) {
        ctx->pc = 0x2BAA68u;
            // 0x2baa68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BAA6Cu;
        goto label_2baa6c;
    }
    ctx->pc = 0x2BAA64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BAA6Cu);
        ctx->pc = 0x2BAA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAA64u;
            // 0x2baa68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BAA6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BAA6Cu; }
            if (ctx->pc != 0x2BAA6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2BAA6Cu;
label_2baa6c:
    // 0x2baa6c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2baa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2baa70:
    // 0x2baa70: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2baa70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2baa74:
    // 0x2baa74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2baa74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2baa78:
    // 0x2baa78: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2baa7c:
    if (ctx->pc == 0x2BAA7Cu) {
        ctx->pc = 0x2BAA7Cu;
            // 0x2baa7c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BAA80u;
        goto label_2baa80;
    }
    ctx->pc = 0x2BAA78u;
    {
        const bool branch_taken_0x2baa78 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2baa78) {
            ctx->pc = 0x2BAA7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAA78u;
            // 0x2baa7c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BAA8Cu;
            goto label_2baa8c;
        }
    }
    ctx->pc = 0x2BAA80u;
label_2baa80:
    // 0x2baa80: 0xc0400a8  jal         func_1002A0
label_2baa84:
    if (ctx->pc == 0x2BAA84u) {
        ctx->pc = 0x2BAA84u;
            // 0x2baa84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BAA88u;
        goto label_2baa88;
    }
    ctx->pc = 0x2BAA80u;
    SET_GPR_U32(ctx, 31, 0x2BAA88u);
    ctx->pc = 0x2BAA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAA80u;
            // 0x2baa84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAA88u; }
        if (ctx->pc != 0x2BAA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAA88u; }
        if (ctx->pc != 0x2BAA88u) { return; }
    }
    ctx->pc = 0x2BAA88u;
label_2baa88:
    // 0x2baa88: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2baa88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2baa8c:
    // 0x2baa8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2baa8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2baa90:
    // 0x2baa90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2baa90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2baa94:
    // 0x2baa94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2baa94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2baa98:
    // 0x2baa98: 0x3e00008  jr          $ra
label_2baa9c:
    if (ctx->pc == 0x2BAA9Cu) {
        ctx->pc = 0x2BAA9Cu;
            // 0x2baa9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2BAAA0u;
        goto label_fallthrough_0x2baa98;
    }
    ctx->pc = 0x2BAA98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAA98u;
            // 0x2baa9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2baa98:
    ctx->pc = 0x2BAAA0u;
}
