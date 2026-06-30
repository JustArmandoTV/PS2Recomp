#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00411400
// Address: 0x411400 - 0x411950
void sub_00411400_0x411400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00411400_0x411400");
#endif

    switch (ctx->pc) {
        case 0x411400u: goto label_411400;
        case 0x411404u: goto label_411404;
        case 0x411408u: goto label_411408;
        case 0x41140cu: goto label_41140c;
        case 0x411410u: goto label_411410;
        case 0x411414u: goto label_411414;
        case 0x411418u: goto label_411418;
        case 0x41141cu: goto label_41141c;
        case 0x411420u: goto label_411420;
        case 0x411424u: goto label_411424;
        case 0x411428u: goto label_411428;
        case 0x41142cu: goto label_41142c;
        case 0x411430u: goto label_411430;
        case 0x411434u: goto label_411434;
        case 0x411438u: goto label_411438;
        case 0x41143cu: goto label_41143c;
        case 0x411440u: goto label_411440;
        case 0x411444u: goto label_411444;
        case 0x411448u: goto label_411448;
        case 0x41144cu: goto label_41144c;
        case 0x411450u: goto label_411450;
        case 0x411454u: goto label_411454;
        case 0x411458u: goto label_411458;
        case 0x41145cu: goto label_41145c;
        case 0x411460u: goto label_411460;
        case 0x411464u: goto label_411464;
        case 0x411468u: goto label_411468;
        case 0x41146cu: goto label_41146c;
        case 0x411470u: goto label_411470;
        case 0x411474u: goto label_411474;
        case 0x411478u: goto label_411478;
        case 0x41147cu: goto label_41147c;
        case 0x411480u: goto label_411480;
        case 0x411484u: goto label_411484;
        case 0x411488u: goto label_411488;
        case 0x41148cu: goto label_41148c;
        case 0x411490u: goto label_411490;
        case 0x411494u: goto label_411494;
        case 0x411498u: goto label_411498;
        case 0x41149cu: goto label_41149c;
        case 0x4114a0u: goto label_4114a0;
        case 0x4114a4u: goto label_4114a4;
        case 0x4114a8u: goto label_4114a8;
        case 0x4114acu: goto label_4114ac;
        case 0x4114b0u: goto label_4114b0;
        case 0x4114b4u: goto label_4114b4;
        case 0x4114b8u: goto label_4114b8;
        case 0x4114bcu: goto label_4114bc;
        case 0x4114c0u: goto label_4114c0;
        case 0x4114c4u: goto label_4114c4;
        case 0x4114c8u: goto label_4114c8;
        case 0x4114ccu: goto label_4114cc;
        case 0x4114d0u: goto label_4114d0;
        case 0x4114d4u: goto label_4114d4;
        case 0x4114d8u: goto label_4114d8;
        case 0x4114dcu: goto label_4114dc;
        case 0x4114e0u: goto label_4114e0;
        case 0x4114e4u: goto label_4114e4;
        case 0x4114e8u: goto label_4114e8;
        case 0x4114ecu: goto label_4114ec;
        case 0x4114f0u: goto label_4114f0;
        case 0x4114f4u: goto label_4114f4;
        case 0x4114f8u: goto label_4114f8;
        case 0x4114fcu: goto label_4114fc;
        case 0x411500u: goto label_411500;
        case 0x411504u: goto label_411504;
        case 0x411508u: goto label_411508;
        case 0x41150cu: goto label_41150c;
        case 0x411510u: goto label_411510;
        case 0x411514u: goto label_411514;
        case 0x411518u: goto label_411518;
        case 0x41151cu: goto label_41151c;
        case 0x411520u: goto label_411520;
        case 0x411524u: goto label_411524;
        case 0x411528u: goto label_411528;
        case 0x41152cu: goto label_41152c;
        case 0x411530u: goto label_411530;
        case 0x411534u: goto label_411534;
        case 0x411538u: goto label_411538;
        case 0x41153cu: goto label_41153c;
        case 0x411540u: goto label_411540;
        case 0x411544u: goto label_411544;
        case 0x411548u: goto label_411548;
        case 0x41154cu: goto label_41154c;
        case 0x411550u: goto label_411550;
        case 0x411554u: goto label_411554;
        case 0x411558u: goto label_411558;
        case 0x41155cu: goto label_41155c;
        case 0x411560u: goto label_411560;
        case 0x411564u: goto label_411564;
        case 0x411568u: goto label_411568;
        case 0x41156cu: goto label_41156c;
        case 0x411570u: goto label_411570;
        case 0x411574u: goto label_411574;
        case 0x411578u: goto label_411578;
        case 0x41157cu: goto label_41157c;
        case 0x411580u: goto label_411580;
        case 0x411584u: goto label_411584;
        case 0x411588u: goto label_411588;
        case 0x41158cu: goto label_41158c;
        case 0x411590u: goto label_411590;
        case 0x411594u: goto label_411594;
        case 0x411598u: goto label_411598;
        case 0x41159cu: goto label_41159c;
        case 0x4115a0u: goto label_4115a0;
        case 0x4115a4u: goto label_4115a4;
        case 0x4115a8u: goto label_4115a8;
        case 0x4115acu: goto label_4115ac;
        case 0x4115b0u: goto label_4115b0;
        case 0x4115b4u: goto label_4115b4;
        case 0x4115b8u: goto label_4115b8;
        case 0x4115bcu: goto label_4115bc;
        case 0x4115c0u: goto label_4115c0;
        case 0x4115c4u: goto label_4115c4;
        case 0x4115c8u: goto label_4115c8;
        case 0x4115ccu: goto label_4115cc;
        case 0x4115d0u: goto label_4115d0;
        case 0x4115d4u: goto label_4115d4;
        case 0x4115d8u: goto label_4115d8;
        case 0x4115dcu: goto label_4115dc;
        case 0x4115e0u: goto label_4115e0;
        case 0x4115e4u: goto label_4115e4;
        case 0x4115e8u: goto label_4115e8;
        case 0x4115ecu: goto label_4115ec;
        case 0x4115f0u: goto label_4115f0;
        case 0x4115f4u: goto label_4115f4;
        case 0x4115f8u: goto label_4115f8;
        case 0x4115fcu: goto label_4115fc;
        case 0x411600u: goto label_411600;
        case 0x411604u: goto label_411604;
        case 0x411608u: goto label_411608;
        case 0x41160cu: goto label_41160c;
        case 0x411610u: goto label_411610;
        case 0x411614u: goto label_411614;
        case 0x411618u: goto label_411618;
        case 0x41161cu: goto label_41161c;
        case 0x411620u: goto label_411620;
        case 0x411624u: goto label_411624;
        case 0x411628u: goto label_411628;
        case 0x41162cu: goto label_41162c;
        case 0x411630u: goto label_411630;
        case 0x411634u: goto label_411634;
        case 0x411638u: goto label_411638;
        case 0x41163cu: goto label_41163c;
        case 0x411640u: goto label_411640;
        case 0x411644u: goto label_411644;
        case 0x411648u: goto label_411648;
        case 0x41164cu: goto label_41164c;
        case 0x411650u: goto label_411650;
        case 0x411654u: goto label_411654;
        case 0x411658u: goto label_411658;
        case 0x41165cu: goto label_41165c;
        case 0x411660u: goto label_411660;
        case 0x411664u: goto label_411664;
        case 0x411668u: goto label_411668;
        case 0x41166cu: goto label_41166c;
        case 0x411670u: goto label_411670;
        case 0x411674u: goto label_411674;
        case 0x411678u: goto label_411678;
        case 0x41167cu: goto label_41167c;
        case 0x411680u: goto label_411680;
        case 0x411684u: goto label_411684;
        case 0x411688u: goto label_411688;
        case 0x41168cu: goto label_41168c;
        case 0x411690u: goto label_411690;
        case 0x411694u: goto label_411694;
        case 0x411698u: goto label_411698;
        case 0x41169cu: goto label_41169c;
        case 0x4116a0u: goto label_4116a0;
        case 0x4116a4u: goto label_4116a4;
        case 0x4116a8u: goto label_4116a8;
        case 0x4116acu: goto label_4116ac;
        case 0x4116b0u: goto label_4116b0;
        case 0x4116b4u: goto label_4116b4;
        case 0x4116b8u: goto label_4116b8;
        case 0x4116bcu: goto label_4116bc;
        case 0x4116c0u: goto label_4116c0;
        case 0x4116c4u: goto label_4116c4;
        case 0x4116c8u: goto label_4116c8;
        case 0x4116ccu: goto label_4116cc;
        case 0x4116d0u: goto label_4116d0;
        case 0x4116d4u: goto label_4116d4;
        case 0x4116d8u: goto label_4116d8;
        case 0x4116dcu: goto label_4116dc;
        case 0x4116e0u: goto label_4116e0;
        case 0x4116e4u: goto label_4116e4;
        case 0x4116e8u: goto label_4116e8;
        case 0x4116ecu: goto label_4116ec;
        case 0x4116f0u: goto label_4116f0;
        case 0x4116f4u: goto label_4116f4;
        case 0x4116f8u: goto label_4116f8;
        case 0x4116fcu: goto label_4116fc;
        case 0x411700u: goto label_411700;
        case 0x411704u: goto label_411704;
        case 0x411708u: goto label_411708;
        case 0x41170cu: goto label_41170c;
        case 0x411710u: goto label_411710;
        case 0x411714u: goto label_411714;
        case 0x411718u: goto label_411718;
        case 0x41171cu: goto label_41171c;
        case 0x411720u: goto label_411720;
        case 0x411724u: goto label_411724;
        case 0x411728u: goto label_411728;
        case 0x41172cu: goto label_41172c;
        case 0x411730u: goto label_411730;
        case 0x411734u: goto label_411734;
        case 0x411738u: goto label_411738;
        case 0x41173cu: goto label_41173c;
        case 0x411740u: goto label_411740;
        case 0x411744u: goto label_411744;
        case 0x411748u: goto label_411748;
        case 0x41174cu: goto label_41174c;
        case 0x411750u: goto label_411750;
        case 0x411754u: goto label_411754;
        case 0x411758u: goto label_411758;
        case 0x41175cu: goto label_41175c;
        case 0x411760u: goto label_411760;
        case 0x411764u: goto label_411764;
        case 0x411768u: goto label_411768;
        case 0x41176cu: goto label_41176c;
        case 0x411770u: goto label_411770;
        case 0x411774u: goto label_411774;
        case 0x411778u: goto label_411778;
        case 0x41177cu: goto label_41177c;
        case 0x411780u: goto label_411780;
        case 0x411784u: goto label_411784;
        case 0x411788u: goto label_411788;
        case 0x41178cu: goto label_41178c;
        case 0x411790u: goto label_411790;
        case 0x411794u: goto label_411794;
        case 0x411798u: goto label_411798;
        case 0x41179cu: goto label_41179c;
        case 0x4117a0u: goto label_4117a0;
        case 0x4117a4u: goto label_4117a4;
        case 0x4117a8u: goto label_4117a8;
        case 0x4117acu: goto label_4117ac;
        case 0x4117b0u: goto label_4117b0;
        case 0x4117b4u: goto label_4117b4;
        case 0x4117b8u: goto label_4117b8;
        case 0x4117bcu: goto label_4117bc;
        case 0x4117c0u: goto label_4117c0;
        case 0x4117c4u: goto label_4117c4;
        case 0x4117c8u: goto label_4117c8;
        case 0x4117ccu: goto label_4117cc;
        case 0x4117d0u: goto label_4117d0;
        case 0x4117d4u: goto label_4117d4;
        case 0x4117d8u: goto label_4117d8;
        case 0x4117dcu: goto label_4117dc;
        case 0x4117e0u: goto label_4117e0;
        case 0x4117e4u: goto label_4117e4;
        case 0x4117e8u: goto label_4117e8;
        case 0x4117ecu: goto label_4117ec;
        case 0x4117f0u: goto label_4117f0;
        case 0x4117f4u: goto label_4117f4;
        case 0x4117f8u: goto label_4117f8;
        case 0x4117fcu: goto label_4117fc;
        case 0x411800u: goto label_411800;
        case 0x411804u: goto label_411804;
        case 0x411808u: goto label_411808;
        case 0x41180cu: goto label_41180c;
        case 0x411810u: goto label_411810;
        case 0x411814u: goto label_411814;
        case 0x411818u: goto label_411818;
        case 0x41181cu: goto label_41181c;
        case 0x411820u: goto label_411820;
        case 0x411824u: goto label_411824;
        case 0x411828u: goto label_411828;
        case 0x41182cu: goto label_41182c;
        case 0x411830u: goto label_411830;
        case 0x411834u: goto label_411834;
        case 0x411838u: goto label_411838;
        case 0x41183cu: goto label_41183c;
        case 0x411840u: goto label_411840;
        case 0x411844u: goto label_411844;
        case 0x411848u: goto label_411848;
        case 0x41184cu: goto label_41184c;
        case 0x411850u: goto label_411850;
        case 0x411854u: goto label_411854;
        case 0x411858u: goto label_411858;
        case 0x41185cu: goto label_41185c;
        case 0x411860u: goto label_411860;
        case 0x411864u: goto label_411864;
        case 0x411868u: goto label_411868;
        case 0x41186cu: goto label_41186c;
        case 0x411870u: goto label_411870;
        case 0x411874u: goto label_411874;
        case 0x411878u: goto label_411878;
        case 0x41187cu: goto label_41187c;
        case 0x411880u: goto label_411880;
        case 0x411884u: goto label_411884;
        case 0x411888u: goto label_411888;
        case 0x41188cu: goto label_41188c;
        case 0x411890u: goto label_411890;
        case 0x411894u: goto label_411894;
        case 0x411898u: goto label_411898;
        case 0x41189cu: goto label_41189c;
        case 0x4118a0u: goto label_4118a0;
        case 0x4118a4u: goto label_4118a4;
        case 0x4118a8u: goto label_4118a8;
        case 0x4118acu: goto label_4118ac;
        case 0x4118b0u: goto label_4118b0;
        case 0x4118b4u: goto label_4118b4;
        case 0x4118b8u: goto label_4118b8;
        case 0x4118bcu: goto label_4118bc;
        case 0x4118c0u: goto label_4118c0;
        case 0x4118c4u: goto label_4118c4;
        case 0x4118c8u: goto label_4118c8;
        case 0x4118ccu: goto label_4118cc;
        case 0x4118d0u: goto label_4118d0;
        case 0x4118d4u: goto label_4118d4;
        case 0x4118d8u: goto label_4118d8;
        case 0x4118dcu: goto label_4118dc;
        case 0x4118e0u: goto label_4118e0;
        case 0x4118e4u: goto label_4118e4;
        case 0x4118e8u: goto label_4118e8;
        case 0x4118ecu: goto label_4118ec;
        case 0x4118f0u: goto label_4118f0;
        case 0x4118f4u: goto label_4118f4;
        case 0x4118f8u: goto label_4118f8;
        case 0x4118fcu: goto label_4118fc;
        case 0x411900u: goto label_411900;
        case 0x411904u: goto label_411904;
        case 0x411908u: goto label_411908;
        case 0x41190cu: goto label_41190c;
        case 0x411910u: goto label_411910;
        case 0x411914u: goto label_411914;
        case 0x411918u: goto label_411918;
        case 0x41191cu: goto label_41191c;
        case 0x411920u: goto label_411920;
        case 0x411924u: goto label_411924;
        case 0x411928u: goto label_411928;
        case 0x41192cu: goto label_41192c;
        case 0x411930u: goto label_411930;
        case 0x411934u: goto label_411934;
        case 0x411938u: goto label_411938;
        case 0x41193cu: goto label_41193c;
        case 0x411940u: goto label_411940;
        case 0x411944u: goto label_411944;
        case 0x411948u: goto label_411948;
        case 0x41194cu: goto label_41194c;
        default: break;
    }

    ctx->pc = 0x411400u;

label_411400:
    // 0x411400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x411400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_411404:
    // 0x411404: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x411404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_411408:
    // 0x411408: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x411408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_41140c:
    // 0x41140c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x41140cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_411410:
    // 0x411410: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x411410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_411414:
    // 0x411414: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x411414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_411418:
    // 0x411418: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x411418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41141c:
    // 0x41141c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x41141cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_411420:
    // 0x411420: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x411420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_411424:
    // 0x411424: 0xc10ca68  jal         func_4329A0
label_411428:
    if (ctx->pc == 0x411428u) {
        ctx->pc = 0x411428u;
            // 0x411428: 0x34457a1a  ori         $a1, $v0, 0x7A1A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31258);
        ctx->pc = 0x41142Cu;
        goto label_41142c;
    }
    ctx->pc = 0x411424u;
    SET_GPR_U32(ctx, 31, 0x41142Cu);
    ctx->pc = 0x411428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411424u;
            // 0x411428: 0x34457a1a  ori         $a1, $v0, 0x7A1A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31258);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41142Cu; }
        if (ctx->pc != 0x41142Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41142Cu; }
        if (ctx->pc != 0x41142Cu) { return; }
    }
    ctx->pc = 0x41142Cu;
label_41142c:
    // 0x41142c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x41142cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_411430:
    // 0x411430: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x411430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_411434:
    // 0x411434: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x411434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_411438:
    // 0x411438: 0x2406012c  addiu       $a2, $zero, 0x12C
    ctx->pc = 0x411438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_41143c:
    // 0x41143c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x41143cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_411440:
    // 0x411440: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x411440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_411444:
    // 0x411444: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x411444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_411448:
    // 0x411448: 0x26040160  addiu       $a0, $s0, 0x160
    ctx->pc = 0x411448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
label_41144c:
    // 0x41144c: 0x2442aed0  addiu       $v0, $v0, -0x5130
    ctx->pc = 0x41144cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946512));
label_411450:
    // 0x411450: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x411450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_411454:
    // 0x411454: 0xae000160  sw          $zero, 0x160($s0)
    ctx->pc = 0x411454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
label_411458:
    // 0x411458: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x411458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_41145c:
    // 0x41145c: 0xae000164  sw          $zero, 0x164($s0)
    ctx->pc = 0x41145cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 0));
label_411460:
    // 0x411460: 0xae000168  sw          $zero, 0x168($s0)
    ctx->pc = 0x411460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 0));
label_411464:
    // 0x411464: 0xae00016c  sw          $zero, 0x16C($s0)
    ctx->pc = 0x411464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 0));
label_411468:
    // 0x411468: 0xae000170  sw          $zero, 0x170($s0)
    ctx->pc = 0x411468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 0));
label_41146c:
    // 0x41146c: 0xae000174  sw          $zero, 0x174($s0)
    ctx->pc = 0x41146cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 0));
label_411470:
    // 0x411470: 0xae000178  sw          $zero, 0x178($s0)
    ctx->pc = 0x411470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 0));
label_411474:
    // 0x411474: 0xae00017c  sw          $zero, 0x17C($s0)
    ctx->pc = 0x411474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 0));
label_411478:
    // 0x411478: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x411478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_41147c:
    // 0x41147c: 0xae030180  sw          $v1, 0x180($s0)
    ctx->pc = 0x41147cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 3));
label_411480:
    // 0x411480: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x411480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_411484:
    // 0x411484: 0x244204b8  addiu       $v0, $v0, 0x4B8
    ctx->pc = 0x411484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1208));
label_411488:
    // 0x411488: 0xae020190  sw          $v0, 0x190($s0)
    ctx->pc = 0x411488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
label_41148c:
    // 0x41148c: 0xc075128  jal         func_1D44A0
label_411490:
    if (ctx->pc == 0x411490u) {
        ctx->pc = 0x411490u;
            // 0x411490: 0xa6060194  sh          $a2, 0x194($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 404), (uint16_t)GPR_U32(ctx, 6));
        ctx->pc = 0x411494u;
        goto label_411494;
    }
    ctx->pc = 0x41148Cu;
    SET_GPR_U32(ctx, 31, 0x411494u);
    ctx->pc = 0x411490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41148Cu;
            // 0x411490: 0xa6060194  sh          $a2, 0x194($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 404), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411494u; }
        if (ctx->pc != 0x411494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411494u; }
        if (ctx->pc != 0x411494u) { return; }
    }
    ctx->pc = 0x411494u;
label_411494:
    // 0x411494: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x411494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_411498:
    // 0x411498: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x411498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41149c:
    // 0x41149c: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x41149cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4114a0:
    // 0x4114a0: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4114a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4114a4:
    // 0x4114a4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4114a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4114a8:
    // 0x4114a8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4114ac:
    if (ctx->pc == 0x4114ACu) {
        ctx->pc = 0x4114ACu;
            // 0x4114ac: 0x8e030160  lw          $v1, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->pc = 0x4114B0u;
        goto label_4114b0;
    }
    ctx->pc = 0x4114A8u;
    {
        const bool branch_taken_0x4114a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4114a8) {
            ctx->pc = 0x4114ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4114A8u;
            // 0x4114ac: 0x8e030160  lw          $v1, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4114BCu;
            goto label_4114bc;
        }
    }
    ctx->pc = 0x4114B0u;
label_4114b0:
    // 0x4114b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4114b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4114b4:
    // 0x4114b4: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4114b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4114b8:
    // 0x4114b8: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x4114b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_4114bc:
    // 0x4114bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4114bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4114c0:
    // 0x4114c0: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4114c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4114c4:
    // 0x4114c4: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4114c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4114c8:
    // 0x4114c8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4114c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4114cc:
    // 0x4114cc: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4114d0:
    if (ctx->pc == 0x4114D0u) {
        ctx->pc = 0x4114D0u;
            // 0x4114d0: 0x8e030160  lw          $v1, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->pc = 0x4114D4u;
        goto label_4114d4;
    }
    ctx->pc = 0x4114CCu;
    {
        const bool branch_taken_0x4114cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4114cc) {
            ctx->pc = 0x4114D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4114CCu;
            // 0x4114d0: 0x8e030160  lw          $v1, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4114E0u;
            goto label_4114e0;
        }
    }
    ctx->pc = 0x4114D4u;
label_4114d4:
    // 0x4114d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4114d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4114d8:
    // 0x4114d8: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4114d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4114dc:
    // 0x4114dc: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x4114dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_4114e0:
    // 0x4114e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4114e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4114e4:
    // 0x4114e4: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4114e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4114e8:
    // 0x4114e8: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4114e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4114ec:
    // 0x4114ec: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4114ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4114f0:
    // 0x4114f0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4114f4:
    if (ctx->pc == 0x4114F4u) {
        ctx->pc = 0x4114F4u;
            // 0x4114f4: 0x8e020164  lw          $v0, 0x164($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
        ctx->pc = 0x4114F8u;
        goto label_4114f8;
    }
    ctx->pc = 0x4114F0u;
    {
        const bool branch_taken_0x4114f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4114f0) {
            ctx->pc = 0x4114F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4114F0u;
            // 0x4114f4: 0x8e020164  lw          $v0, 0x164($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x411504u;
            goto label_411504;
        }
    }
    ctx->pc = 0x4114F8u;
label_4114f8:
    // 0x4114f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4114f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4114fc:
    // 0x4114fc: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4114fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_411500:
    // 0x411500: 0x8e020164  lw          $v0, 0x164($s0)
    ctx->pc = 0x411500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
label_411504:
    // 0x411504: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x411504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_411508:
    // 0x411508: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x411508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_41150c:
    // 0x41150c: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x41150cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_411510:
    // 0x411510: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x411510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_411514:
    // 0x411514: 0x8ce50038  lw          $a1, 0x38($a3)
    ctx->pc = 0x411514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
label_411518:
    // 0x411518: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x411518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_41151c:
    // 0x41151c: 0x8c64e3a8  lw          $a0, -0x1C58($v1)
    ctx->pc = 0x41151cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960040)));
label_411520:
    // 0x411520: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x411520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_411524:
    // 0x411524: 0xac44e3a8  sw          $a0, -0x1C58($v0)
    ctx->pc = 0x411524u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960040), GPR_U32(ctx, 4));
label_411528:
    // 0x411528: 0x8e040164  lw          $a0, 0x164($s0)
    ctx->pc = 0x411528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
label_41152c:
    // 0x41152c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x41152cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_411530:
    // 0x411530: 0xc4202a  slt         $a0, $a2, $a0
    ctx->pc = 0x411530u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_411534:
    // 0x411534: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
label_411538:
    if (ctx->pc == 0x411538u) {
        ctx->pc = 0x411538u;
            // 0x411538: 0x24e70050  addiu       $a3, $a3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
        ctx->pc = 0x41153Cu;
        goto label_41153c;
    }
    ctx->pc = 0x411534u;
    {
        const bool branch_taken_0x411534 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x411538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x411534u;
            // 0x411538: 0x24e70050  addiu       $a3, $a3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411534) {
            ctx->pc = 0x411514u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_411514;
        }
    }
    ctx->pc = 0x41153Cu;
label_41153c:
    // 0x41153c: 0xc04f26c  jal         func_13C9B0
label_411540:
    if (ctx->pc == 0x411540u) {
        ctx->pc = 0x411540u;
            // 0x411540: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->pc = 0x411544u;
        goto label_411544;
    }
    ctx->pc = 0x41153Cu;
    SET_GPR_U32(ctx, 31, 0x411544u);
    ctx->pc = 0x411540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41153Cu;
            // 0x411540: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411544u; }
        if (ctx->pc != 0x411544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411544u; }
        if (ctx->pc != 0x411544u) { return; }
    }
    ctx->pc = 0x411544u;
label_411544:
    // 0x411544: 0xc04f26c  jal         func_13C9B0
label_411548:
    if (ctx->pc == 0x411548u) {
        ctx->pc = 0x411548u;
            // 0x411548: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->pc = 0x41154Cu;
        goto label_41154c;
    }
    ctx->pc = 0x411544u;
    SET_GPR_U32(ctx, 31, 0x41154Cu);
    ctx->pc = 0x411548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411544u;
            // 0x411548: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41154Cu; }
        if (ctx->pc != 0x41154Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41154Cu; }
        if (ctx->pc != 0x41154Cu) { return; }
    }
    ctx->pc = 0x41154Cu;
label_41154c:
    // 0x41154c: 0xc04f26c  jal         func_13C9B0
label_411550:
    if (ctx->pc == 0x411550u) {
        ctx->pc = 0x411550u;
            // 0x411550: 0x260400e0  addiu       $a0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->pc = 0x411554u;
        goto label_411554;
    }
    ctx->pc = 0x41154Cu;
    SET_GPR_U32(ctx, 31, 0x411554u);
    ctx->pc = 0x411550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41154Cu;
            // 0x411550: 0x260400e0  addiu       $a0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411554u; }
        if (ctx->pc != 0x411554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411554u; }
        if (ctx->pc != 0x411554u) { return; }
    }
    ctx->pc = 0x411554u;
label_411554:
    // 0x411554: 0xc04f26c  jal         func_13C9B0
label_411558:
    if (ctx->pc == 0x411558u) {
        ctx->pc = 0x411558u;
            // 0x411558: 0x26040120  addiu       $a0, $s0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
        ctx->pc = 0x41155Cu;
        goto label_41155c;
    }
    ctx->pc = 0x411554u;
    SET_GPR_U32(ctx, 31, 0x41155Cu);
    ctx->pc = 0x411558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411554u;
            // 0x411558: 0x26040120  addiu       $a0, $s0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41155Cu; }
        if (ctx->pc != 0x41155Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41155Cu; }
        if (ctx->pc != 0x41155Cu) { return; }
    }
    ctx->pc = 0x41155Cu;
label_41155c:
    // 0x41155c: 0xa200018e  sb          $zero, 0x18E($s0)
    ctx->pc = 0x41155cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 398), (uint8_t)GPR_U32(ctx, 0));
label_411560:
    // 0x411560: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x411560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_411564:
    // 0x411564: 0xa200018b  sb          $zero, 0x18B($s0)
    ctx->pc = 0x411564u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 395), (uint8_t)GPR_U32(ctx, 0));
label_411568:
    // 0x411568: 0xa2000188  sb          $zero, 0x188($s0)
    ctx->pc = 0x411568u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 392), (uint8_t)GPR_U32(ctx, 0));
label_41156c:
    // 0x41156c: 0xa2000185  sb          $zero, 0x185($s0)
    ctx->pc = 0x41156cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 389), (uint8_t)GPR_U32(ctx, 0));
label_411570:
    // 0x411570: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x411570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_411574:
    // 0x411574: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x411574u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_411578:
    // 0x411578: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x411578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41157c:
    // 0x41157c: 0x3e00008  jr          $ra
label_411580:
    if (ctx->pc == 0x411580u) {
        ctx->pc = 0x411580u;
            // 0x411580: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x411584u;
        goto label_411584;
    }
    ctx->pc = 0x41157Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x411580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41157Cu;
            // 0x411580: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x411584u;
label_411584:
    // 0x411584: 0x0  nop
    ctx->pc = 0x411584u;
    // NOP
label_411588:
    // 0x411588: 0x0  nop
    ctx->pc = 0x411588u;
    // NOP
label_41158c:
    // 0x41158c: 0x0  nop
    ctx->pc = 0x41158cu;
    // NOP
label_411590:
    // 0x411590: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x411590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_411594:
    // 0x411594: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x411594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_411598:
    // 0x411598: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x411598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_41159c:
    // 0x41159c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x41159cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4115a0:
    // 0x4115a0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4115a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4115a4:
    // 0x4115a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4115a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4115a8:
    // 0x4115a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4115a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4115ac:
    // 0x4115ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4115acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4115b0:
    // 0x4115b0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4115b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4115b4:
    // 0x4115b4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4115b8:
    if (ctx->pc == 0x4115B8u) {
        ctx->pc = 0x4115B8u;
            // 0x4115b8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4115BCu;
        goto label_4115bc;
    }
    ctx->pc = 0x4115B4u;
    {
        const bool branch_taken_0x4115b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4115B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4115B4u;
            // 0x4115b8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4115b4) {
            ctx->pc = 0x4115F8u;
            goto label_4115f8;
        }
    }
    ctx->pc = 0x4115BCu;
label_4115bc:
    // 0x4115bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4115bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4115c0:
    // 0x4115c0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4115c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4115c4:
    // 0x4115c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4115c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4115c8:
    // 0x4115c8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4115c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4115cc:
    // 0x4115cc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4115ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4115d0:
    // 0x4115d0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4115d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4115d4:
    // 0x4115d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4115d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4115d8:
    // 0x4115d8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4115d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4115dc:
    // 0x4115dc: 0x320f809  jalr        $t9
label_4115e0:
    if (ctx->pc == 0x4115E0u) {
        ctx->pc = 0x4115E4u;
        goto label_4115e4;
    }
    ctx->pc = 0x4115DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4115E4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4115E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4115E4u; }
            if (ctx->pc != 0x4115E4u) { return; }
        }
        }
    }
    ctx->pc = 0x4115E4u;
label_4115e4:
    // 0x4115e4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4115e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4115e8:
    // 0x4115e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4115e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4115ec:
    // 0x4115ec: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4115ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4115f0:
    // 0x4115f0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4115f4:
    if (ctx->pc == 0x4115F4u) {
        ctx->pc = 0x4115F4u;
            // 0x4115f4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4115F8u;
        goto label_4115f8;
    }
    ctx->pc = 0x4115F0u;
    {
        const bool branch_taken_0x4115f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4115F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4115F0u;
            // 0x4115f4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4115f0) {
            ctx->pc = 0x4115C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4115c8;
        }
    }
    ctx->pc = 0x4115F8u;
label_4115f8:
    // 0x4115f8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4115f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4115fc:
    // 0x4115fc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4115fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_411600:
    // 0x411600: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x411600u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_411604:
    // 0x411604: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x411604u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_411608:
    // 0x411608: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x411608u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41160c:
    // 0x41160c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41160cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_411610:
    // 0x411610: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x411610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_411614:
    // 0x411614: 0x3e00008  jr          $ra
label_411618:
    if (ctx->pc == 0x411618u) {
        ctx->pc = 0x411618u;
            // 0x411618: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x41161Cu;
        goto label_41161c;
    }
    ctx->pc = 0x411614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x411618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x411614u;
            // 0x411618: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41161Cu;
label_41161c:
    // 0x41161c: 0x0  nop
    ctx->pc = 0x41161cu;
    // NOP
label_411620:
    // 0x411620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x411620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_411624:
    // 0x411624: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x411624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_411628:
    // 0x411628: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x411628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41162c:
    // 0x41162c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41162cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_411630:
    // 0x411630: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x411630u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_411634:
    // 0x411634: 0x122000bd  beqz        $s1, . + 4 + (0xBD << 2)
label_411638:
    if (ctx->pc == 0x411638u) {
        ctx->pc = 0x411638u;
            // 0x411638: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41163Cu;
        goto label_41163c;
    }
    ctx->pc = 0x411634u;
    {
        const bool branch_taken_0x411634 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x411638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x411634u;
            // 0x411638: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411634) {
            ctx->pc = 0x41192Cu;
            goto label_41192c;
        }
    }
    ctx->pc = 0x41163Cu;
label_41163c:
    // 0x41163c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x41163cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_411640:
    // 0x411640: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x411640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_411644:
    // 0x411644: 0x2442af00  addiu       $v0, $v0, -0x5100
    ctx->pc = 0x411644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946560));
label_411648:
    // 0x411648: 0x2463af38  addiu       $v1, $v1, -0x50C8
    ctx->pc = 0x411648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946616));
label_41164c:
    // 0x41164c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x41164cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_411650:
    // 0x411650: 0x262201f0  addiu       $v0, $s1, 0x1F0
    ctx->pc = 0x411650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
label_411654:
    // 0x411654: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_411658:
    if (ctx->pc == 0x411658u) {
        ctx->pc = 0x411658u;
            // 0x411658: 0xae230064  sw          $v1, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
        ctx->pc = 0x41165Cu;
        goto label_41165c;
    }
    ctx->pc = 0x411654u;
    {
        const bool branch_taken_0x411654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x411658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x411654u;
            // 0x411658: 0xae230064  sw          $v1, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411654) {
            ctx->pc = 0x411690u;
            goto label_411690;
        }
    }
    ctx->pc = 0x41165Cu;
label_41165c:
    // 0x41165c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_411660:
    if (ctx->pc == 0x411660u) {
        ctx->pc = 0x411660u;
            // 0x411660: 0x262201e0  addiu       $v0, $s1, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
        ctx->pc = 0x411664u;
        goto label_411664;
    }
    ctx->pc = 0x41165Cu;
    {
        const bool branch_taken_0x41165c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41165c) {
            ctx->pc = 0x411660u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41165Cu;
            // 0x411660: 0x262201e0  addiu       $v0, $s1, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
        ctx->in_delay_slot = false;
            ctx->pc = 0x411694u;
            goto label_411694;
        }
    }
    ctx->pc = 0x411664u;
label_411664:
    // 0x411664: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_411668:
    if (ctx->pc == 0x411668u) {
        ctx->pc = 0x41166Cu;
        goto label_41166c;
    }
    ctx->pc = 0x411664u;
    {
        const bool branch_taken_0x411664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x411664) {
            ctx->pc = 0x411690u;
            goto label_411690;
        }
    }
    ctx->pc = 0x41166Cu;
label_41166c:
    // 0x41166c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_411670:
    if (ctx->pc == 0x411670u) {
        ctx->pc = 0x411674u;
        goto label_411674;
    }
    ctx->pc = 0x41166Cu;
    {
        const bool branch_taken_0x41166c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41166c) {
            ctx->pc = 0x411690u;
            goto label_411690;
        }
    }
    ctx->pc = 0x411674u;
label_411674:
    // 0x411674: 0x8e2501fc  lw          $a1, 0x1FC($s1)
    ctx->pc = 0x411674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 508)));
label_411678:
    // 0x411678: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_41167c:
    if (ctx->pc == 0x41167Cu) {
        ctx->pc = 0x411680u;
        goto label_411680;
    }
    ctx->pc = 0x411678u;
    {
        const bool branch_taken_0x411678 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x411678) {
            ctx->pc = 0x411690u;
            goto label_411690;
        }
    }
    ctx->pc = 0x411680u;
label_411680:
    // 0x411680: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_411684:
    if (ctx->pc == 0x411684u) {
        ctx->pc = 0x411688u;
        goto label_411688;
    }
    ctx->pc = 0x411680u;
    {
        const bool branch_taken_0x411680 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x411680) {
            ctx->pc = 0x411690u;
            goto label_411690;
        }
    }
    ctx->pc = 0x411688u;
label_411688:
    // 0x411688: 0xc0fe48c  jal         func_3F9230
label_41168c:
    if (ctx->pc == 0x41168Cu) {
        ctx->pc = 0x41168Cu;
            // 0x41168c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x411690u;
        goto label_411690;
    }
    ctx->pc = 0x411688u;
    SET_GPR_U32(ctx, 31, 0x411690u);
    ctx->pc = 0x41168Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411688u;
            // 0x41168c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411690u; }
        if (ctx->pc != 0x411690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411690u; }
        if (ctx->pc != 0x411690u) { return; }
    }
    ctx->pc = 0x411690u;
label_411690:
    // 0x411690: 0x262201e0  addiu       $v0, $s1, 0x1E0
    ctx->pc = 0x411690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
label_411694:
    // 0x411694: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_411698:
    if (ctx->pc == 0x411698u) {
        ctx->pc = 0x411698u;
            // 0x411698: 0x262201d0  addiu       $v0, $s1, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
        ctx->pc = 0x41169Cu;
        goto label_41169c;
    }
    ctx->pc = 0x411694u;
    {
        const bool branch_taken_0x411694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x411694) {
            ctx->pc = 0x411698u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x411694u;
            // 0x411698: 0x262201d0  addiu       $v0, $s1, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4116D4u;
            goto label_4116d4;
        }
    }
    ctx->pc = 0x41169Cu;
label_41169c:
    // 0x41169c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_4116a0:
    if (ctx->pc == 0x4116A0u) {
        ctx->pc = 0x4116A4u;
        goto label_4116a4;
    }
    ctx->pc = 0x41169Cu;
    {
        const bool branch_taken_0x41169c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41169c) {
            ctx->pc = 0x4116D0u;
            goto label_4116d0;
        }
    }
    ctx->pc = 0x4116A4u;
label_4116a4:
    // 0x4116a4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_4116a8:
    if (ctx->pc == 0x4116A8u) {
        ctx->pc = 0x4116ACu;
        goto label_4116ac;
    }
    ctx->pc = 0x4116A4u;
    {
        const bool branch_taken_0x4116a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4116a4) {
            ctx->pc = 0x4116D0u;
            goto label_4116d0;
        }
    }
    ctx->pc = 0x4116ACu;
label_4116ac:
    // 0x4116ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4116b0:
    if (ctx->pc == 0x4116B0u) {
        ctx->pc = 0x4116B4u;
        goto label_4116b4;
    }
    ctx->pc = 0x4116ACu;
    {
        const bool branch_taken_0x4116ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4116ac) {
            ctx->pc = 0x4116D0u;
            goto label_4116d0;
        }
    }
    ctx->pc = 0x4116B4u;
label_4116b4:
    // 0x4116b4: 0x8e2501ec  lw          $a1, 0x1EC($s1)
    ctx->pc = 0x4116b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_4116b8:
    // 0x4116b8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_4116bc:
    if (ctx->pc == 0x4116BCu) {
        ctx->pc = 0x4116C0u;
        goto label_4116c0;
    }
    ctx->pc = 0x4116B8u;
    {
        const bool branch_taken_0x4116b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4116b8) {
            ctx->pc = 0x4116D0u;
            goto label_4116d0;
        }
    }
    ctx->pc = 0x4116C0u;
label_4116c0:
    // 0x4116c0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_4116c4:
    if (ctx->pc == 0x4116C4u) {
        ctx->pc = 0x4116C8u;
        goto label_4116c8;
    }
    ctx->pc = 0x4116C0u;
    {
        const bool branch_taken_0x4116c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4116c0) {
            ctx->pc = 0x4116D0u;
            goto label_4116d0;
        }
    }
    ctx->pc = 0x4116C8u;
label_4116c8:
    // 0x4116c8: 0xc0fe48c  jal         func_3F9230
label_4116cc:
    if (ctx->pc == 0x4116CCu) {
        ctx->pc = 0x4116CCu;
            // 0x4116cc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4116D0u;
        goto label_4116d0;
    }
    ctx->pc = 0x4116C8u;
    SET_GPR_U32(ctx, 31, 0x4116D0u);
    ctx->pc = 0x4116CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4116C8u;
            // 0x4116cc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4116D0u; }
        if (ctx->pc != 0x4116D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4116D0u; }
        if (ctx->pc != 0x4116D0u) { return; }
    }
    ctx->pc = 0x4116D0u;
label_4116d0:
    // 0x4116d0: 0x262201d0  addiu       $v0, $s1, 0x1D0
    ctx->pc = 0x4116d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
label_4116d4:
    // 0x4116d4: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_4116d8:
    if (ctx->pc == 0x4116D8u) {
        ctx->pc = 0x4116D8u;
            // 0x4116d8: 0x262201c0  addiu       $v0, $s1, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
        ctx->pc = 0x4116DCu;
        goto label_4116dc;
    }
    ctx->pc = 0x4116D4u;
    {
        const bool branch_taken_0x4116d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4116d4) {
            ctx->pc = 0x4116D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4116D4u;
            // 0x4116d8: 0x262201c0  addiu       $v0, $s1, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
        ctx->in_delay_slot = false;
            ctx->pc = 0x411714u;
            goto label_411714;
        }
    }
    ctx->pc = 0x4116DCu;
label_4116dc:
    // 0x4116dc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_4116e0:
    if (ctx->pc == 0x4116E0u) {
        ctx->pc = 0x4116E4u;
        goto label_4116e4;
    }
    ctx->pc = 0x4116DCu;
    {
        const bool branch_taken_0x4116dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4116dc) {
            ctx->pc = 0x411710u;
            goto label_411710;
        }
    }
    ctx->pc = 0x4116E4u;
label_4116e4:
    // 0x4116e4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_4116e8:
    if (ctx->pc == 0x4116E8u) {
        ctx->pc = 0x4116ECu;
        goto label_4116ec;
    }
    ctx->pc = 0x4116E4u;
    {
        const bool branch_taken_0x4116e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4116e4) {
            ctx->pc = 0x411710u;
            goto label_411710;
        }
    }
    ctx->pc = 0x4116ECu;
label_4116ec:
    // 0x4116ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4116f0:
    if (ctx->pc == 0x4116F0u) {
        ctx->pc = 0x4116F4u;
        goto label_4116f4;
    }
    ctx->pc = 0x4116ECu;
    {
        const bool branch_taken_0x4116ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4116ec) {
            ctx->pc = 0x411710u;
            goto label_411710;
        }
    }
    ctx->pc = 0x4116F4u;
label_4116f4:
    // 0x4116f4: 0x8e2501dc  lw          $a1, 0x1DC($s1)
    ctx->pc = 0x4116f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
label_4116f8:
    // 0x4116f8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_4116fc:
    if (ctx->pc == 0x4116FCu) {
        ctx->pc = 0x411700u;
        goto label_411700;
    }
    ctx->pc = 0x4116F8u;
    {
        const bool branch_taken_0x4116f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4116f8) {
            ctx->pc = 0x411710u;
            goto label_411710;
        }
    }
    ctx->pc = 0x411700u;
label_411700:
    // 0x411700: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_411704:
    if (ctx->pc == 0x411704u) {
        ctx->pc = 0x411708u;
        goto label_411708;
    }
    ctx->pc = 0x411700u;
    {
        const bool branch_taken_0x411700 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x411700) {
            ctx->pc = 0x411710u;
            goto label_411710;
        }
    }
    ctx->pc = 0x411708u;
label_411708:
    // 0x411708: 0xc0fe48c  jal         func_3F9230
label_41170c:
    if (ctx->pc == 0x41170Cu) {
        ctx->pc = 0x41170Cu;
            // 0x41170c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x411710u;
        goto label_411710;
    }
    ctx->pc = 0x411708u;
    SET_GPR_U32(ctx, 31, 0x411710u);
    ctx->pc = 0x41170Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411708u;
            // 0x41170c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411710u; }
        if (ctx->pc != 0x411710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411710u; }
        if (ctx->pc != 0x411710u) { return; }
    }
    ctx->pc = 0x411710u;
label_411710:
    // 0x411710: 0x262201c0  addiu       $v0, $s1, 0x1C0
    ctx->pc = 0x411710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
label_411714:
    // 0x411714: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_411718:
    if (ctx->pc == 0x411718u) {
        ctx->pc = 0x411718u;
            // 0x411718: 0x262201b0  addiu       $v0, $s1, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
        ctx->pc = 0x41171Cu;
        goto label_41171c;
    }
    ctx->pc = 0x411714u;
    {
        const bool branch_taken_0x411714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x411714) {
            ctx->pc = 0x411718u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x411714u;
            // 0x411718: 0x262201b0  addiu       $v0, $s1, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
        ctx->in_delay_slot = false;
            ctx->pc = 0x411754u;
            goto label_411754;
        }
    }
    ctx->pc = 0x41171Cu;
label_41171c:
    // 0x41171c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_411720:
    if (ctx->pc == 0x411720u) {
        ctx->pc = 0x411724u;
        goto label_411724;
    }
    ctx->pc = 0x41171Cu;
    {
        const bool branch_taken_0x41171c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41171c) {
            ctx->pc = 0x411750u;
            goto label_411750;
        }
    }
    ctx->pc = 0x411724u;
label_411724:
    // 0x411724: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_411728:
    if (ctx->pc == 0x411728u) {
        ctx->pc = 0x41172Cu;
        goto label_41172c;
    }
    ctx->pc = 0x411724u;
    {
        const bool branch_taken_0x411724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x411724) {
            ctx->pc = 0x411750u;
            goto label_411750;
        }
    }
    ctx->pc = 0x41172Cu;
label_41172c:
    // 0x41172c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_411730:
    if (ctx->pc == 0x411730u) {
        ctx->pc = 0x411734u;
        goto label_411734;
    }
    ctx->pc = 0x41172Cu;
    {
        const bool branch_taken_0x41172c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41172c) {
            ctx->pc = 0x411750u;
            goto label_411750;
        }
    }
    ctx->pc = 0x411734u;
label_411734:
    // 0x411734: 0x8e2501cc  lw          $a1, 0x1CC($s1)
    ctx->pc = 0x411734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
label_411738:
    // 0x411738: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_41173c:
    if (ctx->pc == 0x41173Cu) {
        ctx->pc = 0x411740u;
        goto label_411740;
    }
    ctx->pc = 0x411738u;
    {
        const bool branch_taken_0x411738 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x411738) {
            ctx->pc = 0x411750u;
            goto label_411750;
        }
    }
    ctx->pc = 0x411740u;
label_411740:
    // 0x411740: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_411744:
    if (ctx->pc == 0x411744u) {
        ctx->pc = 0x411748u;
        goto label_411748;
    }
    ctx->pc = 0x411740u;
    {
        const bool branch_taken_0x411740 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x411740) {
            ctx->pc = 0x411750u;
            goto label_411750;
        }
    }
    ctx->pc = 0x411748u;
label_411748:
    // 0x411748: 0xc0fe48c  jal         func_3F9230
label_41174c:
    if (ctx->pc == 0x41174Cu) {
        ctx->pc = 0x41174Cu;
            // 0x41174c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x411750u;
        goto label_411750;
    }
    ctx->pc = 0x411748u;
    SET_GPR_U32(ctx, 31, 0x411750u);
    ctx->pc = 0x41174Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411748u;
            // 0x41174c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411750u; }
        if (ctx->pc != 0x411750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411750u; }
        if (ctx->pc != 0x411750u) { return; }
    }
    ctx->pc = 0x411750u;
label_411750:
    // 0x411750: 0x262201b0  addiu       $v0, $s1, 0x1B0
    ctx->pc = 0x411750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
label_411754:
    // 0x411754: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_411758:
    if (ctx->pc == 0x411758u) {
        ctx->pc = 0x411758u;
            // 0x411758: 0x262201a0  addiu       $v0, $s1, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
        ctx->pc = 0x41175Cu;
        goto label_41175c;
    }
    ctx->pc = 0x411754u;
    {
        const bool branch_taken_0x411754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x411754) {
            ctx->pc = 0x411758u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x411754u;
            // 0x411758: 0x262201a0  addiu       $v0, $s1, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
        ctx->in_delay_slot = false;
            ctx->pc = 0x411794u;
            goto label_411794;
        }
    }
    ctx->pc = 0x41175Cu;
label_41175c:
    // 0x41175c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_411760:
    if (ctx->pc == 0x411760u) {
        ctx->pc = 0x411764u;
        goto label_411764;
    }
    ctx->pc = 0x41175Cu;
    {
        const bool branch_taken_0x41175c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41175c) {
            ctx->pc = 0x411790u;
            goto label_411790;
        }
    }
    ctx->pc = 0x411764u;
label_411764:
    // 0x411764: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_411768:
    if (ctx->pc == 0x411768u) {
        ctx->pc = 0x41176Cu;
        goto label_41176c;
    }
    ctx->pc = 0x411764u;
    {
        const bool branch_taken_0x411764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x411764) {
            ctx->pc = 0x411790u;
            goto label_411790;
        }
    }
    ctx->pc = 0x41176Cu;
label_41176c:
    // 0x41176c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_411770:
    if (ctx->pc == 0x411770u) {
        ctx->pc = 0x411774u;
        goto label_411774;
    }
    ctx->pc = 0x41176Cu;
    {
        const bool branch_taken_0x41176c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41176c) {
            ctx->pc = 0x411790u;
            goto label_411790;
        }
    }
    ctx->pc = 0x411774u;
label_411774:
    // 0x411774: 0x8e2501bc  lw          $a1, 0x1BC($s1)
    ctx->pc = 0x411774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
label_411778:
    // 0x411778: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_41177c:
    if (ctx->pc == 0x41177Cu) {
        ctx->pc = 0x411780u;
        goto label_411780;
    }
    ctx->pc = 0x411778u;
    {
        const bool branch_taken_0x411778 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x411778) {
            ctx->pc = 0x411790u;
            goto label_411790;
        }
    }
    ctx->pc = 0x411780u;
label_411780:
    // 0x411780: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_411784:
    if (ctx->pc == 0x411784u) {
        ctx->pc = 0x411788u;
        goto label_411788;
    }
    ctx->pc = 0x411780u;
    {
        const bool branch_taken_0x411780 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x411780) {
            ctx->pc = 0x411790u;
            goto label_411790;
        }
    }
    ctx->pc = 0x411788u;
label_411788:
    // 0x411788: 0xc0fe48c  jal         func_3F9230
label_41178c:
    if (ctx->pc == 0x41178Cu) {
        ctx->pc = 0x41178Cu;
            // 0x41178c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x411790u;
        goto label_411790;
    }
    ctx->pc = 0x411788u;
    SET_GPR_U32(ctx, 31, 0x411790u);
    ctx->pc = 0x41178Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411788u;
            // 0x41178c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411790u; }
        if (ctx->pc != 0x411790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411790u; }
        if (ctx->pc != 0x411790u) { return; }
    }
    ctx->pc = 0x411790u;
label_411790:
    // 0x411790: 0x262201a0  addiu       $v0, $s1, 0x1A0
    ctx->pc = 0x411790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
label_411794:
    // 0x411794: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_411798:
    if (ctx->pc == 0x411798u) {
        ctx->pc = 0x411798u;
            // 0x411798: 0x26220190  addiu       $v0, $s1, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
        ctx->pc = 0x41179Cu;
        goto label_41179c;
    }
    ctx->pc = 0x411794u;
    {
        const bool branch_taken_0x411794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x411794) {
            ctx->pc = 0x411798u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x411794u;
            // 0x411798: 0x26220190  addiu       $v0, $s1, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4117D4u;
            goto label_4117d4;
        }
    }
    ctx->pc = 0x41179Cu;
label_41179c:
    // 0x41179c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_4117a0:
    if (ctx->pc == 0x4117A0u) {
        ctx->pc = 0x4117A4u;
        goto label_4117a4;
    }
    ctx->pc = 0x41179Cu;
    {
        const bool branch_taken_0x41179c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41179c) {
            ctx->pc = 0x4117D0u;
            goto label_4117d0;
        }
    }
    ctx->pc = 0x4117A4u;
label_4117a4:
    // 0x4117a4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_4117a8:
    if (ctx->pc == 0x4117A8u) {
        ctx->pc = 0x4117ACu;
        goto label_4117ac;
    }
    ctx->pc = 0x4117A4u;
    {
        const bool branch_taken_0x4117a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4117a4) {
            ctx->pc = 0x4117D0u;
            goto label_4117d0;
        }
    }
    ctx->pc = 0x4117ACu;
label_4117ac:
    // 0x4117ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4117b0:
    if (ctx->pc == 0x4117B0u) {
        ctx->pc = 0x4117B4u;
        goto label_4117b4;
    }
    ctx->pc = 0x4117ACu;
    {
        const bool branch_taken_0x4117ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4117ac) {
            ctx->pc = 0x4117D0u;
            goto label_4117d0;
        }
    }
    ctx->pc = 0x4117B4u;
label_4117b4:
    // 0x4117b4: 0x8e2501ac  lw          $a1, 0x1AC($s1)
    ctx->pc = 0x4117b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
label_4117b8:
    // 0x4117b8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_4117bc:
    if (ctx->pc == 0x4117BCu) {
        ctx->pc = 0x4117C0u;
        goto label_4117c0;
    }
    ctx->pc = 0x4117B8u;
    {
        const bool branch_taken_0x4117b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4117b8) {
            ctx->pc = 0x4117D0u;
            goto label_4117d0;
        }
    }
    ctx->pc = 0x4117C0u;
label_4117c0:
    // 0x4117c0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_4117c4:
    if (ctx->pc == 0x4117C4u) {
        ctx->pc = 0x4117C8u;
        goto label_4117c8;
    }
    ctx->pc = 0x4117C0u;
    {
        const bool branch_taken_0x4117c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4117c0) {
            ctx->pc = 0x4117D0u;
            goto label_4117d0;
        }
    }
    ctx->pc = 0x4117C8u;
label_4117c8:
    // 0x4117c8: 0xc0fe48c  jal         func_3F9230
label_4117cc:
    if (ctx->pc == 0x4117CCu) {
        ctx->pc = 0x4117CCu;
            // 0x4117cc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4117D0u;
        goto label_4117d0;
    }
    ctx->pc = 0x4117C8u;
    SET_GPR_U32(ctx, 31, 0x4117D0u);
    ctx->pc = 0x4117CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4117C8u;
            // 0x4117cc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4117D0u; }
        if (ctx->pc != 0x4117D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4117D0u; }
        if (ctx->pc != 0x4117D0u) { return; }
    }
    ctx->pc = 0x4117D0u;
label_4117d0:
    // 0x4117d0: 0x26220190  addiu       $v0, $s1, 0x190
    ctx->pc = 0x4117d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
label_4117d4:
    // 0x4117d4: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_4117d8:
    if (ctx->pc == 0x4117D8u) {
        ctx->pc = 0x4117D8u;
            // 0x4117d8: 0x26220180  addiu       $v0, $s1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
        ctx->pc = 0x4117DCu;
        goto label_4117dc;
    }
    ctx->pc = 0x4117D4u;
    {
        const bool branch_taken_0x4117d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4117d4) {
            ctx->pc = 0x4117D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4117D4u;
            // 0x4117d8: 0x26220180  addiu       $v0, $s1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
        ctx->in_delay_slot = false;
            ctx->pc = 0x411814u;
            goto label_411814;
        }
    }
    ctx->pc = 0x4117DCu;
label_4117dc:
    // 0x4117dc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_4117e0:
    if (ctx->pc == 0x4117E0u) {
        ctx->pc = 0x4117E4u;
        goto label_4117e4;
    }
    ctx->pc = 0x4117DCu;
    {
        const bool branch_taken_0x4117dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4117dc) {
            ctx->pc = 0x411810u;
            goto label_411810;
        }
    }
    ctx->pc = 0x4117E4u;
label_4117e4:
    // 0x4117e4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_4117e8:
    if (ctx->pc == 0x4117E8u) {
        ctx->pc = 0x4117ECu;
        goto label_4117ec;
    }
    ctx->pc = 0x4117E4u;
    {
        const bool branch_taken_0x4117e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4117e4) {
            ctx->pc = 0x411810u;
            goto label_411810;
        }
    }
    ctx->pc = 0x4117ECu;
label_4117ec:
    // 0x4117ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4117f0:
    if (ctx->pc == 0x4117F0u) {
        ctx->pc = 0x4117F4u;
        goto label_4117f4;
    }
    ctx->pc = 0x4117ECu;
    {
        const bool branch_taken_0x4117ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4117ec) {
            ctx->pc = 0x411810u;
            goto label_411810;
        }
    }
    ctx->pc = 0x4117F4u;
label_4117f4:
    // 0x4117f4: 0x8e25019c  lw          $a1, 0x19C($s1)
    ctx->pc = 0x4117f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 412)));
label_4117f8:
    // 0x4117f8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_4117fc:
    if (ctx->pc == 0x4117FCu) {
        ctx->pc = 0x411800u;
        goto label_411800;
    }
    ctx->pc = 0x4117F8u;
    {
        const bool branch_taken_0x4117f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4117f8) {
            ctx->pc = 0x411810u;
            goto label_411810;
        }
    }
    ctx->pc = 0x411800u;
label_411800:
    // 0x411800: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_411804:
    if (ctx->pc == 0x411804u) {
        ctx->pc = 0x411808u;
        goto label_411808;
    }
    ctx->pc = 0x411800u;
    {
        const bool branch_taken_0x411800 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x411800) {
            ctx->pc = 0x411810u;
            goto label_411810;
        }
    }
    ctx->pc = 0x411808u;
label_411808:
    // 0x411808: 0xc0fe48c  jal         func_3F9230
label_41180c:
    if (ctx->pc == 0x41180Cu) {
        ctx->pc = 0x41180Cu;
            // 0x41180c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x411810u;
        goto label_411810;
    }
    ctx->pc = 0x411808u;
    SET_GPR_U32(ctx, 31, 0x411810u);
    ctx->pc = 0x41180Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411808u;
            // 0x41180c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411810u; }
        if (ctx->pc != 0x411810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411810u; }
        if (ctx->pc != 0x411810u) { return; }
    }
    ctx->pc = 0x411810u;
label_411810:
    // 0x411810: 0x26220180  addiu       $v0, $s1, 0x180
    ctx->pc = 0x411810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
label_411814:
    // 0x411814: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_411818:
    if (ctx->pc == 0x411818u) {
        ctx->pc = 0x411818u;
            // 0x411818: 0x26220170  addiu       $v0, $s1, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
        ctx->pc = 0x41181Cu;
        goto label_41181c;
    }
    ctx->pc = 0x411814u;
    {
        const bool branch_taken_0x411814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x411814) {
            ctx->pc = 0x411818u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x411814u;
            // 0x411818: 0x26220170  addiu       $v0, $s1, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
        ctx->in_delay_slot = false;
            ctx->pc = 0x411854u;
            goto label_411854;
        }
    }
    ctx->pc = 0x41181Cu;
label_41181c:
    // 0x41181c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_411820:
    if (ctx->pc == 0x411820u) {
        ctx->pc = 0x411824u;
        goto label_411824;
    }
    ctx->pc = 0x41181Cu;
    {
        const bool branch_taken_0x41181c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41181c) {
            ctx->pc = 0x411850u;
            goto label_411850;
        }
    }
    ctx->pc = 0x411824u;
label_411824:
    // 0x411824: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_411828:
    if (ctx->pc == 0x411828u) {
        ctx->pc = 0x41182Cu;
        goto label_41182c;
    }
    ctx->pc = 0x411824u;
    {
        const bool branch_taken_0x411824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x411824) {
            ctx->pc = 0x411850u;
            goto label_411850;
        }
    }
    ctx->pc = 0x41182Cu;
label_41182c:
    // 0x41182c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_411830:
    if (ctx->pc == 0x411830u) {
        ctx->pc = 0x411834u;
        goto label_411834;
    }
    ctx->pc = 0x41182Cu;
    {
        const bool branch_taken_0x41182c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41182c) {
            ctx->pc = 0x411850u;
            goto label_411850;
        }
    }
    ctx->pc = 0x411834u;
label_411834:
    // 0x411834: 0x8e25018c  lw          $a1, 0x18C($s1)
    ctx->pc = 0x411834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 396)));
label_411838:
    // 0x411838: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_41183c:
    if (ctx->pc == 0x41183Cu) {
        ctx->pc = 0x411840u;
        goto label_411840;
    }
    ctx->pc = 0x411838u;
    {
        const bool branch_taken_0x411838 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x411838) {
            ctx->pc = 0x411850u;
            goto label_411850;
        }
    }
    ctx->pc = 0x411840u;
label_411840:
    // 0x411840: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_411844:
    if (ctx->pc == 0x411844u) {
        ctx->pc = 0x411848u;
        goto label_411848;
    }
    ctx->pc = 0x411840u;
    {
        const bool branch_taken_0x411840 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x411840) {
            ctx->pc = 0x411850u;
            goto label_411850;
        }
    }
    ctx->pc = 0x411848u;
label_411848:
    // 0x411848: 0xc0fe48c  jal         func_3F9230
label_41184c:
    if (ctx->pc == 0x41184Cu) {
        ctx->pc = 0x41184Cu;
            // 0x41184c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x411850u;
        goto label_411850;
    }
    ctx->pc = 0x411848u;
    SET_GPR_U32(ctx, 31, 0x411850u);
    ctx->pc = 0x41184Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411848u;
            // 0x41184c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411850u; }
        if (ctx->pc != 0x411850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411850u; }
        if (ctx->pc != 0x411850u) { return; }
    }
    ctx->pc = 0x411850u;
label_411850:
    // 0x411850: 0x26220170  addiu       $v0, $s1, 0x170
    ctx->pc = 0x411850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
label_411854:
    // 0x411854: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_411858:
    if (ctx->pc == 0x411858u) {
        ctx->pc = 0x41185Cu;
        goto label_41185c;
    }
    ctx->pc = 0x411854u;
    {
        const bool branch_taken_0x411854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x411854) {
            ctx->pc = 0x411890u;
            goto label_411890;
        }
    }
    ctx->pc = 0x41185Cu;
label_41185c:
    // 0x41185c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_411860:
    if (ctx->pc == 0x411860u) {
        ctx->pc = 0x411864u;
        goto label_411864;
    }
    ctx->pc = 0x41185Cu;
    {
        const bool branch_taken_0x41185c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41185c) {
            ctx->pc = 0x411890u;
            goto label_411890;
        }
    }
    ctx->pc = 0x411864u;
label_411864:
    // 0x411864: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_411868:
    if (ctx->pc == 0x411868u) {
        ctx->pc = 0x41186Cu;
        goto label_41186c;
    }
    ctx->pc = 0x411864u;
    {
        const bool branch_taken_0x411864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x411864) {
            ctx->pc = 0x411890u;
            goto label_411890;
        }
    }
    ctx->pc = 0x41186Cu;
label_41186c:
    // 0x41186c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_411870:
    if (ctx->pc == 0x411870u) {
        ctx->pc = 0x411874u;
        goto label_411874;
    }
    ctx->pc = 0x41186Cu;
    {
        const bool branch_taken_0x41186c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41186c) {
            ctx->pc = 0x411890u;
            goto label_411890;
        }
    }
    ctx->pc = 0x411874u;
label_411874:
    // 0x411874: 0x8e25017c  lw          $a1, 0x17C($s1)
    ctx->pc = 0x411874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
label_411878:
    // 0x411878: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_41187c:
    if (ctx->pc == 0x41187Cu) {
        ctx->pc = 0x411880u;
        goto label_411880;
    }
    ctx->pc = 0x411878u;
    {
        const bool branch_taken_0x411878 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x411878) {
            ctx->pc = 0x411890u;
            goto label_411890;
        }
    }
    ctx->pc = 0x411880u;
label_411880:
    // 0x411880: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_411884:
    if (ctx->pc == 0x411884u) {
        ctx->pc = 0x411888u;
        goto label_411888;
    }
    ctx->pc = 0x411880u;
    {
        const bool branch_taken_0x411880 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x411880) {
            ctx->pc = 0x411890u;
            goto label_411890;
        }
    }
    ctx->pc = 0x411888u;
label_411888:
    // 0x411888: 0xc0fe48c  jal         func_3F9230
label_41188c:
    if (ctx->pc == 0x41188Cu) {
        ctx->pc = 0x41188Cu;
            // 0x41188c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x411890u;
        goto label_411890;
    }
    ctx->pc = 0x411888u;
    SET_GPR_U32(ctx, 31, 0x411890u);
    ctx->pc = 0x41188Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411888u;
            // 0x41188c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411890u; }
        if (ctx->pc != 0x411890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411890u; }
        if (ctx->pc != 0x411890u) { return; }
    }
    ctx->pc = 0x411890u;
label_411890:
    // 0x411890: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x411890u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
label_411894:
    // 0x411894: 0x262400c8  addiu       $a0, $s1, 0xC8
    ctx->pc = 0x411894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
label_411898:
    // 0x411898: 0x24a51b80  addiu       $a1, $a1, 0x1B80
    ctx->pc = 0x411898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7040));
label_41189c:
    // 0x41189c: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x41189cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4118a0:
    // 0x4118a0: 0xc0407e8  jal         func_101FA0
label_4118a4:
    if (ctx->pc == 0x4118A4u) {
        ctx->pc = 0x4118A4u;
            // 0x4118a4: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x4118A8u;
        goto label_4118a8;
    }
    ctx->pc = 0x4118A0u;
    SET_GPR_U32(ctx, 31, 0x4118A8u);
    ctx->pc = 0x4118A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4118A0u;
            // 0x4118a4: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4118A8u; }
        if (ctx->pc != 0x4118A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4118A8u; }
        if (ctx->pc != 0x4118A8u) { return; }
    }
    ctx->pc = 0x4118A8u;
label_4118a8:
    // 0x4118a8: 0x5220001b  beql        $s1, $zero, . + 4 + (0x1B << 2)
label_4118ac:
    if (ctx->pc == 0x4118ACu) {
        ctx->pc = 0x4118ACu;
            // 0x4118ac: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4118B0u;
        goto label_4118b0;
    }
    ctx->pc = 0x4118A8u;
    {
        const bool branch_taken_0x4118a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4118a8) {
            ctx->pc = 0x4118ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4118A8u;
            // 0x4118ac: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x411918u;
            goto label_411918;
        }
    }
    ctx->pc = 0x4118B0u;
label_4118b0:
    // 0x4118b0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4118b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4118b4:
    // 0x4118b4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4118b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4118b8:
    // 0x4118b8: 0x2463af60  addiu       $v1, $v1, -0x50A0
    ctx->pc = 0x4118b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946656));
label_4118bc:
    // 0x4118bc: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x4118bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
label_4118c0:
    // 0x4118c0: 0x2442af98  addiu       $v0, $v0, -0x5068
    ctx->pc = 0x4118c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946712));
label_4118c4:
    // 0x4118c4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4118c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4118c8:
    // 0x4118c8: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4118c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4118cc:
    // 0x4118cc: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4118ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4118d0:
    // 0x4118d0: 0xc0407c0  jal         func_101F00
label_4118d4:
    if (ctx->pc == 0x4118D4u) {
        ctx->pc = 0x4118D4u;
            // 0x4118d4: 0x24a51a80  addiu       $a1, $a1, 0x1A80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6784));
        ctx->pc = 0x4118D8u;
        goto label_4118d8;
    }
    ctx->pc = 0x4118D0u;
    SET_GPR_U32(ctx, 31, 0x4118D8u);
    ctx->pc = 0x4118D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4118D0u;
            // 0x4118d4: 0x24a51a80  addiu       $a1, $a1, 0x1A80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4118D8u; }
        if (ctx->pc != 0x4118D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4118D8u; }
        if (ctx->pc != 0x4118D8u) { return; }
    }
    ctx->pc = 0x4118D8u;
label_4118d8:
    // 0x4118d8: 0x26240084  addiu       $a0, $s1, 0x84
    ctx->pc = 0x4118d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4118dc:
    // 0x4118dc: 0xc104688  jal         func_411A20
label_4118e0:
    if (ctx->pc == 0x4118E0u) {
        ctx->pc = 0x4118E0u;
            // 0x4118e0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4118E4u;
        goto label_4118e4;
    }
    ctx->pc = 0x4118DCu;
    SET_GPR_U32(ctx, 31, 0x4118E4u);
    ctx->pc = 0x4118E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4118DCu;
            // 0x4118e0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x411A20u;
    if (runtime->hasFunction(0x411A20u)) {
        auto targetFn = runtime->lookupFunction(0x411A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4118E4u; }
        if (ctx->pc != 0x4118E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00411A20_0x411a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4118E4u; }
        if (ctx->pc != 0x4118E4u) { return; }
    }
    ctx->pc = 0x4118E4u;
label_4118e4:
    // 0x4118e4: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x4118e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4118e8:
    // 0x4118e8: 0xc10466c  jal         func_4119B0
label_4118ec:
    if (ctx->pc == 0x4118ECu) {
        ctx->pc = 0x4118ECu;
            // 0x4118ec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4118F0u;
        goto label_4118f0;
    }
    ctx->pc = 0x4118E8u;
    SET_GPR_U32(ctx, 31, 0x4118F0u);
    ctx->pc = 0x4118ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4118E8u;
            // 0x4118ec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4119B0u;
    if (runtime->hasFunction(0x4119B0u)) {
        auto targetFn = runtime->lookupFunction(0x4119B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4118F0u; }
        if (ctx->pc != 0x4118F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004119B0_0x4119b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4118F0u; }
        if (ctx->pc != 0x4118F0u) { return; }
    }
    ctx->pc = 0x4118F0u;
label_4118f0:
    // 0x4118f0: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x4118f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4118f4:
    // 0x4118f4: 0xc10466c  jal         func_4119B0
label_4118f8:
    if (ctx->pc == 0x4118F8u) {
        ctx->pc = 0x4118F8u;
            // 0x4118f8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4118FCu;
        goto label_4118fc;
    }
    ctx->pc = 0x4118F4u;
    SET_GPR_U32(ctx, 31, 0x4118FCu);
    ctx->pc = 0x4118F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4118F4u;
            // 0x4118f8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4119B0u;
    if (runtime->hasFunction(0x4119B0u)) {
        auto targetFn = runtime->lookupFunction(0x4119B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4118FCu; }
        if (ctx->pc != 0x4118FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004119B0_0x4119b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4118FCu; }
        if (ctx->pc != 0x4118FCu) { return; }
    }
    ctx->pc = 0x4118FCu;
label_4118fc:
    // 0x4118fc: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x4118fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_411900:
    // 0x411900: 0xc104654  jal         func_411950
label_411904:
    if (ctx->pc == 0x411904u) {
        ctx->pc = 0x411904u;
            // 0x411904: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x411908u;
        goto label_411908;
    }
    ctx->pc = 0x411900u;
    SET_GPR_U32(ctx, 31, 0x411908u);
    ctx->pc = 0x411904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411900u;
            // 0x411904: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x411950u;
    if (runtime->hasFunction(0x411950u)) {
        auto targetFn = runtime->lookupFunction(0x411950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411908u; }
        if (ctx->pc != 0x411908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00411950_0x411950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411908u; }
        if (ctx->pc != 0x411908u) { return; }
    }
    ctx->pc = 0x411908u;
label_411908:
    // 0x411908: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x411908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41190c:
    // 0x41190c: 0xc0ae1c0  jal         func_2B8700
label_411910:
    if (ctx->pc == 0x411910u) {
        ctx->pc = 0x411910u;
            // 0x411910: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x411914u;
        goto label_411914;
    }
    ctx->pc = 0x41190Cu;
    SET_GPR_U32(ctx, 31, 0x411914u);
    ctx->pc = 0x411910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41190Cu;
            // 0x411910: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411914u; }
        if (ctx->pc != 0x411914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411914u; }
        if (ctx->pc != 0x411914u) { return; }
    }
    ctx->pc = 0x411914u;
label_411914:
    // 0x411914: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x411914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_411918:
    // 0x411918: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x411918u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_41191c:
    // 0x41191c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_411920:
    if (ctx->pc == 0x411920u) {
        ctx->pc = 0x411920u;
            // 0x411920: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x411924u;
        goto label_411924;
    }
    ctx->pc = 0x41191Cu;
    {
        const bool branch_taken_0x41191c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x41191c) {
            ctx->pc = 0x411920u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41191Cu;
            // 0x411920: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x411930u;
            goto label_411930;
        }
    }
    ctx->pc = 0x411924u;
label_411924:
    // 0x411924: 0xc0400a8  jal         func_1002A0
label_411928:
    if (ctx->pc == 0x411928u) {
        ctx->pc = 0x411928u;
            // 0x411928: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41192Cu;
        goto label_41192c;
    }
    ctx->pc = 0x411924u;
    SET_GPR_U32(ctx, 31, 0x41192Cu);
    ctx->pc = 0x411928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411924u;
            // 0x411928: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41192Cu; }
        if (ctx->pc != 0x41192Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41192Cu; }
        if (ctx->pc != 0x41192Cu) { return; }
    }
    ctx->pc = 0x41192Cu;
label_41192c:
    // 0x41192c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x41192cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_411930:
    // 0x411930: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x411930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_411934:
    // 0x411934: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x411934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_411938:
    // 0x411938: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x411938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41193c:
    // 0x41193c: 0x3e00008  jr          $ra
label_411940:
    if (ctx->pc == 0x411940u) {
        ctx->pc = 0x411940u;
            // 0x411940: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x411944u;
        goto label_411944;
    }
    ctx->pc = 0x41193Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x411940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41193Cu;
            // 0x411940: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x411944u;
label_411944:
    // 0x411944: 0x0  nop
    ctx->pc = 0x411944u;
    // NOP
label_411948:
    // 0x411948: 0x0  nop
    ctx->pc = 0x411948u;
    // NOP
label_41194c:
    // 0x41194c: 0x0  nop
    ctx->pc = 0x41194cu;
    // NOP
}
