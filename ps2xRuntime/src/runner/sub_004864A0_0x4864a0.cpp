#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004864A0
// Address: 0x4864a0 - 0x486a30
void sub_004864A0_0x4864a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004864A0_0x4864a0");
#endif

    switch (ctx->pc) {
        case 0x4864a0u: goto label_4864a0;
        case 0x4864a4u: goto label_4864a4;
        case 0x4864a8u: goto label_4864a8;
        case 0x4864acu: goto label_4864ac;
        case 0x4864b0u: goto label_4864b0;
        case 0x4864b4u: goto label_4864b4;
        case 0x4864b8u: goto label_4864b8;
        case 0x4864bcu: goto label_4864bc;
        case 0x4864c0u: goto label_4864c0;
        case 0x4864c4u: goto label_4864c4;
        case 0x4864c8u: goto label_4864c8;
        case 0x4864ccu: goto label_4864cc;
        case 0x4864d0u: goto label_4864d0;
        case 0x4864d4u: goto label_4864d4;
        case 0x4864d8u: goto label_4864d8;
        case 0x4864dcu: goto label_4864dc;
        case 0x4864e0u: goto label_4864e0;
        case 0x4864e4u: goto label_4864e4;
        case 0x4864e8u: goto label_4864e8;
        case 0x4864ecu: goto label_4864ec;
        case 0x4864f0u: goto label_4864f0;
        case 0x4864f4u: goto label_4864f4;
        case 0x4864f8u: goto label_4864f8;
        case 0x4864fcu: goto label_4864fc;
        case 0x486500u: goto label_486500;
        case 0x486504u: goto label_486504;
        case 0x486508u: goto label_486508;
        case 0x48650cu: goto label_48650c;
        case 0x486510u: goto label_486510;
        case 0x486514u: goto label_486514;
        case 0x486518u: goto label_486518;
        case 0x48651cu: goto label_48651c;
        case 0x486520u: goto label_486520;
        case 0x486524u: goto label_486524;
        case 0x486528u: goto label_486528;
        case 0x48652cu: goto label_48652c;
        case 0x486530u: goto label_486530;
        case 0x486534u: goto label_486534;
        case 0x486538u: goto label_486538;
        case 0x48653cu: goto label_48653c;
        case 0x486540u: goto label_486540;
        case 0x486544u: goto label_486544;
        case 0x486548u: goto label_486548;
        case 0x48654cu: goto label_48654c;
        case 0x486550u: goto label_486550;
        case 0x486554u: goto label_486554;
        case 0x486558u: goto label_486558;
        case 0x48655cu: goto label_48655c;
        case 0x486560u: goto label_486560;
        case 0x486564u: goto label_486564;
        case 0x486568u: goto label_486568;
        case 0x48656cu: goto label_48656c;
        case 0x486570u: goto label_486570;
        case 0x486574u: goto label_486574;
        case 0x486578u: goto label_486578;
        case 0x48657cu: goto label_48657c;
        case 0x486580u: goto label_486580;
        case 0x486584u: goto label_486584;
        case 0x486588u: goto label_486588;
        case 0x48658cu: goto label_48658c;
        case 0x486590u: goto label_486590;
        case 0x486594u: goto label_486594;
        case 0x486598u: goto label_486598;
        case 0x48659cu: goto label_48659c;
        case 0x4865a0u: goto label_4865a0;
        case 0x4865a4u: goto label_4865a4;
        case 0x4865a8u: goto label_4865a8;
        case 0x4865acu: goto label_4865ac;
        case 0x4865b0u: goto label_4865b0;
        case 0x4865b4u: goto label_4865b4;
        case 0x4865b8u: goto label_4865b8;
        case 0x4865bcu: goto label_4865bc;
        case 0x4865c0u: goto label_4865c0;
        case 0x4865c4u: goto label_4865c4;
        case 0x4865c8u: goto label_4865c8;
        case 0x4865ccu: goto label_4865cc;
        case 0x4865d0u: goto label_4865d0;
        case 0x4865d4u: goto label_4865d4;
        case 0x4865d8u: goto label_4865d8;
        case 0x4865dcu: goto label_4865dc;
        case 0x4865e0u: goto label_4865e0;
        case 0x4865e4u: goto label_4865e4;
        case 0x4865e8u: goto label_4865e8;
        case 0x4865ecu: goto label_4865ec;
        case 0x4865f0u: goto label_4865f0;
        case 0x4865f4u: goto label_4865f4;
        case 0x4865f8u: goto label_4865f8;
        case 0x4865fcu: goto label_4865fc;
        case 0x486600u: goto label_486600;
        case 0x486604u: goto label_486604;
        case 0x486608u: goto label_486608;
        case 0x48660cu: goto label_48660c;
        case 0x486610u: goto label_486610;
        case 0x486614u: goto label_486614;
        case 0x486618u: goto label_486618;
        case 0x48661cu: goto label_48661c;
        case 0x486620u: goto label_486620;
        case 0x486624u: goto label_486624;
        case 0x486628u: goto label_486628;
        case 0x48662cu: goto label_48662c;
        case 0x486630u: goto label_486630;
        case 0x486634u: goto label_486634;
        case 0x486638u: goto label_486638;
        case 0x48663cu: goto label_48663c;
        case 0x486640u: goto label_486640;
        case 0x486644u: goto label_486644;
        case 0x486648u: goto label_486648;
        case 0x48664cu: goto label_48664c;
        case 0x486650u: goto label_486650;
        case 0x486654u: goto label_486654;
        case 0x486658u: goto label_486658;
        case 0x48665cu: goto label_48665c;
        case 0x486660u: goto label_486660;
        case 0x486664u: goto label_486664;
        case 0x486668u: goto label_486668;
        case 0x48666cu: goto label_48666c;
        case 0x486670u: goto label_486670;
        case 0x486674u: goto label_486674;
        case 0x486678u: goto label_486678;
        case 0x48667cu: goto label_48667c;
        case 0x486680u: goto label_486680;
        case 0x486684u: goto label_486684;
        case 0x486688u: goto label_486688;
        case 0x48668cu: goto label_48668c;
        case 0x486690u: goto label_486690;
        case 0x486694u: goto label_486694;
        case 0x486698u: goto label_486698;
        case 0x48669cu: goto label_48669c;
        case 0x4866a0u: goto label_4866a0;
        case 0x4866a4u: goto label_4866a4;
        case 0x4866a8u: goto label_4866a8;
        case 0x4866acu: goto label_4866ac;
        case 0x4866b0u: goto label_4866b0;
        case 0x4866b4u: goto label_4866b4;
        case 0x4866b8u: goto label_4866b8;
        case 0x4866bcu: goto label_4866bc;
        case 0x4866c0u: goto label_4866c0;
        case 0x4866c4u: goto label_4866c4;
        case 0x4866c8u: goto label_4866c8;
        case 0x4866ccu: goto label_4866cc;
        case 0x4866d0u: goto label_4866d0;
        case 0x4866d4u: goto label_4866d4;
        case 0x4866d8u: goto label_4866d8;
        case 0x4866dcu: goto label_4866dc;
        case 0x4866e0u: goto label_4866e0;
        case 0x4866e4u: goto label_4866e4;
        case 0x4866e8u: goto label_4866e8;
        case 0x4866ecu: goto label_4866ec;
        case 0x4866f0u: goto label_4866f0;
        case 0x4866f4u: goto label_4866f4;
        case 0x4866f8u: goto label_4866f8;
        case 0x4866fcu: goto label_4866fc;
        case 0x486700u: goto label_486700;
        case 0x486704u: goto label_486704;
        case 0x486708u: goto label_486708;
        case 0x48670cu: goto label_48670c;
        case 0x486710u: goto label_486710;
        case 0x486714u: goto label_486714;
        case 0x486718u: goto label_486718;
        case 0x48671cu: goto label_48671c;
        case 0x486720u: goto label_486720;
        case 0x486724u: goto label_486724;
        case 0x486728u: goto label_486728;
        case 0x48672cu: goto label_48672c;
        case 0x486730u: goto label_486730;
        case 0x486734u: goto label_486734;
        case 0x486738u: goto label_486738;
        case 0x48673cu: goto label_48673c;
        case 0x486740u: goto label_486740;
        case 0x486744u: goto label_486744;
        case 0x486748u: goto label_486748;
        case 0x48674cu: goto label_48674c;
        case 0x486750u: goto label_486750;
        case 0x486754u: goto label_486754;
        case 0x486758u: goto label_486758;
        case 0x48675cu: goto label_48675c;
        case 0x486760u: goto label_486760;
        case 0x486764u: goto label_486764;
        case 0x486768u: goto label_486768;
        case 0x48676cu: goto label_48676c;
        case 0x486770u: goto label_486770;
        case 0x486774u: goto label_486774;
        case 0x486778u: goto label_486778;
        case 0x48677cu: goto label_48677c;
        case 0x486780u: goto label_486780;
        case 0x486784u: goto label_486784;
        case 0x486788u: goto label_486788;
        case 0x48678cu: goto label_48678c;
        case 0x486790u: goto label_486790;
        case 0x486794u: goto label_486794;
        case 0x486798u: goto label_486798;
        case 0x48679cu: goto label_48679c;
        case 0x4867a0u: goto label_4867a0;
        case 0x4867a4u: goto label_4867a4;
        case 0x4867a8u: goto label_4867a8;
        case 0x4867acu: goto label_4867ac;
        case 0x4867b0u: goto label_4867b0;
        case 0x4867b4u: goto label_4867b4;
        case 0x4867b8u: goto label_4867b8;
        case 0x4867bcu: goto label_4867bc;
        case 0x4867c0u: goto label_4867c0;
        case 0x4867c4u: goto label_4867c4;
        case 0x4867c8u: goto label_4867c8;
        case 0x4867ccu: goto label_4867cc;
        case 0x4867d0u: goto label_4867d0;
        case 0x4867d4u: goto label_4867d4;
        case 0x4867d8u: goto label_4867d8;
        case 0x4867dcu: goto label_4867dc;
        case 0x4867e0u: goto label_4867e0;
        case 0x4867e4u: goto label_4867e4;
        case 0x4867e8u: goto label_4867e8;
        case 0x4867ecu: goto label_4867ec;
        case 0x4867f0u: goto label_4867f0;
        case 0x4867f4u: goto label_4867f4;
        case 0x4867f8u: goto label_4867f8;
        case 0x4867fcu: goto label_4867fc;
        case 0x486800u: goto label_486800;
        case 0x486804u: goto label_486804;
        case 0x486808u: goto label_486808;
        case 0x48680cu: goto label_48680c;
        case 0x486810u: goto label_486810;
        case 0x486814u: goto label_486814;
        case 0x486818u: goto label_486818;
        case 0x48681cu: goto label_48681c;
        case 0x486820u: goto label_486820;
        case 0x486824u: goto label_486824;
        case 0x486828u: goto label_486828;
        case 0x48682cu: goto label_48682c;
        case 0x486830u: goto label_486830;
        case 0x486834u: goto label_486834;
        case 0x486838u: goto label_486838;
        case 0x48683cu: goto label_48683c;
        case 0x486840u: goto label_486840;
        case 0x486844u: goto label_486844;
        case 0x486848u: goto label_486848;
        case 0x48684cu: goto label_48684c;
        case 0x486850u: goto label_486850;
        case 0x486854u: goto label_486854;
        case 0x486858u: goto label_486858;
        case 0x48685cu: goto label_48685c;
        case 0x486860u: goto label_486860;
        case 0x486864u: goto label_486864;
        case 0x486868u: goto label_486868;
        case 0x48686cu: goto label_48686c;
        case 0x486870u: goto label_486870;
        case 0x486874u: goto label_486874;
        case 0x486878u: goto label_486878;
        case 0x48687cu: goto label_48687c;
        case 0x486880u: goto label_486880;
        case 0x486884u: goto label_486884;
        case 0x486888u: goto label_486888;
        case 0x48688cu: goto label_48688c;
        case 0x486890u: goto label_486890;
        case 0x486894u: goto label_486894;
        case 0x486898u: goto label_486898;
        case 0x48689cu: goto label_48689c;
        case 0x4868a0u: goto label_4868a0;
        case 0x4868a4u: goto label_4868a4;
        case 0x4868a8u: goto label_4868a8;
        case 0x4868acu: goto label_4868ac;
        case 0x4868b0u: goto label_4868b0;
        case 0x4868b4u: goto label_4868b4;
        case 0x4868b8u: goto label_4868b8;
        case 0x4868bcu: goto label_4868bc;
        case 0x4868c0u: goto label_4868c0;
        case 0x4868c4u: goto label_4868c4;
        case 0x4868c8u: goto label_4868c8;
        case 0x4868ccu: goto label_4868cc;
        case 0x4868d0u: goto label_4868d0;
        case 0x4868d4u: goto label_4868d4;
        case 0x4868d8u: goto label_4868d8;
        case 0x4868dcu: goto label_4868dc;
        case 0x4868e0u: goto label_4868e0;
        case 0x4868e4u: goto label_4868e4;
        case 0x4868e8u: goto label_4868e8;
        case 0x4868ecu: goto label_4868ec;
        case 0x4868f0u: goto label_4868f0;
        case 0x4868f4u: goto label_4868f4;
        case 0x4868f8u: goto label_4868f8;
        case 0x4868fcu: goto label_4868fc;
        case 0x486900u: goto label_486900;
        case 0x486904u: goto label_486904;
        case 0x486908u: goto label_486908;
        case 0x48690cu: goto label_48690c;
        case 0x486910u: goto label_486910;
        case 0x486914u: goto label_486914;
        case 0x486918u: goto label_486918;
        case 0x48691cu: goto label_48691c;
        case 0x486920u: goto label_486920;
        case 0x486924u: goto label_486924;
        case 0x486928u: goto label_486928;
        case 0x48692cu: goto label_48692c;
        case 0x486930u: goto label_486930;
        case 0x486934u: goto label_486934;
        case 0x486938u: goto label_486938;
        case 0x48693cu: goto label_48693c;
        case 0x486940u: goto label_486940;
        case 0x486944u: goto label_486944;
        case 0x486948u: goto label_486948;
        case 0x48694cu: goto label_48694c;
        case 0x486950u: goto label_486950;
        case 0x486954u: goto label_486954;
        case 0x486958u: goto label_486958;
        case 0x48695cu: goto label_48695c;
        case 0x486960u: goto label_486960;
        case 0x486964u: goto label_486964;
        case 0x486968u: goto label_486968;
        case 0x48696cu: goto label_48696c;
        case 0x486970u: goto label_486970;
        case 0x486974u: goto label_486974;
        case 0x486978u: goto label_486978;
        case 0x48697cu: goto label_48697c;
        case 0x486980u: goto label_486980;
        case 0x486984u: goto label_486984;
        case 0x486988u: goto label_486988;
        case 0x48698cu: goto label_48698c;
        case 0x486990u: goto label_486990;
        case 0x486994u: goto label_486994;
        case 0x486998u: goto label_486998;
        case 0x48699cu: goto label_48699c;
        case 0x4869a0u: goto label_4869a0;
        case 0x4869a4u: goto label_4869a4;
        case 0x4869a8u: goto label_4869a8;
        case 0x4869acu: goto label_4869ac;
        case 0x4869b0u: goto label_4869b0;
        case 0x4869b4u: goto label_4869b4;
        case 0x4869b8u: goto label_4869b8;
        case 0x4869bcu: goto label_4869bc;
        case 0x4869c0u: goto label_4869c0;
        case 0x4869c4u: goto label_4869c4;
        case 0x4869c8u: goto label_4869c8;
        case 0x4869ccu: goto label_4869cc;
        case 0x4869d0u: goto label_4869d0;
        case 0x4869d4u: goto label_4869d4;
        case 0x4869d8u: goto label_4869d8;
        case 0x4869dcu: goto label_4869dc;
        case 0x4869e0u: goto label_4869e0;
        case 0x4869e4u: goto label_4869e4;
        case 0x4869e8u: goto label_4869e8;
        case 0x4869ecu: goto label_4869ec;
        case 0x4869f0u: goto label_4869f0;
        case 0x4869f4u: goto label_4869f4;
        case 0x4869f8u: goto label_4869f8;
        case 0x4869fcu: goto label_4869fc;
        case 0x486a00u: goto label_486a00;
        case 0x486a04u: goto label_486a04;
        case 0x486a08u: goto label_486a08;
        case 0x486a0cu: goto label_486a0c;
        case 0x486a10u: goto label_486a10;
        case 0x486a14u: goto label_486a14;
        case 0x486a18u: goto label_486a18;
        case 0x486a1cu: goto label_486a1c;
        case 0x486a20u: goto label_486a20;
        case 0x486a24u: goto label_486a24;
        case 0x486a28u: goto label_486a28;
        case 0x486a2cu: goto label_486a2c;
        default: break;
    }

    ctx->pc = 0x4864a0u;

label_4864a0:
    // 0x4864a0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x4864a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_4864a4:
    // 0x4864a4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4864a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_4864a8:
    // 0x4864a8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4864a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4864ac:
    // 0x4864ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4864acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4864b0:
    // 0x4864b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4864b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4864b4:
    // 0x4864b4: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x4864b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4864b8:
    // 0x4864b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4864b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4864bc:
    // 0x4864bc: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x4864bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4864c0:
    // 0x4864c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4864c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4864c4:
    // 0x4864c4: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x4864c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_4864c8:
    // 0x4864c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4864c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4864cc:
    // 0x4864cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4864ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4864d0:
    // 0x4864d0: 0x90820090  lbu         $v0, 0x90($a0)
    ctx->pc = 0x4864d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_4864d4:
    // 0x4864d4: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
label_4864d8:
    if (ctx->pc == 0x4864D8u) {
        ctx->pc = 0x4864D8u;
            // 0x4864d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4864DCu;
        goto label_4864dc;
    }
    ctx->pc = 0x4864D4u;
    {
        const bool branch_taken_0x4864d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4864D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4864D4u;
            // 0x4864d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4864d4) {
            ctx->pc = 0x4866C4u;
            goto label_4866c4;
        }
    }
    ctx->pc = 0x4864DCu;
label_4864dc:
    // 0x4864dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4864dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4864e0:
    // 0x4864e0: 0xc04f278  jal         func_13C9E0
label_4864e4:
    if (ctx->pc == 0x4864E4u) {
        ctx->pc = 0x4864E4u;
            // 0x4864e4: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x4864E8u;
        goto label_4864e8;
    }
    ctx->pc = 0x4864E0u;
    SET_GPR_U32(ctx, 31, 0x4864E8u);
    ctx->pc = 0x4864E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4864E0u;
            // 0x4864e4: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4864E8u; }
        if (ctx->pc != 0x4864E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4864E8u; }
        if (ctx->pc != 0x4864E8u) { return; }
    }
    ctx->pc = 0x4864E8u;
label_4864e8:
    // 0x4864e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4864e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4864ec:
    // 0x4864ec: 0xc04ce80  jal         func_133A00
label_4864f0:
    if (ctx->pc == 0x4864F0u) {
        ctx->pc = 0x4864F0u;
            // 0x4864f0: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x4864F4u;
        goto label_4864f4;
    }
    ctx->pc = 0x4864ECu;
    SET_GPR_U32(ctx, 31, 0x4864F4u);
    ctx->pc = 0x4864F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4864ECu;
            // 0x4864f0: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4864F4u; }
        if (ctx->pc != 0x4864F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4864F4u; }
        if (ctx->pc != 0x4864F4u) { return; }
    }
    ctx->pc = 0x4864F4u;
label_4864f4:
    // 0x4864f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4864f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4864f8:
    // 0x4864f8: 0x9226004c  lbu         $a2, 0x4C($s1)
    ctx->pc = 0x4864f8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
label_4864fc:
    // 0x4864fc: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x4864fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_486500:
    // 0x486500: 0xc07698c  jal         func_1DA630
label_486504:
    if (ctx->pc == 0x486504u) {
        ctx->pc = 0x486504u;
            // 0x486504: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x486508u;
        goto label_486508;
    }
    ctx->pc = 0x486500u;
    SET_GPR_U32(ctx, 31, 0x486508u);
    ctx->pc = 0x486504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x486500u;
            // 0x486504: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486508u; }
        if (ctx->pc != 0x486508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486508u; }
        if (ctx->pc != 0x486508u) { return; }
    }
    ctx->pc = 0x486508u;
label_486508:
    // 0x486508: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x486508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_48650c:
    // 0x48650c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_486510:
    if (ctx->pc == 0x486510u) {
        ctx->pc = 0x486514u;
        goto label_486514;
    }
    ctx->pc = 0x48650Cu;
    {
        const bool branch_taken_0x48650c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x48650c) {
            ctx->pc = 0x48651Cu;
            goto label_48651c;
        }
    }
    ctx->pc = 0x486514u;
label_486514:
    // 0x486514: 0x10000033  b           . + 4 + (0x33 << 2)
label_486518:
    if (ctx->pc == 0x486518u) {
        ctx->pc = 0x486518u;
            // 0x486518: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x48651Cu;
        goto label_48651c;
    }
    ctx->pc = 0x486514u;
    {
        const bool branch_taken_0x486514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x486518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x486514u;
            // 0x486518: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x486514) {
            ctx->pc = 0x4865E4u;
            goto label_4865e4;
        }
    }
    ctx->pc = 0x48651Cu;
label_48651c:
    // 0x48651c: 0xc0576f4  jal         func_15DBD0
label_486520:
    if (ctx->pc == 0x486520u) {
        ctx->pc = 0x486524u;
        goto label_486524;
    }
    ctx->pc = 0x48651Cu;
    SET_GPR_U32(ctx, 31, 0x486524u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486524u; }
        if (ctx->pc != 0x486524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486524u; }
        if (ctx->pc != 0x486524u) { return; }
    }
    ctx->pc = 0x486524u;
label_486524:
    // 0x486524: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x486524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_486528:
    // 0x486528: 0xc076984  jal         func_1DA610
label_48652c:
    if (ctx->pc == 0x48652Cu) {
        ctx->pc = 0x48652Cu;
            // 0x48652c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x486530u;
        goto label_486530;
    }
    ctx->pc = 0x486528u;
    SET_GPR_U32(ctx, 31, 0x486530u);
    ctx->pc = 0x48652Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x486528u;
            // 0x48652c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486530u; }
        if (ctx->pc != 0x486530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486530u; }
        if (ctx->pc != 0x486530u) { return; }
    }
    ctx->pc = 0x486530u;
label_486530:
    // 0x486530: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x486530u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_486534:
    // 0x486534: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x486534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_486538:
    // 0x486538: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x486538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_48653c:
    // 0x48653c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x48653cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_486540:
    // 0x486540: 0xc4420940  lwc1        $f2, 0x940($v0)
    ctx->pc = 0x486540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_486544:
    // 0x486544: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x486544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_486548:
    // 0x486548: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x486548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_48654c:
    // 0x48654c: 0xc4410948  lwc1        $f1, 0x948($v0)
    ctx->pc = 0x48654cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_486550:
    // 0x486550: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x486550u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_486554:
    // 0x486554: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x486554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_486558:
    // 0x486558: 0xc440094c  lwc1        $f0, 0x94C($v0)
    ctx->pc = 0x486558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48655c:
    // 0x48655c: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x48655cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_486560:
    // 0x486560: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x486560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_486564:
    // 0x486564: 0x8c420944  lw          $v0, 0x944($v0)
    ctx->pc = 0x486564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2372)));
label_486568:
    // 0x486568: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x486568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_48656c:
    // 0x48656c: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x48656cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_486570:
    // 0x486570: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x486570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_486574:
    // 0x486574: 0xc04cca0  jal         func_133280
label_486578:
    if (ctx->pc == 0x486578u) {
        ctx->pc = 0x486578u;
            // 0x486578: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->pc = 0x48657Cu;
        goto label_48657c;
    }
    ctx->pc = 0x486574u;
    SET_GPR_U32(ctx, 31, 0x48657Cu);
    ctx->pc = 0x486578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x486574u;
            // 0x486578: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48657Cu; }
        if (ctx->pc != 0x48657Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48657Cu; }
        if (ctx->pc != 0x48657Cu) { return; }
    }
    ctx->pc = 0x48657Cu;
label_48657c:
    // 0x48657c: 0xc076980  jal         func_1DA600
label_486580:
    if (ctx->pc == 0x486580u) {
        ctx->pc = 0x486580u;
            // 0x486580: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x486584u;
        goto label_486584;
    }
    ctx->pc = 0x48657Cu;
    SET_GPR_U32(ctx, 31, 0x486584u);
    ctx->pc = 0x486580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48657Cu;
            // 0x486580: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486584u; }
        if (ctx->pc != 0x486584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486584u; }
        if (ctx->pc != 0x486584u) { return; }
    }
    ctx->pc = 0x486584u;
label_486584:
    // 0x486584: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x486584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_486588:
    // 0x486588: 0xc04cc34  jal         func_1330D0
label_48658c:
    if (ctx->pc == 0x48658Cu) {
        ctx->pc = 0x48658Cu;
            // 0x48658c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x486590u;
        goto label_486590;
    }
    ctx->pc = 0x486588u;
    SET_GPR_U32(ctx, 31, 0x486590u);
    ctx->pc = 0x48658Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x486588u;
            // 0x48658c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486590u; }
        if (ctx->pc != 0x486590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486590u; }
        if (ctx->pc != 0x486590u) { return; }
    }
    ctx->pc = 0x486590u;
label_486590:
    // 0x486590: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x486590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_486594:
    // 0x486594: 0xc441fc00  lwc1        $f1, -0x400($v0)
    ctx->pc = 0x486594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_486598:
    // 0x486598: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x486598u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_48659c:
    // 0x48659c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_4865a0:
    if (ctx->pc == 0x4865A0u) {
        ctx->pc = 0x4865A0u;
            // 0x4865a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4865A4u;
        goto label_4865a4;
    }
    ctx->pc = 0x48659Cu;
    {
        const bool branch_taken_0x48659c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x48659c) {
            ctx->pc = 0x4865A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48659Cu;
            // 0x4865a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4865ACu;
            goto label_4865ac;
        }
    }
    ctx->pc = 0x4865A4u;
label_4865a4:
    // 0x4865a4: 0x1000000f  b           . + 4 + (0xF << 2)
label_4865a8:
    if (ctx->pc == 0x4865A8u) {
        ctx->pc = 0x4865A8u;
            // 0x4865a8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4865ACu;
        goto label_4865ac;
    }
    ctx->pc = 0x4865A4u;
    {
        const bool branch_taken_0x4865a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4865A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4865A4u;
            // 0x4865a8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4865a4) {
            ctx->pc = 0x4865E4u;
            goto label_4865e4;
        }
    }
    ctx->pc = 0x4865ACu;
label_4865ac:
    // 0x4865ac: 0xc07697c  jal         func_1DA5F0
label_4865b0:
    if (ctx->pc == 0x4865B0u) {
        ctx->pc = 0x4865B4u;
        goto label_4865b4;
    }
    ctx->pc = 0x4865ACu;
    SET_GPR_U32(ctx, 31, 0x4865B4u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4865B4u; }
        if (ctx->pc != 0x4865B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4865B4u; }
        if (ctx->pc != 0x4865B4u) { return; }
    }
    ctx->pc = 0x4865B4u;
label_4865b4:
    // 0x4865b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4865b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4865b8:
    // 0x4865b8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4865b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4865bc:
    // 0x4865bc: 0xc04cd60  jal         func_133580
label_4865c0:
    if (ctx->pc == 0x4865C0u) {
        ctx->pc = 0x4865C0u;
            // 0x4865c0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4865C4u;
        goto label_4865c4;
    }
    ctx->pc = 0x4865BCu;
    SET_GPR_U32(ctx, 31, 0x4865C4u);
    ctx->pc = 0x4865C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4865BCu;
            // 0x4865c0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4865C4u; }
        if (ctx->pc != 0x4865C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4865C4u; }
        if (ctx->pc != 0x4865C4u) { return; }
    }
    ctx->pc = 0x4865C4u;
label_4865c4:
    // 0x4865c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4865c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4865c8:
    // 0x4865c8: 0xc04c650  jal         func_131940
label_4865cc:
    if (ctx->pc == 0x4865CCu) {
        ctx->pc = 0x4865CCu;
            // 0x4865cc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4865D0u;
        goto label_4865d0;
    }
    ctx->pc = 0x4865C8u;
    SET_GPR_U32(ctx, 31, 0x4865D0u);
    ctx->pc = 0x4865CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4865C8u;
            // 0x4865cc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4865D0u; }
        if (ctx->pc != 0x4865D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4865D0u; }
        if (ctx->pc != 0x4865D0u) { return; }
    }
    ctx->pc = 0x4865D0u;
label_4865d0:
    // 0x4865d0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4865d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4865d4:
    // 0x4865d4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4865d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4865d8:
    // 0x4865d8: 0x2442e320  addiu       $v0, $v0, -0x1CE0
    ctx->pc = 0x4865d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959904));
label_4865dc:
    // 0x4865dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4865dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4865e0:
    // 0x4865e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4865e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4865e4:
    // 0x4865e4: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4865e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4865e8:
    // 0x4865e8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_4865ec:
    if (ctx->pc == 0x4865ECu) {
        ctx->pc = 0x4865ECu;
            // 0x4865ec: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x4865F0u;
        goto label_4865f0;
    }
    ctx->pc = 0x4865E8u;
    {
        const bool branch_taken_0x4865e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4865ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4865E8u;
            // 0x4865ec: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4865e8) {
            ctx->pc = 0x4865F8u;
            goto label_4865f8;
        }
    }
    ctx->pc = 0x4865F0u;
label_4865f0:
    // 0x4865f0: 0x10000035  b           . + 4 + (0x35 << 2)
label_4865f4:
    if (ctx->pc == 0x4865F4u) {
        ctx->pc = 0x4865F4u;
            // 0x4865f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4865F8u;
        goto label_4865f8;
    }
    ctx->pc = 0x4865F0u;
    {
        const bool branch_taken_0x4865f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4865F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4865F0u;
            // 0x4865f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4865f0) {
            ctx->pc = 0x4866C8u;
            goto label_4866c8;
        }
    }
    ctx->pc = 0x4865F8u;
label_4865f8:
    // 0x4865f8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4865f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4865fc:
    // 0x4865fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4865fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_486600:
    // 0x486600: 0x8c65e3c0  lw          $a1, -0x1C40($v1)
    ctx->pc = 0x486600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_486604:
    // 0x486604: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x486604u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_486608:
    // 0x486608: 0x8c46e3d8  lw          $a2, -0x1C28($v0)
    ctx->pc = 0x486608u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_48660c:
    // 0x48660c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x48660cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_486610:
    // 0x486610: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x486610u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_486614:
    // 0x486614: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x486614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_486618:
    // 0x486618: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x486618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_48661c:
    // 0x48661c: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x48661cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_486620:
    // 0x486620: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x486620u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_486624:
    // 0x486624: 0x86a821  addu        $s5, $a0, $a2
    ctx->pc = 0x486624u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_486628:
    // 0x486628: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x486628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_48662c:
    // 0x48662c: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x48662cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_486630:
    // 0x486630: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x486630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_486634:
    // 0x486634: 0xacb50000  sw          $s5, 0x0($a1)
    ctx->pc = 0x486634u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 21));
label_486638:
    // 0x486638: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x486638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_48663c:
    // 0x48663c: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x48663cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_486640:
    // 0x486640: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x486640u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_486644:
    // 0x486644: 0x8c48e378  lw          $t0, -0x1C88($v0)
    ctx->pc = 0x486644u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_486648:
    // 0x486648: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x486648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48664c:
    // 0x48664c: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x48664cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_486650:
    // 0x486650: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x486650u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_486654:
    // 0x486654: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x486654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_486658:
    // 0x486658: 0x1099021  addu        $s2, $t0, $t1
    ctx->pc = 0x486658u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_48665c:
    // 0x48665c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x48665cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_486660:
    // 0x486660: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x486660u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_486664:
    // 0x486664: 0xad120000  sw          $s2, 0x0($t0)
    ctx->pc = 0x486664u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 18));
label_486668:
    // 0x486668: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x486668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_48666c:
    // 0x48666c: 0x8e080028  lw          $t0, 0x28($s0)
    ctx->pc = 0x48666cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_486670:
    // 0x486670: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x486670u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_486674:
    // 0x486674: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x486674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_486678:
    // 0x486678: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x486678u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_48667c:
    // 0x48667c: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x48667cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_486680:
    // 0x486680: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x486680u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
label_486684:
    // 0x486684: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x486684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_486688:
    // 0x486688: 0xc04e4a4  jal         func_139290
label_48668c:
    if (ctx->pc == 0x48668Cu) {
        ctx->pc = 0x48668Cu;
            // 0x48668c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x486690u;
        goto label_486690;
    }
    ctx->pc = 0x486688u;
    SET_GPR_U32(ctx, 31, 0x486690u);
    ctx->pc = 0x48668Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x486688u;
            // 0x48668c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486690u; }
        if (ctx->pc != 0x486690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486690u; }
        if (ctx->pc != 0x486690u) { return; }
    }
    ctx->pc = 0x486690u;
label_486690:
    // 0x486690: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x486690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_486694:
    // 0x486694: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x486694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_486698:
    // 0x486698: 0xc04cd60  jal         func_133580
label_48669c:
    if (ctx->pc == 0x48669Cu) {
        ctx->pc = 0x48669Cu;
            // 0x48669c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4866A0u;
        goto label_4866a0;
    }
    ctx->pc = 0x486698u;
    SET_GPR_U32(ctx, 31, 0x4866A0u);
    ctx->pc = 0x48669Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x486698u;
            // 0x48669c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4866A0u; }
        if (ctx->pc != 0x4866A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4866A0u; }
        if (ctx->pc != 0x4866A0u) { return; }
    }
    ctx->pc = 0x4866A0u;
label_4866a0:
    // 0x4866a0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4866a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4866a4:
    // 0x4866a4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4866a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4866a8:
    // 0x4866a8: 0x320f809  jalr        $t9
label_4866ac:
    if (ctx->pc == 0x4866ACu) {
        ctx->pc = 0x4866ACu;
            // 0x4866ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4866B0u;
        goto label_4866b0;
    }
    ctx->pc = 0x4866A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4866B0u);
        ctx->pc = 0x4866ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4866A8u;
            // 0x4866ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4866B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4866B0u; }
            if (ctx->pc != 0x4866B0u) { return; }
        }
        }
    }
    ctx->pc = 0x4866B0u;
label_4866b0:
    // 0x4866b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4866b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4866b4:
    // 0x4866b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4866b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4866b8:
    // 0x4866b8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4866b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4866bc:
    // 0x4866bc: 0xc054fd4  jal         func_153F50
label_4866c0:
    if (ctx->pc == 0x4866C0u) {
        ctx->pc = 0x4866C0u;
            // 0x4866c0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4866C4u;
        goto label_4866c4;
    }
    ctx->pc = 0x4866BCu;
    SET_GPR_U32(ctx, 31, 0x4866C4u);
    ctx->pc = 0x4866C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4866BCu;
            // 0x4866c0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4866C4u; }
        if (ctx->pc != 0x4866C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4866C4u; }
        if (ctx->pc != 0x4866C4u) { return; }
    }
    ctx->pc = 0x4866C4u;
label_4866c4:
    // 0x4866c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4866c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4866c8:
    // 0x4866c8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4866c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4866cc:
    // 0x4866cc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4866ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4866d0:
    // 0x4866d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4866d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4866d4:
    // 0x4866d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4866d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4866d8:
    // 0x4866d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4866d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4866dc:
    // 0x4866dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4866dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4866e0:
    // 0x4866e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4866e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4866e4:
    // 0x4866e4: 0x3e00008  jr          $ra
label_4866e8:
    if (ctx->pc == 0x4866E8u) {
        ctx->pc = 0x4866E8u;
            // 0x4866e8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4866ECu;
        goto label_4866ec;
    }
    ctx->pc = 0x4866E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4866E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4866E4u;
            // 0x4866e8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4866ECu;
label_4866ec:
    // 0x4866ec: 0x0  nop
    ctx->pc = 0x4866ecu;
    // NOP
label_4866f0:
    // 0x4866f0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4866f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4866f4:
    // 0x4866f4: 0x3e00008  jr          $ra
label_4866f8:
    if (ctx->pc == 0x4866F8u) {
        ctx->pc = 0x4866F8u;
            // 0x4866f8: 0x2442fbf0  addiu       $v0, $v0, -0x410 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966256));
        ctx->pc = 0x4866FCu;
        goto label_4866fc;
    }
    ctx->pc = 0x4866F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4866F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4866F4u;
            // 0x4866f8: 0x2442fbf0  addiu       $v0, $v0, -0x410 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4866FCu;
label_4866fc:
    // 0x4866fc: 0x0  nop
    ctx->pc = 0x4866fcu;
    // NOP
label_486700:
    // 0x486700: 0x3e00008  jr          $ra
label_486704:
    if (ctx->pc == 0x486704u) {
        ctx->pc = 0x486704u;
            // 0x486704: 0x24025a00  addiu       $v0, $zero, 0x5A00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23040));
        ctx->pc = 0x486708u;
        goto label_486708;
    }
    ctx->pc = 0x486700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x486704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x486700u;
            // 0x486704: 0x24025a00  addiu       $v0, $zero, 0x5A00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23040));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x486708u;
label_486708:
    // 0x486708: 0x0  nop
    ctx->pc = 0x486708u;
    // NOP
label_48670c:
    // 0x48670c: 0x0  nop
    ctx->pc = 0x48670cu;
    // NOP
label_486710:
    // 0x486710: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x486710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_486714:
    // 0x486714: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x486714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_486718:
    // 0x486718: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x486718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_48671c:
    // 0x48671c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48671cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_486720:
    // 0x486720: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x486720u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_486724:
    // 0x486724: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x486724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_486728:
    // 0x486728: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x486728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48672c:
    // 0x48672c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48672cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_486730:
    // 0x486730: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x486730u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_486734:
    // 0x486734: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_486738:
    if (ctx->pc == 0x486738u) {
        ctx->pc = 0x486738u;
            // 0x486738: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48673Cu;
        goto label_48673c;
    }
    ctx->pc = 0x486734u;
    {
        const bool branch_taken_0x486734 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x486738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x486734u;
            // 0x486738: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x486734) {
            ctx->pc = 0x486778u;
            goto label_486778;
        }
    }
    ctx->pc = 0x48673Cu;
label_48673c:
    // 0x48673c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x48673cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_486740:
    // 0x486740: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x486740u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_486744:
    // 0x486744: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x486744u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_486748:
    // 0x486748: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x486748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_48674c:
    // 0x48674c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x48674cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_486750:
    // 0x486750: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x486750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_486754:
    // 0x486754: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x486754u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_486758:
    // 0x486758: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x486758u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_48675c:
    // 0x48675c: 0x320f809  jalr        $t9
label_486760:
    if (ctx->pc == 0x486760u) {
        ctx->pc = 0x486764u;
        goto label_486764;
    }
    ctx->pc = 0x48675Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x486764u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x486764u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x486764u; }
            if (ctx->pc != 0x486764u) { return; }
        }
        }
    }
    ctx->pc = 0x486764u;
label_486764:
    // 0x486764: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x486764u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_486768:
    // 0x486768: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x486768u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_48676c:
    // 0x48676c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x48676cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_486770:
    // 0x486770: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_486774:
    if (ctx->pc == 0x486774u) {
        ctx->pc = 0x486774u;
            // 0x486774: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x486778u;
        goto label_486778;
    }
    ctx->pc = 0x486770u;
    {
        const bool branch_taken_0x486770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x486774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x486770u;
            // 0x486774: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x486770) {
            ctx->pc = 0x486748u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_486748;
        }
    }
    ctx->pc = 0x486778u;
label_486778:
    // 0x486778: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x486778u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_48677c:
    // 0x48677c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x48677cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_486780:
    // 0x486780: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x486780u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_486784:
    // 0x486784: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x486784u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_486788:
    // 0x486788: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x486788u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48678c:
    // 0x48678c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48678cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_486790:
    // 0x486790: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x486790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_486794:
    // 0x486794: 0x3e00008  jr          $ra
label_486798:
    if (ctx->pc == 0x486798u) {
        ctx->pc = 0x486798u;
            // 0x486798: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x48679Cu;
        goto label_48679c;
    }
    ctx->pc = 0x486794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x486798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x486794u;
            // 0x486798: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48679Cu;
label_48679c:
    // 0x48679c: 0x0  nop
    ctx->pc = 0x48679cu;
    // NOP
label_4867a0:
    // 0x4867a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4867a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4867a4:
    // 0x4867a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4867a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4867a8:
    // 0x4867a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4867a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4867ac:
    // 0x4867ac: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4867acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4867b0:
    // 0x4867b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4867b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4867b4:
    // 0x4867b4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4867b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4867b8:
    // 0x4867b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4867b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4867bc:
    // 0x4867bc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4867bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4867c0:
    // 0x4867c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4867c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4867c4:
    // 0x4867c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4867c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4867c8:
    // 0x4867c8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4867c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4867cc:
    // 0x4867cc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4867ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4867d0:
    // 0x4867d0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4867d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4867d4:
    // 0x4867d4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4867d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4867d8:
    // 0x4867d8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x4867d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_4867dc:
    // 0x4867dc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4867dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4867e0:
    // 0x4867e0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x4867e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4867e4:
    // 0x4867e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4867e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4867e8:
    // 0x4867e8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x4867e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_4867ec:
    // 0x4867ec: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4867ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4867f0:
    // 0x4867f0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4867f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4867f4:
    // 0x4867f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4867f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4867f8:
    // 0x4867f8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4867f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4867fc:
    // 0x4867fc: 0xc0a997c  jal         func_2A65F0
label_486800:
    if (ctx->pc == 0x486800u) {
        ctx->pc = 0x486800u;
            // 0x486800: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x486804u;
        goto label_486804;
    }
    ctx->pc = 0x4867FCu;
    SET_GPR_U32(ctx, 31, 0x486804u);
    ctx->pc = 0x486800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4867FCu;
            // 0x486800: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486804u; }
        if (ctx->pc != 0x486804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486804u; }
        if (ctx->pc != 0x486804u) { return; }
    }
    ctx->pc = 0x486804u;
label_486804:
    // 0x486804: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x486804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_486808:
    // 0x486808: 0xc0d879c  jal         func_361E70
label_48680c:
    if (ctx->pc == 0x48680Cu) {
        ctx->pc = 0x48680Cu;
            // 0x48680c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x486810u;
        goto label_486810;
    }
    ctx->pc = 0x486808u;
    SET_GPR_U32(ctx, 31, 0x486810u);
    ctx->pc = 0x48680Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x486808u;
            // 0x48680c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486810u; }
        if (ctx->pc != 0x486810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486810u; }
        if (ctx->pc != 0x486810u) { return; }
    }
    ctx->pc = 0x486810u;
label_486810:
    // 0x486810: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x486810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_486814:
    // 0x486814: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x486814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_486818:
    // 0x486818: 0x3e00008  jr          $ra
label_48681c:
    if (ctx->pc == 0x48681Cu) {
        ctx->pc = 0x48681Cu;
            // 0x48681c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x486820u;
        goto label_486820;
    }
    ctx->pc = 0x486818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48681Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x486818u;
            // 0x48681c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x486820u;
label_486820:
    // 0x486820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x486820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_486824:
    // 0x486824: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x486824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_486828:
    // 0x486828: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x486828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48682c:
    // 0x48682c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x48682cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_486830:
    // 0x486830: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_486834:
    if (ctx->pc == 0x486834u) {
        ctx->pc = 0x486834u;
            // 0x486834: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x486838u;
        goto label_486838;
    }
    ctx->pc = 0x486830u;
    {
        const bool branch_taken_0x486830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x486834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x486830u;
            // 0x486834: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x486830) {
            ctx->pc = 0x486950u;
            goto label_486950;
        }
    }
    ctx->pc = 0x486838u;
label_486838:
    // 0x486838: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x486838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_48683c:
    // 0x48683c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x48683cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_486840:
    // 0x486840: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x486840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_486844:
    // 0x486844: 0xc075128  jal         func_1D44A0
label_486848:
    if (ctx->pc == 0x486848u) {
        ctx->pc = 0x486848u;
            // 0x486848: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x48684Cu;
        goto label_48684c;
    }
    ctx->pc = 0x486844u;
    SET_GPR_U32(ctx, 31, 0x48684Cu);
    ctx->pc = 0x486848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x486844u;
            // 0x486848: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48684Cu; }
        if (ctx->pc != 0x48684Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48684Cu; }
        if (ctx->pc != 0x48684Cu) { return; }
    }
    ctx->pc = 0x48684Cu;
label_48684c:
    // 0x48684c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x48684cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_486850:
    // 0x486850: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x486850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_486854:
    // 0x486854: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x486854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_486858:
    // 0x486858: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x486858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_48685c:
    // 0x48685c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x48685cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_486860:
    // 0x486860: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_486864:
    if (ctx->pc == 0x486864u) {
        ctx->pc = 0x486864u;
            // 0x486864: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x486868u;
        goto label_486868;
    }
    ctx->pc = 0x486860u;
    {
        const bool branch_taken_0x486860 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x486864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x486860u;
            // 0x486864: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x486860) {
            ctx->pc = 0x486870u;
            goto label_486870;
        }
    }
    ctx->pc = 0x486868u;
label_486868:
    // 0x486868: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x486868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_48686c:
    // 0x48686c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x48686cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_486870:
    // 0x486870: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x486870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_486874:
    // 0x486874: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x486874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_486878:
    // 0x486878: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x486878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_48687c:
    // 0x48687c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x48687cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_486880:
    // 0x486880: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x486880u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_486884:
    // 0x486884: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_486888:
    if (ctx->pc == 0x486888u) {
        ctx->pc = 0x486888u;
            // 0x486888: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x48688Cu;
        goto label_48688c;
    }
    ctx->pc = 0x486884u;
    {
        const bool branch_taken_0x486884 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x486884) {
            ctx->pc = 0x486888u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x486884u;
            // 0x486888: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x486898u;
            goto label_486898;
        }
    }
    ctx->pc = 0x48688Cu;
label_48688c:
    // 0x48688c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x48688cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_486890:
    // 0x486890: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x486890u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_486894:
    // 0x486894: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x486894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_486898:
    // 0x486898: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x486898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_48689c:
    // 0x48689c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x48689cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4868a0:
    // 0x4868a0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4868a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4868a4:
    // 0x4868a4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4868a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4868a8:
    // 0x4868a8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4868ac:
    if (ctx->pc == 0x4868ACu) {
        ctx->pc = 0x4868ACu;
            // 0x4868ac: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4868B0u;
        goto label_4868b0;
    }
    ctx->pc = 0x4868A8u;
    {
        const bool branch_taken_0x4868a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4868a8) {
            ctx->pc = 0x4868ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4868A8u;
            // 0x4868ac: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4868BCu;
            goto label_4868bc;
        }
    }
    ctx->pc = 0x4868B0u;
label_4868b0:
    // 0x4868b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4868b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4868b4:
    // 0x4868b4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4868b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4868b8:
    // 0x4868b8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4868b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4868bc:
    // 0x4868bc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4868bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4868c0:
    // 0x4868c0: 0x320f809  jalr        $t9
label_4868c4:
    if (ctx->pc == 0x4868C4u) {
        ctx->pc = 0x4868C4u;
            // 0x4868c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4868C8u;
        goto label_4868c8;
    }
    ctx->pc = 0x4868C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4868C8u);
        ctx->pc = 0x4868C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4868C0u;
            // 0x4868c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4868C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4868C8u; }
            if (ctx->pc != 0x4868C8u) { return; }
        }
        }
    }
    ctx->pc = 0x4868C8u;
label_4868c8:
    // 0x4868c8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4868c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4868cc:
    // 0x4868cc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4868ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4868d0:
    // 0x4868d0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4868d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4868d4:
    // 0x4868d4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4868d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4868d8:
    // 0x4868d8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4868d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4868dc:
    // 0x4868dc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4868dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4868e0:
    // 0x4868e0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4868e4:
    if (ctx->pc == 0x4868E4u) {
        ctx->pc = 0x4868E4u;
            // 0x4868e4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x4868E8u;
        goto label_4868e8;
    }
    ctx->pc = 0x4868E0u;
    {
        const bool branch_taken_0x4868e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4868e0) {
            ctx->pc = 0x4868E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4868E0u;
            // 0x4868e4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4868F4u;
            goto label_4868f4;
        }
    }
    ctx->pc = 0x4868E8u;
label_4868e8:
    // 0x4868e8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4868e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4868ec:
    // 0x4868ec: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4868ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4868f0:
    // 0x4868f0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4868f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4868f4:
    // 0x4868f4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4868f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4868f8:
    // 0x4868f8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4868f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4868fc:
    // 0x4868fc: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4868fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_486900:
    // 0x486900: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x486900u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_486904:
    // 0x486904: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x486904u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_486908:
    // 0x486908: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_48690c:
    if (ctx->pc == 0x48690Cu) {
        ctx->pc = 0x486910u;
        goto label_486910;
    }
    ctx->pc = 0x486908u;
    {
        const bool branch_taken_0x486908 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x486908) {
            ctx->pc = 0x486918u;
            goto label_486918;
        }
    }
    ctx->pc = 0x486910u;
label_486910:
    // 0x486910: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x486910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_486914:
    // 0x486914: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x486914u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_486918:
    // 0x486918: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x486918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_48691c:
    // 0x48691c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x48691cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_486920:
    // 0x486920: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x486920u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_486924:
    // 0x486924: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_486928:
    if (ctx->pc == 0x486928u) {
        ctx->pc = 0x48692Cu;
        goto label_48692c;
    }
    ctx->pc = 0x486924u;
    {
        const bool branch_taken_0x486924 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x486924) {
            ctx->pc = 0x486934u;
            goto label_486934;
        }
    }
    ctx->pc = 0x48692Cu;
label_48692c:
    // 0x48692c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x48692cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_486930:
    // 0x486930: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x486930u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_486934:
    // 0x486934: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x486934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_486938:
    // 0x486938: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x486938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_48693c:
    // 0x48693c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x48693cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_486940:
    // 0x486940: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_486944:
    if (ctx->pc == 0x486944u) {
        ctx->pc = 0x486944u;
            // 0x486944: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x486948u;
        goto label_486948;
    }
    ctx->pc = 0x486940u;
    {
        const bool branch_taken_0x486940 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x486940) {
            ctx->pc = 0x486944u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x486940u;
            // 0x486944: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x486954u;
            goto label_486954;
        }
    }
    ctx->pc = 0x486948u;
label_486948:
    // 0x486948: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x486948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_48694c:
    // 0x48694c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x48694cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_486950:
    // 0x486950: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x486950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_486954:
    // 0x486954: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x486954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_486958:
    // 0x486958: 0x3e00008  jr          $ra
label_48695c:
    if (ctx->pc == 0x48695Cu) {
        ctx->pc = 0x48695Cu;
            // 0x48695c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x486960u;
        goto label_486960;
    }
    ctx->pc = 0x486958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48695Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x486958u;
            // 0x48695c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x486960u;
label_486960:
    // 0x486960: 0x812161c  j           func_485870
label_486964:
    if (ctx->pc == 0x486964u) {
        ctx->pc = 0x486964u;
            // 0x486964: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x486968u;
        goto label_486968;
    }
    ctx->pc = 0x486960u;
    ctx->pc = 0x486964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x486960u;
            // 0x486964: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x485870u;
    {
        auto targetFn = runtime->lookupFunction(0x485870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x486968u;
label_486968:
    // 0x486968: 0x0  nop
    ctx->pc = 0x486968u;
    // NOP
label_48696c:
    // 0x48696c: 0x0  nop
    ctx->pc = 0x48696cu;
    // NOP
label_486970:
    // 0x486970: 0x8121490  j           func_485240
label_486974:
    if (ctx->pc == 0x486974u) {
        ctx->pc = 0x486974u;
            // 0x486974: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x486978u;
        goto label_486978;
    }
    ctx->pc = 0x486970u;
    ctx->pc = 0x486974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x486970u;
            // 0x486974: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x485240u;
    if (runtime->hasFunction(0x485240u)) {
        auto targetFn = runtime->lookupFunction(0x485240u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00485240_0x485240(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x486978u;
label_486978:
    // 0x486978: 0x0  nop
    ctx->pc = 0x486978u;
    // NOP
label_48697c:
    // 0x48697c: 0x0  nop
    ctx->pc = 0x48697cu;
    // NOP
label_486980:
    // 0x486980: 0x81214e8  j           func_4853A0
label_486984:
    if (ctx->pc == 0x486984u) {
        ctx->pc = 0x486984u;
            // 0x486984: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x486988u;
        goto label_486988;
    }
    ctx->pc = 0x486980u;
    ctx->pc = 0x486984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x486980u;
            // 0x486984: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4853A0u;
    {
        auto targetFn = runtime->lookupFunction(0x4853A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x486988u;
label_486988:
    // 0x486988: 0x0  nop
    ctx->pc = 0x486988u;
    // NOP
label_48698c:
    // 0x48698c: 0x0  nop
    ctx->pc = 0x48698cu;
    // NOP
label_486990:
    // 0x486990: 0x812146c  j           func_4851B0
label_486994:
    if (ctx->pc == 0x486994u) {
        ctx->pc = 0x486994u;
            // 0x486994: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x486998u;
        goto label_486998;
    }
    ctx->pc = 0x486990u;
    ctx->pc = 0x486994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x486990u;
            // 0x486994: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4851B0u;
    {
        auto targetFn = runtime->lookupFunction(0x4851B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x486998u;
label_486998:
    // 0x486998: 0x0  nop
    ctx->pc = 0x486998u;
    // NOP
label_48699c:
    // 0x48699c: 0x0  nop
    ctx->pc = 0x48699cu;
    // NOP
label_4869a0:
    // 0x4869a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4869a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4869a4:
    // 0x4869a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4869a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4869a8:
    // 0x4869a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4869a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4869ac:
    // 0x4869ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4869acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4869b0:
    // 0x4869b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4869b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4869b4:
    // 0x4869b4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_4869b8:
    if (ctx->pc == 0x4869B8u) {
        ctx->pc = 0x4869B8u;
            // 0x4869b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4869BCu;
        goto label_4869bc;
    }
    ctx->pc = 0x4869B4u;
    {
        const bool branch_taken_0x4869b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4869B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4869B4u;
            // 0x4869b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4869b4) {
            ctx->pc = 0x486A10u;
            goto label_486a10;
        }
    }
    ctx->pc = 0x4869BCu;
label_4869bc:
    // 0x4869bc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4869bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4869c0:
    // 0x4869c0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4869c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4869c4:
    // 0x4869c4: 0x2463f590  addiu       $v1, $v1, -0xA70
    ctx->pc = 0x4869c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964624));
label_4869c8:
    // 0x4869c8: 0x2442f5c8  addiu       $v0, $v0, -0xA38
    ctx->pc = 0x4869c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964680));
label_4869cc:
    // 0x4869cc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4869ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4869d0:
    // 0x4869d0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_4869d4:
    if (ctx->pc == 0x4869D4u) {
        ctx->pc = 0x4869D4u;
            // 0x4869d4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4869D8u;
        goto label_4869d8;
    }
    ctx->pc = 0x4869D0u;
    {
        const bool branch_taken_0x4869d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4869D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4869D0u;
            // 0x4869d4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4869d0) {
            ctx->pc = 0x4869F8u;
            goto label_4869f8;
        }
    }
    ctx->pc = 0x4869D8u;
label_4869d8:
    // 0x4869d8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4869d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4869dc:
    // 0x4869dc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4869dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4869e0:
    // 0x4869e0: 0x2463f680  addiu       $v1, $v1, -0x980
    ctx->pc = 0x4869e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964864));
label_4869e4:
    // 0x4869e4: 0x2442f6b8  addiu       $v0, $v0, -0x948
    ctx->pc = 0x4869e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964920));
label_4869e8:
    // 0x4869e8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4869e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4869ec:
    // 0x4869ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4869ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4869f0:
    // 0x4869f0: 0xc121a8c  jal         func_486A30
label_4869f4:
    if (ctx->pc == 0x4869F4u) {
        ctx->pc = 0x4869F4u;
            // 0x4869f4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4869F8u;
        goto label_4869f8;
    }
    ctx->pc = 0x4869F0u;
    SET_GPR_U32(ctx, 31, 0x4869F8u);
    ctx->pc = 0x4869F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4869F0u;
            // 0x4869f4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x486A30u;
    if (runtime->hasFunction(0x486A30u)) {
        auto targetFn = runtime->lookupFunction(0x486A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4869F8u; }
        if (ctx->pc != 0x4869F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00486A30_0x486a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4869F8u; }
        if (ctx->pc != 0x4869F8u) { return; }
    }
    ctx->pc = 0x4869F8u;
label_4869f8:
    // 0x4869f8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4869f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4869fc:
    // 0x4869fc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4869fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_486a00:
    // 0x486a00: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_486a04:
    if (ctx->pc == 0x486A04u) {
        ctx->pc = 0x486A04u;
            // 0x486a04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x486A08u;
        goto label_486a08;
    }
    ctx->pc = 0x486A00u;
    {
        const bool branch_taken_0x486a00 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x486a00) {
            ctx->pc = 0x486A04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x486A00u;
            // 0x486a04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x486A14u;
            goto label_486a14;
        }
    }
    ctx->pc = 0x486A08u;
label_486a08:
    // 0x486a08: 0xc0400a8  jal         func_1002A0
label_486a0c:
    if (ctx->pc == 0x486A0Cu) {
        ctx->pc = 0x486A0Cu;
            // 0x486a0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x486A10u;
        goto label_486a10;
    }
    ctx->pc = 0x486A08u;
    SET_GPR_U32(ctx, 31, 0x486A10u);
    ctx->pc = 0x486A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x486A08u;
            // 0x486a0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486A10u; }
        if (ctx->pc != 0x486A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486A10u; }
        if (ctx->pc != 0x486A10u) { return; }
    }
    ctx->pc = 0x486A10u;
label_486a10:
    // 0x486a10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x486a10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_486a14:
    // 0x486a14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x486a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_486a18:
    // 0x486a18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x486a18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_486a1c:
    // 0x486a1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x486a1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_486a20:
    // 0x486a20: 0x3e00008  jr          $ra
label_486a24:
    if (ctx->pc == 0x486A24u) {
        ctx->pc = 0x486A24u;
            // 0x486a24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x486A28u;
        goto label_486a28;
    }
    ctx->pc = 0x486A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x486A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x486A20u;
            // 0x486a24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x486A28u;
label_486a28:
    // 0x486a28: 0x0  nop
    ctx->pc = 0x486a28u;
    // NOP
label_486a2c:
    // 0x486a2c: 0x0  nop
    ctx->pc = 0x486a2cu;
    // NOP
}
