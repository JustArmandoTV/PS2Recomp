#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DC570
// Address: 0x2dc570 - 0x2dcad0
void sub_002DC570_0x2dc570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC570_0x2dc570");
#endif

    switch (ctx->pc) {
        case 0x2dc570u: goto label_2dc570;
        case 0x2dc574u: goto label_2dc574;
        case 0x2dc578u: goto label_2dc578;
        case 0x2dc57cu: goto label_2dc57c;
        case 0x2dc580u: goto label_2dc580;
        case 0x2dc584u: goto label_2dc584;
        case 0x2dc588u: goto label_2dc588;
        case 0x2dc58cu: goto label_2dc58c;
        case 0x2dc590u: goto label_2dc590;
        case 0x2dc594u: goto label_2dc594;
        case 0x2dc598u: goto label_2dc598;
        case 0x2dc59cu: goto label_2dc59c;
        case 0x2dc5a0u: goto label_2dc5a0;
        case 0x2dc5a4u: goto label_2dc5a4;
        case 0x2dc5a8u: goto label_2dc5a8;
        case 0x2dc5acu: goto label_2dc5ac;
        case 0x2dc5b0u: goto label_2dc5b0;
        case 0x2dc5b4u: goto label_2dc5b4;
        case 0x2dc5b8u: goto label_2dc5b8;
        case 0x2dc5bcu: goto label_2dc5bc;
        case 0x2dc5c0u: goto label_2dc5c0;
        case 0x2dc5c4u: goto label_2dc5c4;
        case 0x2dc5c8u: goto label_2dc5c8;
        case 0x2dc5ccu: goto label_2dc5cc;
        case 0x2dc5d0u: goto label_2dc5d0;
        case 0x2dc5d4u: goto label_2dc5d4;
        case 0x2dc5d8u: goto label_2dc5d8;
        case 0x2dc5dcu: goto label_2dc5dc;
        case 0x2dc5e0u: goto label_2dc5e0;
        case 0x2dc5e4u: goto label_2dc5e4;
        case 0x2dc5e8u: goto label_2dc5e8;
        case 0x2dc5ecu: goto label_2dc5ec;
        case 0x2dc5f0u: goto label_2dc5f0;
        case 0x2dc5f4u: goto label_2dc5f4;
        case 0x2dc5f8u: goto label_2dc5f8;
        case 0x2dc5fcu: goto label_2dc5fc;
        case 0x2dc600u: goto label_2dc600;
        case 0x2dc604u: goto label_2dc604;
        case 0x2dc608u: goto label_2dc608;
        case 0x2dc60cu: goto label_2dc60c;
        case 0x2dc610u: goto label_2dc610;
        case 0x2dc614u: goto label_2dc614;
        case 0x2dc618u: goto label_2dc618;
        case 0x2dc61cu: goto label_2dc61c;
        case 0x2dc620u: goto label_2dc620;
        case 0x2dc624u: goto label_2dc624;
        case 0x2dc628u: goto label_2dc628;
        case 0x2dc62cu: goto label_2dc62c;
        case 0x2dc630u: goto label_2dc630;
        case 0x2dc634u: goto label_2dc634;
        case 0x2dc638u: goto label_2dc638;
        case 0x2dc63cu: goto label_2dc63c;
        case 0x2dc640u: goto label_2dc640;
        case 0x2dc644u: goto label_2dc644;
        case 0x2dc648u: goto label_2dc648;
        case 0x2dc64cu: goto label_2dc64c;
        case 0x2dc650u: goto label_2dc650;
        case 0x2dc654u: goto label_2dc654;
        case 0x2dc658u: goto label_2dc658;
        case 0x2dc65cu: goto label_2dc65c;
        case 0x2dc660u: goto label_2dc660;
        case 0x2dc664u: goto label_2dc664;
        case 0x2dc668u: goto label_2dc668;
        case 0x2dc66cu: goto label_2dc66c;
        case 0x2dc670u: goto label_2dc670;
        case 0x2dc674u: goto label_2dc674;
        case 0x2dc678u: goto label_2dc678;
        case 0x2dc67cu: goto label_2dc67c;
        case 0x2dc680u: goto label_2dc680;
        case 0x2dc684u: goto label_2dc684;
        case 0x2dc688u: goto label_2dc688;
        case 0x2dc68cu: goto label_2dc68c;
        case 0x2dc690u: goto label_2dc690;
        case 0x2dc694u: goto label_2dc694;
        case 0x2dc698u: goto label_2dc698;
        case 0x2dc69cu: goto label_2dc69c;
        case 0x2dc6a0u: goto label_2dc6a0;
        case 0x2dc6a4u: goto label_2dc6a4;
        case 0x2dc6a8u: goto label_2dc6a8;
        case 0x2dc6acu: goto label_2dc6ac;
        case 0x2dc6b0u: goto label_2dc6b0;
        case 0x2dc6b4u: goto label_2dc6b4;
        case 0x2dc6b8u: goto label_2dc6b8;
        case 0x2dc6bcu: goto label_2dc6bc;
        case 0x2dc6c0u: goto label_2dc6c0;
        case 0x2dc6c4u: goto label_2dc6c4;
        case 0x2dc6c8u: goto label_2dc6c8;
        case 0x2dc6ccu: goto label_2dc6cc;
        case 0x2dc6d0u: goto label_2dc6d0;
        case 0x2dc6d4u: goto label_2dc6d4;
        case 0x2dc6d8u: goto label_2dc6d8;
        case 0x2dc6dcu: goto label_2dc6dc;
        case 0x2dc6e0u: goto label_2dc6e0;
        case 0x2dc6e4u: goto label_2dc6e4;
        case 0x2dc6e8u: goto label_2dc6e8;
        case 0x2dc6ecu: goto label_2dc6ec;
        case 0x2dc6f0u: goto label_2dc6f0;
        case 0x2dc6f4u: goto label_2dc6f4;
        case 0x2dc6f8u: goto label_2dc6f8;
        case 0x2dc6fcu: goto label_2dc6fc;
        case 0x2dc700u: goto label_2dc700;
        case 0x2dc704u: goto label_2dc704;
        case 0x2dc708u: goto label_2dc708;
        case 0x2dc70cu: goto label_2dc70c;
        case 0x2dc710u: goto label_2dc710;
        case 0x2dc714u: goto label_2dc714;
        case 0x2dc718u: goto label_2dc718;
        case 0x2dc71cu: goto label_2dc71c;
        case 0x2dc720u: goto label_2dc720;
        case 0x2dc724u: goto label_2dc724;
        case 0x2dc728u: goto label_2dc728;
        case 0x2dc72cu: goto label_2dc72c;
        case 0x2dc730u: goto label_2dc730;
        case 0x2dc734u: goto label_2dc734;
        case 0x2dc738u: goto label_2dc738;
        case 0x2dc73cu: goto label_2dc73c;
        case 0x2dc740u: goto label_2dc740;
        case 0x2dc744u: goto label_2dc744;
        case 0x2dc748u: goto label_2dc748;
        case 0x2dc74cu: goto label_2dc74c;
        case 0x2dc750u: goto label_2dc750;
        case 0x2dc754u: goto label_2dc754;
        case 0x2dc758u: goto label_2dc758;
        case 0x2dc75cu: goto label_2dc75c;
        case 0x2dc760u: goto label_2dc760;
        case 0x2dc764u: goto label_2dc764;
        case 0x2dc768u: goto label_2dc768;
        case 0x2dc76cu: goto label_2dc76c;
        case 0x2dc770u: goto label_2dc770;
        case 0x2dc774u: goto label_2dc774;
        case 0x2dc778u: goto label_2dc778;
        case 0x2dc77cu: goto label_2dc77c;
        case 0x2dc780u: goto label_2dc780;
        case 0x2dc784u: goto label_2dc784;
        case 0x2dc788u: goto label_2dc788;
        case 0x2dc78cu: goto label_2dc78c;
        case 0x2dc790u: goto label_2dc790;
        case 0x2dc794u: goto label_2dc794;
        case 0x2dc798u: goto label_2dc798;
        case 0x2dc79cu: goto label_2dc79c;
        case 0x2dc7a0u: goto label_2dc7a0;
        case 0x2dc7a4u: goto label_2dc7a4;
        case 0x2dc7a8u: goto label_2dc7a8;
        case 0x2dc7acu: goto label_2dc7ac;
        case 0x2dc7b0u: goto label_2dc7b0;
        case 0x2dc7b4u: goto label_2dc7b4;
        case 0x2dc7b8u: goto label_2dc7b8;
        case 0x2dc7bcu: goto label_2dc7bc;
        case 0x2dc7c0u: goto label_2dc7c0;
        case 0x2dc7c4u: goto label_2dc7c4;
        case 0x2dc7c8u: goto label_2dc7c8;
        case 0x2dc7ccu: goto label_2dc7cc;
        case 0x2dc7d0u: goto label_2dc7d0;
        case 0x2dc7d4u: goto label_2dc7d4;
        case 0x2dc7d8u: goto label_2dc7d8;
        case 0x2dc7dcu: goto label_2dc7dc;
        case 0x2dc7e0u: goto label_2dc7e0;
        case 0x2dc7e4u: goto label_2dc7e4;
        case 0x2dc7e8u: goto label_2dc7e8;
        case 0x2dc7ecu: goto label_2dc7ec;
        case 0x2dc7f0u: goto label_2dc7f0;
        case 0x2dc7f4u: goto label_2dc7f4;
        case 0x2dc7f8u: goto label_2dc7f8;
        case 0x2dc7fcu: goto label_2dc7fc;
        case 0x2dc800u: goto label_2dc800;
        case 0x2dc804u: goto label_2dc804;
        case 0x2dc808u: goto label_2dc808;
        case 0x2dc80cu: goto label_2dc80c;
        case 0x2dc810u: goto label_2dc810;
        case 0x2dc814u: goto label_2dc814;
        case 0x2dc818u: goto label_2dc818;
        case 0x2dc81cu: goto label_2dc81c;
        case 0x2dc820u: goto label_2dc820;
        case 0x2dc824u: goto label_2dc824;
        case 0x2dc828u: goto label_2dc828;
        case 0x2dc82cu: goto label_2dc82c;
        case 0x2dc830u: goto label_2dc830;
        case 0x2dc834u: goto label_2dc834;
        case 0x2dc838u: goto label_2dc838;
        case 0x2dc83cu: goto label_2dc83c;
        case 0x2dc840u: goto label_2dc840;
        case 0x2dc844u: goto label_2dc844;
        case 0x2dc848u: goto label_2dc848;
        case 0x2dc84cu: goto label_2dc84c;
        case 0x2dc850u: goto label_2dc850;
        case 0x2dc854u: goto label_2dc854;
        case 0x2dc858u: goto label_2dc858;
        case 0x2dc85cu: goto label_2dc85c;
        case 0x2dc860u: goto label_2dc860;
        case 0x2dc864u: goto label_2dc864;
        case 0x2dc868u: goto label_2dc868;
        case 0x2dc86cu: goto label_2dc86c;
        case 0x2dc870u: goto label_2dc870;
        case 0x2dc874u: goto label_2dc874;
        case 0x2dc878u: goto label_2dc878;
        case 0x2dc87cu: goto label_2dc87c;
        case 0x2dc880u: goto label_2dc880;
        case 0x2dc884u: goto label_2dc884;
        case 0x2dc888u: goto label_2dc888;
        case 0x2dc88cu: goto label_2dc88c;
        case 0x2dc890u: goto label_2dc890;
        case 0x2dc894u: goto label_2dc894;
        case 0x2dc898u: goto label_2dc898;
        case 0x2dc89cu: goto label_2dc89c;
        case 0x2dc8a0u: goto label_2dc8a0;
        case 0x2dc8a4u: goto label_2dc8a4;
        case 0x2dc8a8u: goto label_2dc8a8;
        case 0x2dc8acu: goto label_2dc8ac;
        case 0x2dc8b0u: goto label_2dc8b0;
        case 0x2dc8b4u: goto label_2dc8b4;
        case 0x2dc8b8u: goto label_2dc8b8;
        case 0x2dc8bcu: goto label_2dc8bc;
        case 0x2dc8c0u: goto label_2dc8c0;
        case 0x2dc8c4u: goto label_2dc8c4;
        case 0x2dc8c8u: goto label_2dc8c8;
        case 0x2dc8ccu: goto label_2dc8cc;
        case 0x2dc8d0u: goto label_2dc8d0;
        case 0x2dc8d4u: goto label_2dc8d4;
        case 0x2dc8d8u: goto label_2dc8d8;
        case 0x2dc8dcu: goto label_2dc8dc;
        case 0x2dc8e0u: goto label_2dc8e0;
        case 0x2dc8e4u: goto label_2dc8e4;
        case 0x2dc8e8u: goto label_2dc8e8;
        case 0x2dc8ecu: goto label_2dc8ec;
        case 0x2dc8f0u: goto label_2dc8f0;
        case 0x2dc8f4u: goto label_2dc8f4;
        case 0x2dc8f8u: goto label_2dc8f8;
        case 0x2dc8fcu: goto label_2dc8fc;
        case 0x2dc900u: goto label_2dc900;
        case 0x2dc904u: goto label_2dc904;
        case 0x2dc908u: goto label_2dc908;
        case 0x2dc90cu: goto label_2dc90c;
        case 0x2dc910u: goto label_2dc910;
        case 0x2dc914u: goto label_2dc914;
        case 0x2dc918u: goto label_2dc918;
        case 0x2dc91cu: goto label_2dc91c;
        case 0x2dc920u: goto label_2dc920;
        case 0x2dc924u: goto label_2dc924;
        case 0x2dc928u: goto label_2dc928;
        case 0x2dc92cu: goto label_2dc92c;
        case 0x2dc930u: goto label_2dc930;
        case 0x2dc934u: goto label_2dc934;
        case 0x2dc938u: goto label_2dc938;
        case 0x2dc93cu: goto label_2dc93c;
        case 0x2dc940u: goto label_2dc940;
        case 0x2dc944u: goto label_2dc944;
        case 0x2dc948u: goto label_2dc948;
        case 0x2dc94cu: goto label_2dc94c;
        case 0x2dc950u: goto label_2dc950;
        case 0x2dc954u: goto label_2dc954;
        case 0x2dc958u: goto label_2dc958;
        case 0x2dc95cu: goto label_2dc95c;
        case 0x2dc960u: goto label_2dc960;
        case 0x2dc964u: goto label_2dc964;
        case 0x2dc968u: goto label_2dc968;
        case 0x2dc96cu: goto label_2dc96c;
        case 0x2dc970u: goto label_2dc970;
        case 0x2dc974u: goto label_2dc974;
        case 0x2dc978u: goto label_2dc978;
        case 0x2dc97cu: goto label_2dc97c;
        case 0x2dc980u: goto label_2dc980;
        case 0x2dc984u: goto label_2dc984;
        case 0x2dc988u: goto label_2dc988;
        case 0x2dc98cu: goto label_2dc98c;
        case 0x2dc990u: goto label_2dc990;
        case 0x2dc994u: goto label_2dc994;
        case 0x2dc998u: goto label_2dc998;
        case 0x2dc99cu: goto label_2dc99c;
        case 0x2dc9a0u: goto label_2dc9a0;
        case 0x2dc9a4u: goto label_2dc9a4;
        case 0x2dc9a8u: goto label_2dc9a8;
        case 0x2dc9acu: goto label_2dc9ac;
        case 0x2dc9b0u: goto label_2dc9b0;
        case 0x2dc9b4u: goto label_2dc9b4;
        case 0x2dc9b8u: goto label_2dc9b8;
        case 0x2dc9bcu: goto label_2dc9bc;
        case 0x2dc9c0u: goto label_2dc9c0;
        case 0x2dc9c4u: goto label_2dc9c4;
        case 0x2dc9c8u: goto label_2dc9c8;
        case 0x2dc9ccu: goto label_2dc9cc;
        case 0x2dc9d0u: goto label_2dc9d0;
        case 0x2dc9d4u: goto label_2dc9d4;
        case 0x2dc9d8u: goto label_2dc9d8;
        case 0x2dc9dcu: goto label_2dc9dc;
        case 0x2dc9e0u: goto label_2dc9e0;
        case 0x2dc9e4u: goto label_2dc9e4;
        case 0x2dc9e8u: goto label_2dc9e8;
        case 0x2dc9ecu: goto label_2dc9ec;
        case 0x2dc9f0u: goto label_2dc9f0;
        case 0x2dc9f4u: goto label_2dc9f4;
        case 0x2dc9f8u: goto label_2dc9f8;
        case 0x2dc9fcu: goto label_2dc9fc;
        case 0x2dca00u: goto label_2dca00;
        case 0x2dca04u: goto label_2dca04;
        case 0x2dca08u: goto label_2dca08;
        case 0x2dca0cu: goto label_2dca0c;
        case 0x2dca10u: goto label_2dca10;
        case 0x2dca14u: goto label_2dca14;
        case 0x2dca18u: goto label_2dca18;
        case 0x2dca1cu: goto label_2dca1c;
        case 0x2dca20u: goto label_2dca20;
        case 0x2dca24u: goto label_2dca24;
        case 0x2dca28u: goto label_2dca28;
        case 0x2dca2cu: goto label_2dca2c;
        case 0x2dca30u: goto label_2dca30;
        case 0x2dca34u: goto label_2dca34;
        case 0x2dca38u: goto label_2dca38;
        case 0x2dca3cu: goto label_2dca3c;
        case 0x2dca40u: goto label_2dca40;
        case 0x2dca44u: goto label_2dca44;
        case 0x2dca48u: goto label_2dca48;
        case 0x2dca4cu: goto label_2dca4c;
        case 0x2dca50u: goto label_2dca50;
        case 0x2dca54u: goto label_2dca54;
        case 0x2dca58u: goto label_2dca58;
        case 0x2dca5cu: goto label_2dca5c;
        case 0x2dca60u: goto label_2dca60;
        case 0x2dca64u: goto label_2dca64;
        case 0x2dca68u: goto label_2dca68;
        case 0x2dca6cu: goto label_2dca6c;
        case 0x2dca70u: goto label_2dca70;
        case 0x2dca74u: goto label_2dca74;
        case 0x2dca78u: goto label_2dca78;
        case 0x2dca7cu: goto label_2dca7c;
        case 0x2dca80u: goto label_2dca80;
        case 0x2dca84u: goto label_2dca84;
        case 0x2dca88u: goto label_2dca88;
        case 0x2dca8cu: goto label_2dca8c;
        case 0x2dca90u: goto label_2dca90;
        case 0x2dca94u: goto label_2dca94;
        case 0x2dca98u: goto label_2dca98;
        case 0x2dca9cu: goto label_2dca9c;
        case 0x2dcaa0u: goto label_2dcaa0;
        case 0x2dcaa4u: goto label_2dcaa4;
        case 0x2dcaa8u: goto label_2dcaa8;
        case 0x2dcaacu: goto label_2dcaac;
        case 0x2dcab0u: goto label_2dcab0;
        case 0x2dcab4u: goto label_2dcab4;
        case 0x2dcab8u: goto label_2dcab8;
        case 0x2dcabcu: goto label_2dcabc;
        case 0x2dcac0u: goto label_2dcac0;
        case 0x2dcac4u: goto label_2dcac4;
        case 0x2dcac8u: goto label_2dcac8;
        case 0x2dcaccu: goto label_2dcacc;
        default: break;
    }

    ctx->pc = 0x2dc570u;

label_2dc570:
    // 0x2dc570: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2dc570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2dc574:
    // 0x2dc574: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2dc574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2dc578:
    // 0x2dc578: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2dc578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2dc57c:
    // 0x2dc57c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2dc57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2dc580:
    // 0x2dc580: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2dc580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2dc584:
    // 0x2dc584: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2dc584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2dc588:
    // 0x2dc588: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2dc588u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2dc58c:
    // 0x2dc58c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dc58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2dc590:
    // 0x2dc590: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dc590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2dc594:
    // 0x2dc594: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x2dc594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2dc598:
    // 0x2dc598: 0x14800042  bnez        $a0, . + 4 + (0x42 << 2)
label_2dc59c:
    if (ctx->pc == 0x2DC59Cu) {
        ctx->pc = 0x2DC59Cu;
            // 0x2dc59c: 0x8c70e3e0  lw          $s0, -0x1C20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
        ctx->pc = 0x2DC5A0u;
        goto label_2dc5a0;
    }
    ctx->pc = 0x2DC598u;
    {
        const bool branch_taken_0x2dc598 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC598u;
            // 0x2dc59c: 0x8c70e3e0  lw          $s0, -0x1C20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc598) {
            ctx->pc = 0x2DC6A4u;
            goto label_2dc6a4;
        }
    }
    ctx->pc = 0x2DC5A0u;
label_2dc5a0:
    // 0x2dc5a0: 0xe66c02b4  swc1        $f12, 0x2B4($s3)
    ctx->pc = 0x2dc5a0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 692), bits); }
label_2dc5a4:
    // 0x2dc5a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2dc5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2dc5a8:
    // 0x2dc5a8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2dc5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2dc5ac:
    // 0x2dc5ac: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2dc5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2dc5b0:
    // 0x2dc5b0: 0xc0a7a88  jal         func_29EA20
label_2dc5b4:
    if (ctx->pc == 0x2DC5B4u) {
        ctx->pc = 0x2DC5B4u;
            // 0x2dc5b4: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x2DC5B8u;
        goto label_2dc5b8;
    }
    ctx->pc = 0x2DC5B0u;
    SET_GPR_U32(ctx, 31, 0x2DC5B8u);
    ctx->pc = 0x2DC5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC5B0u;
            // 0x2dc5b4: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC5B8u; }
        if (ctx->pc != 0x2DC5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC5B8u; }
        if (ctx->pc != 0x2DC5B8u) { return; }
    }
    ctx->pc = 0x2DC5B8u;
label_2dc5b8:
    // 0x2dc5b8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2dc5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2dc5bc:
    // 0x2dc5bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2dc5bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dc5c0:
    // 0x2dc5c0: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_2dc5c4:
    if (ctx->pc == 0x2DC5C4u) {
        ctx->pc = 0x2DC5C4u;
            // 0x2dc5c4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2DC5C8u;
        goto label_2dc5c8;
    }
    ctx->pc = 0x2DC5C0u;
    {
        const bool branch_taken_0x2dc5c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC5C0u;
            // 0x2dc5c4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc5c0) {
            ctx->pc = 0x2DC5D8u;
            goto label_2dc5d8;
        }
    }
    ctx->pc = 0x2DC5C8u;
label_2dc5c8:
    // 0x2dc5c8: 0xc66c02b4  lwc1        $f12, 0x2B4($s3)
    ctx->pc = 0x2dc5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2dc5cc:
    // 0x2dc5cc: 0xc0827ac  jal         func_209EB0
label_2dc5d0:
    if (ctx->pc == 0x2DC5D0u) {
        ctx->pc = 0x2DC5D0u;
            // 0x2dc5d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC5D4u;
        goto label_2dc5d4;
    }
    ctx->pc = 0x2DC5CCu;
    SET_GPR_U32(ctx, 31, 0x2DC5D4u);
    ctx->pc = 0x2DC5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC5CCu;
            // 0x2dc5d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC5D4u; }
        if (ctx->pc != 0x2DC5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC5D4u; }
        if (ctx->pc != 0x2DC5D4u) { return; }
    }
    ctx->pc = 0x2DC5D4u;
label_2dc5d4:
    // 0x2dc5d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2dc5d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dc5d8:
    // 0x2dc5d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2dc5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2dc5dc:
    // 0x2dc5dc: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x2dc5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_2dc5e0:
    // 0x2dc5e0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2dc5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2dc5e4:
    // 0x2dc5e4: 0xc0a7a88  jal         func_29EA20
label_2dc5e8:
    if (ctx->pc == 0x2DC5E8u) {
        ctx->pc = 0x2DC5E8u;
            // 0x2dc5e8: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x2DC5ECu;
        goto label_2dc5ec;
    }
    ctx->pc = 0x2DC5E4u;
    SET_GPR_U32(ctx, 31, 0x2DC5ECu);
    ctx->pc = 0x2DC5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC5E4u;
            // 0x2dc5e8: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC5ECu; }
        if (ctx->pc != 0x2DC5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC5ECu; }
        if (ctx->pc != 0x2DC5ECu) { return; }
    }
    ctx->pc = 0x2DC5ECu;
label_2dc5ec:
    // 0x2dc5ec: 0x24030150  addiu       $v1, $zero, 0x150
    ctx->pc = 0x2dc5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_2dc5f0:
    // 0x2dc5f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2dc5f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dc5f4:
    // 0x2dc5f4: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_2dc5f8:
    if (ctx->pc == 0x2DC5F8u) {
        ctx->pc = 0x2DC5F8u;
            // 0x2dc5f8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2DC5FCu;
        goto label_2dc5fc;
    }
    ctx->pc = 0x2DC5F4u;
    {
        const bool branch_taken_0x2dc5f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC5F4u;
            // 0x2dc5f8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc5f4) {
            ctx->pc = 0x2DC62Cu;
            goto label_2dc62c;
        }
    }
    ctx->pc = 0x2DC5FCu;
label_2dc5fc:
    // 0x2dc5fc: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x2dc5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_2dc600:
    // 0x2dc600: 0x8e740000  lw          $s4, 0x0($s3)
    ctx->pc = 0x2dc600u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2dc604:
    // 0x2dc604: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dc604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dc608:
    // 0x2dc608: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2dc608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dc60c:
    // 0x2dc60c: 0x24c6d6e0  addiu       $a2, $a2, -0x2920
    ctx->pc = 0x2dc60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956768));
label_2dc610:
    // 0x2dc610: 0xc08afe0  jal         func_22BF80
label_2dc614:
    if (ctx->pc == 0x2DC614u) {
        ctx->pc = 0x2DC614u;
            // 0x2dc614: 0x3c070004  lui         $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4 << 16));
        ctx->pc = 0x2DC618u;
        goto label_2dc618;
    }
    ctx->pc = 0x2DC610u;
    SET_GPR_U32(ctx, 31, 0x2DC618u);
    ctx->pc = 0x2DC614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC610u;
            // 0x2dc614: 0x3c070004  lui         $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BF80u;
    if (runtime->hasFunction(0x22BF80u)) {
        auto targetFn = runtime->lookupFunction(0x22BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC618u; }
        if (ctx->pc != 0x2DC618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BF80_0x22bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC618u; }
        if (ctx->pc != 0x2DC618u) { return; }
    }
    ctx->pc = 0x2DC618u;
label_2dc618:
    // 0x2dc618: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2dc618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2dc61c:
    // 0x2dc61c: 0x244225d0  addiu       $v0, $v0, 0x25D0
    ctx->pc = 0x2dc61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9680));
label_2dc620:
    // 0x2dc620: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2dc620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2dc624:
    // 0x2dc624: 0xae200140  sw          $zero, 0x140($s1)
    ctx->pc = 0x2dc624u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 0));
label_2dc628:
    // 0x2dc628: 0xae34000c  sw          $s4, 0xC($s1)
    ctx->pc = 0x2dc628u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 20));
label_2dc62c:
    // 0x2dc62c: 0xae710010  sw          $s1, 0x10($s3)
    ctx->pc = 0x2dc62cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 17));
label_2dc630:
    // 0x2dc630: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x2dc630u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_2dc634:
    // 0x2dc634: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_2dc638:
    if (ctx->pc == 0x2DC638u) {
        ctx->pc = 0x2DC638u;
            // 0x2dc638: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x2DC63Cu;
        goto label_2dc63c;
    }
    ctx->pc = 0x2DC634u;
    {
        const bool branch_taken_0x2dc634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc634) {
            ctx->pc = 0x2DC638u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC634u;
            // 0x2dc638: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DC678u;
            goto label_2dc678;
        }
    }
    ctx->pc = 0x2DC63Cu;
label_2dc63c:
    // 0x2dc63c: 0x86420006  lh          $v0, 0x6($s2)
    ctx->pc = 0x2dc63cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_2dc640:
    // 0x2dc640: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2dc640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2dc644:
    // 0x2dc644: 0xa6420006  sh          $v0, 0x6($s2)
    ctx->pc = 0x2dc644u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
label_2dc648:
    // 0x2dc648: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2dc648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_2dc64c:
    // 0x2dc64c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2dc64cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2dc650:
    // 0x2dc650: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2dc654:
    if (ctx->pc == 0x2DC654u) {
        ctx->pc = 0x2DC658u;
        goto label_2dc658;
    }
    ctx->pc = 0x2DC650u;
    {
        const bool branch_taken_0x2dc650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc650) {
            ctx->pc = 0x2DC674u;
            goto label_2dc674;
        }
    }
    ctx->pc = 0x2DC658u;
label_2dc658:
    // 0x2dc658: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_2dc65c:
    if (ctx->pc == 0x2DC65Cu) {
        ctx->pc = 0x2DC660u;
        goto label_2dc660;
    }
    ctx->pc = 0x2DC658u;
    {
        const bool branch_taken_0x2dc658 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc658) {
            ctx->pc = 0x2DC674u;
            goto label_2dc674;
        }
    }
    ctx->pc = 0x2DC660u;
label_2dc660:
    // 0x2dc660: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2dc660u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2dc664:
    // 0x2dc664: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dc664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dc668:
    // 0x2dc668: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2dc668u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2dc66c:
    // 0x2dc66c: 0x320f809  jalr        $t9
label_2dc670:
    if (ctx->pc == 0x2DC670u) {
        ctx->pc = 0x2DC670u;
            // 0x2dc670: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2DC674u;
        goto label_2dc674;
    }
    ctx->pc = 0x2DC66Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DC674u);
        ctx->pc = 0x2DC670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC66Cu;
            // 0x2dc670: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DC674u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DC674u; }
            if (ctx->pc != 0x2DC674u) { return; }
        }
        }
    }
    ctx->pc = 0x2DC674u;
label_2dc674:
    // 0x2dc674: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2dc674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2dc678:
    // 0x2dc678: 0xc08c798  jal         func_231E60
label_2dc67c:
    if (ctx->pc == 0x2DC67Cu) {
        ctx->pc = 0x2DC67Cu;
            // 0x2dc67c: 0x8e650010  lw          $a1, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->pc = 0x2DC680u;
        goto label_2dc680;
    }
    ctx->pc = 0x2DC678u;
    SET_GPR_U32(ctx, 31, 0x2DC680u);
    ctx->pc = 0x2DC67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC678u;
            // 0x2dc67c: 0x8e650010  lw          $a1, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC680u; }
        if (ctx->pc != 0x2DC680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC680u; }
        if (ctx->pc != 0x2DC680u) { return; }
    }
    ctx->pc = 0x2DC680u;
label_2dc680:
    // 0x2dc680: 0xc08d414  jal         func_235050
label_2dc684:
    if (ctx->pc == 0x2DC684u) {
        ctx->pc = 0x2DC684u;
            // 0x2dc684: 0x8e640010  lw          $a0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->pc = 0x2DC688u;
        goto label_2dc688;
    }
    ctx->pc = 0x2DC680u;
    SET_GPR_U32(ctx, 31, 0x2DC688u);
    ctx->pc = 0x2DC684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC680u;
            // 0x2dc684: 0x8e640010  lw          $a0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235050u;
    if (runtime->hasFunction(0x235050u)) {
        auto targetFn = runtime->lookupFunction(0x235050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC688u; }
        if (ctx->pc != 0x2DC688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235050_0x235050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC688u; }
        if (ctx->pc != 0x2DC688u) { return; }
    }
    ctx->pc = 0x2DC688u;
label_2dc688:
    // 0x2dc688: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x2dc688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2dc68c:
    // 0x2dc68c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2dc68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2dc690:
    // 0x2dc690: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x2dc690u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_2dc694:
    // 0x2dc694: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x2dc694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_2dc698:
    // 0x2dc698: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2dc698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2dc69c:
    // 0x2dc69c: 0xc08bf20  jal         func_22FC80
label_2dc6a0:
    if (ctx->pc == 0x2DC6A0u) {
        ctx->pc = 0x2DC6A0u;
            // 0x2dc6a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC6A4u;
        goto label_2dc6a4;
    }
    ctx->pc = 0x2DC69Cu;
    SET_GPR_U32(ctx, 31, 0x2DC6A4u);
    ctx->pc = 0x2DC6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC69Cu;
            // 0x2dc6a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC6A4u; }
        if (ctx->pc != 0x2DC6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC6A4u; }
        if (ctx->pc != 0x2DC6A4u) { return; }
    }
    ctx->pc = 0x2DC6A4u;
label_2dc6a4:
    // 0x2dc6a4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2dc6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2dc6a8:
    // 0x2dc6a8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2dc6a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2dc6ac:
    // 0x2dc6ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2dc6acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2dc6b0:
    // 0x2dc6b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2dc6b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dc6b4:
    // 0x2dc6b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dc6b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dc6b8:
    // 0x2dc6b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dc6b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2dc6bc:
    // 0x2dc6bc: 0x3e00008  jr          $ra
label_2dc6c0:
    if (ctx->pc == 0x2DC6C0u) {
        ctx->pc = 0x2DC6C0u;
            // 0x2dc6c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2DC6C4u;
        goto label_2dc6c4;
    }
    ctx->pc = 0x2DC6BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC6BCu;
            // 0x2dc6c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DC6C4u;
label_2dc6c4:
    // 0x2dc6c4: 0x0  nop
    ctx->pc = 0x2dc6c4u;
    // NOP
label_2dc6c8:
    // 0x2dc6c8: 0x0  nop
    ctx->pc = 0x2dc6c8u;
    // NOP
label_2dc6cc:
    // 0x2dc6cc: 0x0  nop
    ctx->pc = 0x2dc6ccu;
    // NOP
label_2dc6d0:
    // 0x2dc6d0: 0x3e00008  jr          $ra
label_2dc6d4:
    if (ctx->pc == 0x2DC6D4u) {
        ctx->pc = 0x2DC6D4u;
            // 0x2dc6d4: 0x5102b  sltu        $v0, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->pc = 0x2DC6D8u;
        goto label_2dc6d8;
    }
    ctx->pc = 0x2DC6D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC6D0u;
            // 0x2dc6d4: 0x5102b  sltu        $v0, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DC6D8u;
label_2dc6d8:
    // 0x2dc6d8: 0x0  nop
    ctx->pc = 0x2dc6d8u;
    // NOP
label_2dc6dc:
    // 0x2dc6dc: 0x0  nop
    ctx->pc = 0x2dc6dcu;
    // NOP
label_2dc6e0:
    // 0x2dc6e0: 0x3e00008  jr          $ra
label_2dc6e4:
    if (ctx->pc == 0x2DC6E4u) {
        ctx->pc = 0x2DC6E4u;
            // 0x2dc6e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC6E8u;
        goto label_2dc6e8;
    }
    ctx->pc = 0x2DC6E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC6E0u;
            // 0x2dc6e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DC6E8u;
label_2dc6e8:
    // 0x2dc6e8: 0x0  nop
    ctx->pc = 0x2dc6e8u;
    // NOP
label_2dc6ec:
    // 0x2dc6ec: 0x0  nop
    ctx->pc = 0x2dc6ecu;
    // NOP
label_2dc6f0:
    // 0x2dc6f0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2dc6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2dc6f4:
    // 0x2dc6f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2dc6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2dc6f8:
    // 0x2dc6f8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2dc6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_2dc6fc:
    // 0x2dc6fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2dc6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2dc700:
    // 0x2dc700: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2dc700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2dc704:
    // 0x2dc704: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2dc704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2dc708:
    // 0x2dc708: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2dc708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2dc70c:
    // 0x2dc70c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2dc70cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2dc710:
    // 0x2dc710: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2dc710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2dc714:
    // 0x2dc714: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2dc714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2dc718:
    // 0x2dc718: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dc718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2dc71c:
    // 0x2dc71c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dc71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2dc720:
    // 0x2dc720: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x2dc720u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_2dc724:
    // 0x2dc724: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_2dc728:
    if (ctx->pc == 0x2DC728u) {
        ctx->pc = 0x2DC72Cu;
        goto label_2dc72c;
    }
    ctx->pc = 0x2DC724u;
    {
        const bool branch_taken_0x2dc724 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dc724) {
            ctx->pc = 0x2DC734u;
            goto label_2dc734;
        }
    }
    ctx->pc = 0x2DC72Cu;
label_2dc72c:
    // 0x2dc72c: 0x10000098  b           . + 4 + (0x98 << 2)
label_2dc730:
    if (ctx->pc == 0x2DC730u) {
        ctx->pc = 0x2DC730u;
            // 0x2dc730: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x2DC734u;
        goto label_2dc734;
    }
    ctx->pc = 0x2DC72Cu;
    {
        const bool branch_taken_0x2dc72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC72Cu;
            // 0x2dc730: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc72c) {
            ctx->pc = 0x2DC990u;
            goto label_2dc990;
        }
    }
    ctx->pc = 0x2DC734u;
label_2dc734:
    // 0x2dc734: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2dc734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2dc738:
    // 0x2dc738: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2dc738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2dc73c:
    // 0x2dc73c: 0x8c54e370  lw          $s4, -0x1C90($v0)
    ctx->pc = 0x2dc73cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_2dc740:
    // 0x2dc740: 0x8c73e378  lw          $s3, -0x1C88($v1)
    ctx->pc = 0x2dc740u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_2dc744:
    // 0x2dc744: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x2dc744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_2dc748:
    // 0x2dc748: 0x8c50d120  lw          $s0, -0x2EE0($v0)
    ctx->pc = 0x2dc748u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_2dc74c:
    // 0x2dc74c: 0xc05395c  jal         func_14E570
label_2dc750:
    if (ctx->pc == 0x2DC750u) {
        ctx->pc = 0x2DC750u;
            // 0x2dc750: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2DC754u;
        goto label_2dc754;
    }
    ctx->pc = 0x2DC74Cu;
    SET_GPR_U32(ctx, 31, 0x2DC754u);
    ctx->pc = 0x2DC750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC74Cu;
            // 0x2dc750: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E570u;
    if (runtime->hasFunction(0x14E570u)) {
        auto targetFn = runtime->lookupFunction(0x14E570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC754u; }
        if (ctx->pc != 0x2DC754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E570_0x14e570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC754u; }
        if (ctx->pc != 0x2DC754u) { return; }
    }
    ctx->pc = 0x2DC754u;
label_2dc754:
    // 0x2dc754: 0x8ea40058  lw          $a0, 0x58($s5)
    ctx->pc = 0x2dc754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_2dc758:
    // 0x2dc758: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2dc75c:
    if (ctx->pc == 0x2DC75Cu) {
        ctx->pc = 0x2DC760u;
        goto label_2dc760;
    }
    ctx->pc = 0x2DC758u;
    {
        const bool branch_taken_0x2dc758 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc758) {
            ctx->pc = 0x2DC768u;
            goto label_2dc768;
        }
    }
    ctx->pc = 0x2DC760u;
label_2dc760:
    // 0x2dc760: 0xc04e738  jal         func_139CE0
label_2dc764:
    if (ctx->pc == 0x2DC764u) {
        ctx->pc = 0x2DC768u;
        goto label_2dc768;
    }
    ctx->pc = 0x2DC760u;
    SET_GPR_U32(ctx, 31, 0x2DC768u);
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC768u; }
        if (ctx->pc != 0x2DC768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC768u; }
        if (ctx->pc != 0x2DC768u) { return; }
    }
    ctx->pc = 0x2DC768u;
label_2dc768:
    // 0x2dc768: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x2dc768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_2dc76c:
    // 0x2dc76c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2dc76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2dc770:
    // 0x2dc770: 0x8c47d130  lw          $a3, -0x2ED0($v0)
    ctx->pc = 0x2dc770u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_2dc774:
    // 0x2dc774: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2dc774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2dc778:
    // 0x2dc778: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dc778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dc77c:
    // 0x2dc77c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2dc77cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2dc780:
    // 0x2dc780: 0x8cf20130  lw          $s2, 0x130($a3)
    ctx->pc = 0x2dc780u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
label_2dc784:
    // 0x2dc784: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2dc784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2dc788:
    // 0x2dc788: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x2dc788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
label_2dc78c:
    // 0x2dc78c: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x2dc78cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2dc790:
    // 0x2dc790: 0x51b821  addu        $s7, $v0, $s1
    ctx->pc = 0x2dc790u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2dc794:
    // 0x2dc794: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2dc794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2dc798:
    // 0x2dc798: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2dc798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2dc79c:
    // 0x2dc79c: 0x8ef00000  lw          $s0, 0x0($s7)
    ctx->pc = 0x2dc79cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_2dc7a0:
    // 0x2dc7a0: 0x24560010  addiu       $s6, $v0, 0x10
    ctx->pc = 0x2dc7a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2dc7a4:
    // 0x2dc7a4: 0xa7a000b0  sh          $zero, 0xB0($sp)
    ctx->pc = 0x2dc7a4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 176), (uint16_t)GPR_U32(ctx, 0));
label_2dc7a8:
    // 0x2dc7a8: 0xa7a000b2  sh          $zero, 0xB2($sp)
    ctx->pc = 0x2dc7a8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 178), (uint16_t)GPR_U32(ctx, 0));
label_2dc7ac:
    // 0x2dc7ac: 0xc04a576  jal         func_1295D8
label_2dc7b0:
    if (ctx->pc == 0x2DC7B0u) {
        ctx->pc = 0x2DC7B0u;
            // 0x2dc7b0: 0xa7a000b4  sh          $zero, 0xB4($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 180), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2DC7B4u;
        goto label_2dc7b4;
    }
    ctx->pc = 0x2DC7ACu;
    SET_GPR_U32(ctx, 31, 0x2DC7B4u);
    ctx->pc = 0x2DC7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC7ACu;
            // 0x2dc7b0: 0xa7a000b4  sh          $zero, 0xB4($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 180), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC7B4u; }
        if (ctx->pc != 0x2DC7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC7B4u; }
        if (ctx->pc != 0x2DC7B4u) { return; }
    }
    ctx->pc = 0x2DC7B4u;
label_2dc7b4:
    // 0x2dc7b4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x2dc7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_2dc7b8:
    // 0x2dc7b8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2dc7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_2dc7bc:
    // 0x2dc7bc: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x2dc7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_2dc7c0:
    // 0x2dc7c0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2dc7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2dc7c4:
    // 0x2dc7c4: 0x8c640ea4  lw          $a0, 0xEA4($v1)
    ctx->pc = 0x2dc7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3748)));
label_2dc7c8:
    // 0x2dc7c8: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2dc7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2dc7cc:
    // 0x2dc7cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2dc7ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dc7d0:
    // 0x2dc7d0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2dc7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2dc7d4:
    // 0x2dc7d4: 0x8c84012c  lw          $a0, 0x12C($a0)
    ctx->pc = 0x2dc7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 300)));
label_2dc7d8:
    // 0x2dc7d8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2dc7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2dc7dc:
    // 0x2dc7dc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2dc7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2dc7e0:
    // 0x2dc7e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2dc7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2dc7e4:
    // 0x2dc7e4: 0xc44001a4  lwc1        $f0, 0x1A4($v0)
    ctx->pc = 0x2dc7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dc7e8:
    // 0x2dc7e8: 0x244701f0  addiu       $a3, $v0, 0x1F0
    ctx->pc = 0x2dc7e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 496));
label_2dc7ec:
    // 0x2dc7ec: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2dc7ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2dc7f0:
    // 0x2dc7f0: 0xc44001a8  lwc1        $f0, 0x1A8($v0)
    ctx->pc = 0x2dc7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dc7f4:
    // 0x2dc7f4: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2dc7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_2dc7f8:
    // 0x2dc7f8: 0xc44001ac  lwc1        $f0, 0x1AC($v0)
    ctx->pc = 0x2dc7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dc7fc:
    // 0x2dc7fc: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2dc7fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_2dc800:
    // 0x2dc800: 0xc0c614c  jal         func_318530
label_2dc804:
    if (ctx->pc == 0x2DC804u) {
        ctx->pc = 0x2DC804u;
            // 0x2dc804: 0xafa3009c  sw          $v1, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
        ctx->pc = 0x2DC808u;
        goto label_2dc808;
    }
    ctx->pc = 0x2DC800u;
    SET_GPR_U32(ctx, 31, 0x2DC808u);
    ctx->pc = 0x2DC804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC800u;
            // 0x2dc804: 0xafa3009c  sw          $v1, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318530u;
    if (runtime->hasFunction(0x318530u)) {
        auto targetFn = runtime->lookupFunction(0x318530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC808u; }
        if (ctx->pc != 0x2DC808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318530_0x318530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC808u; }
        if (ctx->pc != 0x2DC808u) { return; }
    }
    ctx->pc = 0x2DC808u;
label_2dc808:
    // 0x2dc808: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2dc808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_2dc80c:
    // 0x2dc80c: 0x8e030d94  lw          $v1, 0xD94($s0)
    ctx->pc = 0x2dc80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3476)));
label_2dc810:
    // 0x2dc810: 0xc44222d0  lwc1        $f2, 0x22D0($v0)
    ctx->pc = 0x2dc810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2dc814:
    // 0x2dc814: 0xc6000c88  lwc1        $f0, 0xC88($s0)
    ctx->pc = 0x2dc814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dc818:
    // 0x2dc818: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2dc818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2dc81c:
    // 0x2dc81c: 0x602026  xor         $a0, $v1, $zero
    ctx->pc = 0x2dc81cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
label_2dc820:
    // 0x2dc820: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dc820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dc824:
    // 0x2dc824: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2dc824u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dc828:
    // 0x2dc828: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2dc82c:
    if (ctx->pc == 0x2DC82Cu) {
        ctx->pc = 0x2DC82Cu;
            // 0x2dc82c: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x2DC830u;
        goto label_2dc830;
    }
    ctx->pc = 0x2DC828u;
    {
        const bool branch_taken_0x2dc828 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DC82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC828u;
            // 0x2dc82c: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc828) {
            ctx->pc = 0x2DC834u;
            goto label_2dc834;
        }
    }
    ctx->pc = 0x2DC830u;
label_2dc830:
    // 0x2dc830: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2dc830u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dc834:
    // 0x2dc834: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x2dc834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_2dc838:
    // 0x2dc838: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2dc838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2dc83c:
    // 0x2dc83c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2dc83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2dc840:
    // 0x2dc840: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x2dc840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dc844:
    // 0x2dc844: 0x8c630d94  lw          $v1, 0xD94($v1)
    ctx->pc = 0x2dc844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3476)));
label_2dc848:
    // 0x2dc848: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x2dc848u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_2dc84c:
    // 0x2dc84c: 0x2b82b  sltu        $s7, $zero, $v0
    ctx->pc = 0x2dc84cu;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2dc850:
    // 0x2dc850: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dc850u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dc854:
    // 0x2dc854: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dc854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dc858:
    // 0x2dc858: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2dc858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2dc85c:
    // 0x2dc85c: 0x602026  xor         $a0, $v1, $zero
    ctx->pc = 0x2dc85cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
label_2dc860:
    // 0x2dc860: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2dc864:
    if (ctx->pc == 0x2DC864u) {
        ctx->pc = 0x2DC864u;
            // 0x2dc864: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x2DC868u;
        goto label_2dc868;
    }
    ctx->pc = 0x2DC860u;
    {
        const bool branch_taken_0x2dc860 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DC864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC860u;
            // 0x2dc864: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc860) {
            ctx->pc = 0x2DC86Cu;
            goto label_2dc86c;
        }
    }
    ctx->pc = 0x2DC868u;
label_2dc868:
    // 0x2dc868: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2dc868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dc86c:
    // 0x2dc86c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2dc86cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2dc870:
    // 0x2dc870: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2dc870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dc874:
    // 0x2dc874: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x2dc874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_2dc878:
    // 0x2dc878: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2dc878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_2dc87c:
    // 0x2dc87c: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x2dc87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_2dc880:
    // 0x2dc880: 0x3382b  sltu        $a3, $zero, $v1
    ctx->pc = 0x2dc880u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2dc884:
    // 0x2dc884: 0x26a40074  addiu       $a0, $s5, 0x74
    ctx->pc = 0x2dc884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 116));
label_2dc888:
    // 0x2dc888: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2dc888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2dc88c:
    // 0x2dc88c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2dc88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2dc890:
    // 0x2dc890: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2dc890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2dc894:
    // 0x2dc894: 0xc0bd544  jal         func_2F5510
label_2dc898:
    if (ctx->pc == 0x2DC898u) {
        ctx->pc = 0x2DC898u;
            // 0x2dc898: 0x244601a4  addiu       $a2, $v0, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 420));
        ctx->pc = 0x2DC89Cu;
        goto label_2dc89c;
    }
    ctx->pc = 0x2DC894u;
    SET_GPR_U32(ctx, 31, 0x2DC89Cu);
    ctx->pc = 0x2DC898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC894u;
            // 0x2dc898: 0x244601a4  addiu       $a2, $v0, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 420));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5510u;
    if (runtime->hasFunction(0x2F5510u)) {
        auto targetFn = runtime->lookupFunction(0x2F5510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC89Cu; }
        if (ctx->pc != 0x2DC89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5510_0x2f5510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC89Cu; }
        if (ctx->pc != 0x2DC89Cu) { return; }
    }
    ctx->pc = 0x2DC89Cu;
label_2dc89c:
    // 0x2dc89c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2dc89cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dc8a0:
    // 0x2dc8a0: 0x260602c0  addiu       $a2, $s0, 0x2C0
    ctx->pc = 0x2dc8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_2dc8a4:
    // 0x2dc8a4: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x2dc8a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2dc8a8:
    // 0x2dc8a8: 0xc0bd544  jal         func_2F5510
label_2dc8ac:
    if (ctx->pc == 0x2DC8ACu) {
        ctx->pc = 0x2DC8ACu;
            // 0x2dc8ac: 0x26a400d0  addiu       $a0, $s5, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
        ctx->pc = 0x2DC8B0u;
        goto label_2dc8b0;
    }
    ctx->pc = 0x2DC8A8u;
    SET_GPR_U32(ctx, 31, 0x2DC8B0u);
    ctx->pc = 0x2DC8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC8A8u;
            // 0x2dc8ac: 0x26a400d0  addiu       $a0, $s5, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5510u;
    if (runtime->hasFunction(0x2F5510u)) {
        auto targetFn = runtime->lookupFunction(0x2F5510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC8B0u; }
        if (ctx->pc != 0x2DC8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5510_0x2f5510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC8B0u; }
        if (ctx->pc != 0x2DC8B0u) { return; }
    }
    ctx->pc = 0x2DC8B0u;
label_2dc8b0:
    // 0x2dc8b0: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x2dc8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_2dc8b4:
    // 0x2dc8b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2dc8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2dc8b8:
    // 0x2dc8b8: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x2dc8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_2dc8bc:
    // 0x2dc8bc: 0xc04e4a4  jal         func_139290
label_2dc8c0:
    if (ctx->pc == 0x2DC8C0u) {
        ctx->pc = 0x2DC8C0u;
            // 0x2dc8c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC8C4u;
        goto label_2dc8c4;
    }
    ctx->pc = 0x2DC8BCu;
    SET_GPR_U32(ctx, 31, 0x2DC8C4u);
    ctx->pc = 0x2DC8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC8BCu;
            // 0x2dc8c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC8C4u; }
        if (ctx->pc != 0x2DC8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC8C4u; }
        if (ctx->pc != 0x2DC8C4u) { return; }
    }
    ctx->pc = 0x2DC8C4u;
label_2dc8c4:
    // 0x2dc8c4: 0x8ea7005c  lw          $a3, 0x5C($s5)
    ctx->pc = 0x2dc8c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
label_2dc8c8:
    // 0x2dc8c8: 0x50e0000c  beql        $a3, $zero, . + 4 + (0xC << 2)
label_2dc8cc:
    if (ctx->pc == 0x2DC8CCu) {
        ctx->pc = 0x2DC8CCu;
            // 0x2dc8cc: 0x8ea60054  lw          $a2, 0x54($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
        ctx->pc = 0x2DC8D0u;
        goto label_2dc8d0;
    }
    ctx->pc = 0x2DC8C8u;
    {
        const bool branch_taken_0x2dc8c8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc8c8) {
            ctx->pc = 0x2DC8CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC8C8u;
            // 0x2dc8cc: 0x8ea60054  lw          $a2, 0x54($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DC8FCu;
            goto label_2dc8fc;
        }
    }
    ctx->pc = 0x2DC8D0u;
label_2dc8d0:
    // 0x2dc8d0: 0x8ea60054  lw          $a2, 0x54($s5)
    ctx->pc = 0x2dc8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_2dc8d4:
    // 0x2dc8d4: 0xc6ac0060  lwc1        $f12, 0x60($s5)
    ctx->pc = 0x2dc8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2dc8d8:
    // 0x2dc8d8: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x2dc8d8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_2dc8dc:
    // 0x2dc8dc: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x2dc8dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2dc8e0:
    // 0x2dc8e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2dc8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2dc8e4:
    // 0x2dc8e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2dc8e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2dc8e8:
    // 0x2dc8e8: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x2dc8e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
label_2dc8ec:
    // 0x2dc8ec: 0xc04cff4  jal         func_133FD0
label_2dc8f0:
    if (ctx->pc == 0x2DC8F0u) {
        ctx->pc = 0x2DC8F0u;
            // 0x2dc8f0: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2DC8F4u;
        goto label_2dc8f4;
    }
    ctx->pc = 0x2DC8ECu;
    SET_GPR_U32(ctx, 31, 0x2DC8F4u);
    ctx->pc = 0x2DC8F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC8ECu;
            // 0x2dc8f0: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC8F4u; }
        if (ctx->pc != 0x2DC8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC8F4u; }
        if (ctx->pc != 0x2DC8F4u) { return; }
    }
    ctx->pc = 0x2DC8F4u;
label_2dc8f4:
    // 0x2dc8f4: 0x10000009  b           . + 4 + (0x9 << 2)
label_2dc8f8:
    if (ctx->pc == 0x2DC8F8u) {
        ctx->pc = 0x2DC8F8u;
            // 0x2dc8f8: 0x8ea20068  lw          $v0, 0x68($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
        ctx->pc = 0x2DC8FCu;
        goto label_2dc8fc;
    }
    ctx->pc = 0x2DC8F4u;
    {
        const bool branch_taken_0x2dc8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC8F4u;
            // 0x2dc8f8: 0x8ea20068  lw          $v0, 0x68($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc8f4) {
            ctx->pc = 0x2DC91Cu;
            goto label_2dc91c;
        }
    }
    ctx->pc = 0x2DC8FCu;
label_2dc8fc:
    // 0x2dc8fc: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x2dc8fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_2dc900:
    // 0x2dc900: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2dc900u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2dc904:
    // 0x2dc904: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2dc904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2dc908:
    // 0x2dc908: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2dc908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2dc90c:
    // 0x2dc90c: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x2dc90cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_2dc910:
    // 0x2dc910: 0xc04cfcc  jal         func_133F30
label_2dc914:
    if (ctx->pc == 0x2DC914u) {
        ctx->pc = 0x2DC914u;
            // 0x2dc914: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2DC918u;
        goto label_2dc918;
    }
    ctx->pc = 0x2DC910u;
    SET_GPR_U32(ctx, 31, 0x2DC918u);
    ctx->pc = 0x2DC914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC910u;
            // 0x2dc914: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC918u; }
        if (ctx->pc != 0x2DC918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC918u; }
        if (ctx->pc != 0x2DC918u) { return; }
    }
    ctx->pc = 0x2DC918u;
label_2dc918:
    // 0x2dc918: 0x8ea20068  lw          $v0, 0x68($s5)
    ctx->pc = 0x2dc918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
label_2dc91c:
    // 0x2dc91c: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_2dc920:
    if (ctx->pc == 0x2DC920u) {
        ctx->pc = 0x2DC920u;
            // 0x2dc920: 0x8ea40054  lw          $a0, 0x54($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
        ctx->pc = 0x2DC924u;
        goto label_2dc924;
    }
    ctx->pc = 0x2DC91Cu;
    {
        const bool branch_taken_0x2dc91c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc91c) {
            ctx->pc = 0x2DC920u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC91Cu;
            // 0x2dc920: 0x8ea40054  lw          $a0, 0x54($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DC96Cu;
            goto label_2dc96c;
        }
    }
    ctx->pc = 0x2DC924u;
label_2dc924:
    // 0x2dc924: 0x8ea4006c  lw          $a0, 0x6C($s5)
    ctx->pc = 0x2dc924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_2dc928:
    // 0x2dc928: 0x8ea50054  lw          $a1, 0x54($s5)
    ctx->pc = 0x2dc928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_2dc92c:
    // 0x2dc92c: 0xc054c00  jal         func_153000
label_2dc930:
    if (ctx->pc == 0x2DC930u) {
        ctx->pc = 0x2DC930u;
            // 0x2dc930: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC934u;
        goto label_2dc934;
    }
    ctx->pc = 0x2DC92Cu;
    SET_GPR_U32(ctx, 31, 0x2DC934u);
    ctx->pc = 0x2DC930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC92Cu;
            // 0x2dc930: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153000u;
    if (runtime->hasFunction(0x153000u)) {
        auto targetFn = runtime->lookupFunction(0x153000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC934u; }
        if (ctx->pc != 0x2DC934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153000_0x153000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC934u; }
        if (ctx->pc != 0x2DC934u) { return; }
    }
    ctx->pc = 0x2DC934u;
label_2dc934:
    // 0x2dc934: 0xc6ac0070  lwc1        $f12, 0x70($s5)
    ctx->pc = 0x2dc934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2dc938:
    // 0x2dc938: 0x8ea50054  lw          $a1, 0x54($s5)
    ctx->pc = 0x2dc938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_2dc93c:
    // 0x2dc93c: 0x8ea60068  lw          $a2, 0x68($s5)
    ctx->pc = 0x2dc93cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
label_2dc940:
    // 0x2dc940: 0x8ea7006c  lw          $a3, 0x6C($s5)
    ctx->pc = 0x2dc940u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_2dc944:
    // 0x2dc944: 0xc054bdc  jal         func_152F70
label_2dc948:
    if (ctx->pc == 0x2DC948u) {
        ctx->pc = 0x2DC948u;
            // 0x2dc948: 0x8ea40064  lw          $a0, 0x64($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
        ctx->pc = 0x2DC94Cu;
        goto label_2dc94c;
    }
    ctx->pc = 0x2DC944u;
    SET_GPR_U32(ctx, 31, 0x2DC94Cu);
    ctx->pc = 0x2DC948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC944u;
            // 0x2dc948: 0x8ea40064  lw          $a0, 0x64($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152F70u;
    if (runtime->hasFunction(0x152F70u)) {
        auto targetFn = runtime->lookupFunction(0x152F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC94Cu; }
        if (ctx->pc != 0x2DC94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152F70_0x152f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC94Cu; }
        if (ctx->pc != 0x2DC94Cu) { return; }
    }
    ctx->pc = 0x2DC94Cu;
label_2dc94c:
    // 0x2dc94c: 0x8ea40064  lw          $a0, 0x64($s5)
    ctx->pc = 0x2dc94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
label_2dc950:
    // 0x2dc950: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2dc950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2dc954:
    // 0x2dc954: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2dc954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2dc958:
    // 0x2dc958: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x2dc958u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_2dc95c:
    // 0x2dc95c: 0xc054c2c  jal         func_1530B0
label_2dc960:
    if (ctx->pc == 0x2DC960u) {
        ctx->pc = 0x2DC960u;
            // 0x2dc960: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x2DC964u;
        goto label_2dc964;
    }
    ctx->pc = 0x2DC95Cu;
    SET_GPR_U32(ctx, 31, 0x2DC964u);
    ctx->pc = 0x2DC960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC95Cu;
            // 0x2dc960: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC964u; }
        if (ctx->pc != 0x2DC964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC964u; }
        if (ctx->pc != 0x2DC964u) { return; }
    }
    ctx->pc = 0x2DC964u;
label_2dc964:
    // 0x2dc964: 0x10000007  b           . + 4 + (0x7 << 2)
label_2dc968:
    if (ctx->pc == 0x2DC968u) {
        ctx->pc = 0x2DC968u;
            // 0x2dc968: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC96Cu;
        goto label_2dc96c;
    }
    ctx->pc = 0x2DC964u;
    {
        const bool branch_taken_0x2dc964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC964u;
            // 0x2dc968: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc964) {
            ctx->pc = 0x2DC984u;
            goto label_2dc984;
        }
    }
    ctx->pc = 0x2DC96Cu;
label_2dc96c:
    // 0x2dc96c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2dc96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2dc970:
    // 0x2dc970: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2dc970u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2dc974:
    // 0x2dc974: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x2dc974u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_2dc978:
    // 0x2dc978: 0xc0538d8  jal         func_14E360
label_2dc97c:
    if (ctx->pc == 0x2DC97Cu) {
        ctx->pc = 0x2DC97Cu;
            // 0x2dc97c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x2DC980u;
        goto label_2dc980;
    }
    ctx->pc = 0x2DC978u;
    SET_GPR_U32(ctx, 31, 0x2DC980u);
    ctx->pc = 0x2DC97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC978u;
            // 0x2dc97c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC980u; }
        if (ctx->pc != 0x2DC980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC980u; }
        if (ctx->pc != 0x2DC980u) { return; }
    }
    ctx->pc = 0x2DC980u;
label_2dc980:
    // 0x2dc980: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2dc980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dc984:
    // 0x2dc984: 0xc05395c  jal         func_14E570
label_2dc988:
    if (ctx->pc == 0x2DC988u) {
        ctx->pc = 0x2DC98Cu;
        goto label_2dc98c;
    }
    ctx->pc = 0x2DC984u;
    SET_GPR_U32(ctx, 31, 0x2DC98Cu);
    ctx->pc = 0x14E570u;
    if (runtime->hasFunction(0x14E570u)) {
        auto targetFn = runtime->lookupFunction(0x14E570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC98Cu; }
        if (ctx->pc != 0x2DC98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E570_0x14e570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC98Cu; }
        if (ctx->pc != 0x2DC98Cu) { return; }
    }
    ctx->pc = 0x2DC98Cu;
label_2dc98c:
    // 0x2dc98c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2dc98cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2dc990:
    // 0x2dc990: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2dc990u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2dc994:
    // 0x2dc994: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2dc994u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2dc998:
    // 0x2dc998: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2dc998u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2dc99c:
    // 0x2dc99c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2dc99cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2dc9a0:
    // 0x2dc9a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2dc9a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2dc9a4:
    // 0x2dc9a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2dc9a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dc9a8:
    // 0x2dc9a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dc9a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dc9ac:
    // 0x2dc9ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dc9acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2dc9b0:
    // 0x2dc9b0: 0x3e00008  jr          $ra
label_2dc9b4:
    if (ctx->pc == 0x2DC9B4u) {
        ctx->pc = 0x2DC9B4u;
            // 0x2dc9b4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x2DC9B8u;
        goto label_2dc9b8;
    }
    ctx->pc = 0x2DC9B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC9B0u;
            // 0x2dc9b4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DC9B8u;
label_2dc9b8:
    // 0x2dc9b8: 0x0  nop
    ctx->pc = 0x2dc9b8u;
    // NOP
label_2dc9bc:
    // 0x2dc9bc: 0x0  nop
    ctx->pc = 0x2dc9bcu;
    // NOP
label_2dc9c0:
    // 0x2dc9c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dc9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2dc9c4:
    // 0x2dc9c4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2dc9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_2dc9c8:
    // 0x2dc9c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2dc9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2dc9cc:
    // 0x2dc9cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dc9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2dc9d0:
    // 0x2dc9d0: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x2dc9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_2dc9d4:
    // 0x2dc9d4: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x2dc9d4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_2dc9d8:
    // 0x2dc9d8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2dc9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2dc9dc:
    // 0x2dc9dc: 0x10a30017  beq         $a1, $v1, . + 4 + (0x17 << 2)
label_2dc9e0:
    if (ctx->pc == 0x2DC9E0u) {
        ctx->pc = 0x2DC9E0u;
            // 0x2dc9e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC9E4u;
        goto label_2dc9e4;
    }
    ctx->pc = 0x2DC9DCu;
    {
        const bool branch_taken_0x2dc9dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2DC9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC9DCu;
            // 0x2dc9e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc9dc) {
            ctx->pc = 0x2DCA3Cu;
            goto label_2dca3c;
        }
    }
    ctx->pc = 0x2DC9E4u;
label_2dc9e4:
    // 0x2dc9e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2dc9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2dc9e8:
    // 0x2dc9e8: 0x50a30011  beql        $a1, $v1, . + 4 + (0x11 << 2)
label_2dc9ec:
    if (ctx->pc == 0x2DC9ECu) {
        ctx->pc = 0x2DC9ECu;
            // 0x2dc9ec: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x2DC9F0u;
        goto label_2dc9f0;
    }
    ctx->pc = 0x2DC9E8u;
    {
        const bool branch_taken_0x2dc9e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dc9e8) {
            ctx->pc = 0x2DC9ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC9E8u;
            // 0x2dc9ec: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DCA30u;
            goto label_2dca30;
        }
    }
    ctx->pc = 0x2DC9F0u;
label_2dc9f0:
    // 0x2dc9f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2dc9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2dc9f4:
    // 0x2dc9f4: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_2dc9f8:
    if (ctx->pc == 0x2DC9F8u) {
        ctx->pc = 0x2DC9F8u;
            // 0x2dc9f8: 0x8cc40cb4  lw          $a0, 0xCB4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
        ctx->pc = 0x2DC9FCu;
        goto label_2dc9fc;
    }
    ctx->pc = 0x2DC9F4u;
    {
        const bool branch_taken_0x2dc9f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dc9f4) {
            ctx->pc = 0x2DC9F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC9F4u;
            // 0x2dc9f8: 0x8cc40cb4  lw          $a0, 0xCB4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DCA04u;
            goto label_2dca04;
        }
    }
    ctx->pc = 0x2DC9FCu;
label_2dc9fc:
    // 0x2dc9fc: 0x1000002f  b           . + 4 + (0x2F << 2)
label_2dca00:
    if (ctx->pc == 0x2DCA00u) {
        ctx->pc = 0x2DCA00u;
            // 0x2dca00: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x2DCA04u;
        goto label_2dca04;
    }
    ctx->pc = 0x2DC9FCu;
    {
        const bool branch_taken_0x2dc9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC9FCu;
            // 0x2dca00: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc9fc) {
            ctx->pc = 0x2DCABCu;
            goto label_2dcabc;
        }
    }
    ctx->pc = 0x2DCA04u;
label_2dca04:
    // 0x2dca04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dca04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dca08:
    // 0x2dca08: 0x1083002b  beq         $a0, $v1, . + 4 + (0x2B << 2)
label_2dca0c:
    if (ctx->pc == 0x2DCA0Cu) {
        ctx->pc = 0x2DCA10u;
        goto label_2dca10;
    }
    ctx->pc = 0x2DCA08u;
    {
        const bool branch_taken_0x2dca08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dca08) {
            ctx->pc = 0x2DCAB8u;
            goto label_2dcab8;
        }
    }
    ctx->pc = 0x2DCA10u;
label_2dca10:
    // 0x2dca10: 0xc074a24  jal         func_1D2890
label_2dca14:
    if (ctx->pc == 0x2DCA14u) {
        ctx->pc = 0x2DCA14u;
            // 0x2dca14: 0x8e040058  lw          $a0, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->pc = 0x2DCA18u;
        goto label_2dca18;
    }
    ctx->pc = 0x2DCA10u;
    SET_GPR_U32(ctx, 31, 0x2DCA18u);
    ctx->pc = 0x2DCA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCA10u;
            // 0x2dca14: 0x8e040058  lw          $a0, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2890u;
    if (runtime->hasFunction(0x1D2890u)) {
        auto targetFn = runtime->lookupFunction(0x1D2890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCA18u; }
        if (ctx->pc != 0x2DCA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2890_0x1d2890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCA18u; }
        if (ctx->pc != 0x2DCA18u) { return; }
    }
    ctx->pc = 0x2DCA18u;
label_2dca18:
    // 0x2dca18: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2dca18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2dca1c:
    // 0x2dca1c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2dca1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2dca20:
    // 0x2dca20: 0x320f809  jalr        $t9
label_2dca24:
    if (ctx->pc == 0x2DCA24u) {
        ctx->pc = 0x2DCA24u;
            // 0x2dca24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DCA28u;
        goto label_2dca28;
    }
    ctx->pc = 0x2DCA20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DCA28u);
        ctx->pc = 0x2DCA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCA20u;
            // 0x2dca24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DCA28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DCA28u; }
            if (ctx->pc != 0x2DCA28u) { return; }
        }
        }
    }
    ctx->pc = 0x2DCA28u;
label_2dca28:
    // 0x2dca28: 0x10000023  b           . + 4 + (0x23 << 2)
label_2dca2c:
    if (ctx->pc == 0x2DCA2Cu) {
        ctx->pc = 0x2DCA30u;
        goto label_2dca30;
    }
    ctx->pc = 0x2DCA28u;
    {
        const bool branch_taken_0x2dca28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dca28) {
            ctx->pc = 0x2DCAB8u;
            goto label_2dcab8;
        }
    }
    ctx->pc = 0x2DCA30u;
label_2dca30:
    // 0x2dca30: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2dca30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2dca34:
    // 0x2dca34: 0x320f809  jalr        $t9
label_2dca38:
    if (ctx->pc == 0x2DCA38u) {
        ctx->pc = 0x2DCA3Cu;
        goto label_2dca3c;
    }
    ctx->pc = 0x2DCA34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DCA3Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DCA3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DCA3Cu; }
            if (ctx->pc != 0x2DCA3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2DCA3Cu;
label_2dca3c:
    // 0x2dca3c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2dca3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_2dca40:
    // 0x2dca40: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x2dca40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_2dca44:
    // 0x2dca44: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_2dca48:
    if (ctx->pc == 0x2DCA48u) {
        ctx->pc = 0x2DCA48u;
            // 0x2dca48: 0x8c658a08  lw          $a1, -0x75F8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
        ctx->pc = 0x2DCA4Cu;
        goto label_2dca4c;
    }
    ctx->pc = 0x2DCA44u;
    {
        const bool branch_taken_0x2dca44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCA44u;
            // 0x2dca48: 0x8c658a08  lw          $a1, -0x75F8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dca44) {
            ctx->pc = 0x2DCA7Cu;
            goto label_2dca7c;
        }
    }
    ctx->pc = 0x2DCA4Cu;
label_2dca4c:
    // 0x2dca4c: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x2dca4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dca50:
    // 0x2dca50: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x2dca50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dca54:
    // 0x2dca54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2dca54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2dca58:
    // 0x2dca58: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2dca58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
label_2dca5c:
    // 0x2dca5c: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x2dca5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_2dca60:
    // 0x2dca60: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x2dca60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dca64:
    // 0x2dca64: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2dca64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dca68:
    // 0x2dca68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dca68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dca6c:
    // 0x2dca6c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_2dca70:
    if (ctx->pc == 0x2DCA70u) {
        ctx->pc = 0x2DCA70u;
            // 0x2dca70: 0x8e030068  lw          $v1, 0x68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->pc = 0x2DCA74u;
        goto label_2dca74;
    }
    ctx->pc = 0x2DCA6Cu;
    {
        const bool branch_taken_0x2dca6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dca6c) {
            ctx->pc = 0x2DCA70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCA6Cu;
            // 0x2dca70: 0x8e030068  lw          $v1, 0x68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DCA80u;
            goto label_2dca80;
        }
    }
    ctx->pc = 0x2DCA74u;
label_2dca74:
    // 0x2dca74: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2dca74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2dca78:
    // 0x2dca78: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2dca78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
label_2dca7c:
    // 0x2dca7c: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x2dca7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_2dca80:
    // 0x2dca80: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_2dca84:
    if (ctx->pc == 0x2DCA84u) {
        ctx->pc = 0x2DCA88u;
        goto label_2dca88;
    }
    ctx->pc = 0x2DCA80u;
    {
        const bool branch_taken_0x2dca80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dca80) {
            ctx->pc = 0x2DCAB8u;
            goto label_2dcab8;
        }
    }
    ctx->pc = 0x2DCA88u;
label_2dca88:
    // 0x2dca88: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x2dca88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dca8c:
    // 0x2dca8c: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x2dca8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dca90:
    // 0x2dca90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2dca90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2dca94:
    // 0x2dca94: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2dca94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
label_2dca98:
    // 0x2dca98: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x2dca98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_2dca9c:
    // 0x2dca9c: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x2dca9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dcaa0:
    // 0x2dcaa0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2dcaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dcaa4:
    // 0x2dcaa4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dcaa4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dcaa8:
    // 0x2dcaa8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2dcaac:
    if (ctx->pc == 0x2DCAACu) {
        ctx->pc = 0x2DCAB0u;
        goto label_2dcab0;
    }
    ctx->pc = 0x2DCAA8u;
    {
        const bool branch_taken_0x2dcaa8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dcaa8) {
            ctx->pc = 0x2DCAB8u;
            goto label_2dcab8;
        }
    }
    ctx->pc = 0x2DCAB0u;
label_2dcab0:
    // 0x2dcab0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2dcab0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2dcab4:
    // 0x2dcab4: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2dcab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
label_2dcab8:
    // 0x2dcab8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dcab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2dcabc:
    // 0x2dcabc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dcabcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2dcac0:
    // 0x2dcac0: 0x3e00008  jr          $ra
label_2dcac4:
    if (ctx->pc == 0x2DCAC4u) {
        ctx->pc = 0x2DCAC4u;
            // 0x2dcac4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2DCAC8u;
        goto label_2dcac8;
    }
    ctx->pc = 0x2DCAC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCAC0u;
            // 0x2dcac4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DCAC8u;
label_2dcac8:
    // 0x2dcac8: 0x0  nop
    ctx->pc = 0x2dcac8u;
    // NOP
label_2dcacc:
    // 0x2dcacc: 0x0  nop
    ctx->pc = 0x2dcaccu;
    // NOP
}
