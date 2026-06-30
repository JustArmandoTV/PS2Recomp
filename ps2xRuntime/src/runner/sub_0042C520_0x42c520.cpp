#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0042C520
// Address: 0x42c520 - 0x42ca80
void sub_0042C520_0x42c520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042C520_0x42c520");
#endif

    switch (ctx->pc) {
        case 0x42c520u: goto label_42c520;
        case 0x42c524u: goto label_42c524;
        case 0x42c528u: goto label_42c528;
        case 0x42c52cu: goto label_42c52c;
        case 0x42c530u: goto label_42c530;
        case 0x42c534u: goto label_42c534;
        case 0x42c538u: goto label_42c538;
        case 0x42c53cu: goto label_42c53c;
        case 0x42c540u: goto label_42c540;
        case 0x42c544u: goto label_42c544;
        case 0x42c548u: goto label_42c548;
        case 0x42c54cu: goto label_42c54c;
        case 0x42c550u: goto label_42c550;
        case 0x42c554u: goto label_42c554;
        case 0x42c558u: goto label_42c558;
        case 0x42c55cu: goto label_42c55c;
        case 0x42c560u: goto label_42c560;
        case 0x42c564u: goto label_42c564;
        case 0x42c568u: goto label_42c568;
        case 0x42c56cu: goto label_42c56c;
        case 0x42c570u: goto label_42c570;
        case 0x42c574u: goto label_42c574;
        case 0x42c578u: goto label_42c578;
        case 0x42c57cu: goto label_42c57c;
        case 0x42c580u: goto label_42c580;
        case 0x42c584u: goto label_42c584;
        case 0x42c588u: goto label_42c588;
        case 0x42c58cu: goto label_42c58c;
        case 0x42c590u: goto label_42c590;
        case 0x42c594u: goto label_42c594;
        case 0x42c598u: goto label_42c598;
        case 0x42c59cu: goto label_42c59c;
        case 0x42c5a0u: goto label_42c5a0;
        case 0x42c5a4u: goto label_42c5a4;
        case 0x42c5a8u: goto label_42c5a8;
        case 0x42c5acu: goto label_42c5ac;
        case 0x42c5b0u: goto label_42c5b0;
        case 0x42c5b4u: goto label_42c5b4;
        case 0x42c5b8u: goto label_42c5b8;
        case 0x42c5bcu: goto label_42c5bc;
        case 0x42c5c0u: goto label_42c5c0;
        case 0x42c5c4u: goto label_42c5c4;
        case 0x42c5c8u: goto label_42c5c8;
        case 0x42c5ccu: goto label_42c5cc;
        case 0x42c5d0u: goto label_42c5d0;
        case 0x42c5d4u: goto label_42c5d4;
        case 0x42c5d8u: goto label_42c5d8;
        case 0x42c5dcu: goto label_42c5dc;
        case 0x42c5e0u: goto label_42c5e0;
        case 0x42c5e4u: goto label_42c5e4;
        case 0x42c5e8u: goto label_42c5e8;
        case 0x42c5ecu: goto label_42c5ec;
        case 0x42c5f0u: goto label_42c5f0;
        case 0x42c5f4u: goto label_42c5f4;
        case 0x42c5f8u: goto label_42c5f8;
        case 0x42c5fcu: goto label_42c5fc;
        case 0x42c600u: goto label_42c600;
        case 0x42c604u: goto label_42c604;
        case 0x42c608u: goto label_42c608;
        case 0x42c60cu: goto label_42c60c;
        case 0x42c610u: goto label_42c610;
        case 0x42c614u: goto label_42c614;
        case 0x42c618u: goto label_42c618;
        case 0x42c61cu: goto label_42c61c;
        case 0x42c620u: goto label_42c620;
        case 0x42c624u: goto label_42c624;
        case 0x42c628u: goto label_42c628;
        case 0x42c62cu: goto label_42c62c;
        case 0x42c630u: goto label_42c630;
        case 0x42c634u: goto label_42c634;
        case 0x42c638u: goto label_42c638;
        case 0x42c63cu: goto label_42c63c;
        case 0x42c640u: goto label_42c640;
        case 0x42c644u: goto label_42c644;
        case 0x42c648u: goto label_42c648;
        case 0x42c64cu: goto label_42c64c;
        case 0x42c650u: goto label_42c650;
        case 0x42c654u: goto label_42c654;
        case 0x42c658u: goto label_42c658;
        case 0x42c65cu: goto label_42c65c;
        case 0x42c660u: goto label_42c660;
        case 0x42c664u: goto label_42c664;
        case 0x42c668u: goto label_42c668;
        case 0x42c66cu: goto label_42c66c;
        case 0x42c670u: goto label_42c670;
        case 0x42c674u: goto label_42c674;
        case 0x42c678u: goto label_42c678;
        case 0x42c67cu: goto label_42c67c;
        case 0x42c680u: goto label_42c680;
        case 0x42c684u: goto label_42c684;
        case 0x42c688u: goto label_42c688;
        case 0x42c68cu: goto label_42c68c;
        case 0x42c690u: goto label_42c690;
        case 0x42c694u: goto label_42c694;
        case 0x42c698u: goto label_42c698;
        case 0x42c69cu: goto label_42c69c;
        case 0x42c6a0u: goto label_42c6a0;
        case 0x42c6a4u: goto label_42c6a4;
        case 0x42c6a8u: goto label_42c6a8;
        case 0x42c6acu: goto label_42c6ac;
        case 0x42c6b0u: goto label_42c6b0;
        case 0x42c6b4u: goto label_42c6b4;
        case 0x42c6b8u: goto label_42c6b8;
        case 0x42c6bcu: goto label_42c6bc;
        case 0x42c6c0u: goto label_42c6c0;
        case 0x42c6c4u: goto label_42c6c4;
        case 0x42c6c8u: goto label_42c6c8;
        case 0x42c6ccu: goto label_42c6cc;
        case 0x42c6d0u: goto label_42c6d0;
        case 0x42c6d4u: goto label_42c6d4;
        case 0x42c6d8u: goto label_42c6d8;
        case 0x42c6dcu: goto label_42c6dc;
        case 0x42c6e0u: goto label_42c6e0;
        case 0x42c6e4u: goto label_42c6e4;
        case 0x42c6e8u: goto label_42c6e8;
        case 0x42c6ecu: goto label_42c6ec;
        case 0x42c6f0u: goto label_42c6f0;
        case 0x42c6f4u: goto label_42c6f4;
        case 0x42c6f8u: goto label_42c6f8;
        case 0x42c6fcu: goto label_42c6fc;
        case 0x42c700u: goto label_42c700;
        case 0x42c704u: goto label_42c704;
        case 0x42c708u: goto label_42c708;
        case 0x42c70cu: goto label_42c70c;
        case 0x42c710u: goto label_42c710;
        case 0x42c714u: goto label_42c714;
        case 0x42c718u: goto label_42c718;
        case 0x42c71cu: goto label_42c71c;
        case 0x42c720u: goto label_42c720;
        case 0x42c724u: goto label_42c724;
        case 0x42c728u: goto label_42c728;
        case 0x42c72cu: goto label_42c72c;
        case 0x42c730u: goto label_42c730;
        case 0x42c734u: goto label_42c734;
        case 0x42c738u: goto label_42c738;
        case 0x42c73cu: goto label_42c73c;
        case 0x42c740u: goto label_42c740;
        case 0x42c744u: goto label_42c744;
        case 0x42c748u: goto label_42c748;
        case 0x42c74cu: goto label_42c74c;
        case 0x42c750u: goto label_42c750;
        case 0x42c754u: goto label_42c754;
        case 0x42c758u: goto label_42c758;
        case 0x42c75cu: goto label_42c75c;
        case 0x42c760u: goto label_42c760;
        case 0x42c764u: goto label_42c764;
        case 0x42c768u: goto label_42c768;
        case 0x42c76cu: goto label_42c76c;
        case 0x42c770u: goto label_42c770;
        case 0x42c774u: goto label_42c774;
        case 0x42c778u: goto label_42c778;
        case 0x42c77cu: goto label_42c77c;
        case 0x42c780u: goto label_42c780;
        case 0x42c784u: goto label_42c784;
        case 0x42c788u: goto label_42c788;
        case 0x42c78cu: goto label_42c78c;
        case 0x42c790u: goto label_42c790;
        case 0x42c794u: goto label_42c794;
        case 0x42c798u: goto label_42c798;
        case 0x42c79cu: goto label_42c79c;
        case 0x42c7a0u: goto label_42c7a0;
        case 0x42c7a4u: goto label_42c7a4;
        case 0x42c7a8u: goto label_42c7a8;
        case 0x42c7acu: goto label_42c7ac;
        case 0x42c7b0u: goto label_42c7b0;
        case 0x42c7b4u: goto label_42c7b4;
        case 0x42c7b8u: goto label_42c7b8;
        case 0x42c7bcu: goto label_42c7bc;
        case 0x42c7c0u: goto label_42c7c0;
        case 0x42c7c4u: goto label_42c7c4;
        case 0x42c7c8u: goto label_42c7c8;
        case 0x42c7ccu: goto label_42c7cc;
        case 0x42c7d0u: goto label_42c7d0;
        case 0x42c7d4u: goto label_42c7d4;
        case 0x42c7d8u: goto label_42c7d8;
        case 0x42c7dcu: goto label_42c7dc;
        case 0x42c7e0u: goto label_42c7e0;
        case 0x42c7e4u: goto label_42c7e4;
        case 0x42c7e8u: goto label_42c7e8;
        case 0x42c7ecu: goto label_42c7ec;
        case 0x42c7f0u: goto label_42c7f0;
        case 0x42c7f4u: goto label_42c7f4;
        case 0x42c7f8u: goto label_42c7f8;
        case 0x42c7fcu: goto label_42c7fc;
        case 0x42c800u: goto label_42c800;
        case 0x42c804u: goto label_42c804;
        case 0x42c808u: goto label_42c808;
        case 0x42c80cu: goto label_42c80c;
        case 0x42c810u: goto label_42c810;
        case 0x42c814u: goto label_42c814;
        case 0x42c818u: goto label_42c818;
        case 0x42c81cu: goto label_42c81c;
        case 0x42c820u: goto label_42c820;
        case 0x42c824u: goto label_42c824;
        case 0x42c828u: goto label_42c828;
        case 0x42c82cu: goto label_42c82c;
        case 0x42c830u: goto label_42c830;
        case 0x42c834u: goto label_42c834;
        case 0x42c838u: goto label_42c838;
        case 0x42c83cu: goto label_42c83c;
        case 0x42c840u: goto label_42c840;
        case 0x42c844u: goto label_42c844;
        case 0x42c848u: goto label_42c848;
        case 0x42c84cu: goto label_42c84c;
        case 0x42c850u: goto label_42c850;
        case 0x42c854u: goto label_42c854;
        case 0x42c858u: goto label_42c858;
        case 0x42c85cu: goto label_42c85c;
        case 0x42c860u: goto label_42c860;
        case 0x42c864u: goto label_42c864;
        case 0x42c868u: goto label_42c868;
        case 0x42c86cu: goto label_42c86c;
        case 0x42c870u: goto label_42c870;
        case 0x42c874u: goto label_42c874;
        case 0x42c878u: goto label_42c878;
        case 0x42c87cu: goto label_42c87c;
        case 0x42c880u: goto label_42c880;
        case 0x42c884u: goto label_42c884;
        case 0x42c888u: goto label_42c888;
        case 0x42c88cu: goto label_42c88c;
        case 0x42c890u: goto label_42c890;
        case 0x42c894u: goto label_42c894;
        case 0x42c898u: goto label_42c898;
        case 0x42c89cu: goto label_42c89c;
        case 0x42c8a0u: goto label_42c8a0;
        case 0x42c8a4u: goto label_42c8a4;
        case 0x42c8a8u: goto label_42c8a8;
        case 0x42c8acu: goto label_42c8ac;
        case 0x42c8b0u: goto label_42c8b0;
        case 0x42c8b4u: goto label_42c8b4;
        case 0x42c8b8u: goto label_42c8b8;
        case 0x42c8bcu: goto label_42c8bc;
        case 0x42c8c0u: goto label_42c8c0;
        case 0x42c8c4u: goto label_42c8c4;
        case 0x42c8c8u: goto label_42c8c8;
        case 0x42c8ccu: goto label_42c8cc;
        case 0x42c8d0u: goto label_42c8d0;
        case 0x42c8d4u: goto label_42c8d4;
        case 0x42c8d8u: goto label_42c8d8;
        case 0x42c8dcu: goto label_42c8dc;
        case 0x42c8e0u: goto label_42c8e0;
        case 0x42c8e4u: goto label_42c8e4;
        case 0x42c8e8u: goto label_42c8e8;
        case 0x42c8ecu: goto label_42c8ec;
        case 0x42c8f0u: goto label_42c8f0;
        case 0x42c8f4u: goto label_42c8f4;
        case 0x42c8f8u: goto label_42c8f8;
        case 0x42c8fcu: goto label_42c8fc;
        case 0x42c900u: goto label_42c900;
        case 0x42c904u: goto label_42c904;
        case 0x42c908u: goto label_42c908;
        case 0x42c90cu: goto label_42c90c;
        case 0x42c910u: goto label_42c910;
        case 0x42c914u: goto label_42c914;
        case 0x42c918u: goto label_42c918;
        case 0x42c91cu: goto label_42c91c;
        case 0x42c920u: goto label_42c920;
        case 0x42c924u: goto label_42c924;
        case 0x42c928u: goto label_42c928;
        case 0x42c92cu: goto label_42c92c;
        case 0x42c930u: goto label_42c930;
        case 0x42c934u: goto label_42c934;
        case 0x42c938u: goto label_42c938;
        case 0x42c93cu: goto label_42c93c;
        case 0x42c940u: goto label_42c940;
        case 0x42c944u: goto label_42c944;
        case 0x42c948u: goto label_42c948;
        case 0x42c94cu: goto label_42c94c;
        case 0x42c950u: goto label_42c950;
        case 0x42c954u: goto label_42c954;
        case 0x42c958u: goto label_42c958;
        case 0x42c95cu: goto label_42c95c;
        case 0x42c960u: goto label_42c960;
        case 0x42c964u: goto label_42c964;
        case 0x42c968u: goto label_42c968;
        case 0x42c96cu: goto label_42c96c;
        case 0x42c970u: goto label_42c970;
        case 0x42c974u: goto label_42c974;
        case 0x42c978u: goto label_42c978;
        case 0x42c97cu: goto label_42c97c;
        case 0x42c980u: goto label_42c980;
        case 0x42c984u: goto label_42c984;
        case 0x42c988u: goto label_42c988;
        case 0x42c98cu: goto label_42c98c;
        case 0x42c990u: goto label_42c990;
        case 0x42c994u: goto label_42c994;
        case 0x42c998u: goto label_42c998;
        case 0x42c99cu: goto label_42c99c;
        case 0x42c9a0u: goto label_42c9a0;
        case 0x42c9a4u: goto label_42c9a4;
        case 0x42c9a8u: goto label_42c9a8;
        case 0x42c9acu: goto label_42c9ac;
        case 0x42c9b0u: goto label_42c9b0;
        case 0x42c9b4u: goto label_42c9b4;
        case 0x42c9b8u: goto label_42c9b8;
        case 0x42c9bcu: goto label_42c9bc;
        case 0x42c9c0u: goto label_42c9c0;
        case 0x42c9c4u: goto label_42c9c4;
        case 0x42c9c8u: goto label_42c9c8;
        case 0x42c9ccu: goto label_42c9cc;
        case 0x42c9d0u: goto label_42c9d0;
        case 0x42c9d4u: goto label_42c9d4;
        case 0x42c9d8u: goto label_42c9d8;
        case 0x42c9dcu: goto label_42c9dc;
        case 0x42c9e0u: goto label_42c9e0;
        case 0x42c9e4u: goto label_42c9e4;
        case 0x42c9e8u: goto label_42c9e8;
        case 0x42c9ecu: goto label_42c9ec;
        case 0x42c9f0u: goto label_42c9f0;
        case 0x42c9f4u: goto label_42c9f4;
        case 0x42c9f8u: goto label_42c9f8;
        case 0x42c9fcu: goto label_42c9fc;
        case 0x42ca00u: goto label_42ca00;
        case 0x42ca04u: goto label_42ca04;
        case 0x42ca08u: goto label_42ca08;
        case 0x42ca0cu: goto label_42ca0c;
        case 0x42ca10u: goto label_42ca10;
        case 0x42ca14u: goto label_42ca14;
        case 0x42ca18u: goto label_42ca18;
        case 0x42ca1cu: goto label_42ca1c;
        case 0x42ca20u: goto label_42ca20;
        case 0x42ca24u: goto label_42ca24;
        case 0x42ca28u: goto label_42ca28;
        case 0x42ca2cu: goto label_42ca2c;
        case 0x42ca30u: goto label_42ca30;
        case 0x42ca34u: goto label_42ca34;
        case 0x42ca38u: goto label_42ca38;
        case 0x42ca3cu: goto label_42ca3c;
        case 0x42ca40u: goto label_42ca40;
        case 0x42ca44u: goto label_42ca44;
        case 0x42ca48u: goto label_42ca48;
        case 0x42ca4cu: goto label_42ca4c;
        case 0x42ca50u: goto label_42ca50;
        case 0x42ca54u: goto label_42ca54;
        case 0x42ca58u: goto label_42ca58;
        case 0x42ca5cu: goto label_42ca5c;
        case 0x42ca60u: goto label_42ca60;
        case 0x42ca64u: goto label_42ca64;
        case 0x42ca68u: goto label_42ca68;
        case 0x42ca6cu: goto label_42ca6c;
        case 0x42ca70u: goto label_42ca70;
        case 0x42ca74u: goto label_42ca74;
        case 0x42ca78u: goto label_42ca78;
        case 0x42ca7cu: goto label_42ca7c;
        default: break;
    }

    ctx->pc = 0x42c520u;

label_42c520:
    // 0x42c520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x42c520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_42c524:
    // 0x42c524: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x42c524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_42c528:
    // 0x42c528: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42c528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42c52c:
    // 0x42c52c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42c52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42c530:
    // 0x42c530: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x42c530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42c534:
    // 0x42c534: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_42c538:
    if (ctx->pc == 0x42C538u) {
        ctx->pc = 0x42C538u;
            // 0x42c538: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42C53Cu;
        goto label_42c53c;
    }
    ctx->pc = 0x42C534u;
    {
        const bool branch_taken_0x42c534 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42C534u;
            // 0x42c538: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c534) {
            ctx->pc = 0x42C668u;
            goto label_42c668;
        }
    }
    ctx->pc = 0x42C53Cu;
label_42c53c:
    // 0x42c53c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x42c53cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_42c540:
    // 0x42c540: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x42c540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_42c544:
    // 0x42c544: 0x2463c430  addiu       $v1, $v1, -0x3BD0
    ctx->pc = 0x42c544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951984));
label_42c548:
    // 0x42c548: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x42c548u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
label_42c54c:
    // 0x42c54c: 0x2442c468  addiu       $v0, $v0, -0x3B98
    ctx->pc = 0x42c54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952040));
label_42c550:
    // 0x42c550: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x42c550u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_42c554:
    // 0x42c554: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x42c554u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_42c558:
    // 0x42c558: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x42c558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_42c55c:
    // 0x42c55c: 0xc0407c0  jal         func_101F00
label_42c560:
    if (ctx->pc == 0x42C560u) {
        ctx->pc = 0x42C560u;
            // 0x42c560: 0x24a5c680  addiu       $a1, $a1, -0x3980 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952576));
        ctx->pc = 0x42C564u;
        goto label_42c564;
    }
    ctx->pc = 0x42C55Cu;
    SET_GPR_U32(ctx, 31, 0x42C564u);
    ctx->pc = 0x42C560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42C55Cu;
            // 0x42c560: 0x24a5c680  addiu       $a1, $a1, -0x3980 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C564u; }
        if (ctx->pc != 0x42C564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C564u; }
        if (ctx->pc != 0x42C564u) { return; }
    }
    ctx->pc = 0x42C564u;
label_42c564:
    // 0x42c564: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x42c564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_42c568:
    // 0x42c568: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_42c56c:
    if (ctx->pc == 0x42C56Cu) {
        ctx->pc = 0x42C56Cu;
            // 0x42c56c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x42C570u;
        goto label_42c570;
    }
    ctx->pc = 0x42C568u;
    {
        const bool branch_taken_0x42c568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42c568) {
            ctx->pc = 0x42C56Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42C568u;
            // 0x42c56c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42C57Cu;
            goto label_42c57c;
        }
    }
    ctx->pc = 0x42C570u;
label_42c570:
    // 0x42c570: 0xc07507c  jal         func_1D41F0
label_42c574:
    if (ctx->pc == 0x42C574u) {
        ctx->pc = 0x42C574u;
            // 0x42c574: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x42C578u;
        goto label_42c578;
    }
    ctx->pc = 0x42C570u;
    SET_GPR_U32(ctx, 31, 0x42C578u);
    ctx->pc = 0x42C574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42C570u;
            // 0x42c574: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C578u; }
        if (ctx->pc != 0x42C578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C578u; }
        if (ctx->pc != 0x42C578u) { return; }
    }
    ctx->pc = 0x42C578u;
label_42c578:
    // 0x42c578: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x42c578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_42c57c:
    // 0x42c57c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_42c580:
    if (ctx->pc == 0x42C580u) {
        ctx->pc = 0x42C580u;
            // 0x42c580: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x42C584u;
        goto label_42c584;
    }
    ctx->pc = 0x42C57Cu;
    {
        const bool branch_taken_0x42c57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42c57c) {
            ctx->pc = 0x42C580u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42C57Cu;
            // 0x42c580: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42C5ACu;
            goto label_42c5ac;
        }
    }
    ctx->pc = 0x42C584u;
label_42c584:
    // 0x42c584: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_42c588:
    if (ctx->pc == 0x42C588u) {
        ctx->pc = 0x42C58Cu;
        goto label_42c58c;
    }
    ctx->pc = 0x42C584u;
    {
        const bool branch_taken_0x42c584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42c584) {
            ctx->pc = 0x42C5A8u;
            goto label_42c5a8;
        }
    }
    ctx->pc = 0x42C58Cu;
label_42c58c:
    // 0x42c58c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_42c590:
    if (ctx->pc == 0x42C590u) {
        ctx->pc = 0x42C594u;
        goto label_42c594;
    }
    ctx->pc = 0x42C58Cu;
    {
        const bool branch_taken_0x42c58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42c58c) {
            ctx->pc = 0x42C5A8u;
            goto label_42c5a8;
        }
    }
    ctx->pc = 0x42C594u;
label_42c594:
    // 0x42c594: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x42c594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_42c598:
    // 0x42c598: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_42c59c:
    if (ctx->pc == 0x42C59Cu) {
        ctx->pc = 0x42C5A0u;
        goto label_42c5a0;
    }
    ctx->pc = 0x42C598u;
    {
        const bool branch_taken_0x42c598 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x42c598) {
            ctx->pc = 0x42C5A8u;
            goto label_42c5a8;
        }
    }
    ctx->pc = 0x42C5A0u;
label_42c5a0:
    // 0x42c5a0: 0xc0400a8  jal         func_1002A0
label_42c5a4:
    if (ctx->pc == 0x42C5A4u) {
        ctx->pc = 0x42C5A8u;
        goto label_42c5a8;
    }
    ctx->pc = 0x42C5A0u;
    SET_GPR_U32(ctx, 31, 0x42C5A8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C5A8u; }
        if (ctx->pc != 0x42C5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C5A8u; }
        if (ctx->pc != 0x42C5A8u) { return; }
    }
    ctx->pc = 0x42C5A8u;
label_42c5a8:
    // 0x42c5a8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x42c5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_42c5ac:
    // 0x42c5ac: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_42c5b0:
    if (ctx->pc == 0x42C5B0u) {
        ctx->pc = 0x42C5B0u;
            // 0x42c5b0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x42C5B4u;
        goto label_42c5b4;
    }
    ctx->pc = 0x42C5ACu;
    {
        const bool branch_taken_0x42c5ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42c5ac) {
            ctx->pc = 0x42C5B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42C5ACu;
            // 0x42c5b0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42C5DCu;
            goto label_42c5dc;
        }
    }
    ctx->pc = 0x42C5B4u;
label_42c5b4:
    // 0x42c5b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_42c5b8:
    if (ctx->pc == 0x42C5B8u) {
        ctx->pc = 0x42C5BCu;
        goto label_42c5bc;
    }
    ctx->pc = 0x42C5B4u;
    {
        const bool branch_taken_0x42c5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42c5b4) {
            ctx->pc = 0x42C5D8u;
            goto label_42c5d8;
        }
    }
    ctx->pc = 0x42C5BCu;
label_42c5bc:
    // 0x42c5bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_42c5c0:
    if (ctx->pc == 0x42C5C0u) {
        ctx->pc = 0x42C5C4u;
        goto label_42c5c4;
    }
    ctx->pc = 0x42C5BCu;
    {
        const bool branch_taken_0x42c5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42c5bc) {
            ctx->pc = 0x42C5D8u;
            goto label_42c5d8;
        }
    }
    ctx->pc = 0x42C5C4u;
label_42c5c4:
    // 0x42c5c4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x42c5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_42c5c8:
    // 0x42c5c8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_42c5cc:
    if (ctx->pc == 0x42C5CCu) {
        ctx->pc = 0x42C5D0u;
        goto label_42c5d0;
    }
    ctx->pc = 0x42C5C8u;
    {
        const bool branch_taken_0x42c5c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x42c5c8) {
            ctx->pc = 0x42C5D8u;
            goto label_42c5d8;
        }
    }
    ctx->pc = 0x42C5D0u;
label_42c5d0:
    // 0x42c5d0: 0xc0400a8  jal         func_1002A0
label_42c5d4:
    if (ctx->pc == 0x42C5D4u) {
        ctx->pc = 0x42C5D8u;
        goto label_42c5d8;
    }
    ctx->pc = 0x42C5D0u;
    SET_GPR_U32(ctx, 31, 0x42C5D8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C5D8u; }
        if (ctx->pc != 0x42C5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C5D8u; }
        if (ctx->pc != 0x42C5D8u) { return; }
    }
    ctx->pc = 0x42C5D8u;
label_42c5d8:
    // 0x42c5d8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x42c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_42c5dc:
    // 0x42c5dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_42c5e0:
    if (ctx->pc == 0x42C5E0u) {
        ctx->pc = 0x42C5E4u;
        goto label_42c5e4;
    }
    ctx->pc = 0x42C5DCu;
    {
        const bool branch_taken_0x42c5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42c5dc) {
            ctx->pc = 0x42C5F8u;
            goto label_42c5f8;
        }
    }
    ctx->pc = 0x42C5E4u;
label_42c5e4:
    // 0x42c5e4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x42c5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_42c5e8:
    // 0x42c5e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42c5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42c5ec:
    // 0x42c5ec: 0x2463c418  addiu       $v1, $v1, -0x3BE8
    ctx->pc = 0x42c5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951960));
label_42c5f0:
    // 0x42c5f0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x42c5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_42c5f4:
    // 0x42c5f4: 0xac4074a8  sw          $zero, 0x74A8($v0)
    ctx->pc = 0x42c5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29864), GPR_U32(ctx, 0));
label_42c5f8:
    // 0x42c5f8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_42c5fc:
    if (ctx->pc == 0x42C5FCu) {
        ctx->pc = 0x42C5FCu;
            // 0x42c5fc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x42C600u;
        goto label_42c600;
    }
    ctx->pc = 0x42C5F8u;
    {
        const bool branch_taken_0x42c5f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x42c5f8) {
            ctx->pc = 0x42C5FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42C5F8u;
            // 0x42c5fc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42C654u;
            goto label_42c654;
        }
    }
    ctx->pc = 0x42C600u;
label_42c600:
    // 0x42c600: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x42c600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_42c604:
    // 0x42c604: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x42c604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_42c608:
    // 0x42c608: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x42c608u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_42c60c:
    // 0x42c60c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x42c60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_42c610:
    // 0x42c610: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_42c614:
    if (ctx->pc == 0x42C614u) {
        ctx->pc = 0x42C614u;
            // 0x42c614: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x42C618u;
        goto label_42c618;
    }
    ctx->pc = 0x42C610u;
    {
        const bool branch_taken_0x42c610 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x42c610) {
            ctx->pc = 0x42C614u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42C610u;
            // 0x42c614: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42C62Cu;
            goto label_42c62c;
        }
    }
    ctx->pc = 0x42C618u;
label_42c618:
    // 0x42c618: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x42c618u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42c61c:
    // 0x42c61c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x42c61cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_42c620:
    // 0x42c620: 0x320f809  jalr        $t9
label_42c624:
    if (ctx->pc == 0x42C624u) {
        ctx->pc = 0x42C624u;
            // 0x42c624: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x42C628u;
        goto label_42c628;
    }
    ctx->pc = 0x42C620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42C628u);
        ctx->pc = 0x42C624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42C620u;
            // 0x42c624: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42C628u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42C628u; }
            if (ctx->pc != 0x42C628u) { return; }
        }
        }
    }
    ctx->pc = 0x42C628u;
label_42c628:
    // 0x42c628: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x42c628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_42c62c:
    // 0x42c62c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_42c630:
    if (ctx->pc == 0x42C630u) {
        ctx->pc = 0x42C630u;
            // 0x42c630: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42C634u;
        goto label_42c634;
    }
    ctx->pc = 0x42C62Cu;
    {
        const bool branch_taken_0x42c62c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x42c62c) {
            ctx->pc = 0x42C630u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42C62Cu;
            // 0x42c630: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42C648u;
            goto label_42c648;
        }
    }
    ctx->pc = 0x42C634u;
label_42c634:
    // 0x42c634: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x42c634u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42c638:
    // 0x42c638: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x42c638u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_42c63c:
    // 0x42c63c: 0x320f809  jalr        $t9
label_42c640:
    if (ctx->pc == 0x42C640u) {
        ctx->pc = 0x42C640u;
            // 0x42c640: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x42C644u;
        goto label_42c644;
    }
    ctx->pc = 0x42C63Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42C644u);
        ctx->pc = 0x42C640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42C63Cu;
            // 0x42c640: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42C644u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42C644u; }
            if (ctx->pc != 0x42C644u) { return; }
        }
        }
    }
    ctx->pc = 0x42C644u;
label_42c644:
    // 0x42c644: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x42c644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42c648:
    // 0x42c648: 0xc075bf8  jal         func_1D6FE0
label_42c64c:
    if (ctx->pc == 0x42C64Cu) {
        ctx->pc = 0x42C64Cu;
            // 0x42c64c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42C650u;
        goto label_42c650;
    }
    ctx->pc = 0x42C648u;
    SET_GPR_U32(ctx, 31, 0x42C650u);
    ctx->pc = 0x42C64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42C648u;
            // 0x42c64c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C650u; }
        if (ctx->pc != 0x42C650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C650u; }
        if (ctx->pc != 0x42C650u) { return; }
    }
    ctx->pc = 0x42C650u;
label_42c650:
    // 0x42c650: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x42c650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_42c654:
    // 0x42c654: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x42c654u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_42c658:
    // 0x42c658: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_42c65c:
    if (ctx->pc == 0x42C65Cu) {
        ctx->pc = 0x42C65Cu;
            // 0x42c65c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42C660u;
        goto label_42c660;
    }
    ctx->pc = 0x42C658u;
    {
        const bool branch_taken_0x42c658 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x42c658) {
            ctx->pc = 0x42C65Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42C658u;
            // 0x42c65c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42C66Cu;
            goto label_42c66c;
        }
    }
    ctx->pc = 0x42C660u;
label_42c660:
    // 0x42c660: 0xc0400a8  jal         func_1002A0
label_42c664:
    if (ctx->pc == 0x42C664u) {
        ctx->pc = 0x42C664u;
            // 0x42c664: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42C668u;
        goto label_42c668;
    }
    ctx->pc = 0x42C660u;
    SET_GPR_U32(ctx, 31, 0x42C668u);
    ctx->pc = 0x42C664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42C660u;
            // 0x42c664: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C668u; }
        if (ctx->pc != 0x42C668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C668u; }
        if (ctx->pc != 0x42C668u) { return; }
    }
    ctx->pc = 0x42C668u;
label_42c668:
    // 0x42c668: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x42c668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42c66c:
    // 0x42c66c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x42c66cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_42c670:
    // 0x42c670: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42c670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42c674:
    // 0x42c674: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42c674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42c678:
    // 0x42c678: 0x3e00008  jr          $ra
label_42c67c:
    if (ctx->pc == 0x42C67Cu) {
        ctx->pc = 0x42C67Cu;
            // 0x42c67c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x42C680u;
        goto label_42c680;
    }
    ctx->pc = 0x42C678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42C678u;
            // 0x42c67c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42C680u;
label_42c680:
    // 0x42c680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x42c680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_42c684:
    // 0x42c684: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x42c684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_42c688:
    // 0x42c688: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42c688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42c68c:
    // 0x42c68c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42c68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42c690:
    // 0x42c690: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x42c690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42c694:
    // 0x42c694: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_42c698:
    if (ctx->pc == 0x42C698u) {
        ctx->pc = 0x42C698u;
            // 0x42c698: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42C69Cu;
        goto label_42c69c;
    }
    ctx->pc = 0x42C694u;
    {
        const bool branch_taken_0x42c694 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42C694u;
            // 0x42c698: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c694) {
            ctx->pc = 0x42C75Cu;
            goto label_42c75c;
        }
    }
    ctx->pc = 0x42C69Cu;
label_42c69c:
    // 0x42c69c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x42c69cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_42c6a0:
    // 0x42c6a0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x42c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_42c6a4:
    // 0x42c6a4: 0x2463c4d0  addiu       $v1, $v1, -0x3B30
    ctx->pc = 0x42c6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952144));
label_42c6a8:
    // 0x42c6a8: 0x2442c510  addiu       $v0, $v0, -0x3AF0
    ctx->pc = 0x42c6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952208));
label_42c6ac:
    // 0x42c6ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x42c6acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_42c6b0:
    // 0x42c6b0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x42c6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_42c6b4:
    // 0x42c6b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x42c6b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42c6b8:
    // 0x42c6b8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x42c6b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_42c6bc:
    // 0x42c6bc: 0x320f809  jalr        $t9
label_42c6c0:
    if (ctx->pc == 0x42C6C0u) {
        ctx->pc = 0x42C6C4u;
        goto label_42c6c4;
    }
    ctx->pc = 0x42C6BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42C6C4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x42C6C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42C6C4u; }
            if (ctx->pc != 0x42C6C4u) { return; }
        }
        }
    }
    ctx->pc = 0x42C6C4u;
label_42c6c4:
    // 0x42c6c4: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_42c6c8:
    if (ctx->pc == 0x42C6C8u) {
        ctx->pc = 0x42C6C8u;
            // 0x42c6c8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x42C6CCu;
        goto label_42c6cc;
    }
    ctx->pc = 0x42C6C4u;
    {
        const bool branch_taken_0x42c6c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x42c6c4) {
            ctx->pc = 0x42C6C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42C6C4u;
            // 0x42c6c8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42C748u;
            goto label_42c748;
        }
    }
    ctx->pc = 0x42C6CCu;
label_42c6cc:
    // 0x42c6cc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x42c6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_42c6d0:
    // 0x42c6d0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x42c6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_42c6d4:
    // 0x42c6d4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x42c6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_42c6d8:
    // 0x42c6d8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x42c6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_42c6dc:
    // 0x42c6dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x42c6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_42c6e0:
    // 0x42c6e0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x42c6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_42c6e4:
    // 0x42c6e4: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x42c6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_42c6e8:
    // 0x42c6e8: 0xc0aecc4  jal         func_2BB310
label_42c6ec:
    if (ctx->pc == 0x42C6ECu) {
        ctx->pc = 0x42C6ECu;
            // 0x42c6ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x42C6F0u;
        goto label_42c6f0;
    }
    ctx->pc = 0x42C6E8u;
    SET_GPR_U32(ctx, 31, 0x42C6F0u);
    ctx->pc = 0x42C6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42C6E8u;
            // 0x42c6ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C6F0u; }
        if (ctx->pc != 0x42C6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C6F0u; }
        if (ctx->pc != 0x42C6F0u) { return; }
    }
    ctx->pc = 0x42C6F0u;
label_42c6f0:
    // 0x42c6f0: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x42c6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_42c6f4:
    // 0x42c6f4: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x42c6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_42c6f8:
    // 0x42c6f8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_42c6fc:
    if (ctx->pc == 0x42C6FCu) {
        ctx->pc = 0x42C6FCu;
            // 0x42c6fc: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x42C700u;
        goto label_42c700;
    }
    ctx->pc = 0x42C6F8u;
    {
        const bool branch_taken_0x42c6f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x42c6f8) {
            ctx->pc = 0x42C6FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42C6F8u;
            // 0x42c6fc: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42C714u;
            goto label_42c714;
        }
    }
    ctx->pc = 0x42C700u;
label_42c700:
    // 0x42c700: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x42c700u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_42c704:
    // 0x42c704: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x42c704u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_42c708:
    // 0x42c708: 0x320f809  jalr        $t9
label_42c70c:
    if (ctx->pc == 0x42C70Cu) {
        ctx->pc = 0x42C70Cu;
            // 0x42c70c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x42C710u;
        goto label_42c710;
    }
    ctx->pc = 0x42C708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42C710u);
        ctx->pc = 0x42C70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42C708u;
            // 0x42c70c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42C710u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42C710u; }
            if (ctx->pc != 0x42C710u) { return; }
        }
        }
    }
    ctx->pc = 0x42C710u;
label_42c710:
    // 0x42c710: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x42c710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_42c714:
    // 0x42c714: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x42c714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_42c718:
    // 0x42c718: 0xc0aec9c  jal         func_2BB270
label_42c71c:
    if (ctx->pc == 0x42C71Cu) {
        ctx->pc = 0x42C71Cu;
            // 0x42c71c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x42C720u;
        goto label_42c720;
    }
    ctx->pc = 0x42C718u;
    SET_GPR_U32(ctx, 31, 0x42C720u);
    ctx->pc = 0x42C71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42C718u;
            // 0x42c71c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C720u; }
        if (ctx->pc != 0x42C720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C720u; }
        if (ctx->pc != 0x42C720u) { return; }
    }
    ctx->pc = 0x42C720u;
label_42c720:
    // 0x42c720: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x42c720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_42c724:
    // 0x42c724: 0xc0aec88  jal         func_2BB220
label_42c728:
    if (ctx->pc == 0x42C728u) {
        ctx->pc = 0x42C728u;
            // 0x42c728: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x42C72Cu;
        goto label_42c72c;
    }
    ctx->pc = 0x42C724u;
    SET_GPR_U32(ctx, 31, 0x42C72Cu);
    ctx->pc = 0x42C728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42C724u;
            // 0x42c728: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C72Cu; }
        if (ctx->pc != 0x42C72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C72Cu; }
        if (ctx->pc != 0x42C72Cu) { return; }
    }
    ctx->pc = 0x42C72Cu;
label_42c72c:
    // 0x42c72c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x42c72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_42c730:
    // 0x42c730: 0xc0aec0c  jal         func_2BB030
label_42c734:
    if (ctx->pc == 0x42C734u) {
        ctx->pc = 0x42C734u;
            // 0x42c734: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42C738u;
        goto label_42c738;
    }
    ctx->pc = 0x42C730u;
    SET_GPR_U32(ctx, 31, 0x42C738u);
    ctx->pc = 0x42C734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42C730u;
            // 0x42c734: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C738u; }
        if (ctx->pc != 0x42C738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C738u; }
        if (ctx->pc != 0x42C738u) { return; }
    }
    ctx->pc = 0x42C738u;
label_42c738:
    // 0x42c738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42c738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42c73c:
    // 0x42c73c: 0xc0aeaa8  jal         func_2BAAA0
label_42c740:
    if (ctx->pc == 0x42C740u) {
        ctx->pc = 0x42C740u;
            // 0x42c740: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42C744u;
        goto label_42c744;
    }
    ctx->pc = 0x42C73Cu;
    SET_GPR_U32(ctx, 31, 0x42C744u);
    ctx->pc = 0x42C740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42C73Cu;
            // 0x42c740: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C744u; }
        if (ctx->pc != 0x42C744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C744u; }
        if (ctx->pc != 0x42C744u) { return; }
    }
    ctx->pc = 0x42C744u;
label_42c744:
    // 0x42c744: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x42c744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_42c748:
    // 0x42c748: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x42c748u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_42c74c:
    // 0x42c74c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_42c750:
    if (ctx->pc == 0x42C750u) {
        ctx->pc = 0x42C750u;
            // 0x42c750: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42C754u;
        goto label_42c754;
    }
    ctx->pc = 0x42C74Cu;
    {
        const bool branch_taken_0x42c74c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x42c74c) {
            ctx->pc = 0x42C750u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42C74Cu;
            // 0x42c750: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42C760u;
            goto label_42c760;
        }
    }
    ctx->pc = 0x42C754u;
label_42c754:
    // 0x42c754: 0xc0400a8  jal         func_1002A0
label_42c758:
    if (ctx->pc == 0x42C758u) {
        ctx->pc = 0x42C758u;
            // 0x42c758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42C75Cu;
        goto label_42c75c;
    }
    ctx->pc = 0x42C754u;
    SET_GPR_U32(ctx, 31, 0x42C75Cu);
    ctx->pc = 0x42C758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42C754u;
            // 0x42c758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C75Cu; }
        if (ctx->pc != 0x42C75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C75Cu; }
        if (ctx->pc != 0x42C75Cu) { return; }
    }
    ctx->pc = 0x42C75Cu;
label_42c75c:
    // 0x42c75c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x42c75cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42c760:
    // 0x42c760: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x42c760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_42c764:
    // 0x42c764: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42c764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42c768:
    // 0x42c768: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42c768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42c76c:
    // 0x42c76c: 0x3e00008  jr          $ra
label_42c770:
    if (ctx->pc == 0x42C770u) {
        ctx->pc = 0x42C770u;
            // 0x42c770: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x42C774u;
        goto label_42c774;
    }
    ctx->pc = 0x42C76Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42C76Cu;
            // 0x42c770: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42C774u;
label_42c774:
    // 0x42c774: 0x0  nop
    ctx->pc = 0x42c774u;
    // NOP
label_42c778:
    // 0x42c778: 0x0  nop
    ctx->pc = 0x42c778u;
    // NOP
label_42c77c:
    // 0x42c77c: 0x0  nop
    ctx->pc = 0x42c77cu;
    // NOP
label_42c780:
    // 0x42c780: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x42c780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_42c784:
    // 0x42c784: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x42c784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_42c788:
    // 0x42c788: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x42c788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_42c78c:
    // 0x42c78c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x42c78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_42c790:
    // 0x42c790: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x42c790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_42c794:
    // 0x42c794: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x42c794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_42c798:
    // 0x42c798: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x42c798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_42c79c:
    // 0x42c79c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x42c79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_42c7a0:
    // 0x42c7a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x42c7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_42c7a4:
    // 0x42c7a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42c7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42c7a8:
    // 0x42c7a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42c7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42c7ac:
    // 0x42c7ac: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x42c7acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_42c7b0:
    // 0x42c7b0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x42c7b0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_42c7b4:
    // 0x42c7b4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x42c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_42c7b8:
    // 0x42c7b8: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_42c7bc:
    if (ctx->pc == 0x42C7BCu) {
        ctx->pc = 0x42C7BCu;
            // 0x42c7bc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42C7C0u;
        goto label_42c7c0;
    }
    ctx->pc = 0x42C7B8u;
    {
        const bool branch_taken_0x42c7b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x42C7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42C7B8u;
            // 0x42c7bc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c7b8) {
            ctx->pc = 0x42C7FCu;
            goto label_42c7fc;
        }
    }
    ctx->pc = 0x42C7C0u;
label_42c7c0:
    // 0x42c7c0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x42c7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_42c7c4:
    // 0x42c7c4: 0x10a30034  beq         $a1, $v1, . + 4 + (0x34 << 2)
label_42c7c8:
    if (ctx->pc == 0x42C7C8u) {
        ctx->pc = 0x42C7CCu;
        goto label_42c7cc;
    }
    ctx->pc = 0x42C7C4u;
    {
        const bool branch_taken_0x42c7c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x42c7c4) {
            ctx->pc = 0x42C898u;
            goto label_42c898;
        }
    }
    ctx->pc = 0x42C7CCu;
label_42c7cc:
    // 0x42c7cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x42c7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_42c7d0:
    // 0x42c7d0: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_42c7d4:
    if (ctx->pc == 0x42C7D4u) {
        ctx->pc = 0x42C7D4u;
            // 0x42c7d4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x42C7D8u;
        goto label_42c7d8;
    }
    ctx->pc = 0x42C7D0u;
    {
        const bool branch_taken_0x42c7d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x42c7d0) {
            ctx->pc = 0x42C7D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42C7D0u;
            // 0x42c7d4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42C7E0u;
            goto label_42c7e0;
        }
    }
    ctx->pc = 0x42C7D8u;
label_42c7d8:
    // 0x42c7d8: 0x1000002f  b           . + 4 + (0x2F << 2)
label_42c7dc:
    if (ctx->pc == 0x42C7DCu) {
        ctx->pc = 0x42C7E0u;
        goto label_42c7e0;
    }
    ctx->pc = 0x42C7D8u;
    {
        const bool branch_taken_0x42c7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x42c7d8) {
            ctx->pc = 0x42C898u;
            goto label_42c898;
        }
    }
    ctx->pc = 0x42C7E0u;
label_42c7e0:
    // 0x42c7e0: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x42c7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_42c7e4:
    // 0x42c7e4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x42c7e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_42c7e8:
    // 0x42c7e8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x42c7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_42c7ec:
    // 0x42c7ec: 0x320f809  jalr        $t9
label_42c7f0:
    if (ctx->pc == 0x42C7F0u) {
        ctx->pc = 0x42C7F0u;
            // 0x42c7f0: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x42C7F4u;
        goto label_42c7f4;
    }
    ctx->pc = 0x42C7ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42C7F4u);
        ctx->pc = 0x42C7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42C7ECu;
            // 0x42c7f0: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42C7F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42C7F4u; }
            if (ctx->pc != 0x42C7F4u) { return; }
        }
        }
    }
    ctx->pc = 0x42C7F4u;
label_42c7f4:
    // 0x42c7f4: 0x10000028  b           . + 4 + (0x28 << 2)
label_42c7f8:
    if (ctx->pc == 0x42C7F8u) {
        ctx->pc = 0x42C7FCu;
        goto label_42c7fc;
    }
    ctx->pc = 0x42C7F4u;
    {
        const bool branch_taken_0x42c7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x42c7f4) {
            ctx->pc = 0x42C898u;
            goto label_42c898;
        }
    }
    ctx->pc = 0x42C7FCu;
label_42c7fc:
    // 0x42c7fc: 0x8e740070  lw          $s4, 0x70($s3)
    ctx->pc = 0x42c7fcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_42c800:
    // 0x42c800: 0x12800025  beqz        $s4, . + 4 + (0x25 << 2)
label_42c804:
    if (ctx->pc == 0x42C804u) {
        ctx->pc = 0x42C808u;
        goto label_42c808;
    }
    ctx->pc = 0x42C800u;
    {
        const bool branch_taken_0x42c800 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x42c800) {
            ctx->pc = 0x42C898u;
            goto label_42c898;
        }
    }
    ctx->pc = 0x42C808u;
label_42c808:
    // 0x42c808: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x42c808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_42c80c:
    // 0x42c80c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x42c80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_42c810:
    // 0x42c810: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x42c810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_42c814:
    // 0x42c814: 0x26770084  addiu       $s7, $s3, 0x84
    ctx->pc = 0x42c814u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
label_42c818:
    // 0x42c818: 0x8c72e378  lw          $s2, -0x1C88($v1)
    ctx->pc = 0x42c818u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_42c81c:
    // 0x42c81c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42c81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42c820:
    // 0x42c820: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x42c820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_42c824:
    // 0x42c824: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x42c824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_42c828:
    // 0x42c828: 0x8c50e370  lw          $s0, -0x1C90($v0)
    ctx->pc = 0x42c828u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_42c82c:
    // 0x42c82c: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x42c82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_42c830:
    // 0x42c830: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x42c830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
label_42c834:
    // 0x42c834: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x42c834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_42c838:
    // 0x42c838: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x42c838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_42c83c:
    // 0x42c83c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x42c83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_42c840:
    // 0x42c840: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x42c840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_42c844:
    // 0x42c844: 0xc04e738  jal         func_139CE0
label_42c848:
    if (ctx->pc == 0x42C848u) {
        ctx->pc = 0x42C848u;
            // 0x42c848: 0x24510010  addiu       $s1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x42C84Cu;
        goto label_42c84c;
    }
    ctx->pc = 0x42C844u;
    SET_GPR_U32(ctx, 31, 0x42C84Cu);
    ctx->pc = 0x42C848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42C844u;
            // 0x42c848: 0x24510010  addiu       $s1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C84Cu; }
        if (ctx->pc != 0x42C84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C84Cu; }
        if (ctx->pc != 0x42C84Cu) { return; }
    }
    ctx->pc = 0x42C84Cu;
label_42c84c:
    // 0x42c84c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x42c84cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42c850:
    // 0x42c850: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x42c850u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42c854:
    // 0x42c854: 0x8e630074  lw          $v1, 0x74($s3)
    ctx->pc = 0x42c854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_42c858:
    // 0x42c858: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x42c858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_42c85c:
    // 0x42c85c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x42c85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_42c860:
    // 0x42c860: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x42c860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_42c864:
    // 0x42c864: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x42c864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42c868:
    // 0x42c868: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x42c868u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_42c86c:
    // 0x42c86c: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x42c86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_42c870:
    // 0x42c870: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x42c870u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42c874:
    // 0x42c874: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x42c874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_42c878:
    // 0x42c878: 0x8c4a0130  lw          $t2, 0x130($v0)
    ctx->pc = 0x42c878u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_42c87c:
    // 0x42c87c: 0xc10b3bc  jal         func_42CEF0
label_42c880:
    if (ctx->pc == 0x42C880u) {
        ctx->pc = 0x42C880u;
            // 0x42c880: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x42C884u;
        goto label_42c884;
    }
    ctx->pc = 0x42C87Cu;
    SET_GPR_U32(ctx, 31, 0x42C884u);
    ctx->pc = 0x42C880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42C87Cu;
            // 0x42c880: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42CEF0u;
    if (runtime->hasFunction(0x42CEF0u)) {
        auto targetFn = runtime->lookupFunction(0x42CEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C884u; }
        if (ctx->pc != 0x42C884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042CEF0_0x42cef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C884u; }
        if (ctx->pc != 0x42C884u) { return; }
    }
    ctx->pc = 0x42C884u;
label_42c884:
    // 0x42c884: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x42c884u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_42c888:
    // 0x42c888: 0x2d4182b  sltu        $v1, $s6, $s4
    ctx->pc = 0x42c888u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_42c88c:
    // 0x42c88c: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_42c890:
    if (ctx->pc == 0x42C890u) {
        ctx->pc = 0x42C890u;
            // 0x42c890: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x42C894u;
        goto label_42c894;
    }
    ctx->pc = 0x42C88Cu;
    {
        const bool branch_taken_0x42c88c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x42C890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42C88Cu;
            // 0x42c890: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c88c) {
            ctx->pc = 0x42C854u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_42c854;
        }
    }
    ctx->pc = 0x42C894u;
label_42c894:
    // 0x42c894: 0x0  nop
    ctx->pc = 0x42c894u;
    // NOP
label_42c898:
    // 0x42c898: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x42c898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_42c89c:
    // 0x42c89c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x42c89cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_42c8a0:
    // 0x42c8a0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x42c8a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_42c8a4:
    // 0x42c8a4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x42c8a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_42c8a8:
    // 0x42c8a8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x42c8a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_42c8ac:
    // 0x42c8ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x42c8acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_42c8b0:
    // 0x42c8b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x42c8b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_42c8b4:
    // 0x42c8b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42c8b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42c8b8:
    // 0x42c8b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42c8b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42c8bc:
    // 0x42c8bc: 0x3e00008  jr          $ra
label_42c8c0:
    if (ctx->pc == 0x42C8C0u) {
        ctx->pc = 0x42C8C0u;
            // 0x42c8c0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x42C8C4u;
        goto label_42c8c4;
    }
    ctx->pc = 0x42C8BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42C8BCu;
            // 0x42c8c0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42C8C4u;
label_42c8c4:
    // 0x42c8c4: 0x0  nop
    ctx->pc = 0x42c8c4u;
    // NOP
label_42c8c8:
    // 0x42c8c8: 0x0  nop
    ctx->pc = 0x42c8c8u;
    // NOP
label_42c8cc:
    // 0x42c8cc: 0x0  nop
    ctx->pc = 0x42c8ccu;
    // NOP
label_42c8d0:
    // 0x42c8d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x42c8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_42c8d4:
    // 0x42c8d4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x42c8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_42c8d8:
    // 0x42c8d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x42c8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_42c8dc:
    // 0x42c8dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x42c8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_42c8e0:
    // 0x42c8e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x42c8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_42c8e4:
    // 0x42c8e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42c8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42c8e8:
    // 0x42c8e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42c8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42c8ec:
    // 0x42c8ec: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x42c8ecu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_42c8f0:
    // 0x42c8f0: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_42c8f4:
    if (ctx->pc == 0x42C8F4u) {
        ctx->pc = 0x42C8F4u;
            // 0x42c8f4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42C8F8u;
        goto label_42c8f8;
    }
    ctx->pc = 0x42C8F0u;
    {
        const bool branch_taken_0x42c8f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x42C8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42C8F0u;
            // 0x42c8f4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c8f0) {
            ctx->pc = 0x42C924u;
            goto label_42c924;
        }
    }
    ctx->pc = 0x42C8F8u;
label_42c8f8:
    // 0x42c8f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x42c8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_42c8fc:
    // 0x42c8fc: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_42c900:
    if (ctx->pc == 0x42C900u) {
        ctx->pc = 0x42C900u;
            // 0x42c900: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x42C904u;
        goto label_42c904;
    }
    ctx->pc = 0x42C8FCu;
    {
        const bool branch_taken_0x42c8fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x42c8fc) {
            ctx->pc = 0x42C900u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42C8FCu;
            // 0x42c900: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42C918u;
            goto label_42c918;
        }
    }
    ctx->pc = 0x42C904u;
label_42c904:
    // 0x42c904: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x42c904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_42c908:
    // 0x42c908: 0x10a30033  beq         $a1, $v1, . + 4 + (0x33 << 2)
label_42c90c:
    if (ctx->pc == 0x42C90Cu) {
        ctx->pc = 0x42C910u;
        goto label_42c910;
    }
    ctx->pc = 0x42C908u;
    {
        const bool branch_taken_0x42c908 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x42c908) {
            ctx->pc = 0x42C9D8u;
            goto label_42c9d8;
        }
    }
    ctx->pc = 0x42C910u;
label_42c910:
    // 0x42c910: 0x10000031  b           . + 4 + (0x31 << 2)
label_42c914:
    if (ctx->pc == 0x42C914u) {
        ctx->pc = 0x42C918u;
        goto label_42c918;
    }
    ctx->pc = 0x42C910u;
    {
        const bool branch_taken_0x42c910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x42c910) {
            ctx->pc = 0x42C9D8u;
            goto label_42c9d8;
        }
    }
    ctx->pc = 0x42C918u;
label_42c918:
    // 0x42c918: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x42c918u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_42c91c:
    // 0x42c91c: 0x320f809  jalr        $t9
label_42c920:
    if (ctx->pc == 0x42C920u) {
        ctx->pc = 0x42C924u;
        goto label_42c924;
    }
    ctx->pc = 0x42C91Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42C924u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x42C924u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42C924u; }
            if (ctx->pc != 0x42C924u) { return; }
        }
        }
    }
    ctx->pc = 0x42C924u;
label_42c924:
    // 0x42c924: 0x8e230098  lw          $v1, 0x98($s1)
    ctx->pc = 0x42c924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_42c928:
    // 0x42c928: 0x8e300070  lw          $s0, 0x70($s1)
    ctx->pc = 0x42c928u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_42c92c:
    // 0x42c92c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_42c930:
    if (ctx->pc == 0x42C930u) {
        ctx->pc = 0x42C930u;
            // 0x42c930: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->pc = 0x42C934u;
        goto label_42c934;
    }
    ctx->pc = 0x42C92Cu;
    {
        const bool branch_taken_0x42c92c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42C92Cu;
            // 0x42c930: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c92c) {
            ctx->pc = 0x42C9A4u;
            goto label_42c9a4;
        }
    }
    ctx->pc = 0x42C934u;
label_42c934:
    // 0x42c934: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x42c934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_42c938:
    // 0x42c938: 0x2486001c  addiu       $a2, $a0, 0x1C
    ctx->pc = 0x42c938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
label_42c93c:
    // 0x42c93c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x42c93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_42c940:
    // 0x42c940: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x42c940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42c944:
    // 0x42c944: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x42c944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42c948:
    // 0x42c948: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x42c948u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_42c94c:
    // 0x42c94c: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x42c94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
label_42c950:
    // 0x42c950: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x42c950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_42c954:
    // 0x42c954: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x42c954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42c958:
    // 0x42c958: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x42c958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42c95c:
    // 0x42c95c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x42c95cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_42c960:
    // 0x42c960: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_42c964:
    if (ctx->pc == 0x42C964u) {
        ctx->pc = 0x42C964u;
            // 0x42c964: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x42C968u;
        goto label_42c968;
    }
    ctx->pc = 0x42C960u;
    {
        const bool branch_taken_0x42c960 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x42C964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42C960u;
            // 0x42c964: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c960) {
            ctx->pc = 0x42C96Cu;
            goto label_42c96c;
        }
    }
    ctx->pc = 0x42C968u;
label_42c968:
    // 0x42c968: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x42c968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42c96c:
    // 0x42c96c: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
label_42c970:
    if (ctx->pc == 0x42C970u) {
        ctx->pc = 0x42C970u;
            // 0x42c970: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x42C974u;
        goto label_42c974;
    }
    ctx->pc = 0x42C96Cu;
    {
        const bool branch_taken_0x42c96c = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x42c96c) {
            ctx->pc = 0x42C970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42C96Cu;
            // 0x42c970: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42C980u;
            goto label_42c980;
        }
    }
    ctx->pc = 0x42C974u;
label_42c974:
    // 0x42c974: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x42c974u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_42c978:
    // 0x42c978: 0x10000007  b           . + 4 + (0x7 << 2)
label_42c97c:
    if (ctx->pc == 0x42C97Cu) {
        ctx->pc = 0x42C97Cu;
            // 0x42c97c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x42C980u;
        goto label_42c980;
    }
    ctx->pc = 0x42C978u;
    {
        const bool branch_taken_0x42c978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42C978u;
            // 0x42c97c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c978) {
            ctx->pc = 0x42C998u;
            goto label_42c998;
        }
    }
    ctx->pc = 0x42C980u;
label_42c980:
    // 0x42c980: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x42c980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_42c984:
    // 0x42c984: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x42c984u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_42c988:
    // 0x42c988: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x42c988u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_42c98c:
    // 0x42c98c: 0x0  nop
    ctx->pc = 0x42c98cu;
    // NOP
label_42c990:
    // 0x42c990: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x42c990u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_42c994:
    // 0x42c994: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x42c994u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_42c998:
    // 0x42c998: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x42c998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42c99c:
    // 0x42c99c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x42c99cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_42c9a0:
    // 0x42c9a0: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x42c9a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_42c9a4:
    // 0x42c9a4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_42c9a8:
    if (ctx->pc == 0x42C9A8u) {
        ctx->pc = 0x42C9ACu;
        goto label_42c9ac;
    }
    ctx->pc = 0x42C9A4u;
    {
        const bool branch_taken_0x42c9a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x42c9a4) {
            ctx->pc = 0x42C9D8u;
            goto label_42c9d8;
        }
    }
    ctx->pc = 0x42C9ACu;
label_42c9ac:
    // 0x42c9ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x42c9acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42c9b0:
    // 0x42c9b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x42c9b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42c9b4:
    // 0x42c9b4: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x42c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_42c9b8:
    // 0x42c9b8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x42c9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_42c9bc:
    // 0x42c9bc: 0xc0e3658  jal         func_38D960
label_42c9c0:
    if (ctx->pc == 0x42C9C0u) {
        ctx->pc = 0x42C9C0u;
            // 0x42c9c0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x42C9C4u;
        goto label_42c9c4;
    }
    ctx->pc = 0x42C9BCu;
    SET_GPR_U32(ctx, 31, 0x42C9C4u);
    ctx->pc = 0x42C9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42C9BCu;
            // 0x42c9c0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C9C4u; }
        if (ctx->pc != 0x42C9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C9C4u; }
        if (ctx->pc != 0x42C9C4u) { return; }
    }
    ctx->pc = 0x42C9C4u;
label_42c9c4:
    // 0x42c9c4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x42c9c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_42c9c8:
    // 0x42c9c8: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x42c9c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_42c9cc:
    // 0x42c9cc: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_42c9d0:
    if (ctx->pc == 0x42C9D0u) {
        ctx->pc = 0x42C9D0u;
            // 0x42c9d0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x42C9D4u;
        goto label_42c9d4;
    }
    ctx->pc = 0x42C9CCu;
    {
        const bool branch_taken_0x42c9cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x42C9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42C9CCu;
            // 0x42c9d0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c9cc) {
            ctx->pc = 0x42C9B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_42c9b4;
        }
    }
    ctx->pc = 0x42C9D4u;
label_42c9d4:
    // 0x42c9d4: 0x0  nop
    ctx->pc = 0x42c9d4u;
    // NOP
label_42c9d8:
    // 0x42c9d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x42c9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_42c9dc:
    // 0x42c9dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x42c9dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_42c9e0:
    // 0x42c9e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x42c9e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_42c9e4:
    // 0x42c9e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42c9e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42c9e8:
    // 0x42c9e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42c9e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42c9ec:
    // 0x42c9ec: 0x3e00008  jr          $ra
label_42c9f0:
    if (ctx->pc == 0x42C9F0u) {
        ctx->pc = 0x42C9F0u;
            // 0x42c9f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x42C9F4u;
        goto label_42c9f4;
    }
    ctx->pc = 0x42C9ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42C9ECu;
            // 0x42c9f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42C9F4u;
label_42c9f4:
    // 0x42c9f4: 0x0  nop
    ctx->pc = 0x42c9f4u;
    // NOP
label_42c9f8:
    // 0x42c9f8: 0x0  nop
    ctx->pc = 0x42c9f8u;
    // NOP
label_42c9fc:
    // 0x42c9fc: 0x0  nop
    ctx->pc = 0x42c9fcu;
    // NOP
label_42ca00:
    // 0x42ca00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x42ca00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_42ca04:
    // 0x42ca04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x42ca04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_42ca08:
    // 0x42ca08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x42ca08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_42ca0c:
    // 0x42ca0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x42ca0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_42ca10:
    // 0x42ca10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42ca10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42ca14:
    // 0x42ca14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42ca14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42ca18:
    // 0x42ca18: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x42ca18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_42ca1c:
    // 0x42ca1c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_42ca20:
    if (ctx->pc == 0x42CA20u) {
        ctx->pc = 0x42CA20u;
            // 0x42ca20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42CA24u;
        goto label_42ca24;
    }
    ctx->pc = 0x42CA1Cu;
    {
        const bool branch_taken_0x42ca1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x42CA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42CA1Cu;
            // 0x42ca20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ca1c) {
            ctx->pc = 0x42CA58u;
            goto label_42ca58;
        }
    }
    ctx->pc = 0x42CA24u;
label_42ca24:
    // 0x42ca24: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x42ca24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42ca28:
    // 0x42ca28: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x42ca28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42ca2c:
    // 0x42ca2c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x42ca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_42ca30:
    // 0x42ca30: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x42ca30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_42ca34:
    // 0x42ca34: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x42ca34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_42ca38:
    // 0x42ca38: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x42ca38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42ca3c:
    // 0x42ca3c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x42ca3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_42ca40:
    // 0x42ca40: 0x320f809  jalr        $t9
label_42ca44:
    if (ctx->pc == 0x42CA44u) {
        ctx->pc = 0x42CA48u;
        goto label_42ca48;
    }
    ctx->pc = 0x42CA40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42CA48u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x42CA48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42CA48u; }
            if (ctx->pc != 0x42CA48u) { return; }
        }
        }
    }
    ctx->pc = 0x42CA48u;
label_42ca48:
    // 0x42ca48: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x42ca48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_42ca4c:
    // 0x42ca4c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x42ca4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_42ca50:
    // 0x42ca50: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_42ca54:
    if (ctx->pc == 0x42CA54u) {
        ctx->pc = 0x42CA54u;
            // 0x42ca54: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x42CA58u;
        goto label_42ca58;
    }
    ctx->pc = 0x42CA50u;
    {
        const bool branch_taken_0x42ca50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x42CA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42CA50u;
            // 0x42ca54: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ca50) {
            ctx->pc = 0x42CA2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_42ca2c;
        }
    }
    ctx->pc = 0x42CA58u;
label_42ca58:
    // 0x42ca58: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x42ca58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_42ca5c:
    // 0x42ca5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x42ca5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_42ca60:
    // 0x42ca60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x42ca60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_42ca64:
    // 0x42ca64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42ca64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42ca68:
    // 0x42ca68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42ca68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42ca6c:
    // 0x42ca6c: 0x3e00008  jr          $ra
label_42ca70:
    if (ctx->pc == 0x42CA70u) {
        ctx->pc = 0x42CA70u;
            // 0x42ca70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x42CA74u;
        goto label_42ca74;
    }
    ctx->pc = 0x42CA6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42CA70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42CA6Cu;
            // 0x42ca70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42CA74u;
label_42ca74:
    // 0x42ca74: 0x0  nop
    ctx->pc = 0x42ca74u;
    // NOP
label_42ca78:
    // 0x42ca78: 0x0  nop
    ctx->pc = 0x42ca78u;
    // NOP
label_42ca7c:
    // 0x42ca7c: 0x0  nop
    ctx->pc = 0x42ca7cu;
    // NOP
}
