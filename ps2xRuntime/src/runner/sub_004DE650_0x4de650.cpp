#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004DE650
// Address: 0x4de650 - 0x4deac0
void sub_004DE650_0x4de650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DE650_0x4de650");
#endif

    switch (ctx->pc) {
        case 0x4de650u: goto label_4de650;
        case 0x4de654u: goto label_4de654;
        case 0x4de658u: goto label_4de658;
        case 0x4de65cu: goto label_4de65c;
        case 0x4de660u: goto label_4de660;
        case 0x4de664u: goto label_4de664;
        case 0x4de668u: goto label_4de668;
        case 0x4de66cu: goto label_4de66c;
        case 0x4de670u: goto label_4de670;
        case 0x4de674u: goto label_4de674;
        case 0x4de678u: goto label_4de678;
        case 0x4de67cu: goto label_4de67c;
        case 0x4de680u: goto label_4de680;
        case 0x4de684u: goto label_4de684;
        case 0x4de688u: goto label_4de688;
        case 0x4de68cu: goto label_4de68c;
        case 0x4de690u: goto label_4de690;
        case 0x4de694u: goto label_4de694;
        case 0x4de698u: goto label_4de698;
        case 0x4de69cu: goto label_4de69c;
        case 0x4de6a0u: goto label_4de6a0;
        case 0x4de6a4u: goto label_4de6a4;
        case 0x4de6a8u: goto label_4de6a8;
        case 0x4de6acu: goto label_4de6ac;
        case 0x4de6b0u: goto label_4de6b0;
        case 0x4de6b4u: goto label_4de6b4;
        case 0x4de6b8u: goto label_4de6b8;
        case 0x4de6bcu: goto label_4de6bc;
        case 0x4de6c0u: goto label_4de6c0;
        case 0x4de6c4u: goto label_4de6c4;
        case 0x4de6c8u: goto label_4de6c8;
        case 0x4de6ccu: goto label_4de6cc;
        case 0x4de6d0u: goto label_4de6d0;
        case 0x4de6d4u: goto label_4de6d4;
        case 0x4de6d8u: goto label_4de6d8;
        case 0x4de6dcu: goto label_4de6dc;
        case 0x4de6e0u: goto label_4de6e0;
        case 0x4de6e4u: goto label_4de6e4;
        case 0x4de6e8u: goto label_4de6e8;
        case 0x4de6ecu: goto label_4de6ec;
        case 0x4de6f0u: goto label_4de6f0;
        case 0x4de6f4u: goto label_4de6f4;
        case 0x4de6f8u: goto label_4de6f8;
        case 0x4de6fcu: goto label_4de6fc;
        case 0x4de700u: goto label_4de700;
        case 0x4de704u: goto label_4de704;
        case 0x4de708u: goto label_4de708;
        case 0x4de70cu: goto label_4de70c;
        case 0x4de710u: goto label_4de710;
        case 0x4de714u: goto label_4de714;
        case 0x4de718u: goto label_4de718;
        case 0x4de71cu: goto label_4de71c;
        case 0x4de720u: goto label_4de720;
        case 0x4de724u: goto label_4de724;
        case 0x4de728u: goto label_4de728;
        case 0x4de72cu: goto label_4de72c;
        case 0x4de730u: goto label_4de730;
        case 0x4de734u: goto label_4de734;
        case 0x4de738u: goto label_4de738;
        case 0x4de73cu: goto label_4de73c;
        case 0x4de740u: goto label_4de740;
        case 0x4de744u: goto label_4de744;
        case 0x4de748u: goto label_4de748;
        case 0x4de74cu: goto label_4de74c;
        case 0x4de750u: goto label_4de750;
        case 0x4de754u: goto label_4de754;
        case 0x4de758u: goto label_4de758;
        case 0x4de75cu: goto label_4de75c;
        case 0x4de760u: goto label_4de760;
        case 0x4de764u: goto label_4de764;
        case 0x4de768u: goto label_4de768;
        case 0x4de76cu: goto label_4de76c;
        case 0x4de770u: goto label_4de770;
        case 0x4de774u: goto label_4de774;
        case 0x4de778u: goto label_4de778;
        case 0x4de77cu: goto label_4de77c;
        case 0x4de780u: goto label_4de780;
        case 0x4de784u: goto label_4de784;
        case 0x4de788u: goto label_4de788;
        case 0x4de78cu: goto label_4de78c;
        case 0x4de790u: goto label_4de790;
        case 0x4de794u: goto label_4de794;
        case 0x4de798u: goto label_4de798;
        case 0x4de79cu: goto label_4de79c;
        case 0x4de7a0u: goto label_4de7a0;
        case 0x4de7a4u: goto label_4de7a4;
        case 0x4de7a8u: goto label_4de7a8;
        case 0x4de7acu: goto label_4de7ac;
        case 0x4de7b0u: goto label_4de7b0;
        case 0x4de7b4u: goto label_4de7b4;
        case 0x4de7b8u: goto label_4de7b8;
        case 0x4de7bcu: goto label_4de7bc;
        case 0x4de7c0u: goto label_4de7c0;
        case 0x4de7c4u: goto label_4de7c4;
        case 0x4de7c8u: goto label_4de7c8;
        case 0x4de7ccu: goto label_4de7cc;
        case 0x4de7d0u: goto label_4de7d0;
        case 0x4de7d4u: goto label_4de7d4;
        case 0x4de7d8u: goto label_4de7d8;
        case 0x4de7dcu: goto label_4de7dc;
        case 0x4de7e0u: goto label_4de7e0;
        case 0x4de7e4u: goto label_4de7e4;
        case 0x4de7e8u: goto label_4de7e8;
        case 0x4de7ecu: goto label_4de7ec;
        case 0x4de7f0u: goto label_4de7f0;
        case 0x4de7f4u: goto label_4de7f4;
        case 0x4de7f8u: goto label_4de7f8;
        case 0x4de7fcu: goto label_4de7fc;
        case 0x4de800u: goto label_4de800;
        case 0x4de804u: goto label_4de804;
        case 0x4de808u: goto label_4de808;
        case 0x4de80cu: goto label_4de80c;
        case 0x4de810u: goto label_4de810;
        case 0x4de814u: goto label_4de814;
        case 0x4de818u: goto label_4de818;
        case 0x4de81cu: goto label_4de81c;
        case 0x4de820u: goto label_4de820;
        case 0x4de824u: goto label_4de824;
        case 0x4de828u: goto label_4de828;
        case 0x4de82cu: goto label_4de82c;
        case 0x4de830u: goto label_4de830;
        case 0x4de834u: goto label_4de834;
        case 0x4de838u: goto label_4de838;
        case 0x4de83cu: goto label_4de83c;
        case 0x4de840u: goto label_4de840;
        case 0x4de844u: goto label_4de844;
        case 0x4de848u: goto label_4de848;
        case 0x4de84cu: goto label_4de84c;
        case 0x4de850u: goto label_4de850;
        case 0x4de854u: goto label_4de854;
        case 0x4de858u: goto label_4de858;
        case 0x4de85cu: goto label_4de85c;
        case 0x4de860u: goto label_4de860;
        case 0x4de864u: goto label_4de864;
        case 0x4de868u: goto label_4de868;
        case 0x4de86cu: goto label_4de86c;
        case 0x4de870u: goto label_4de870;
        case 0x4de874u: goto label_4de874;
        case 0x4de878u: goto label_4de878;
        case 0x4de87cu: goto label_4de87c;
        case 0x4de880u: goto label_4de880;
        case 0x4de884u: goto label_4de884;
        case 0x4de888u: goto label_4de888;
        case 0x4de88cu: goto label_4de88c;
        case 0x4de890u: goto label_4de890;
        case 0x4de894u: goto label_4de894;
        case 0x4de898u: goto label_4de898;
        case 0x4de89cu: goto label_4de89c;
        case 0x4de8a0u: goto label_4de8a0;
        case 0x4de8a4u: goto label_4de8a4;
        case 0x4de8a8u: goto label_4de8a8;
        case 0x4de8acu: goto label_4de8ac;
        case 0x4de8b0u: goto label_4de8b0;
        case 0x4de8b4u: goto label_4de8b4;
        case 0x4de8b8u: goto label_4de8b8;
        case 0x4de8bcu: goto label_4de8bc;
        case 0x4de8c0u: goto label_4de8c0;
        case 0x4de8c4u: goto label_4de8c4;
        case 0x4de8c8u: goto label_4de8c8;
        case 0x4de8ccu: goto label_4de8cc;
        case 0x4de8d0u: goto label_4de8d0;
        case 0x4de8d4u: goto label_4de8d4;
        case 0x4de8d8u: goto label_4de8d8;
        case 0x4de8dcu: goto label_4de8dc;
        case 0x4de8e0u: goto label_4de8e0;
        case 0x4de8e4u: goto label_4de8e4;
        case 0x4de8e8u: goto label_4de8e8;
        case 0x4de8ecu: goto label_4de8ec;
        case 0x4de8f0u: goto label_4de8f0;
        case 0x4de8f4u: goto label_4de8f4;
        case 0x4de8f8u: goto label_4de8f8;
        case 0x4de8fcu: goto label_4de8fc;
        case 0x4de900u: goto label_4de900;
        case 0x4de904u: goto label_4de904;
        case 0x4de908u: goto label_4de908;
        case 0x4de90cu: goto label_4de90c;
        case 0x4de910u: goto label_4de910;
        case 0x4de914u: goto label_4de914;
        case 0x4de918u: goto label_4de918;
        case 0x4de91cu: goto label_4de91c;
        case 0x4de920u: goto label_4de920;
        case 0x4de924u: goto label_4de924;
        case 0x4de928u: goto label_4de928;
        case 0x4de92cu: goto label_4de92c;
        case 0x4de930u: goto label_4de930;
        case 0x4de934u: goto label_4de934;
        case 0x4de938u: goto label_4de938;
        case 0x4de93cu: goto label_4de93c;
        case 0x4de940u: goto label_4de940;
        case 0x4de944u: goto label_4de944;
        case 0x4de948u: goto label_4de948;
        case 0x4de94cu: goto label_4de94c;
        case 0x4de950u: goto label_4de950;
        case 0x4de954u: goto label_4de954;
        case 0x4de958u: goto label_4de958;
        case 0x4de95cu: goto label_4de95c;
        case 0x4de960u: goto label_4de960;
        case 0x4de964u: goto label_4de964;
        case 0x4de968u: goto label_4de968;
        case 0x4de96cu: goto label_4de96c;
        case 0x4de970u: goto label_4de970;
        case 0x4de974u: goto label_4de974;
        case 0x4de978u: goto label_4de978;
        case 0x4de97cu: goto label_4de97c;
        case 0x4de980u: goto label_4de980;
        case 0x4de984u: goto label_4de984;
        case 0x4de988u: goto label_4de988;
        case 0x4de98cu: goto label_4de98c;
        case 0x4de990u: goto label_4de990;
        case 0x4de994u: goto label_4de994;
        case 0x4de998u: goto label_4de998;
        case 0x4de99cu: goto label_4de99c;
        case 0x4de9a0u: goto label_4de9a0;
        case 0x4de9a4u: goto label_4de9a4;
        case 0x4de9a8u: goto label_4de9a8;
        case 0x4de9acu: goto label_4de9ac;
        case 0x4de9b0u: goto label_4de9b0;
        case 0x4de9b4u: goto label_4de9b4;
        case 0x4de9b8u: goto label_4de9b8;
        case 0x4de9bcu: goto label_4de9bc;
        case 0x4de9c0u: goto label_4de9c0;
        case 0x4de9c4u: goto label_4de9c4;
        case 0x4de9c8u: goto label_4de9c8;
        case 0x4de9ccu: goto label_4de9cc;
        case 0x4de9d0u: goto label_4de9d0;
        case 0x4de9d4u: goto label_4de9d4;
        case 0x4de9d8u: goto label_4de9d8;
        case 0x4de9dcu: goto label_4de9dc;
        case 0x4de9e0u: goto label_4de9e0;
        case 0x4de9e4u: goto label_4de9e4;
        case 0x4de9e8u: goto label_4de9e8;
        case 0x4de9ecu: goto label_4de9ec;
        case 0x4de9f0u: goto label_4de9f0;
        case 0x4de9f4u: goto label_4de9f4;
        case 0x4de9f8u: goto label_4de9f8;
        case 0x4de9fcu: goto label_4de9fc;
        case 0x4dea00u: goto label_4dea00;
        case 0x4dea04u: goto label_4dea04;
        case 0x4dea08u: goto label_4dea08;
        case 0x4dea0cu: goto label_4dea0c;
        case 0x4dea10u: goto label_4dea10;
        case 0x4dea14u: goto label_4dea14;
        case 0x4dea18u: goto label_4dea18;
        case 0x4dea1cu: goto label_4dea1c;
        case 0x4dea20u: goto label_4dea20;
        case 0x4dea24u: goto label_4dea24;
        case 0x4dea28u: goto label_4dea28;
        case 0x4dea2cu: goto label_4dea2c;
        case 0x4dea30u: goto label_4dea30;
        case 0x4dea34u: goto label_4dea34;
        case 0x4dea38u: goto label_4dea38;
        case 0x4dea3cu: goto label_4dea3c;
        case 0x4dea40u: goto label_4dea40;
        case 0x4dea44u: goto label_4dea44;
        case 0x4dea48u: goto label_4dea48;
        case 0x4dea4cu: goto label_4dea4c;
        case 0x4dea50u: goto label_4dea50;
        case 0x4dea54u: goto label_4dea54;
        case 0x4dea58u: goto label_4dea58;
        case 0x4dea5cu: goto label_4dea5c;
        case 0x4dea60u: goto label_4dea60;
        case 0x4dea64u: goto label_4dea64;
        case 0x4dea68u: goto label_4dea68;
        case 0x4dea6cu: goto label_4dea6c;
        case 0x4dea70u: goto label_4dea70;
        case 0x4dea74u: goto label_4dea74;
        case 0x4dea78u: goto label_4dea78;
        case 0x4dea7cu: goto label_4dea7c;
        case 0x4dea80u: goto label_4dea80;
        case 0x4dea84u: goto label_4dea84;
        case 0x4dea88u: goto label_4dea88;
        case 0x4dea8cu: goto label_4dea8c;
        case 0x4dea90u: goto label_4dea90;
        case 0x4dea94u: goto label_4dea94;
        case 0x4dea98u: goto label_4dea98;
        case 0x4dea9cu: goto label_4dea9c;
        case 0x4deaa0u: goto label_4deaa0;
        case 0x4deaa4u: goto label_4deaa4;
        case 0x4deaa8u: goto label_4deaa8;
        case 0x4deaacu: goto label_4deaac;
        case 0x4deab0u: goto label_4deab0;
        case 0x4deab4u: goto label_4deab4;
        case 0x4deab8u: goto label_4deab8;
        case 0x4deabcu: goto label_4deabc;
        default: break;
    }

    ctx->pc = 0x4de650u;

label_4de650:
    // 0x4de650: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4de650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4de654:
    // 0x4de654: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4de654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4de658:
    // 0x4de658: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4de658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4de65c:
    // 0x4de65c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4de65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4de660:
    // 0x4de660: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4de660u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4de664:
    // 0x4de664: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_4de668:
    if (ctx->pc == 0x4DE668u) {
        ctx->pc = 0x4DE668u;
            // 0x4de668: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DE66Cu;
        goto label_4de66c;
    }
    ctx->pc = 0x4DE664u;
    {
        const bool branch_taken_0x4de664 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DE668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE664u;
            // 0x4de668: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de664) {
            ctx->pc = 0x4DE798u;
            goto label_4de798;
        }
    }
    ctx->pc = 0x4DE66Cu;
label_4de66c:
    // 0x4de66c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4de66cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4de670:
    // 0x4de670: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4de670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4de674:
    // 0x4de674: 0x24633070  addiu       $v1, $v1, 0x3070
    ctx->pc = 0x4de674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12400));
label_4de678:
    // 0x4de678: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x4de678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_4de67c:
    // 0x4de67c: 0x244230a8  addiu       $v0, $v0, 0x30A8
    ctx->pc = 0x4de67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12456));
label_4de680:
    // 0x4de680: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4de680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4de684:
    // 0x4de684: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4de684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4de688:
    // 0x4de688: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4de688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4de68c:
    // 0x4de68c: 0xc0407c0  jal         func_101F00
label_4de690:
    if (ctx->pc == 0x4DE690u) {
        ctx->pc = 0x4DE690u;
            // 0x4de690: 0x24a5e7b0  addiu       $a1, $a1, -0x1850 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961072));
        ctx->pc = 0x4DE694u;
        goto label_4de694;
    }
    ctx->pc = 0x4DE68Cu;
    SET_GPR_U32(ctx, 31, 0x4DE694u);
    ctx->pc = 0x4DE690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE68Cu;
            // 0x4de690: 0x24a5e7b0  addiu       $a1, $a1, -0x1850 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE694u; }
        if (ctx->pc != 0x4DE694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE694u; }
        if (ctx->pc != 0x4DE694u) { return; }
    }
    ctx->pc = 0x4DE694u;
label_4de694:
    // 0x4de694: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4de694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4de698:
    // 0x4de698: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4de69c:
    if (ctx->pc == 0x4DE69Cu) {
        ctx->pc = 0x4DE69Cu;
            // 0x4de69c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4DE6A0u;
        goto label_4de6a0;
    }
    ctx->pc = 0x4DE698u;
    {
        const bool branch_taken_0x4de698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4de698) {
            ctx->pc = 0x4DE69Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE698u;
            // 0x4de69c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DE6ACu;
            goto label_4de6ac;
        }
    }
    ctx->pc = 0x4DE6A0u;
label_4de6a0:
    // 0x4de6a0: 0xc07507c  jal         func_1D41F0
label_4de6a4:
    if (ctx->pc == 0x4DE6A4u) {
        ctx->pc = 0x4DE6A4u;
            // 0x4de6a4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x4DE6A8u;
        goto label_4de6a8;
    }
    ctx->pc = 0x4DE6A0u;
    SET_GPR_U32(ctx, 31, 0x4DE6A8u);
    ctx->pc = 0x4DE6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE6A0u;
            // 0x4de6a4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE6A8u; }
        if (ctx->pc != 0x4DE6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE6A8u; }
        if (ctx->pc != 0x4DE6A8u) { return; }
    }
    ctx->pc = 0x4DE6A8u;
label_4de6a8:
    // 0x4de6a8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4de6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4de6ac:
    // 0x4de6ac: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4de6b0:
    if (ctx->pc == 0x4DE6B0u) {
        ctx->pc = 0x4DE6B0u;
            // 0x4de6b0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4DE6B4u;
        goto label_4de6b4;
    }
    ctx->pc = 0x4DE6ACu;
    {
        const bool branch_taken_0x4de6ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4de6ac) {
            ctx->pc = 0x4DE6B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE6ACu;
            // 0x4de6b0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DE6DCu;
            goto label_4de6dc;
        }
    }
    ctx->pc = 0x4DE6B4u;
label_4de6b4:
    // 0x4de6b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4de6b8:
    if (ctx->pc == 0x4DE6B8u) {
        ctx->pc = 0x4DE6BCu;
        goto label_4de6bc;
    }
    ctx->pc = 0x4DE6B4u;
    {
        const bool branch_taken_0x4de6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4de6b4) {
            ctx->pc = 0x4DE6D8u;
            goto label_4de6d8;
        }
    }
    ctx->pc = 0x4DE6BCu;
label_4de6bc:
    // 0x4de6bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4de6c0:
    if (ctx->pc == 0x4DE6C0u) {
        ctx->pc = 0x4DE6C4u;
        goto label_4de6c4;
    }
    ctx->pc = 0x4DE6BCu;
    {
        const bool branch_taken_0x4de6bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4de6bc) {
            ctx->pc = 0x4DE6D8u;
            goto label_4de6d8;
        }
    }
    ctx->pc = 0x4DE6C4u;
label_4de6c4:
    // 0x4de6c4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4de6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4de6c8:
    // 0x4de6c8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4de6cc:
    if (ctx->pc == 0x4DE6CCu) {
        ctx->pc = 0x4DE6D0u;
        goto label_4de6d0;
    }
    ctx->pc = 0x4DE6C8u;
    {
        const bool branch_taken_0x4de6c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4de6c8) {
            ctx->pc = 0x4DE6D8u;
            goto label_4de6d8;
        }
    }
    ctx->pc = 0x4DE6D0u;
label_4de6d0:
    // 0x4de6d0: 0xc0400a8  jal         func_1002A0
label_4de6d4:
    if (ctx->pc == 0x4DE6D4u) {
        ctx->pc = 0x4DE6D8u;
        goto label_4de6d8;
    }
    ctx->pc = 0x4DE6D0u;
    SET_GPR_U32(ctx, 31, 0x4DE6D8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE6D8u; }
        if (ctx->pc != 0x4DE6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE6D8u; }
        if (ctx->pc != 0x4DE6D8u) { return; }
    }
    ctx->pc = 0x4DE6D8u;
label_4de6d8:
    // 0x4de6d8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4de6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4de6dc:
    // 0x4de6dc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4de6e0:
    if (ctx->pc == 0x4DE6E0u) {
        ctx->pc = 0x4DE6E0u;
            // 0x4de6e0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4DE6E4u;
        goto label_4de6e4;
    }
    ctx->pc = 0x4DE6DCu;
    {
        const bool branch_taken_0x4de6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4de6dc) {
            ctx->pc = 0x4DE6E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE6DCu;
            // 0x4de6e0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DE70Cu;
            goto label_4de70c;
        }
    }
    ctx->pc = 0x4DE6E4u;
label_4de6e4:
    // 0x4de6e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4de6e8:
    if (ctx->pc == 0x4DE6E8u) {
        ctx->pc = 0x4DE6ECu;
        goto label_4de6ec;
    }
    ctx->pc = 0x4DE6E4u;
    {
        const bool branch_taken_0x4de6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4de6e4) {
            ctx->pc = 0x4DE708u;
            goto label_4de708;
        }
    }
    ctx->pc = 0x4DE6ECu;
label_4de6ec:
    // 0x4de6ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4de6f0:
    if (ctx->pc == 0x4DE6F0u) {
        ctx->pc = 0x4DE6F4u;
        goto label_4de6f4;
    }
    ctx->pc = 0x4DE6ECu;
    {
        const bool branch_taken_0x4de6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4de6ec) {
            ctx->pc = 0x4DE708u;
            goto label_4de708;
        }
    }
    ctx->pc = 0x4DE6F4u;
label_4de6f4:
    // 0x4de6f4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4de6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4de6f8:
    // 0x4de6f8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4de6fc:
    if (ctx->pc == 0x4DE6FCu) {
        ctx->pc = 0x4DE700u;
        goto label_4de700;
    }
    ctx->pc = 0x4DE6F8u;
    {
        const bool branch_taken_0x4de6f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4de6f8) {
            ctx->pc = 0x4DE708u;
            goto label_4de708;
        }
    }
    ctx->pc = 0x4DE700u;
label_4de700:
    // 0x4de700: 0xc0400a8  jal         func_1002A0
label_4de704:
    if (ctx->pc == 0x4DE704u) {
        ctx->pc = 0x4DE708u;
        goto label_4de708;
    }
    ctx->pc = 0x4DE700u;
    SET_GPR_U32(ctx, 31, 0x4DE708u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE708u; }
        if (ctx->pc != 0x4DE708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE708u; }
        if (ctx->pc != 0x4DE708u) { return; }
    }
    ctx->pc = 0x4DE708u;
label_4de708:
    // 0x4de708: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4de708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4de70c:
    // 0x4de70c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4de710:
    if (ctx->pc == 0x4DE710u) {
        ctx->pc = 0x4DE714u;
        goto label_4de714;
    }
    ctx->pc = 0x4DE70Cu;
    {
        const bool branch_taken_0x4de70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4de70c) {
            ctx->pc = 0x4DE728u;
            goto label_4de728;
        }
    }
    ctx->pc = 0x4DE714u;
label_4de714:
    // 0x4de714: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4de714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4de718:
    // 0x4de718: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4de718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4de71c:
    // 0x4de71c: 0x24633058  addiu       $v1, $v1, 0x3058
    ctx->pc = 0x4de71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12376));
label_4de720:
    // 0x4de720: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4de720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4de724:
    // 0x4de724: 0xac40aa78  sw          $zero, -0x5588($v0)
    ctx->pc = 0x4de724u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945400), GPR_U32(ctx, 0));
label_4de728:
    // 0x4de728: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4de72c:
    if (ctx->pc == 0x4DE72Cu) {
        ctx->pc = 0x4DE72Cu;
            // 0x4de72c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4DE730u;
        goto label_4de730;
    }
    ctx->pc = 0x4DE728u;
    {
        const bool branch_taken_0x4de728 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4de728) {
            ctx->pc = 0x4DE72Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE728u;
            // 0x4de72c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DE784u;
            goto label_4de784;
        }
    }
    ctx->pc = 0x4DE730u;
label_4de730:
    // 0x4de730: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4de730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4de734:
    // 0x4de734: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4de734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4de738:
    // 0x4de738: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4de738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4de73c:
    // 0x4de73c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4de73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4de740:
    // 0x4de740: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4de744:
    if (ctx->pc == 0x4DE744u) {
        ctx->pc = 0x4DE744u;
            // 0x4de744: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4DE748u;
        goto label_4de748;
    }
    ctx->pc = 0x4DE740u;
    {
        const bool branch_taken_0x4de740 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4de740) {
            ctx->pc = 0x4DE744u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE740u;
            // 0x4de744: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DE75Cu;
            goto label_4de75c;
        }
    }
    ctx->pc = 0x4DE748u;
label_4de748:
    // 0x4de748: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4de748u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4de74c:
    // 0x4de74c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4de74cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4de750:
    // 0x4de750: 0x320f809  jalr        $t9
label_4de754:
    if (ctx->pc == 0x4DE754u) {
        ctx->pc = 0x4DE754u;
            // 0x4de754: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4DE758u;
        goto label_4de758;
    }
    ctx->pc = 0x4DE750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DE758u);
        ctx->pc = 0x4DE754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE750u;
            // 0x4de754: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DE758u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DE758u; }
            if (ctx->pc != 0x4DE758u) { return; }
        }
        }
    }
    ctx->pc = 0x4DE758u;
label_4de758:
    // 0x4de758: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4de758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4de75c:
    // 0x4de75c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4de760:
    if (ctx->pc == 0x4DE760u) {
        ctx->pc = 0x4DE760u;
            // 0x4de760: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DE764u;
        goto label_4de764;
    }
    ctx->pc = 0x4DE75Cu;
    {
        const bool branch_taken_0x4de75c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4de75c) {
            ctx->pc = 0x4DE760u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE75Cu;
            // 0x4de760: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DE778u;
            goto label_4de778;
        }
    }
    ctx->pc = 0x4DE764u;
label_4de764:
    // 0x4de764: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4de764u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4de768:
    // 0x4de768: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4de768u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4de76c:
    // 0x4de76c: 0x320f809  jalr        $t9
label_4de770:
    if (ctx->pc == 0x4DE770u) {
        ctx->pc = 0x4DE770u;
            // 0x4de770: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4DE774u;
        goto label_4de774;
    }
    ctx->pc = 0x4DE76Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DE774u);
        ctx->pc = 0x4DE770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE76Cu;
            // 0x4de770: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DE774u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DE774u; }
            if (ctx->pc != 0x4DE774u) { return; }
        }
        }
    }
    ctx->pc = 0x4DE774u;
label_4de774:
    // 0x4de774: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4de774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4de778:
    // 0x4de778: 0xc075bf8  jal         func_1D6FE0
label_4de77c:
    if (ctx->pc == 0x4DE77Cu) {
        ctx->pc = 0x4DE77Cu;
            // 0x4de77c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DE780u;
        goto label_4de780;
    }
    ctx->pc = 0x4DE778u;
    SET_GPR_U32(ctx, 31, 0x4DE780u);
    ctx->pc = 0x4DE77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE778u;
            // 0x4de77c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE780u; }
        if (ctx->pc != 0x4DE780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE780u; }
        if (ctx->pc != 0x4DE780u) { return; }
    }
    ctx->pc = 0x4DE780u;
label_4de780:
    // 0x4de780: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4de780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4de784:
    // 0x4de784: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4de784u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4de788:
    // 0x4de788: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4de78c:
    if (ctx->pc == 0x4DE78Cu) {
        ctx->pc = 0x4DE78Cu;
            // 0x4de78c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DE790u;
        goto label_4de790;
    }
    ctx->pc = 0x4DE788u;
    {
        const bool branch_taken_0x4de788 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4de788) {
            ctx->pc = 0x4DE78Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE788u;
            // 0x4de78c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DE79Cu;
            goto label_4de79c;
        }
    }
    ctx->pc = 0x4DE790u;
label_4de790:
    // 0x4de790: 0xc0400a8  jal         func_1002A0
label_4de794:
    if (ctx->pc == 0x4DE794u) {
        ctx->pc = 0x4DE794u;
            // 0x4de794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DE798u;
        goto label_4de798;
    }
    ctx->pc = 0x4DE790u;
    SET_GPR_U32(ctx, 31, 0x4DE798u);
    ctx->pc = 0x4DE794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE790u;
            // 0x4de794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE798u; }
        if (ctx->pc != 0x4DE798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE798u; }
        if (ctx->pc != 0x4DE798u) { return; }
    }
    ctx->pc = 0x4DE798u;
label_4de798:
    // 0x4de798: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4de798u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4de79c:
    // 0x4de79c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4de79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4de7a0:
    // 0x4de7a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4de7a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4de7a4:
    // 0x4de7a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4de7a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4de7a8:
    // 0x4de7a8: 0x3e00008  jr          $ra
label_4de7ac:
    if (ctx->pc == 0x4DE7ACu) {
        ctx->pc = 0x4DE7ACu;
            // 0x4de7ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4DE7B0u;
        goto label_4de7b0;
    }
    ctx->pc = 0x4DE7A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DE7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE7A8u;
            // 0x4de7ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DE7B0u;
label_4de7b0:
    // 0x4de7b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4de7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4de7b4:
    // 0x4de7b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4de7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4de7b8:
    // 0x4de7b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4de7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4de7bc:
    // 0x4de7bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4de7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4de7c0:
    // 0x4de7c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4de7c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4de7c4:
    // 0x4de7c4: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_4de7c8:
    if (ctx->pc == 0x4DE7C8u) {
        ctx->pc = 0x4DE7C8u;
            // 0x4de7c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DE7CCu;
        goto label_4de7cc;
    }
    ctx->pc = 0x4DE7C4u;
    {
        const bool branch_taken_0x4de7c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DE7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE7C4u;
            // 0x4de7c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de7c4) {
            ctx->pc = 0x4DE818u;
            goto label_4de818;
        }
    }
    ctx->pc = 0x4DE7CCu;
label_4de7cc:
    // 0x4de7cc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4de7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4de7d0:
    // 0x4de7d0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4de7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4de7d4:
    // 0x4de7d4: 0x24633110  addiu       $v1, $v1, 0x3110
    ctx->pc = 0x4de7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12560));
label_4de7d8:
    // 0x4de7d8: 0x24423150  addiu       $v0, $v0, 0x3150
    ctx->pc = 0x4de7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12624));
label_4de7dc:
    // 0x4de7dc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4de7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4de7e0:
    // 0x4de7e0: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x4de7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_4de7e4:
    // 0x4de7e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4de7e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4de7e8:
    // 0x4de7e8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4de7e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4de7ec:
    // 0x4de7ec: 0x320f809  jalr        $t9
label_4de7f0:
    if (ctx->pc == 0x4DE7F0u) {
        ctx->pc = 0x4DE7F4u;
        goto label_4de7f4;
    }
    ctx->pc = 0x4DE7ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DE7F4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DE7F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DE7F4u; }
            if (ctx->pc != 0x4DE7F4u) { return; }
        }
        }
    }
    ctx->pc = 0x4DE7F4u;
label_4de7f4:
    // 0x4de7f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4de7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4de7f8:
    // 0x4de7f8: 0xc12e684  jal         func_4B9A10
label_4de7fc:
    if (ctx->pc == 0x4DE7FCu) {
        ctx->pc = 0x4DE7FCu;
            // 0x4de7fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DE800u;
        goto label_4de800;
    }
    ctx->pc = 0x4DE7F8u;
    SET_GPR_U32(ctx, 31, 0x4DE800u);
    ctx->pc = 0x4DE7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE7F8u;
            // 0x4de7fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9A10u;
    if (runtime->hasFunction(0x4B9A10u)) {
        auto targetFn = runtime->lookupFunction(0x4B9A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE800u; }
        if (ctx->pc != 0x4DE800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9A10_0x4b9a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE800u; }
        if (ctx->pc != 0x4DE800u) { return; }
    }
    ctx->pc = 0x4DE800u;
label_4de800:
    // 0x4de800: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4de800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4de804:
    // 0x4de804: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4de804u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4de808:
    // 0x4de808: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4de80c:
    if (ctx->pc == 0x4DE80Cu) {
        ctx->pc = 0x4DE80Cu;
            // 0x4de80c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DE810u;
        goto label_4de810;
    }
    ctx->pc = 0x4DE808u;
    {
        const bool branch_taken_0x4de808 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4de808) {
            ctx->pc = 0x4DE80Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE808u;
            // 0x4de80c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DE81Cu;
            goto label_4de81c;
        }
    }
    ctx->pc = 0x4DE810u;
label_4de810:
    // 0x4de810: 0xc0400a8  jal         func_1002A0
label_4de814:
    if (ctx->pc == 0x4DE814u) {
        ctx->pc = 0x4DE814u;
            // 0x4de814: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DE818u;
        goto label_4de818;
    }
    ctx->pc = 0x4DE810u;
    SET_GPR_U32(ctx, 31, 0x4DE818u);
    ctx->pc = 0x4DE814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE810u;
            // 0x4de814: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE818u; }
        if (ctx->pc != 0x4DE818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE818u; }
        if (ctx->pc != 0x4DE818u) { return; }
    }
    ctx->pc = 0x4DE818u;
label_4de818:
    // 0x4de818: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4de818u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4de81c:
    // 0x4de81c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4de81cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4de820:
    // 0x4de820: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4de820u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4de824:
    // 0x4de824: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4de824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4de828:
    // 0x4de828: 0x3e00008  jr          $ra
label_4de82c:
    if (ctx->pc == 0x4DE82Cu) {
        ctx->pc = 0x4DE82Cu;
            // 0x4de82c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4DE830u;
        goto label_4de830;
    }
    ctx->pc = 0x4DE828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DE82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE828u;
            // 0x4de82c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DE830u;
label_4de830:
    // 0x4de830: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x4de830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_4de834:
    // 0x4de834: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4de834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4de838:
    // 0x4de838: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4de838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_4de83c:
    // 0x4de83c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x4de83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_4de840:
    // 0x4de840: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4de840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4de844:
    // 0x4de844: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4de844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4de848:
    // 0x4de848: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4de848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4de84c:
    // 0x4de84c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4de84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4de850:
    // 0x4de850: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4de850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4de854:
    // 0x4de854: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4de854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4de858:
    // 0x4de858: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4de858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4de85c:
    // 0x4de85c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4de85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4de860:
    // 0x4de860: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4de860u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4de864:
    // 0x4de864: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4de864u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4de868:
    // 0x4de868: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
label_4de86c:
    if (ctx->pc == 0x4DE86Cu) {
        ctx->pc = 0x4DE86Cu;
            // 0x4de86c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DE870u;
        goto label_4de870;
    }
    ctx->pc = 0x4DE868u;
    {
        const bool branch_taken_0x4de868 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4DE86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE868u;
            // 0x4de86c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de868) {
            ctx->pc = 0x4DE8CCu;
            goto label_4de8cc;
        }
    }
    ctx->pc = 0x4DE870u;
label_4de870:
    // 0x4de870: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4de870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4de874:
    // 0x4de874: 0x50a30010  beql        $a1, $v1, . + 4 + (0x10 << 2)
label_4de878:
    if (ctx->pc == 0x4DE878u) {
        ctx->pc = 0x4DE878u;
            // 0x4de878: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4DE87Cu;
        goto label_4de87c;
    }
    ctx->pc = 0x4DE874u;
    {
        const bool branch_taken_0x4de874 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4de874) {
            ctx->pc = 0x4DE878u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE874u;
            // 0x4de878: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DE8B8u;
            goto label_4de8b8;
        }
    }
    ctx->pc = 0x4DE87Cu;
label_4de87c:
    // 0x4de87c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4de87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4de880:
    // 0x4de880: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4de884:
    if (ctx->pc == 0x4DE884u) {
        ctx->pc = 0x4DE888u;
        goto label_4de888;
    }
    ctx->pc = 0x4DE880u;
    {
        const bool branch_taken_0x4de880 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4de880) {
            ctx->pc = 0x4DE890u;
            goto label_4de890;
        }
    }
    ctx->pc = 0x4DE888u;
label_4de888:
    // 0x4de888: 0x1000007f  b           . + 4 + (0x7F << 2)
label_4de88c:
    if (ctx->pc == 0x4DE88Cu) {
        ctx->pc = 0x4DE88Cu;
            // 0x4de88c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x4DE890u;
        goto label_4de890;
    }
    ctx->pc = 0x4DE888u;
    {
        const bool branch_taken_0x4de888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DE88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE888u;
            // 0x4de88c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de888) {
            ctx->pc = 0x4DEA88u;
            goto label_4dea88;
        }
    }
    ctx->pc = 0x4DE890u;
label_4de890:
    // 0x4de890: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4de890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4de894:
    // 0x4de894: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4de894u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4de898:
    // 0x4de898: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4de898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4de89c:
    // 0x4de89c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4de89cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4de8a0:
    // 0x4de8a0: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x4de8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_4de8a4:
    // 0x4de8a4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4de8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4de8a8:
    // 0x4de8a8: 0x320f809  jalr        $t9
label_4de8ac:
    if (ctx->pc == 0x4DE8ACu) {
        ctx->pc = 0x4DE8ACu;
            // 0x4de8ac: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4DE8B0u;
        goto label_4de8b0;
    }
    ctx->pc = 0x4DE8A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DE8B0u);
        ctx->pc = 0x4DE8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE8A8u;
            // 0x4de8ac: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DE8B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DE8B0u; }
            if (ctx->pc != 0x4DE8B0u) { return; }
        }
        }
    }
    ctx->pc = 0x4DE8B0u;
label_4de8b0:
    // 0x4de8b0: 0x10000074  b           . + 4 + (0x74 << 2)
label_4de8b4:
    if (ctx->pc == 0x4DE8B4u) {
        ctx->pc = 0x4DE8B8u;
        goto label_4de8b8;
    }
    ctx->pc = 0x4DE8B0u;
    {
        const bool branch_taken_0x4de8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4de8b0) {
            ctx->pc = 0x4DEA84u;
            goto label_4dea84;
        }
    }
    ctx->pc = 0x4DE8B8u;
label_4de8b8:
    // 0x4de8b8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4de8b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4de8bc:
    // 0x4de8bc: 0x320f809  jalr        $t9
label_4de8c0:
    if (ctx->pc == 0x4DE8C0u) {
        ctx->pc = 0x4DE8C4u;
        goto label_4de8c4;
    }
    ctx->pc = 0x4DE8BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DE8C4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DE8C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DE8C4u; }
            if (ctx->pc != 0x4DE8C4u) { return; }
        }
        }
    }
    ctx->pc = 0x4DE8C4u;
label_4de8c4:
    // 0x4de8c4: 0x1000006f  b           . + 4 + (0x6F << 2)
label_4de8c8:
    if (ctx->pc == 0x4DE8C8u) {
        ctx->pc = 0x4DE8CCu;
        goto label_4de8cc;
    }
    ctx->pc = 0x4DE8C4u;
    {
        const bool branch_taken_0x4de8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4de8c4) {
            ctx->pc = 0x4DEA84u;
            goto label_4dea84;
        }
    }
    ctx->pc = 0x4DE8CCu;
label_4de8cc:
    // 0x4de8cc: 0x8ed70070  lw          $s7, 0x70($s6)
    ctx->pc = 0x4de8ccu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_4de8d0:
    // 0x4de8d0: 0x12e0006c  beqz        $s7, . + 4 + (0x6C << 2)
label_4de8d4:
    if (ctx->pc == 0x4DE8D4u) {
        ctx->pc = 0x4DE8D8u;
        goto label_4de8d8;
    }
    ctx->pc = 0x4DE8D0u;
    {
        const bool branch_taken_0x4de8d0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x4de8d0) {
            ctx->pc = 0x4DEA84u;
            goto label_4dea84;
        }
    }
    ctx->pc = 0x4DE8D8u;
label_4de8d8:
    // 0x4de8d8: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4de8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4de8dc:
    // 0x4de8dc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4de8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4de8e0:
    // 0x4de8e0: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x4de8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_4de8e4:
    // 0x4de8e4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4de8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_4de8e8:
    // 0x4de8e8: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x4de8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_4de8ec:
    // 0x4de8ec: 0x26d20084  addiu       $s2, $s6, 0x84
    ctx->pc = 0x4de8ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
label_4de8f0:
    // 0x4de8f0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4de8f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4de8f4:
    // 0x4de8f4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4de8f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4de8f8:
    // 0x4de8f8: 0x8ca60130  lw          $a2, 0x130($a1)
    ctx->pc = 0x4de8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_4de8fc:
    // 0x4de8fc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4de8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4de900:
    // 0x4de900: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x4de900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_4de904:
    // 0x4de904: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4de904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_4de908:
    // 0x4de908: 0xc45480a8  lwc1        $f20, -0x7F58($v0)
    ctx->pc = 0x4de908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294934696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4de90c:
    // 0x4de90c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4de90cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4de910:
    // 0x4de910: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x4de910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4de914:
    // 0x4de914: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4de914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4de918:
    // 0x4de918: 0xac80e3d8  sw          $zero, -0x1C28($a0)
    ctx->pc = 0x4de918u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960088), GPR_U32(ctx, 0));
label_4de91c:
    // 0x4de91c: 0x245e0010  addiu       $fp, $v0, 0x10
    ctx->pc = 0x4de91cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4de920:
    // 0x4de920: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x4de920u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
label_4de924:
    // 0x4de924: 0x27a3018c  addiu       $v1, $sp, 0x18C
    ctx->pc = 0x4de924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
label_4de928:
    // 0x4de928: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x4de928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_4de92c:
    // 0x4de92c: 0xafa30188  sw          $v1, 0x188($sp)
    ctx->pc = 0x4de92cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 3));
label_4de930:
    // 0x4de930: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x4de930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_4de934:
    // 0x4de934: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x4de934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_4de938:
    // 0x4de938: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x4de938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_4de93c:
    // 0x4de93c: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x4de93cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4de940:
    // 0x4de940: 0xc0d639c  jal         func_358E70
label_4de944:
    if (ctx->pc == 0x4DE944u) {
        ctx->pc = 0x4DE944u;
            // 0x4de944: 0x2684006c  addiu       $a0, $s4, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
        ctx->pc = 0x4DE948u;
        goto label_4de948;
    }
    ctx->pc = 0x4DE940u;
    SET_GPR_U32(ctx, 31, 0x4DE948u);
    ctx->pc = 0x4DE944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE940u;
            // 0x4de944: 0x2684006c  addiu       $a0, $s4, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE948u; }
        if (ctx->pc != 0x4DE948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE948u; }
        if (ctx->pc != 0x4DE948u) { return; }
    }
    ctx->pc = 0x4DE948u;
label_4de948:
    // 0x4de948: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_4de94c:
    if (ctx->pc == 0x4DE94Cu) {
        ctx->pc = 0x4DE950u;
        goto label_4de950;
    }
    ctx->pc = 0x4DE948u;
    {
        const bool branch_taken_0x4de948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4de948) {
            ctx->pc = 0x4DEA30u;
            goto label_4dea30;
        }
    }
    ctx->pc = 0x4DE950u;
label_4de950:
    // 0x4de950: 0xc0d1c14  jal         func_347050
label_4de954:
    if (ctx->pc == 0x4DE954u) {
        ctx->pc = 0x4DE954u;
            // 0x4de954: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DE958u;
        goto label_4de958;
    }
    ctx->pc = 0x4DE950u;
    SET_GPR_U32(ctx, 31, 0x4DE958u);
    ctx->pc = 0x4DE954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE950u;
            // 0x4de954: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE958u; }
        if (ctx->pc != 0x4DE958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE958u; }
        if (ctx->pc != 0x4DE958u) { return; }
    }
    ctx->pc = 0x4DE958u;
label_4de958:
    // 0x4de958: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4de958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4de95c:
    // 0x4de95c: 0xc04f278  jal         func_13C9E0
label_4de960:
    if (ctx->pc == 0x4DE960u) {
        ctx->pc = 0x4DE960u;
            // 0x4de960: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4DE964u;
        goto label_4de964;
    }
    ctx->pc = 0x4DE95Cu;
    SET_GPR_U32(ctx, 31, 0x4DE964u);
    ctx->pc = 0x4DE960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE95Cu;
            // 0x4de960: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE964u; }
        if (ctx->pc != 0x4DE964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE964u; }
        if (ctx->pc != 0x4DE964u) { return; }
    }
    ctx->pc = 0x4DE964u;
label_4de964:
    // 0x4de964: 0xc0d1c10  jal         func_347040
label_4de968:
    if (ctx->pc == 0x4DE968u) {
        ctx->pc = 0x4DE968u;
            // 0x4de968: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DE96Cu;
        goto label_4de96c;
    }
    ctx->pc = 0x4DE964u;
    SET_GPR_U32(ctx, 31, 0x4DE96Cu);
    ctx->pc = 0x4DE968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE964u;
            // 0x4de968: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE96Cu; }
        if (ctx->pc != 0x4DE96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE96Cu; }
        if (ctx->pc != 0x4DE96Cu) { return; }
    }
    ctx->pc = 0x4DE96Cu;
label_4de96c:
    // 0x4de96c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4de96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4de970:
    // 0x4de970: 0xc04ce80  jal         func_133A00
label_4de974:
    if (ctx->pc == 0x4DE974u) {
        ctx->pc = 0x4DE974u;
            // 0x4de974: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4DE978u;
        goto label_4de978;
    }
    ctx->pc = 0x4DE970u;
    SET_GPR_U32(ctx, 31, 0x4DE978u);
    ctx->pc = 0x4DE974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE970u;
            // 0x4de974: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE978u; }
        if (ctx->pc != 0x4DE978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE978u; }
        if (ctx->pc != 0x4DE978u) { return; }
    }
    ctx->pc = 0x4DE978u;
label_4de978:
    // 0x4de978: 0xc0d4108  jal         func_350420
label_4de97c:
    if (ctx->pc == 0x4DE97Cu) {
        ctx->pc = 0x4DE980u;
        goto label_4de980;
    }
    ctx->pc = 0x4DE978u;
    SET_GPR_U32(ctx, 31, 0x4DE980u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE980u; }
        if (ctx->pc != 0x4DE980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE980u; }
        if (ctx->pc != 0x4DE980u) { return; }
    }
    ctx->pc = 0x4DE980u;
label_4de980:
    // 0x4de980: 0xc0b36b4  jal         func_2CDAD0
label_4de984:
    if (ctx->pc == 0x4DE984u) {
        ctx->pc = 0x4DE984u;
            // 0x4de984: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DE988u;
        goto label_4de988;
    }
    ctx->pc = 0x4DE980u;
    SET_GPR_U32(ctx, 31, 0x4DE988u);
    ctx->pc = 0x4DE984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE980u;
            // 0x4de984: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE988u; }
        if (ctx->pc != 0x4DE988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE988u; }
        if (ctx->pc != 0x4DE988u) { return; }
    }
    ctx->pc = 0x4DE988u;
label_4de988:
    // 0x4de988: 0xc0b9c64  jal         func_2E7190
label_4de98c:
    if (ctx->pc == 0x4DE98Cu) {
        ctx->pc = 0x4DE98Cu;
            // 0x4de98c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DE990u;
        goto label_4de990;
    }
    ctx->pc = 0x4DE988u;
    SET_GPR_U32(ctx, 31, 0x4DE990u);
    ctx->pc = 0x4DE98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE988u;
            // 0x4de98c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE990u; }
        if (ctx->pc != 0x4DE990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE990u; }
        if (ctx->pc != 0x4DE990u) { return; }
    }
    ctx->pc = 0x4DE990u;
label_4de990:
    // 0x4de990: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4de990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4de994:
    // 0x4de994: 0xc0d4104  jal         func_350410
label_4de998:
    if (ctx->pc == 0x4DE998u) {
        ctx->pc = 0x4DE998u;
            // 0x4de998: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DE99Cu;
        goto label_4de99c;
    }
    ctx->pc = 0x4DE994u;
    SET_GPR_U32(ctx, 31, 0x4DE99Cu);
    ctx->pc = 0x4DE998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE994u;
            // 0x4de998: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE99Cu; }
        if (ctx->pc != 0x4DE99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE99Cu; }
        if (ctx->pc != 0x4DE99Cu) { return; }
    }
    ctx->pc = 0x4DE99Cu;
label_4de99c:
    // 0x4de99c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4de99cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4de9a0:
    // 0x4de9a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4de9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4de9a4:
    // 0x4de9a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4de9a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4de9a8:
    // 0x4de9a8: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x4de9a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_4de9ac:
    // 0x4de9ac: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4de9acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4de9b0:
    // 0x4de9b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4de9b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4de9b4:
    // 0x4de9b4: 0xc0d40ac  jal         func_3502B0
label_4de9b8:
    if (ctx->pc == 0x4DE9B8u) {
        ctx->pc = 0x4DE9B8u;
            // 0x4de9b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4DE9BCu;
        goto label_4de9bc;
    }
    ctx->pc = 0x4DE9B4u;
    SET_GPR_U32(ctx, 31, 0x4DE9BCu);
    ctx->pc = 0x4DE9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE9B4u;
            // 0x4de9b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE9BCu; }
        if (ctx->pc != 0x4DE9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE9BCu; }
        if (ctx->pc != 0x4DE9BCu) { return; }
    }
    ctx->pc = 0x4DE9BCu;
label_4de9bc:
    // 0x4de9bc: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4de9bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4de9c0:
    // 0x4de9c0: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
label_4de9c4:
    if (ctx->pc == 0x4DE9C4u) {
        ctx->pc = 0x4DE9C4u;
            // 0x4de9c4: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x4DE9C8u;
        goto label_4de9c8;
    }
    ctx->pc = 0x4DE9C0u;
    {
        const bool branch_taken_0x4de9c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DE9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE9C0u;
            // 0x4de9c4: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de9c0) {
            ctx->pc = 0x4DEA30u;
            goto label_4dea30;
        }
    }
    ctx->pc = 0x4DE9C8u;
label_4de9c8:
    // 0x4de9c8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4de9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4de9cc:
    // 0x4de9cc: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x4de9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_4de9d0:
    // 0x4de9d0: 0xc137ab0  jal         func_4DEAC0
label_4de9d4:
    if (ctx->pc == 0x4DE9D4u) {
        ctx->pc = 0x4DE9D4u;
            // 0x4de9d4: 0x27a60188  addiu       $a2, $sp, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
        ctx->pc = 0x4DE9D8u;
        goto label_4de9d8;
    }
    ctx->pc = 0x4DE9D0u;
    SET_GPR_U32(ctx, 31, 0x4DE9D8u);
    ctx->pc = 0x4DE9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE9D0u;
            // 0x4de9d4: 0x27a60188  addiu       $a2, $sp, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DEAC0u;
    if (runtime->hasFunction(0x4DEAC0u)) {
        auto targetFn = runtime->lookupFunction(0x4DEAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE9D8u; }
        if (ctx->pc != 0x4DE9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DEAC0_0x4deac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE9D8u; }
        if (ctx->pc != 0x4DE9D8u) { return; }
    }
    ctx->pc = 0x4DE9D8u;
label_4de9d8:
    // 0x4de9d8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4de9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4de9dc:
    // 0x4de9dc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x4de9dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4de9e0:
    // 0x4de9e0: 0xc04cd60  jal         func_133580
label_4de9e4:
    if (ctx->pc == 0x4DE9E4u) {
        ctx->pc = 0x4DE9E4u;
            // 0x4de9e4: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4DE9E8u;
        goto label_4de9e8;
    }
    ctx->pc = 0x4DE9E0u;
    SET_GPR_U32(ctx, 31, 0x4DE9E8u);
    ctx->pc = 0x4DE9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE9E0u;
            // 0x4de9e4: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE9E8u; }
        if (ctx->pc != 0x4DE9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE9E8u; }
        if (ctx->pc != 0x4DE9E8u) { return; }
    }
    ctx->pc = 0x4DE9E8u;
label_4de9e8:
    // 0x4de9e8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4de9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4de9ec:
    // 0x4de9ec: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x4de9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_4de9f0:
    // 0x4de9f0: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4de9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4de9f4:
    // 0x4de9f4: 0xc04e4a4  jal         func_139290
label_4de9f8:
    if (ctx->pc == 0x4DE9F8u) {
        ctx->pc = 0x4DE9F8u;
            // 0x4de9f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DE9FCu;
        goto label_4de9fc;
    }
    ctx->pc = 0x4DE9F4u;
    SET_GPR_U32(ctx, 31, 0x4DE9FCu);
    ctx->pc = 0x4DE9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE9F4u;
            // 0x4de9f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE9FCu; }
        if (ctx->pc != 0x4DE9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE9FCu; }
        if (ctx->pc != 0x4DE9FCu) { return; }
    }
    ctx->pc = 0x4DE9FCu;
label_4de9fc:
    // 0x4de9fc: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x4de9fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4dea00:
    // 0x4dea00: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4dea00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4dea04:
    // 0x4dea04: 0x320f809  jalr        $t9
label_4dea08:
    if (ctx->pc == 0x4DEA08u) {
        ctx->pc = 0x4DEA08u;
            // 0x4dea08: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DEA0Cu;
        goto label_4dea0c;
    }
    ctx->pc = 0x4DEA04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DEA0Cu);
        ctx->pc = 0x4DEA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DEA04u;
            // 0x4dea08: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DEA0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DEA0Cu; }
            if (ctx->pc != 0x4DEA0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4DEA0Cu;
label_4dea0c:
    // 0x4dea0c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x4dea0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_4dea10:
    // 0x4dea10: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4dea10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4dea14:
    // 0x4dea14: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x4dea14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_4dea18:
    // 0x4dea18: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x4dea18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4dea1c:
    // 0x4dea1c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4dea1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4dea20:
    // 0x4dea20: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x4dea20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_4dea24:
    // 0x4dea24: 0xc04cfcc  jal         func_133F30
label_4dea28:
    if (ctx->pc == 0x4DEA28u) {
        ctx->pc = 0x4DEA28u;
            // 0x4dea28: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DEA2Cu;
        goto label_4dea2c;
    }
    ctx->pc = 0x4DEA24u;
    SET_GPR_U32(ctx, 31, 0x4DEA2Cu);
    ctx->pc = 0x4DEA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DEA24u;
            // 0x4dea28: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DEA2Cu; }
        if (ctx->pc != 0x4DEA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DEA2Cu; }
        if (ctx->pc != 0x4DEA2Cu) { return; }
    }
    ctx->pc = 0x4DEA2Cu;
label_4dea2c:
    // 0x4dea2c: 0x0  nop
    ctx->pc = 0x4dea2cu;
    // NOP
label_4dea30:
    // 0x4dea30: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x4dea30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_4dea34:
    // 0x4dea34: 0x2b7182b  sltu        $v1, $s5, $s7
    ctx->pc = 0x4dea34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_4dea38:
    // 0x4dea38: 0x1460ffba  bnez        $v1, . + 4 + (-0x46 << 2)
label_4dea3c:
    if (ctx->pc == 0x4DEA3Cu) {
        ctx->pc = 0x4DEA3Cu;
            // 0x4dea3c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x4DEA40u;
        goto label_4dea40;
    }
    ctx->pc = 0x4DEA38u;
    {
        const bool branch_taken_0x4dea38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DEA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DEA38u;
            // 0x4dea3c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dea38) {
            ctx->pc = 0x4DE924u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4de924;
        }
    }
    ctx->pc = 0x4DEA40u;
label_4dea40:
    // 0x4dea40: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4dea40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4dea44:
    // 0x4dea44: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x4dea44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4dea48:
    // 0x4dea48: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
label_4dea4c:
    if (ctx->pc == 0x4DEA4Cu) {
        ctx->pc = 0x4DEA50u;
        goto label_4dea50;
    }
    ctx->pc = 0x4DEA48u;
    {
        const bool branch_taken_0x4dea48 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x4dea48) {
            ctx->pc = 0x4DEA84u;
            goto label_4dea84;
        }
    }
    ctx->pc = 0x4DEA50u;
label_4dea50:
    // 0x4dea50: 0xc04e738  jal         func_139CE0
label_4dea54:
    if (ctx->pc == 0x4DEA54u) {
        ctx->pc = 0x4DEA54u;
            // 0x4dea54: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x4DEA58u;
        goto label_4dea58;
    }
    ctx->pc = 0x4DEA50u;
    SET_GPR_U32(ctx, 31, 0x4DEA58u);
    ctx->pc = 0x4DEA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DEA50u;
            // 0x4dea54: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DEA58u; }
        if (ctx->pc != 0x4DEA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DEA58u; }
        if (ctx->pc != 0x4DEA58u) { return; }
    }
    ctx->pc = 0x4DEA58u;
label_4dea58:
    // 0x4dea58: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4dea58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4dea5c:
    // 0x4dea5c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4dea5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4dea60:
    // 0x4dea60: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x4dea60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_4dea64:
    // 0x4dea64: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4dea64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4dea68:
    // 0x4dea68: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4dea68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dea6c:
    // 0x4dea6c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4dea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4dea70:
    // 0x4dea70: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x4dea70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_4dea74:
    // 0x4dea74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4dea74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4dea78:
    // 0x4dea78: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x4dea78u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_4dea7c:
    // 0x4dea7c: 0xc055d28  jal         func_1574A0
label_4dea80:
    if (ctx->pc == 0x4DEA80u) {
        ctx->pc = 0x4DEA80u;
            // 0x4dea80: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DEA84u;
        goto label_4dea84;
    }
    ctx->pc = 0x4DEA7Cu;
    SET_GPR_U32(ctx, 31, 0x4DEA84u);
    ctx->pc = 0x4DEA80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DEA7Cu;
            // 0x4dea80: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DEA84u; }
        if (ctx->pc != 0x4DEA84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DEA84u; }
        if (ctx->pc != 0x4DEA84u) { return; }
    }
    ctx->pc = 0x4DEA84u;
label_4dea84:
    // 0x4dea84: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x4dea84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_4dea88:
    // 0x4dea88: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4dea88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4dea8c:
    // 0x4dea8c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x4dea8cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4dea90:
    // 0x4dea90: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4dea90u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4dea94:
    // 0x4dea94: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4dea94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4dea98:
    // 0x4dea98: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4dea98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4dea9c:
    // 0x4dea9c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4dea9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4deaa0:
    // 0x4deaa0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4deaa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4deaa4:
    // 0x4deaa4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4deaa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4deaa8:
    // 0x4deaa8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4deaa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4deaac:
    // 0x4deaac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4deaacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4deab0:
    // 0x4deab0: 0x3e00008  jr          $ra
label_4deab4:
    if (ctx->pc == 0x4DEAB4u) {
        ctx->pc = 0x4DEAB4u;
            // 0x4deab4: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x4DEAB8u;
        goto label_4deab8;
    }
    ctx->pc = 0x4DEAB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DEAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DEAB0u;
            // 0x4deab4: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DEAB8u;
label_4deab8:
    // 0x4deab8: 0x0  nop
    ctx->pc = 0x4deab8u;
    // NOP
label_4deabc:
    // 0x4deabc: 0x0  nop
    ctx->pc = 0x4deabcu;
    // NOP
}
