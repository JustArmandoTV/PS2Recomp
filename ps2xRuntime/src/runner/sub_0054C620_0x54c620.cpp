#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0054C620
// Address: 0x54c620 - 0x54cb00
void sub_0054C620_0x54c620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0054C620_0x54c620");
#endif

    switch (ctx->pc) {
        case 0x54c620u: goto label_54c620;
        case 0x54c624u: goto label_54c624;
        case 0x54c628u: goto label_54c628;
        case 0x54c62cu: goto label_54c62c;
        case 0x54c630u: goto label_54c630;
        case 0x54c634u: goto label_54c634;
        case 0x54c638u: goto label_54c638;
        case 0x54c63cu: goto label_54c63c;
        case 0x54c640u: goto label_54c640;
        case 0x54c644u: goto label_54c644;
        case 0x54c648u: goto label_54c648;
        case 0x54c64cu: goto label_54c64c;
        case 0x54c650u: goto label_54c650;
        case 0x54c654u: goto label_54c654;
        case 0x54c658u: goto label_54c658;
        case 0x54c65cu: goto label_54c65c;
        case 0x54c660u: goto label_54c660;
        case 0x54c664u: goto label_54c664;
        case 0x54c668u: goto label_54c668;
        case 0x54c66cu: goto label_54c66c;
        case 0x54c670u: goto label_54c670;
        case 0x54c674u: goto label_54c674;
        case 0x54c678u: goto label_54c678;
        case 0x54c67cu: goto label_54c67c;
        case 0x54c680u: goto label_54c680;
        case 0x54c684u: goto label_54c684;
        case 0x54c688u: goto label_54c688;
        case 0x54c68cu: goto label_54c68c;
        case 0x54c690u: goto label_54c690;
        case 0x54c694u: goto label_54c694;
        case 0x54c698u: goto label_54c698;
        case 0x54c69cu: goto label_54c69c;
        case 0x54c6a0u: goto label_54c6a0;
        case 0x54c6a4u: goto label_54c6a4;
        case 0x54c6a8u: goto label_54c6a8;
        case 0x54c6acu: goto label_54c6ac;
        case 0x54c6b0u: goto label_54c6b0;
        case 0x54c6b4u: goto label_54c6b4;
        case 0x54c6b8u: goto label_54c6b8;
        case 0x54c6bcu: goto label_54c6bc;
        case 0x54c6c0u: goto label_54c6c0;
        case 0x54c6c4u: goto label_54c6c4;
        case 0x54c6c8u: goto label_54c6c8;
        case 0x54c6ccu: goto label_54c6cc;
        case 0x54c6d0u: goto label_54c6d0;
        case 0x54c6d4u: goto label_54c6d4;
        case 0x54c6d8u: goto label_54c6d8;
        case 0x54c6dcu: goto label_54c6dc;
        case 0x54c6e0u: goto label_54c6e0;
        case 0x54c6e4u: goto label_54c6e4;
        case 0x54c6e8u: goto label_54c6e8;
        case 0x54c6ecu: goto label_54c6ec;
        case 0x54c6f0u: goto label_54c6f0;
        case 0x54c6f4u: goto label_54c6f4;
        case 0x54c6f8u: goto label_54c6f8;
        case 0x54c6fcu: goto label_54c6fc;
        case 0x54c700u: goto label_54c700;
        case 0x54c704u: goto label_54c704;
        case 0x54c708u: goto label_54c708;
        case 0x54c70cu: goto label_54c70c;
        case 0x54c710u: goto label_54c710;
        case 0x54c714u: goto label_54c714;
        case 0x54c718u: goto label_54c718;
        case 0x54c71cu: goto label_54c71c;
        case 0x54c720u: goto label_54c720;
        case 0x54c724u: goto label_54c724;
        case 0x54c728u: goto label_54c728;
        case 0x54c72cu: goto label_54c72c;
        case 0x54c730u: goto label_54c730;
        case 0x54c734u: goto label_54c734;
        case 0x54c738u: goto label_54c738;
        case 0x54c73cu: goto label_54c73c;
        case 0x54c740u: goto label_54c740;
        case 0x54c744u: goto label_54c744;
        case 0x54c748u: goto label_54c748;
        case 0x54c74cu: goto label_54c74c;
        case 0x54c750u: goto label_54c750;
        case 0x54c754u: goto label_54c754;
        case 0x54c758u: goto label_54c758;
        case 0x54c75cu: goto label_54c75c;
        case 0x54c760u: goto label_54c760;
        case 0x54c764u: goto label_54c764;
        case 0x54c768u: goto label_54c768;
        case 0x54c76cu: goto label_54c76c;
        case 0x54c770u: goto label_54c770;
        case 0x54c774u: goto label_54c774;
        case 0x54c778u: goto label_54c778;
        case 0x54c77cu: goto label_54c77c;
        case 0x54c780u: goto label_54c780;
        case 0x54c784u: goto label_54c784;
        case 0x54c788u: goto label_54c788;
        case 0x54c78cu: goto label_54c78c;
        case 0x54c790u: goto label_54c790;
        case 0x54c794u: goto label_54c794;
        case 0x54c798u: goto label_54c798;
        case 0x54c79cu: goto label_54c79c;
        case 0x54c7a0u: goto label_54c7a0;
        case 0x54c7a4u: goto label_54c7a4;
        case 0x54c7a8u: goto label_54c7a8;
        case 0x54c7acu: goto label_54c7ac;
        case 0x54c7b0u: goto label_54c7b0;
        case 0x54c7b4u: goto label_54c7b4;
        case 0x54c7b8u: goto label_54c7b8;
        case 0x54c7bcu: goto label_54c7bc;
        case 0x54c7c0u: goto label_54c7c0;
        case 0x54c7c4u: goto label_54c7c4;
        case 0x54c7c8u: goto label_54c7c8;
        case 0x54c7ccu: goto label_54c7cc;
        case 0x54c7d0u: goto label_54c7d0;
        case 0x54c7d4u: goto label_54c7d4;
        case 0x54c7d8u: goto label_54c7d8;
        case 0x54c7dcu: goto label_54c7dc;
        case 0x54c7e0u: goto label_54c7e0;
        case 0x54c7e4u: goto label_54c7e4;
        case 0x54c7e8u: goto label_54c7e8;
        case 0x54c7ecu: goto label_54c7ec;
        case 0x54c7f0u: goto label_54c7f0;
        case 0x54c7f4u: goto label_54c7f4;
        case 0x54c7f8u: goto label_54c7f8;
        case 0x54c7fcu: goto label_54c7fc;
        case 0x54c800u: goto label_54c800;
        case 0x54c804u: goto label_54c804;
        case 0x54c808u: goto label_54c808;
        case 0x54c80cu: goto label_54c80c;
        case 0x54c810u: goto label_54c810;
        case 0x54c814u: goto label_54c814;
        case 0x54c818u: goto label_54c818;
        case 0x54c81cu: goto label_54c81c;
        case 0x54c820u: goto label_54c820;
        case 0x54c824u: goto label_54c824;
        case 0x54c828u: goto label_54c828;
        case 0x54c82cu: goto label_54c82c;
        case 0x54c830u: goto label_54c830;
        case 0x54c834u: goto label_54c834;
        case 0x54c838u: goto label_54c838;
        case 0x54c83cu: goto label_54c83c;
        case 0x54c840u: goto label_54c840;
        case 0x54c844u: goto label_54c844;
        case 0x54c848u: goto label_54c848;
        case 0x54c84cu: goto label_54c84c;
        case 0x54c850u: goto label_54c850;
        case 0x54c854u: goto label_54c854;
        case 0x54c858u: goto label_54c858;
        case 0x54c85cu: goto label_54c85c;
        case 0x54c860u: goto label_54c860;
        case 0x54c864u: goto label_54c864;
        case 0x54c868u: goto label_54c868;
        case 0x54c86cu: goto label_54c86c;
        case 0x54c870u: goto label_54c870;
        case 0x54c874u: goto label_54c874;
        case 0x54c878u: goto label_54c878;
        case 0x54c87cu: goto label_54c87c;
        case 0x54c880u: goto label_54c880;
        case 0x54c884u: goto label_54c884;
        case 0x54c888u: goto label_54c888;
        case 0x54c88cu: goto label_54c88c;
        case 0x54c890u: goto label_54c890;
        case 0x54c894u: goto label_54c894;
        case 0x54c898u: goto label_54c898;
        case 0x54c89cu: goto label_54c89c;
        case 0x54c8a0u: goto label_54c8a0;
        case 0x54c8a4u: goto label_54c8a4;
        case 0x54c8a8u: goto label_54c8a8;
        case 0x54c8acu: goto label_54c8ac;
        case 0x54c8b0u: goto label_54c8b0;
        case 0x54c8b4u: goto label_54c8b4;
        case 0x54c8b8u: goto label_54c8b8;
        case 0x54c8bcu: goto label_54c8bc;
        case 0x54c8c0u: goto label_54c8c0;
        case 0x54c8c4u: goto label_54c8c4;
        case 0x54c8c8u: goto label_54c8c8;
        case 0x54c8ccu: goto label_54c8cc;
        case 0x54c8d0u: goto label_54c8d0;
        case 0x54c8d4u: goto label_54c8d4;
        case 0x54c8d8u: goto label_54c8d8;
        case 0x54c8dcu: goto label_54c8dc;
        case 0x54c8e0u: goto label_54c8e0;
        case 0x54c8e4u: goto label_54c8e4;
        case 0x54c8e8u: goto label_54c8e8;
        case 0x54c8ecu: goto label_54c8ec;
        case 0x54c8f0u: goto label_54c8f0;
        case 0x54c8f4u: goto label_54c8f4;
        case 0x54c8f8u: goto label_54c8f8;
        case 0x54c8fcu: goto label_54c8fc;
        case 0x54c900u: goto label_54c900;
        case 0x54c904u: goto label_54c904;
        case 0x54c908u: goto label_54c908;
        case 0x54c90cu: goto label_54c90c;
        case 0x54c910u: goto label_54c910;
        case 0x54c914u: goto label_54c914;
        case 0x54c918u: goto label_54c918;
        case 0x54c91cu: goto label_54c91c;
        case 0x54c920u: goto label_54c920;
        case 0x54c924u: goto label_54c924;
        case 0x54c928u: goto label_54c928;
        case 0x54c92cu: goto label_54c92c;
        case 0x54c930u: goto label_54c930;
        case 0x54c934u: goto label_54c934;
        case 0x54c938u: goto label_54c938;
        case 0x54c93cu: goto label_54c93c;
        case 0x54c940u: goto label_54c940;
        case 0x54c944u: goto label_54c944;
        case 0x54c948u: goto label_54c948;
        case 0x54c94cu: goto label_54c94c;
        case 0x54c950u: goto label_54c950;
        case 0x54c954u: goto label_54c954;
        case 0x54c958u: goto label_54c958;
        case 0x54c95cu: goto label_54c95c;
        case 0x54c960u: goto label_54c960;
        case 0x54c964u: goto label_54c964;
        case 0x54c968u: goto label_54c968;
        case 0x54c96cu: goto label_54c96c;
        case 0x54c970u: goto label_54c970;
        case 0x54c974u: goto label_54c974;
        case 0x54c978u: goto label_54c978;
        case 0x54c97cu: goto label_54c97c;
        case 0x54c980u: goto label_54c980;
        case 0x54c984u: goto label_54c984;
        case 0x54c988u: goto label_54c988;
        case 0x54c98cu: goto label_54c98c;
        case 0x54c990u: goto label_54c990;
        case 0x54c994u: goto label_54c994;
        case 0x54c998u: goto label_54c998;
        case 0x54c99cu: goto label_54c99c;
        case 0x54c9a0u: goto label_54c9a0;
        case 0x54c9a4u: goto label_54c9a4;
        case 0x54c9a8u: goto label_54c9a8;
        case 0x54c9acu: goto label_54c9ac;
        case 0x54c9b0u: goto label_54c9b0;
        case 0x54c9b4u: goto label_54c9b4;
        case 0x54c9b8u: goto label_54c9b8;
        case 0x54c9bcu: goto label_54c9bc;
        case 0x54c9c0u: goto label_54c9c0;
        case 0x54c9c4u: goto label_54c9c4;
        case 0x54c9c8u: goto label_54c9c8;
        case 0x54c9ccu: goto label_54c9cc;
        case 0x54c9d0u: goto label_54c9d0;
        case 0x54c9d4u: goto label_54c9d4;
        case 0x54c9d8u: goto label_54c9d8;
        case 0x54c9dcu: goto label_54c9dc;
        case 0x54c9e0u: goto label_54c9e0;
        case 0x54c9e4u: goto label_54c9e4;
        case 0x54c9e8u: goto label_54c9e8;
        case 0x54c9ecu: goto label_54c9ec;
        case 0x54c9f0u: goto label_54c9f0;
        case 0x54c9f4u: goto label_54c9f4;
        case 0x54c9f8u: goto label_54c9f8;
        case 0x54c9fcu: goto label_54c9fc;
        case 0x54ca00u: goto label_54ca00;
        case 0x54ca04u: goto label_54ca04;
        case 0x54ca08u: goto label_54ca08;
        case 0x54ca0cu: goto label_54ca0c;
        case 0x54ca10u: goto label_54ca10;
        case 0x54ca14u: goto label_54ca14;
        case 0x54ca18u: goto label_54ca18;
        case 0x54ca1cu: goto label_54ca1c;
        case 0x54ca20u: goto label_54ca20;
        case 0x54ca24u: goto label_54ca24;
        case 0x54ca28u: goto label_54ca28;
        case 0x54ca2cu: goto label_54ca2c;
        case 0x54ca30u: goto label_54ca30;
        case 0x54ca34u: goto label_54ca34;
        case 0x54ca38u: goto label_54ca38;
        case 0x54ca3cu: goto label_54ca3c;
        case 0x54ca40u: goto label_54ca40;
        case 0x54ca44u: goto label_54ca44;
        case 0x54ca48u: goto label_54ca48;
        case 0x54ca4cu: goto label_54ca4c;
        case 0x54ca50u: goto label_54ca50;
        case 0x54ca54u: goto label_54ca54;
        case 0x54ca58u: goto label_54ca58;
        case 0x54ca5cu: goto label_54ca5c;
        case 0x54ca60u: goto label_54ca60;
        case 0x54ca64u: goto label_54ca64;
        case 0x54ca68u: goto label_54ca68;
        case 0x54ca6cu: goto label_54ca6c;
        case 0x54ca70u: goto label_54ca70;
        case 0x54ca74u: goto label_54ca74;
        case 0x54ca78u: goto label_54ca78;
        case 0x54ca7cu: goto label_54ca7c;
        case 0x54ca80u: goto label_54ca80;
        case 0x54ca84u: goto label_54ca84;
        case 0x54ca88u: goto label_54ca88;
        case 0x54ca8cu: goto label_54ca8c;
        case 0x54ca90u: goto label_54ca90;
        case 0x54ca94u: goto label_54ca94;
        case 0x54ca98u: goto label_54ca98;
        case 0x54ca9cu: goto label_54ca9c;
        case 0x54caa0u: goto label_54caa0;
        case 0x54caa4u: goto label_54caa4;
        case 0x54caa8u: goto label_54caa8;
        case 0x54caacu: goto label_54caac;
        case 0x54cab0u: goto label_54cab0;
        case 0x54cab4u: goto label_54cab4;
        case 0x54cab8u: goto label_54cab8;
        case 0x54cabcu: goto label_54cabc;
        case 0x54cac0u: goto label_54cac0;
        case 0x54cac4u: goto label_54cac4;
        case 0x54cac8u: goto label_54cac8;
        case 0x54caccu: goto label_54cacc;
        case 0x54cad0u: goto label_54cad0;
        case 0x54cad4u: goto label_54cad4;
        case 0x54cad8u: goto label_54cad8;
        case 0x54cadcu: goto label_54cadc;
        case 0x54cae0u: goto label_54cae0;
        case 0x54cae4u: goto label_54cae4;
        case 0x54cae8u: goto label_54cae8;
        case 0x54caecu: goto label_54caec;
        case 0x54caf0u: goto label_54caf0;
        case 0x54caf4u: goto label_54caf4;
        case 0x54caf8u: goto label_54caf8;
        case 0x54cafcu: goto label_54cafc;
        default: break;
    }

    ctx->pc = 0x54c620u;

label_54c620:
    // 0x54c620: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x54c620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_54c624:
    // 0x54c624: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x54c624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_54c628:
    // 0x54c628: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x54c628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_54c62c:
    // 0x54c62c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x54c62cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_54c630:
    // 0x54c630: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x54c630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_54c634:
    // 0x54c634: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x54c634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54c638:
    // 0x54c638: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x54c638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_54c63c:
    // 0x54c63c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x54c63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_54c640:
    // 0x54c640: 0x3c150067  lui         $s5, 0x67
    ctx->pc = 0x54c640u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)103 << 16));
label_54c644:
    // 0x54c644: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x54c644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_54c648:
    // 0x54c648: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x54c648u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_54c64c:
    // 0x54c64c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x54c64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_54c650:
    // 0x54c650: 0x26b5ead0  addiu       $s5, $s5, -0x1530
    ctx->pc = 0x54c650u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961872));
label_54c654:
    // 0x54c654: 0x8456ead0  lh          $s6, -0x1530($v0)
    ctx->pc = 0x54c654u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961872)));
label_54c658:
    // 0x54c658: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x54c658u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_54c65c:
    // 0x54c65c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x54c65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_54c660:
    // 0x54c660: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x54c660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_54c664:
    // 0x54c664: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x54c664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_54c668:
    // 0x54c668: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x54c668u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_54c66c:
    // 0x54c66c: 0x8453ead2  lh          $s3, -0x152E($v0)
    ctx->pc = 0x54c66cu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961874)));
label_54c670:
    // 0x54c670: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x54c670u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_54c674:
    // 0x54c674: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x54c674u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_54c678:
    // 0x54c678: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x54c678u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_54c67c:
    // 0x54c67c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54c67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54c680:
    // 0x54c680: 0x9450db8a  lhu         $s0, -0x2476($v0)
    ctx->pc = 0x54c680u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957962)));
label_54c684:
    // 0x54c684: 0x9471db88  lhu         $s1, -0x2478($v1)
    ctx->pc = 0x54c684u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957960)));
label_54c688:
    // 0x54c688: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x54c688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_54c68c:
    // 0x54c68c: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x54c68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_54c690:
    // 0x54c690: 0xc0506ac  jal         func_141AB0
label_54c694:
    if (ctx->pc == 0x54C694u) {
        ctx->pc = 0x54C694u;
            // 0x54c694: 0x2652ec20  addiu       $s2, $s2, -0x13E0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962208));
        ctx->pc = 0x54C698u;
        goto label_54c698;
    }
    ctx->pc = 0x54C690u;
    SET_GPR_U32(ctx, 31, 0x54C698u);
    ctx->pc = 0x54C694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54C690u;
            // 0x54c694: 0x2652ec20  addiu       $s2, $s2, -0x13E0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C698u; }
        if (ctx->pc != 0x54C698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C698u; }
        if (ctx->pc != 0x54C698u) { return; }
    }
    ctx->pc = 0x54C698u;
label_54c698:
    // 0x54c698: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54c698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54c69c:
    // 0x54c69c: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x54c69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_54c6a0:
    // 0x54c6a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54c6a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54c6a4:
    // 0x54c6a4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x54c6a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_54c6a8:
    // 0x54c6a8: 0x320f809  jalr        $t9
label_54c6ac:
    if (ctx->pc == 0x54C6ACu) {
        ctx->pc = 0x54C6ACu;
            // 0x54c6ac: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x54C6B0u;
        goto label_54c6b0;
    }
    ctx->pc = 0x54C6A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54C6B0u);
        ctx->pc = 0x54C6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54C6A8u;
            // 0x54c6ac: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54C6B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54C6B0u; }
            if (ctx->pc != 0x54C6B0u) { return; }
        }
        }
    }
    ctx->pc = 0x54C6B0u;
label_54c6b0:
    // 0x54c6b0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x54c6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_54c6b4:
    // 0x54c6b4: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x54c6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_54c6b8:
    // 0x54c6b8: 0x2442ecd0  addiu       $v0, $v0, -0x1330
    ctx->pc = 0x54c6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962384));
label_54c6bc:
    // 0x54c6bc: 0x24a5ecb0  addiu       $a1, $a1, -0x1350
    ctx->pc = 0x54c6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962352));
label_54c6c0:
    // 0x54c6c0: 0xc4560008  lwc1        $f22, 0x8($v0)
    ctx->pc = 0x54c6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_54c6c4:
    // 0x54c6c4: 0xc4b70008  lwc1        $f23, 0x8($a1)
    ctx->pc = 0x54c6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_54c6c8:
    // 0x54c6c8: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x54c6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_54c6cc:
    // 0x54c6cc: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x54c6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_54c6d0:
    // 0x54c6d0: 0x8443ead4  lh          $v1, -0x152C($v0)
    ctx->pc = 0x54c6d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961876)));
label_54c6d4:
    // 0x54c6d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54c6d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54c6d8:
    // 0x54c6d8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54c6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54c6dc:
    // 0x54c6dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54c6dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54c6e0:
    // 0x54c6e0: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x54c6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_54c6e4:
    // 0x54c6e4: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x54c6e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_54c6e8:
    // 0x54c6e8: 0x46170001  sub.s       $f0, $f0, $f23
    ctx->pc = 0x54c6e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
label_54c6ec:
    // 0x54c6ec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_54c6f0:
    if (ctx->pc == 0x54C6F0u) {
        ctx->pc = 0x54C6F0u;
            // 0x54c6f0: 0x46160541  sub.s       $f21, $f0, $f22 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
        ctx->pc = 0x54C6F4u;
        goto label_54c6f4;
    }
    ctx->pc = 0x54C6ECu;
    {
        const bool branch_taken_0x54c6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x54C6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54C6ECu;
            // 0x54c6f0: 0x46160541  sub.s       $f21, $f0, $f22 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54c6ec) {
            ctx->pc = 0x54C6F8u;
            goto label_54c6f8;
        }
    }
    ctx->pc = 0x54C6F4u;
label_54c6f4:
    // 0x54c6f4: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x54c6f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_54c6f8:
    // 0x54c6f8: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x54c6f8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54c6fc:
    // 0x54c6fc: 0x0  nop
    ctx->pc = 0x54c6fcu;
    // NOP
label_54c700:
    // 0x54c700: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x54c700u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_54c704:
    // 0x54c704: 0x46016d00  add.s       $f20, $f13, $f1
    ctx->pc = 0x54c704u;
    ctx->f[20] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
label_54c708:
    // 0x54c708: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x54c708u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54c70c:
    // 0x54c70c: 0x0  nop
    ctx->pc = 0x54c70cu;
    // NOP
label_54c710:
    // 0x54c710: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x54c710u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_54c714:
    // 0x54c714: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x54c714u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54c718:
    // 0x54c718: 0x0  nop
    ctx->pc = 0x54c718u;
    // NOP
label_54c71c:
    // 0x54c71c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x54c71cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_54c720:
    // 0x54c720: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_54c724:
    if (ctx->pc == 0x54C724u) {
        ctx->pc = 0x54C724u;
            // 0x54c724: 0x460cbb80  add.s       $f14, $f23, $f12 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[23], ctx->f[12]);
        ctx->pc = 0x54C728u;
        goto label_54c728;
    }
    ctx->pc = 0x54C720u;
    {
        const bool branch_taken_0x54c720 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x54C724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54C720u;
            // 0x54c724: 0x460cbb80  add.s       $f14, $f23, $f12 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[23], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54c720) {
            ctx->pc = 0x54C734u;
            goto label_54c734;
        }
    }
    ctx->pc = 0x54C728u;
label_54c728:
    // 0x54c728: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54c728u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54c72c:
    // 0x54c72c: 0x10000008  b           . + 4 + (0x8 << 2)
label_54c730:
    if (ctx->pc == 0x54C730u) {
        ctx->pc = 0x54C730u;
            // 0x54c730: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54C734u;
        goto label_54c734;
    }
    ctx->pc = 0x54C72Cu;
    {
        const bool branch_taken_0x54c72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54C730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54C72Cu;
            // 0x54c730: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54c72c) {
            ctx->pc = 0x54C750u;
            goto label_54c750;
        }
    }
    ctx->pc = 0x54C734u;
label_54c734:
    // 0x54c734: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x54c734u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_54c738:
    // 0x54c738: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54c738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54c73c:
    // 0x54c73c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54c73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54c740:
    // 0x54c740: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54c740u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54c744:
    // 0x54c744: 0x0  nop
    ctx->pc = 0x54c744u;
    // NOP
label_54c748:
    // 0x54c748: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54c748u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54c74c:
    // 0x54c74c: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54c74cu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54c750:
    // 0x54c750: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54c754:
    if (ctx->pc == 0x54C754u) {
        ctx->pc = 0x54C754u;
            // 0x54c754: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54C758u;
        goto label_54c758;
    }
    ctx->pc = 0x54C750u;
    {
        const bool branch_taken_0x54c750 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54c750) {
            ctx->pc = 0x54C754u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54C750u;
            // 0x54c754: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54C764u;
            goto label_54c764;
        }
    }
    ctx->pc = 0x54C758u;
label_54c758:
    // 0x54c758: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54c758u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54c75c:
    // 0x54c75c: 0x10000007  b           . + 4 + (0x7 << 2)
label_54c760:
    if (ctx->pc == 0x54C760u) {
        ctx->pc = 0x54C760u;
            // 0x54c760: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54C764u;
        goto label_54c764;
    }
    ctx->pc = 0x54C75Cu;
    {
        const bool branch_taken_0x54c75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54C760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54C75Cu;
            // 0x54c760: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54c75c) {
            ctx->pc = 0x54C77Cu;
            goto label_54c77c;
        }
    }
    ctx->pc = 0x54C764u;
label_54c764:
    // 0x54c764: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54c764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54c768:
    // 0x54c768: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54c768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54c76c:
    // 0x54c76c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54c76cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54c770:
    // 0x54c770: 0x0  nop
    ctx->pc = 0x54c770u;
    // NOP
label_54c774:
    // 0x54c774: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54c774u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54c778:
    // 0x54c778: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54c778u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54c77c:
    // 0x54c77c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54c77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54c780:
    // 0x54c780: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54c780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54c784:
    // 0x54c784: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54c784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54c788:
    // 0x54c788: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x54c788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_54c78c:
    // 0x54c78c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x54c78cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_54c790:
    // 0x54c790: 0xc0bc284  jal         func_2F0A10
label_54c794:
    if (ctx->pc == 0x54C794u) {
        ctx->pc = 0x54C794u;
            // 0x54c794: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54C798u;
        goto label_54c798;
    }
    ctx->pc = 0x54C790u;
    SET_GPR_U32(ctx, 31, 0x54C798u);
    ctx->pc = 0x54C794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54C790u;
            // 0x54c794: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C798u; }
        if (ctx->pc != 0x54C798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C798u; }
        if (ctx->pc != 0x54C798u) { return; }
    }
    ctx->pc = 0x54C798u;
label_54c798:
    // 0x54c798: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x54c798u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54c79c:
    // 0x54c79c: 0x264500a0  addiu       $a1, $s2, 0xA0
    ctx->pc = 0x54c79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_54c7a0:
    // 0x54c7a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54c7a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54c7a4:
    // 0x54c7a4: 0x46170000  add.s       $f0, $f0, $f23
    ctx->pc = 0x54c7a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
label_54c7a8:
    // 0x54c7a8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x54c7a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_54c7ac:
    // 0x54c7ac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x54c7acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_54c7b0:
    // 0x54c7b0: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x54c7b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_54c7b4:
    // 0x54c7b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x54c7b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54c7b8:
    // 0x54c7b8: 0x0  nop
    ctx->pc = 0x54c7b8u;
    // NOP
label_54c7bc:
    // 0x54c7bc: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x54c7bcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_54c7c0:
    // 0x54c7c0: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x54c7c0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54c7c4:
    // 0x54c7c4: 0x0  nop
    ctx->pc = 0x54c7c4u;
    // NOP
label_54c7c8:
    // 0x54c7c8: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x54c7c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_54c7cc:
    // 0x54c7cc: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_54c7d0:
    if (ctx->pc == 0x54C7D0u) {
        ctx->pc = 0x54C7D0u;
            // 0x54c7d0: 0x460cab80  add.s       $f14, $f21, $f12 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[12]);
        ctx->pc = 0x54C7D4u;
        goto label_54c7d4;
    }
    ctx->pc = 0x54C7CCu;
    {
        const bool branch_taken_0x54c7cc = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x54C7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54C7CCu;
            // 0x54c7d0: 0x460cab80  add.s       $f14, $f21, $f12 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54c7cc) {
            ctx->pc = 0x54C7E0u;
            goto label_54c7e0;
        }
    }
    ctx->pc = 0x54C7D4u;
label_54c7d4:
    // 0x54c7d4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54c7d4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54c7d8:
    // 0x54c7d8: 0x10000008  b           . + 4 + (0x8 << 2)
label_54c7dc:
    if (ctx->pc == 0x54C7DCu) {
        ctx->pc = 0x54C7DCu;
            // 0x54c7dc: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54C7E0u;
        goto label_54c7e0;
    }
    ctx->pc = 0x54C7D8u;
    {
        const bool branch_taken_0x54c7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54C7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54C7D8u;
            // 0x54c7dc: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54c7d8) {
            ctx->pc = 0x54C7FCu;
            goto label_54c7fc;
        }
    }
    ctx->pc = 0x54C7E0u;
label_54c7e0:
    // 0x54c7e0: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x54c7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_54c7e4:
    // 0x54c7e4: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54c7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54c7e8:
    // 0x54c7e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54c7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54c7ec:
    // 0x54c7ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54c7ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54c7f0:
    // 0x54c7f0: 0x0  nop
    ctx->pc = 0x54c7f0u;
    // NOP
label_54c7f4:
    // 0x54c7f4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54c7f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54c7f8:
    // 0x54c7f8: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54c7f8u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54c7fc:
    // 0x54c7fc: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54c800:
    if (ctx->pc == 0x54C800u) {
        ctx->pc = 0x54C800u;
            // 0x54c800: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54C804u;
        goto label_54c804;
    }
    ctx->pc = 0x54C7FCu;
    {
        const bool branch_taken_0x54c7fc = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54c7fc) {
            ctx->pc = 0x54C800u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54C7FCu;
            // 0x54c800: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54C810u;
            goto label_54c810;
        }
    }
    ctx->pc = 0x54C804u;
label_54c804:
    // 0x54c804: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54c804u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54c808:
    // 0x54c808: 0x10000007  b           . + 4 + (0x7 << 2)
label_54c80c:
    if (ctx->pc == 0x54C80Cu) {
        ctx->pc = 0x54C80Cu;
            // 0x54c80c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54C810u;
        goto label_54c810;
    }
    ctx->pc = 0x54C808u;
    {
        const bool branch_taken_0x54c808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54C80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54C808u;
            // 0x54c80c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54c808) {
            ctx->pc = 0x54C828u;
            goto label_54c828;
        }
    }
    ctx->pc = 0x54C810u;
label_54c810:
    // 0x54c810: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54c810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54c814:
    // 0x54c814: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54c814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54c818:
    // 0x54c818: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54c818u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54c81c:
    // 0x54c81c: 0x0  nop
    ctx->pc = 0x54c81cu;
    // NOP
label_54c820:
    // 0x54c820: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54c820u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54c824:
    // 0x54c824: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54c824u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54c828:
    // 0x54c828: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54c828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54c82c:
    // 0x54c82c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54c82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54c830:
    // 0x54c830: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54c830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54c834:
    // 0x54c834: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x54c834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_54c838:
    // 0x54c838: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x54c838u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_54c83c:
    // 0x54c83c: 0xc0bc284  jal         func_2F0A10
label_54c840:
    if (ctx->pc == 0x54C840u) {
        ctx->pc = 0x54C840u;
            // 0x54c840: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54C844u;
        goto label_54c844;
    }
    ctx->pc = 0x54C83Cu;
    SET_GPR_U32(ctx, 31, 0x54C844u);
    ctx->pc = 0x54C840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54C83Cu;
            // 0x54c840: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C844u; }
        if (ctx->pc != 0x54C844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C844u; }
        if (ctx->pc != 0x54C844u) { return; }
    }
    ctx->pc = 0x54C844u;
label_54c844:
    // 0x54c844: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x54c844u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54c848:
    // 0x54c848: 0x264500b0  addiu       $a1, $s2, 0xB0
    ctx->pc = 0x54c848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
label_54c84c:
    // 0x54c84c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54c84cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54c850:
    // 0x54c850: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x54c850u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_54c854:
    // 0x54c854: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x54c854u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_54c858:
    // 0x54c858: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x54c858u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_54c85c:
    // 0x54c85c: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x54c85cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54c860:
    // 0x54c860: 0x0  nop
    ctx->pc = 0x54c860u;
    // NOP
label_54c864:
    // 0x54c864: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x54c864u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_54c868:
    // 0x54c868: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x54c868u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54c86c:
    // 0x54c86c: 0x0  nop
    ctx->pc = 0x54c86cu;
    // NOP
label_54c870:
    // 0x54c870: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x54c870u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_54c874:
    // 0x54c874: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_54c878:
    if (ctx->pc == 0x54C878u) {
        ctx->pc = 0x54C878u;
            // 0x54c878: 0x460cb380  add.s       $f14, $f22, $f12 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[22], ctx->f[12]);
        ctx->pc = 0x54C87Cu;
        goto label_54c87c;
    }
    ctx->pc = 0x54C874u;
    {
        const bool branch_taken_0x54c874 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x54C878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54C874u;
            // 0x54c878: 0x460cb380  add.s       $f14, $f22, $f12 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[22], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54c874) {
            ctx->pc = 0x54C888u;
            goto label_54c888;
        }
    }
    ctx->pc = 0x54C87Cu;
label_54c87c:
    // 0x54c87c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54c87cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54c880:
    // 0x54c880: 0x10000008  b           . + 4 + (0x8 << 2)
label_54c884:
    if (ctx->pc == 0x54C884u) {
        ctx->pc = 0x54C884u;
            // 0x54c884: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54C888u;
        goto label_54c888;
    }
    ctx->pc = 0x54C880u;
    {
        const bool branch_taken_0x54c880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54C884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54C880u;
            // 0x54c884: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54c880) {
            ctx->pc = 0x54C8A4u;
            goto label_54c8a4;
        }
    }
    ctx->pc = 0x54C888u;
label_54c888:
    // 0x54c888: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x54c888u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_54c88c:
    // 0x54c88c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54c88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54c890:
    // 0x54c890: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54c890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54c894:
    // 0x54c894: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54c894u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54c898:
    // 0x54c898: 0x0  nop
    ctx->pc = 0x54c898u;
    // NOP
label_54c89c:
    // 0x54c89c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54c89cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54c8a0:
    // 0x54c8a0: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54c8a0u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54c8a4:
    // 0x54c8a4: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54c8a8:
    if (ctx->pc == 0x54C8A8u) {
        ctx->pc = 0x54C8A8u;
            // 0x54c8a8: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54C8ACu;
        goto label_54c8ac;
    }
    ctx->pc = 0x54C8A4u;
    {
        const bool branch_taken_0x54c8a4 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54c8a4) {
            ctx->pc = 0x54C8A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54C8A4u;
            // 0x54c8a8: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54C8B8u;
            goto label_54c8b8;
        }
    }
    ctx->pc = 0x54C8ACu;
label_54c8ac:
    // 0x54c8ac: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54c8acu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54c8b0:
    // 0x54c8b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_54c8b4:
    if (ctx->pc == 0x54C8B4u) {
        ctx->pc = 0x54C8B4u;
            // 0x54c8b4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54C8B8u;
        goto label_54c8b8;
    }
    ctx->pc = 0x54C8B0u;
    {
        const bool branch_taken_0x54c8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54C8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54C8B0u;
            // 0x54c8b4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54c8b0) {
            ctx->pc = 0x54C8D0u;
            goto label_54c8d0;
        }
    }
    ctx->pc = 0x54C8B8u;
label_54c8b8:
    // 0x54c8b8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54c8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54c8bc:
    // 0x54c8bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54c8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54c8c0:
    // 0x54c8c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54c8c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54c8c4:
    // 0x54c8c4: 0x0  nop
    ctx->pc = 0x54c8c4u;
    // NOP
label_54c8c8:
    // 0x54c8c8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54c8c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54c8cc:
    // 0x54c8cc: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54c8ccu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54c8d0:
    // 0x54c8d0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54c8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54c8d4:
    // 0x54c8d4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54c8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54c8d8:
    // 0x54c8d8: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x54c8d8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_54c8dc:
    // 0x54c8dc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x54c8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_54c8e0:
    // 0x54c8e0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54c8e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54c8e4:
    // 0x54c8e4: 0xc0bc284  jal         func_2F0A10
label_54c8e8:
    if (ctx->pc == 0x54C8E8u) {
        ctx->pc = 0x54C8E8u;
            // 0x54c8e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54C8ECu;
        goto label_54c8ec;
    }
    ctx->pc = 0x54C8E4u;
    SET_GPR_U32(ctx, 31, 0x54C8ECu);
    ctx->pc = 0x54C8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54C8E4u;
            // 0x54c8e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C8ECu; }
        if (ctx->pc != 0x54C8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C8ECu; }
        if (ctx->pc != 0x54C8ECu) { return; }
    }
    ctx->pc = 0x54C8ECu;
label_54c8ec:
    // 0x54c8ec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54c8f0:
    // 0x54c8f0: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x54c8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_54c8f4:
    // 0x54c8f4: 0x86b30002  lh          $s3, 0x2($s5)
    ctx->pc = 0x54c8f4u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_54c8f8:
    // 0x54c8f8: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x54c8f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_54c8fc:
    // 0x54c8fc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_54c900:
    if (ctx->pc == 0x54C900u) {
        ctx->pc = 0x54C900u;
            // 0x54c900: 0x86a30008  lh          $v1, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->pc = 0x54C904u;
        goto label_54c904;
    }
    ctx->pc = 0x54C8FCu;
    {
        const bool branch_taken_0x54c8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x54C900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54C8FCu;
            // 0x54c900: 0x86a30008  lh          $v1, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54c8fc) {
            ctx->pc = 0x54C908u;
            goto label_54c908;
        }
    }
    ctx->pc = 0x54C904u;
label_54c904:
    // 0x54c904: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x54c904u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_54c908:
    // 0x54c908: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54c908u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54c90c:
    // 0x54c90c: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x54c90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_54c910:
    // 0x54c910: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x54c910u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_54c914:
    // 0x54c914: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x54c914u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_54c918:
    // 0x54c918: 0x0  nop
    ctx->pc = 0x54c918u;
    // NOP
label_54c91c:
    // 0x54c91c: 0x46011300  add.s       $f12, $f2, $f1
    ctx->pc = 0x54c91cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_54c920:
    // 0x54c920: 0xc64000c8  lwc1        $f0, 0xC8($s2)
    ctx->pc = 0x54c920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_54c924:
    // 0x54c924: 0xc64300cc  lwc1        $f3, 0xCC($s2)
    ctx->pc = 0x54c924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_54c928:
    // 0x54c928: 0x460c0380  add.s       $f14, $f0, $f12
    ctx->pc = 0x54c928u;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_54c92c:
    // 0x54c92c: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x54c92cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54c930:
    // 0x54c930: 0x0  nop
    ctx->pc = 0x54c930u;
    // NOP
label_54c934:
    // 0x54c934: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x54c934u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_54c938:
    // 0x54c938: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_54c93c:
    if (ctx->pc == 0x54C93Cu) {
        ctx->pc = 0x54C93Cu;
            // 0x54c93c: 0x46037b41  sub.s       $f13, $f15, $f3 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[3]);
        ctx->pc = 0x54C940u;
        goto label_54c940;
    }
    ctx->pc = 0x54C938u;
    {
        const bool branch_taken_0x54c938 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x54C93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54C938u;
            // 0x54c93c: 0x46037b41  sub.s       $f13, $f15, $f3 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54c938) {
            ctx->pc = 0x54C94Cu;
            goto label_54c94c;
        }
    }
    ctx->pc = 0x54C940u;
label_54c940:
    // 0x54c940: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54c940u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54c944:
    // 0x54c944: 0x10000008  b           . + 4 + (0x8 << 2)
label_54c948:
    if (ctx->pc == 0x54C948u) {
        ctx->pc = 0x54C948u;
            // 0x54c948: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54C94Cu;
        goto label_54c94c;
    }
    ctx->pc = 0x54C944u;
    {
        const bool branch_taken_0x54c944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54C948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54C944u;
            // 0x54c948: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54c944) {
            ctx->pc = 0x54C968u;
            goto label_54c968;
        }
    }
    ctx->pc = 0x54C94Cu;
label_54c94c:
    // 0x54c94c: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x54c94cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_54c950:
    // 0x54c950: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54c950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54c954:
    // 0x54c954: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54c954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54c958:
    // 0x54c958: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54c958u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54c95c:
    // 0x54c95c: 0x0  nop
    ctx->pc = 0x54c95cu;
    // NOP
label_54c960:
    // 0x54c960: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54c960u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54c964:
    // 0x54c964: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54c964u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54c968:
    // 0x54c968: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54c96c:
    if (ctx->pc == 0x54C96Cu) {
        ctx->pc = 0x54C96Cu;
            // 0x54c96c: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54C970u;
        goto label_54c970;
    }
    ctx->pc = 0x54C968u;
    {
        const bool branch_taken_0x54c968 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54c968) {
            ctx->pc = 0x54C96Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54C968u;
            // 0x54c96c: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54C97Cu;
            goto label_54c97c;
        }
    }
    ctx->pc = 0x54C970u;
label_54c970:
    // 0x54c970: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54c970u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54c974:
    // 0x54c974: 0x10000007  b           . + 4 + (0x7 << 2)
label_54c978:
    if (ctx->pc == 0x54C978u) {
        ctx->pc = 0x54C978u;
            // 0x54c978: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54C97Cu;
        goto label_54c97c;
    }
    ctx->pc = 0x54C974u;
    {
        const bool branch_taken_0x54c974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54C978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54C974u;
            // 0x54c978: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54c974) {
            ctx->pc = 0x54C994u;
            goto label_54c994;
        }
    }
    ctx->pc = 0x54C97Cu;
label_54c97c:
    // 0x54c97c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54c97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54c980:
    // 0x54c980: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54c980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54c984:
    // 0x54c984: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54c984u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54c988:
    // 0x54c988: 0x0  nop
    ctx->pc = 0x54c988u;
    // NOP
label_54c98c:
    // 0x54c98c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54c98cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54c990:
    // 0x54c990: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54c990u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54c994:
    // 0x54c994: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54c994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54c998:
    // 0x54c998: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54c998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54c99c:
    // 0x54c99c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54c99cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54c9a0:
    // 0x54c9a0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x54c9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_54c9a4:
    // 0x54c9a4: 0xc0bc284  jal         func_2F0A10
label_54c9a8:
    if (ctx->pc == 0x54C9A8u) {
        ctx->pc = 0x54C9A8u;
            // 0x54c9a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54C9ACu;
        goto label_54c9ac;
    }
    ctx->pc = 0x54C9A4u;
    SET_GPR_U32(ctx, 31, 0x54C9ACu);
    ctx->pc = 0x54C9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54C9A4u;
            // 0x54c9a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C9ACu; }
        if (ctx->pc != 0x54C9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C9ACu; }
        if (ctx->pc != 0x54C9ACu) { return; }
    }
    ctx->pc = 0x54C9ACu;
label_54c9ac:
    // 0x54c9ac: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54c9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54c9b0:
    // 0x54c9b0: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x54c9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_54c9b4:
    // 0x54c9b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54c9b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54c9b8:
    // 0x54c9b8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x54c9b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_54c9bc:
    // 0x54c9bc: 0x320f809  jalr        $t9
label_54c9c0:
    if (ctx->pc == 0x54C9C0u) {
        ctx->pc = 0x54C9C4u;
        goto label_54c9c4;
    }
    ctx->pc = 0x54C9BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54C9C4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54C9C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54C9C4u; }
            if (ctx->pc != 0x54C9C4u) { return; }
        }
        }
    }
    ctx->pc = 0x54C9C4u;
label_54c9c4:
    // 0x54c9c4: 0x92830010  lbu         $v1, 0x10($s4)
    ctx->pc = 0x54c9c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 16)));
label_54c9c8:
    // 0x54c9c8: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x54c9c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_54c9cc:
    // 0x54c9cc: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x54c9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
label_54c9d0:
    // 0x54c9d0: 0x2c61000b  sltiu       $at, $v1, 0xB
    ctx->pc = 0x54c9d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_54c9d4:
    // 0x54c9d4: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
label_54c9d8:
    if (ctx->pc == 0x54C9D8u) {
        ctx->pc = 0x54C9D8u;
            // 0x54c9d8: 0x2673000a  addiu       $s3, $s3, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 10));
        ctx->pc = 0x54C9DCu;
        goto label_54c9dc;
    }
    ctx->pc = 0x54C9D4u;
    {
        const bool branch_taken_0x54c9d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x54C9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54C9D4u;
            // 0x54c9d8: 0x2673000a  addiu       $s3, $s3, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54c9d4) {
            ctx->pc = 0x54CA3Cu;
            goto label_54ca3c;
        }
    }
    ctx->pc = 0x54C9DCu;
label_54c9dc:
    // 0x54c9dc: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x54c9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_54c9e0:
    // 0x54c9e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x54c9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_54c9e4:
    // 0x54c9e4: 0x2484eb20  addiu       $a0, $a0, -0x14E0
    ctx->pc = 0x54c9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961952));
label_54c9e8:
    // 0x54c9e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x54c9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_54c9ec:
    // 0x54c9ec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x54c9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_54c9f0:
    // 0x54c9f0: 0x600008  jr          $v1
label_54c9f4:
    if (ctx->pc == 0x54C9F4u) {
        ctx->pc = 0x54C9F8u;
        goto label_54c9f8;
    }
    ctx->pc = 0x54C9F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x54C9F8u: goto label_54c9f8;
            case 0x54CA00u: goto label_54ca00;
            case 0x54CA08u: goto label_54ca08;
            case 0x54CA20u: goto label_54ca20;
            case 0x54CA28u: goto label_54ca28;
            case 0x54CA30u: goto label_54ca30;
            case 0x54CA38u: goto label_54ca38;
            case 0x54CA3Cu: goto label_54ca3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x54C9F8u;
label_54c9f8:
    // 0x54c9f8: 0x10000010  b           . + 4 + (0x10 << 2)
label_54c9fc:
    if (ctx->pc == 0x54C9FCu) {
        ctx->pc = 0x54C9FCu;
            // 0x54c9fc: 0x24100043  addiu       $s0, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->pc = 0x54CA00u;
        goto label_54ca00;
    }
    ctx->pc = 0x54C9F8u;
    {
        const bool branch_taken_0x54c9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54C9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54C9F8u;
            // 0x54c9fc: 0x24100043  addiu       $s0, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54c9f8) {
            ctx->pc = 0x54CA3Cu;
            goto label_54ca3c;
        }
    }
    ctx->pc = 0x54CA00u;
label_54ca00:
    // 0x54ca00: 0x1000000e  b           . + 4 + (0xE << 2)
label_54ca04:
    if (ctx->pc == 0x54CA04u) {
        ctx->pc = 0x54CA04u;
            // 0x54ca04: 0x24100044  addiu       $s0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->pc = 0x54CA08u;
        goto label_54ca08;
    }
    ctx->pc = 0x54CA00u;
    {
        const bool branch_taken_0x54ca00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54CA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54CA00u;
            // 0x54ca04: 0x24100044  addiu       $s0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54ca00) {
            ctx->pc = 0x54CA3Cu;
            goto label_54ca3c;
        }
    }
    ctx->pc = 0x54CA08u;
label_54ca08:
    // 0x54ca08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x54ca08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_54ca0c:
    // 0x54ca0c: 0x2673fff6  addiu       $s3, $s3, -0xA
    ctx->pc = 0x54ca0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967286));
label_54ca10:
    // 0x54ca10: 0xc153ed8  jal         func_54FB60
label_54ca14:
    if (ctx->pc == 0x54CA14u) {
        ctx->pc = 0x54CA14u;
            // 0x54ca14: 0x24100045  addiu       $s0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->pc = 0x54CA18u;
        goto label_54ca18;
    }
    ctx->pc = 0x54CA10u;
    SET_GPR_U32(ctx, 31, 0x54CA18u);
    ctx->pc = 0x54CA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54CA10u;
            // 0x54ca14: 0x24100045  addiu       $s0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
    ctx->pc = 0x54FB60u;
    if (runtime->hasFunction(0x54FB60u)) {
        auto targetFn = runtime->lookupFunction(0x54FB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54CA18u; }
        if (ctx->pc != 0x54CA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0054FB60_0x54fb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54CA18u; }
        if (ctx->pc != 0x54CA18u) { return; }
    }
    ctx->pc = 0x54CA18u;
label_54ca18:
    // 0x54ca18: 0x10000009  b           . + 4 + (0x9 << 2)
label_54ca1c:
    if (ctx->pc == 0x54CA1Cu) {
        ctx->pc = 0x54CA1Cu;
            // 0x54ca1c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x54CA20u;
        goto label_54ca20;
    }
    ctx->pc = 0x54CA18u;
    {
        const bool branch_taken_0x54ca18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54CA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54CA18u;
            // 0x54ca1c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54ca18) {
            ctx->pc = 0x54CA40u;
            goto label_54ca40;
        }
    }
    ctx->pc = 0x54CA20u;
label_54ca20:
    // 0x54ca20: 0x10000006  b           . + 4 + (0x6 << 2)
label_54ca24:
    if (ctx->pc == 0x54CA24u) {
        ctx->pc = 0x54CA24u;
            // 0x54ca24: 0x24100046  addiu       $s0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->pc = 0x54CA28u;
        goto label_54ca28;
    }
    ctx->pc = 0x54CA20u;
    {
        const bool branch_taken_0x54ca20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54CA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54CA20u;
            // 0x54ca24: 0x24100046  addiu       $s0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54ca20) {
            ctx->pc = 0x54CA3Cu;
            goto label_54ca3c;
        }
    }
    ctx->pc = 0x54CA28u;
label_54ca28:
    // 0x54ca28: 0x10000004  b           . + 4 + (0x4 << 2)
label_54ca2c:
    if (ctx->pc == 0x54CA2Cu) {
        ctx->pc = 0x54CA2Cu;
            // 0x54ca2c: 0x24100049  addiu       $s0, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->pc = 0x54CA30u;
        goto label_54ca30;
    }
    ctx->pc = 0x54CA28u;
    {
        const bool branch_taken_0x54ca28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54CA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54CA28u;
            // 0x54ca2c: 0x24100049  addiu       $s0, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54ca28) {
            ctx->pc = 0x54CA3Cu;
            goto label_54ca3c;
        }
    }
    ctx->pc = 0x54CA30u;
label_54ca30:
    // 0x54ca30: 0x10000002  b           . + 4 + (0x2 << 2)
label_54ca34:
    if (ctx->pc == 0x54CA34u) {
        ctx->pc = 0x54CA34u;
            // 0x54ca34: 0x24100047  addiu       $s0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->pc = 0x54CA38u;
        goto label_54ca38;
    }
    ctx->pc = 0x54CA30u;
    {
        const bool branch_taken_0x54ca30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54CA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54CA30u;
            // 0x54ca34: 0x24100047  addiu       $s0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54ca30) {
            ctx->pc = 0x54CA3Cu;
            goto label_54ca3c;
        }
    }
    ctx->pc = 0x54CA38u;
label_54ca38:
    // 0x54ca38: 0x24100048  addiu       $s0, $zero, 0x48
    ctx->pc = 0x54ca38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_54ca3c:
    // 0x54ca3c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x54ca3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_54ca40:
    // 0x54ca40: 0x52030020  beql        $s0, $v1, . + 4 + (0x20 << 2)
label_54ca44:
    if (ctx->pc == 0x54CA44u) {
        ctx->pc = 0x54CA44u;
            // 0x54ca44: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x54CA48u;
        goto label_54ca48;
    }
    ctx->pc = 0x54CA40u;
    {
        const bool branch_taken_0x54ca40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x54ca40) {
            ctx->pc = 0x54CA44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54CA40u;
            // 0x54ca44: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54CAC4u;
            goto label_54cac4;
        }
    }
    ctx->pc = 0x54CA48u;
label_54ca48:
    // 0x54ca48: 0x8e840054  lw          $a0, 0x54($s4)
    ctx->pc = 0x54ca48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_54ca4c:
    // 0x54ca4c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x54ca4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_54ca50:
    // 0x54ca50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x54ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_54ca54:
    // 0x54ca54: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x54ca54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_54ca58:
    // 0x54ca58: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x54ca58u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_54ca5c:
    // 0x54ca5c: 0xc0c85d8  jal         func_321760
label_54ca60:
    if (ctx->pc == 0x54CA60u) {
        ctx->pc = 0x54CA60u;
            // 0x54ca60: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x54CA64u;
        goto label_54ca64;
    }
    ctx->pc = 0x54CA5Cu;
    SET_GPR_U32(ctx, 31, 0x54CA64u);
    ctx->pc = 0x54CA60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54CA5Cu;
            // 0x54ca60: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x321760u;
    if (runtime->hasFunction(0x321760u)) {
        auto targetFn = runtime->lookupFunction(0x321760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54CA64u; }
        if (ctx->pc != 0x54CA64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321760_0x321760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54CA64u; }
        if (ctx->pc != 0x54CA64u) { return; }
    }
    ctx->pc = 0x54CA64u;
label_54ca64:
    // 0x54ca64: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54ca64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54ca68:
    // 0x54ca68: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x54ca68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_54ca6c:
    // 0x54ca6c: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x54ca6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_54ca70:
    // 0x54ca70: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_54ca74:
    if (ctx->pc == 0x54CA74u) {
        ctx->pc = 0x54CA74u;
            // 0x54ca74: 0x3c023f33  lui         $v0, 0x3F33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
        ctx->pc = 0x54CA78u;
        goto label_54ca78;
    }
    ctx->pc = 0x54CA70u;
    {
        const bool branch_taken_0x54ca70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x54ca70) {
            ctx->pc = 0x54CA74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54CA70u;
            // 0x54ca74: 0x3c023f33  lui         $v0, 0x3F33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54CA80u;
            goto label_54ca80;
        }
    }
    ctx->pc = 0x54CA78u;
label_54ca78:
    // 0x54ca78: 0x2673ffe0  addiu       $s3, $s3, -0x20
    ctx->pc = 0x54ca78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967264));
label_54ca7c:
    // 0x54ca7c: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x54ca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_54ca80:
    // 0x54ca80: 0x8e840054  lw          $a0, 0x54($s4)
    ctx->pc = 0x54ca80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_54ca84:
    // 0x54ca84: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x54ca84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_54ca88:
    // 0x54ca88: 0x26670028  addiu       $a3, $s3, 0x28
    ctx->pc = 0x54ca88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
label_54ca8c:
    // 0x54ca8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x54ca8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_54ca90:
    // 0x54ca90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x54ca90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54ca94:
    // 0x54ca94: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x54ca94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_54ca98:
    // 0x54ca98: 0xc0c85cc  jal         func_321730
label_54ca9c:
    if (ctx->pc == 0x54CA9Cu) {
        ctx->pc = 0x54CA9Cu;
            // 0x54ca9c: 0x2408fc18  addiu       $t0, $zero, -0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
        ctx->pc = 0x54CAA0u;
        goto label_54caa0;
    }
    ctx->pc = 0x54CA98u;
    SET_GPR_U32(ctx, 31, 0x54CAA0u);
    ctx->pc = 0x54CA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54CA98u;
            // 0x54ca9c: 0x2408fc18  addiu       $t0, $zero, -0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321730u;
    if (runtime->hasFunction(0x321730u)) {
        auto targetFn = runtime->lookupFunction(0x321730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54CAA0u; }
        if (ctx->pc != 0x54CAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321730_0x321730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54CAA0u; }
        if (ctx->pc != 0x54CAA0u) { return; }
    }
    ctx->pc = 0x54CAA0u;
label_54caa0:
    // 0x54caa0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x54caa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_54caa4:
    // 0x54caa4: 0x8e840054  lw          $a0, 0x54($s4)
    ctx->pc = 0x54caa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_54caa8:
    // 0x54caa8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x54caa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_54caac:
    // 0x54caac: 0x0  nop
    ctx->pc = 0x54caacu;
    // NOP
label_54cab0:
    // 0x54cab0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x54cab0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_54cab4:
    // 0x54cab4: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x54cab4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_54cab8:
    // 0x54cab8: 0xc0c85d8  jal         func_321760
label_54cabc:
    if (ctx->pc == 0x54CABCu) {
        ctx->pc = 0x54CABCu;
            // 0x54cabc: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x54CAC0u;
        goto label_54cac0;
    }
    ctx->pc = 0x54CAB8u;
    SET_GPR_U32(ctx, 31, 0x54CAC0u);
    ctx->pc = 0x54CABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54CAB8u;
            // 0x54cabc: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x321760u;
    if (runtime->hasFunction(0x321760u)) {
        auto targetFn = runtime->lookupFunction(0x321760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54CAC0u; }
        if (ctx->pc != 0x54CAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321760_0x321760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54CAC0u; }
        if (ctx->pc != 0x54CAC0u) { return; }
    }
    ctx->pc = 0x54CAC0u;
label_54cac0:
    // 0x54cac0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x54cac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_54cac4:
    // 0x54cac4: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x54cac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_54cac8:
    // 0x54cac8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x54cac8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_54cacc:
    // 0x54cacc: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x54caccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_54cad0:
    // 0x54cad0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x54cad0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_54cad4:
    // 0x54cad4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x54cad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_54cad8:
    // 0x54cad8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x54cad8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_54cadc:
    // 0x54cadc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x54cadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_54cae0:
    // 0x54cae0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x54cae0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_54cae4:
    // 0x54cae4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x54cae4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_54cae8:
    // 0x54cae8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x54cae8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_54caec:
    // 0x54caec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x54caecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_54caf0:
    // 0x54caf0: 0x3e00008  jr          $ra
label_54caf4:
    if (ctx->pc == 0x54CAF4u) {
        ctx->pc = 0x54CAF4u;
            // 0x54caf4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x54CAF8u;
        goto label_54caf8;
    }
    ctx->pc = 0x54CAF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x54CAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54CAF0u;
            // 0x54caf4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x54CAF8u;
label_54caf8:
    // 0x54caf8: 0x0  nop
    ctx->pc = 0x54caf8u;
    // NOP
label_54cafc:
    // 0x54cafc: 0x0  nop
    ctx->pc = 0x54cafcu;
    // NOP
}
