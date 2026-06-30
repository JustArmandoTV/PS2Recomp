#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001775B8
// Address: 0x1775b8 - 0x177978
void sub_001775B8_0x1775b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001775B8_0x1775b8");
#endif

    switch (ctx->pc) {
        case 0x1775b8u: goto label_1775b8;
        case 0x1775bcu: goto label_1775bc;
        case 0x1775c0u: goto label_1775c0;
        case 0x1775c4u: goto label_1775c4;
        case 0x1775c8u: goto label_1775c8;
        case 0x1775ccu: goto label_1775cc;
        case 0x1775d0u: goto label_1775d0;
        case 0x1775d4u: goto label_1775d4;
        case 0x1775d8u: goto label_1775d8;
        case 0x1775dcu: goto label_1775dc;
        case 0x1775e0u: goto label_1775e0;
        case 0x1775e4u: goto label_1775e4;
        case 0x1775e8u: goto label_1775e8;
        case 0x1775ecu: goto label_1775ec;
        case 0x1775f0u: goto label_1775f0;
        case 0x1775f4u: goto label_1775f4;
        case 0x1775f8u: goto label_1775f8;
        case 0x1775fcu: goto label_1775fc;
        case 0x177600u: goto label_177600;
        case 0x177604u: goto label_177604;
        case 0x177608u: goto label_177608;
        case 0x17760cu: goto label_17760c;
        case 0x177610u: goto label_177610;
        case 0x177614u: goto label_177614;
        case 0x177618u: goto label_177618;
        case 0x17761cu: goto label_17761c;
        case 0x177620u: goto label_177620;
        case 0x177624u: goto label_177624;
        case 0x177628u: goto label_177628;
        case 0x17762cu: goto label_17762c;
        case 0x177630u: goto label_177630;
        case 0x177634u: goto label_177634;
        case 0x177638u: goto label_177638;
        case 0x17763cu: goto label_17763c;
        case 0x177640u: goto label_177640;
        case 0x177644u: goto label_177644;
        case 0x177648u: goto label_177648;
        case 0x17764cu: goto label_17764c;
        case 0x177650u: goto label_177650;
        case 0x177654u: goto label_177654;
        case 0x177658u: goto label_177658;
        case 0x17765cu: goto label_17765c;
        case 0x177660u: goto label_177660;
        case 0x177664u: goto label_177664;
        case 0x177668u: goto label_177668;
        case 0x17766cu: goto label_17766c;
        case 0x177670u: goto label_177670;
        case 0x177674u: goto label_177674;
        case 0x177678u: goto label_177678;
        case 0x17767cu: goto label_17767c;
        case 0x177680u: goto label_177680;
        case 0x177684u: goto label_177684;
        case 0x177688u: goto label_177688;
        case 0x17768cu: goto label_17768c;
        case 0x177690u: goto label_177690;
        case 0x177694u: goto label_177694;
        case 0x177698u: goto label_177698;
        case 0x17769cu: goto label_17769c;
        case 0x1776a0u: goto label_1776a0;
        case 0x1776a4u: goto label_1776a4;
        case 0x1776a8u: goto label_1776a8;
        case 0x1776acu: goto label_1776ac;
        case 0x1776b0u: goto label_1776b0;
        case 0x1776b4u: goto label_1776b4;
        case 0x1776b8u: goto label_1776b8;
        case 0x1776bcu: goto label_1776bc;
        case 0x1776c0u: goto label_1776c0;
        case 0x1776c4u: goto label_1776c4;
        case 0x1776c8u: goto label_1776c8;
        case 0x1776ccu: goto label_1776cc;
        case 0x1776d0u: goto label_1776d0;
        case 0x1776d4u: goto label_1776d4;
        case 0x1776d8u: goto label_1776d8;
        case 0x1776dcu: goto label_1776dc;
        case 0x1776e0u: goto label_1776e0;
        case 0x1776e4u: goto label_1776e4;
        case 0x1776e8u: goto label_1776e8;
        case 0x1776ecu: goto label_1776ec;
        case 0x1776f0u: goto label_1776f0;
        case 0x1776f4u: goto label_1776f4;
        case 0x1776f8u: goto label_1776f8;
        case 0x1776fcu: goto label_1776fc;
        case 0x177700u: goto label_177700;
        case 0x177704u: goto label_177704;
        case 0x177708u: goto label_177708;
        case 0x17770cu: goto label_17770c;
        case 0x177710u: goto label_177710;
        case 0x177714u: goto label_177714;
        case 0x177718u: goto label_177718;
        case 0x17771cu: goto label_17771c;
        case 0x177720u: goto label_177720;
        case 0x177724u: goto label_177724;
        case 0x177728u: goto label_177728;
        case 0x17772cu: goto label_17772c;
        case 0x177730u: goto label_177730;
        case 0x177734u: goto label_177734;
        case 0x177738u: goto label_177738;
        case 0x17773cu: goto label_17773c;
        case 0x177740u: goto label_177740;
        case 0x177744u: goto label_177744;
        case 0x177748u: goto label_177748;
        case 0x17774cu: goto label_17774c;
        case 0x177750u: goto label_177750;
        case 0x177754u: goto label_177754;
        case 0x177758u: goto label_177758;
        case 0x17775cu: goto label_17775c;
        case 0x177760u: goto label_177760;
        case 0x177764u: goto label_177764;
        case 0x177768u: goto label_177768;
        case 0x17776cu: goto label_17776c;
        case 0x177770u: goto label_177770;
        case 0x177774u: goto label_177774;
        case 0x177778u: goto label_177778;
        case 0x17777cu: goto label_17777c;
        case 0x177780u: goto label_177780;
        case 0x177784u: goto label_177784;
        case 0x177788u: goto label_177788;
        case 0x17778cu: goto label_17778c;
        case 0x177790u: goto label_177790;
        case 0x177794u: goto label_177794;
        case 0x177798u: goto label_177798;
        case 0x17779cu: goto label_17779c;
        case 0x1777a0u: goto label_1777a0;
        case 0x1777a4u: goto label_1777a4;
        case 0x1777a8u: goto label_1777a8;
        case 0x1777acu: goto label_1777ac;
        case 0x1777b0u: goto label_1777b0;
        case 0x1777b4u: goto label_1777b4;
        case 0x1777b8u: goto label_1777b8;
        case 0x1777bcu: goto label_1777bc;
        case 0x1777c0u: goto label_1777c0;
        case 0x1777c4u: goto label_1777c4;
        case 0x1777c8u: goto label_1777c8;
        case 0x1777ccu: goto label_1777cc;
        case 0x1777d0u: goto label_1777d0;
        case 0x1777d4u: goto label_1777d4;
        case 0x1777d8u: goto label_1777d8;
        case 0x1777dcu: goto label_1777dc;
        case 0x1777e0u: goto label_1777e0;
        case 0x1777e4u: goto label_1777e4;
        case 0x1777e8u: goto label_1777e8;
        case 0x1777ecu: goto label_1777ec;
        case 0x1777f0u: goto label_1777f0;
        case 0x1777f4u: goto label_1777f4;
        case 0x1777f8u: goto label_1777f8;
        case 0x1777fcu: goto label_1777fc;
        case 0x177800u: goto label_177800;
        case 0x177804u: goto label_177804;
        case 0x177808u: goto label_177808;
        case 0x17780cu: goto label_17780c;
        case 0x177810u: goto label_177810;
        case 0x177814u: goto label_177814;
        case 0x177818u: goto label_177818;
        case 0x17781cu: goto label_17781c;
        case 0x177820u: goto label_177820;
        case 0x177824u: goto label_177824;
        case 0x177828u: goto label_177828;
        case 0x17782cu: goto label_17782c;
        case 0x177830u: goto label_177830;
        case 0x177834u: goto label_177834;
        case 0x177838u: goto label_177838;
        case 0x17783cu: goto label_17783c;
        case 0x177840u: goto label_177840;
        case 0x177844u: goto label_177844;
        case 0x177848u: goto label_177848;
        case 0x17784cu: goto label_17784c;
        case 0x177850u: goto label_177850;
        case 0x177854u: goto label_177854;
        case 0x177858u: goto label_177858;
        case 0x17785cu: goto label_17785c;
        case 0x177860u: goto label_177860;
        case 0x177864u: goto label_177864;
        case 0x177868u: goto label_177868;
        case 0x17786cu: goto label_17786c;
        case 0x177870u: goto label_177870;
        case 0x177874u: goto label_177874;
        case 0x177878u: goto label_177878;
        case 0x17787cu: goto label_17787c;
        case 0x177880u: goto label_177880;
        case 0x177884u: goto label_177884;
        case 0x177888u: goto label_177888;
        case 0x17788cu: goto label_17788c;
        case 0x177890u: goto label_177890;
        case 0x177894u: goto label_177894;
        case 0x177898u: goto label_177898;
        case 0x17789cu: goto label_17789c;
        case 0x1778a0u: goto label_1778a0;
        case 0x1778a4u: goto label_1778a4;
        case 0x1778a8u: goto label_1778a8;
        case 0x1778acu: goto label_1778ac;
        case 0x1778b0u: goto label_1778b0;
        case 0x1778b4u: goto label_1778b4;
        case 0x1778b8u: goto label_1778b8;
        case 0x1778bcu: goto label_1778bc;
        case 0x1778c0u: goto label_1778c0;
        case 0x1778c4u: goto label_1778c4;
        case 0x1778c8u: goto label_1778c8;
        case 0x1778ccu: goto label_1778cc;
        case 0x1778d0u: goto label_1778d0;
        case 0x1778d4u: goto label_1778d4;
        case 0x1778d8u: goto label_1778d8;
        case 0x1778dcu: goto label_1778dc;
        case 0x1778e0u: goto label_1778e0;
        case 0x1778e4u: goto label_1778e4;
        case 0x1778e8u: goto label_1778e8;
        case 0x1778ecu: goto label_1778ec;
        case 0x1778f0u: goto label_1778f0;
        case 0x1778f4u: goto label_1778f4;
        case 0x1778f8u: goto label_1778f8;
        case 0x1778fcu: goto label_1778fc;
        case 0x177900u: goto label_177900;
        case 0x177904u: goto label_177904;
        case 0x177908u: goto label_177908;
        case 0x17790cu: goto label_17790c;
        case 0x177910u: goto label_177910;
        case 0x177914u: goto label_177914;
        case 0x177918u: goto label_177918;
        case 0x17791cu: goto label_17791c;
        case 0x177920u: goto label_177920;
        case 0x177924u: goto label_177924;
        case 0x177928u: goto label_177928;
        case 0x17792cu: goto label_17792c;
        case 0x177930u: goto label_177930;
        case 0x177934u: goto label_177934;
        case 0x177938u: goto label_177938;
        case 0x17793cu: goto label_17793c;
        case 0x177940u: goto label_177940;
        case 0x177944u: goto label_177944;
        case 0x177948u: goto label_177948;
        case 0x17794cu: goto label_17794c;
        case 0x177950u: goto label_177950;
        case 0x177954u: goto label_177954;
        case 0x177958u: goto label_177958;
        case 0x17795cu: goto label_17795c;
        case 0x177960u: goto label_177960;
        case 0x177964u: goto label_177964;
        case 0x177968u: goto label_177968;
        case 0x17796cu: goto label_17796c;
        case 0x177970u: goto label_177970;
        case 0x177974u: goto label_177974;
        default: break;
    }

    ctx->pc = 0x1775b8u;

label_1775b8:
    // 0x1775b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1775b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1775bc:
    // 0x1775bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1775bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1775c0:
    // 0x1775c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1775c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1775c4:
    // 0x1775c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1775c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1775c8:
    // 0x1775c8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1775c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1775cc:
    // 0x1775cc: 0xc0599d2  jal         func_166748
label_1775d0:
    if (ctx->pc == 0x1775D0u) {
        ctx->pc = 0x1775D0u;
            // 0x1775d0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1775D4u;
        goto label_1775d4;
    }
    ctx->pc = 0x1775CCu;
    SET_GPR_U32(ctx, 31, 0x1775D4u);
    ctx->pc = 0x1775D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1775CCu;
            // 0x1775d0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166748u;
    if (runtime->hasFunction(0x166748u)) {
        auto targetFn = runtime->lookupFunction(0x166748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1775D4u; }
        if (ctx->pc != 0x1775D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166748_0x166748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1775D4u; }
        if (ctx->pc != 0x1775D4u) { return; }
    }
    ctx->pc = 0x1775D4u;
label_1775d4:
    // 0x1775d4: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1775d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1775d8:
    // 0x1775d8: 0xc05ba70  jal         func_16E9C0
label_1775dc:
    if (ctx->pc == 0x1775DCu) {
        ctx->pc = 0x1775DCu;
            // 0x1775dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1775E0u;
        goto label_1775e0;
    }
    ctx->pc = 0x1775D8u;
    SET_GPR_U32(ctx, 31, 0x1775E0u);
    ctx->pc = 0x1775DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1775D8u;
            // 0x1775dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E9C0u;
    if (runtime->hasFunction(0x16E9C0u)) {
        auto targetFn = runtime->lookupFunction(0x16E9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1775E0u; }
        if (ctx->pc != 0x1775E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E9C0_0x16e9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1775E0u; }
        if (ctx->pc != 0x1775E0u) { return; }
    }
    ctx->pc = 0x1775E0u;
label_1775e0:
    // 0x1775e0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1775e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1775e4:
    // 0x1775e4: 0xc05ba76  jal         func_16E9D8
label_1775e8:
    if (ctx->pc == 0x1775E8u) {
        ctx->pc = 0x1775E8u;
            // 0x1775e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1775ECu;
        goto label_1775ec;
    }
    ctx->pc = 0x1775E4u;
    SET_GPR_U32(ctx, 31, 0x1775ECu);
    ctx->pc = 0x1775E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1775E4u;
            // 0x1775e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E9D8u;
    if (runtime->hasFunction(0x16E9D8u)) {
        auto targetFn = runtime->lookupFunction(0x16E9D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1775ECu; }
        if (ctx->pc != 0x1775ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E9D8_0x16e9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1775ECu; }
        if (ctx->pc != 0x1775ECu) { return; }
    }
    ctx->pc = 0x1775ECu;
label_1775ec:
    // 0x1775ec: 0xc05bc0e  jal         func_16F038
label_1775f0:
    if (ctx->pc == 0x1775F0u) {
        ctx->pc = 0x1775F0u;
            // 0x1775f0: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x1775F4u;
        goto label_1775f4;
    }
    ctx->pc = 0x1775ECu;
    SET_GPR_U32(ctx, 31, 0x1775F4u);
    ctx->pc = 0x1775F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1775ECu;
            // 0x1775f0: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F038u;
    if (runtime->hasFunction(0x16F038u)) {
        auto targetFn = runtime->lookupFunction(0x16F038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1775F4u; }
        if (ctx->pc != 0x1775F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F038_0x16f038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1775F4u; }
        if (ctx->pc != 0x1775F4u) { return; }
    }
    ctx->pc = 0x1775F4u;
label_1775f4:
    // 0x1775f4: 0xc0599d8  jal         func_166760
label_1775f8:
    if (ctx->pc == 0x1775F8u) {
        ctx->pc = 0x1775FCu;
        goto label_1775fc;
    }
    ctx->pc = 0x1775F4u;
    SET_GPR_U32(ctx, 31, 0x1775FCu);
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1775FCu; }
        if (ctx->pc != 0x1775FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166760_0x166760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1775FCu; }
        if (ctx->pc != 0x1775FCu) { return; }
    }
    ctx->pc = 0x1775FCu;
label_1775fc:
    // 0x1775fc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1775fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_177600:
    // 0x177600: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_177604:
    if (ctx->pc == 0x177604u) {
        ctx->pc = 0x177608u;
        goto label_177608;
    }
    ctx->pc = 0x177600u;
    {
        const bool branch_taken_0x177600 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x177600) {
            ctx->pc = 0x177624u;
            goto label_177624;
        }
    }
    ctx->pc = 0x177608u;
label_177608:
    // 0x177608: 0xc05c396  jal         func_170E58
label_17760c:
    if (ctx->pc == 0x17760Cu) {
        ctx->pc = 0x177610u;
        goto label_177610;
    }
    ctx->pc = 0x177608u;
    SET_GPR_U32(ctx, 31, 0x177610u);
    ctx->pc = 0x170E58u;
    if (runtime->hasFunction(0x170E58u)) {
        auto targetFn = runtime->lookupFunction(0x170E58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177610u; }
        if (ctx->pc != 0x177610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170E58_0x170e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177610u; }
        if (ctx->pc != 0x177610u) { return; }
    }
    ctx->pc = 0x177610u;
label_177610:
    // 0x177610: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x177610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_177614:
    // 0x177614: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x177614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_177618:
    // 0x177618: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x177618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_17761c:
    // 0x17761c: 0x40f809  jalr        $v0
label_177620:
    if (ctx->pc == 0x177620u) {
        ctx->pc = 0x177624u;
        goto label_177624;
    }
    ctx->pc = 0x17761Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x177624u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x177624u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x177624u; }
            if (ctx->pc != 0x177624u) { return; }
        }
        }
    }
    ctx->pc = 0x177624u;
label_177624:
    // 0x177624: 0xc0599d2  jal         func_166748
label_177628:
    if (ctx->pc == 0x177628u) {
        ctx->pc = 0x177628u;
            // 0x177628: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17762Cu;
        goto label_17762c;
    }
    ctx->pc = 0x177624u;
    SET_GPR_U32(ctx, 31, 0x17762Cu);
    ctx->pc = 0x177628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177624u;
            // 0x177628: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166748u;
    if (runtime->hasFunction(0x166748u)) {
        auto targetFn = runtime->lookupFunction(0x166748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17762Cu; }
        if (ctx->pc != 0x17762Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166748_0x166748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17762Cu; }
        if (ctx->pc != 0x17762Cu) { return; }
    }
    ctx->pc = 0x17762Cu;
label_17762c:
    // 0x17762c: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x17762cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_177630:
    // 0x177630: 0x5840000d  blezl       $v0, . + 4 + (0xD << 2)
label_177634:
    if (ctx->pc == 0x177634u) {
        ctx->pc = 0x177634u;
            // 0x177634: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x177638u;
        goto label_177638;
    }
    ctx->pc = 0x177630u;
    {
        const bool branch_taken_0x177630 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x177630) {
            ctx->pc = 0x177634u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177630u;
            // 0x177634: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177668u;
            goto label_177668;
        }
    }
    ctx->pc = 0x177638u;
label_177638:
    // 0x177638: 0x26300018  addiu       $s0, $s1, 0x18
    ctx->pc = 0x177638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_17763c:
    // 0x17763c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17763cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_177640:
    // 0x177640: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x177640u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_177644:
    // 0x177644: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x177644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_177648:
    // 0x177648: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x177648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_17764c:
    // 0x17764c: 0x60f809  jalr        $v1
label_177650:
    if (ctx->pc == 0x177650u) {
        ctx->pc = 0x177650u;
            // 0x177650: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x177654u;
        goto label_177654;
    }
    ctx->pc = 0x17764Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x177654u);
        ctx->pc = 0x177650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17764Cu;
            // 0x177650: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x177654u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x177654u; }
            if (ctx->pc != 0x177654u) { return; }
        }
        }
    }
    ctx->pc = 0x177654u;
label_177654:
    // 0x177654: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x177654u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_177658:
    // 0x177658: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x177658u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_17765c:
    // 0x17765c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_177660:
    if (ctx->pc == 0x177660u) {
        ctx->pc = 0x177660u;
            // 0x177660: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x177664u;
        goto label_177664;
    }
    ctx->pc = 0x17765Cu;
    {
        const bool branch_taken_0x17765c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17765c) {
            ctx->pc = 0x177660u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17765Cu;
            // 0x177660: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177640u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_177640;
        }
    }
    ctx->pc = 0x177664u;
label_177664:
    // 0x177664: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x177664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_177668:
    // 0x177668: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_17766c:
    if (ctx->pc == 0x17766Cu) {
        ctx->pc = 0x17766Cu;
            // 0x17766c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x177670u;
        goto label_177670;
    }
    ctx->pc = 0x177668u;
    {
        const bool branch_taken_0x177668 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x177668) {
            ctx->pc = 0x17766Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177668u;
            // 0x17766c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177684u;
            goto label_177684;
        }
    }
    ctx->pc = 0x177670u;
label_177670:
    // 0x177670: 0xc05c2f2  jal         func_170BC8
label_177674:
    if (ctx->pc == 0x177674u) {
        ctx->pc = 0x177674u;
            // 0x177674: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x177678u;
        goto label_177678;
    }
    ctx->pc = 0x177670u;
    SET_GPR_U32(ctx, 31, 0x177678u);
    ctx->pc = 0x177674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177670u;
            // 0x177674: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170BC8u;
    if (runtime->hasFunction(0x170BC8u)) {
        auto targetFn = runtime->lookupFunction(0x170BC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177678u; }
        if (ctx->pc != 0x177678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170BC8_0x170bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177678u; }
        if (ctx->pc != 0x177678u) { return; }
    }
    ctx->pc = 0x177678u;
label_177678:
    // 0x177678: 0xc05c32e  jal         func_170CB8
label_17767c:
    if (ctx->pc == 0x17767Cu) {
        ctx->pc = 0x17767Cu;
            // 0x17767c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x177680u;
        goto label_177680;
    }
    ctx->pc = 0x177678u;
    SET_GPR_U32(ctx, 31, 0x177680u);
    ctx->pc = 0x17767Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177678u;
            // 0x17767c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170CB8u;
    if (runtime->hasFunction(0x170CB8u)) {
        auto targetFn = runtime->lookupFunction(0x170CB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177680u; }
        if (ctx->pc != 0x177680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170CB8_0x170cb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177680u; }
        if (ctx->pc != 0x177680u) { return; }
    }
    ctx->pc = 0x177680u;
label_177680:
    // 0x177680: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x177680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_177684:
    // 0x177684: 0xc05cba8  jal         func_172EA0
label_177688:
    if (ctx->pc == 0x177688u) {
        ctx->pc = 0x177688u;
            // 0x177688: 0x8c850014  lw          $a1, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->pc = 0x17768Cu;
        goto label_17768c;
    }
    ctx->pc = 0x177684u;
    SET_GPR_U32(ctx, 31, 0x17768Cu);
    ctx->pc = 0x177688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177684u;
            // 0x177688: 0x8c850014  lw          $a1, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172EA0u;
    if (runtime->hasFunction(0x172EA0u)) {
        auto targetFn = runtime->lookupFunction(0x172EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17768Cu; }
        if (ctx->pc != 0x17768Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172EA0_0x172ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17768Cu; }
        if (ctx->pc != 0x17768Cu) { return; }
    }
    ctx->pc = 0x17768Cu;
label_17768c:
    // 0x17768c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17768cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_177690:
    // 0x177690: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x177690u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_177694:
    // 0x177694: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x177694u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_177698:
    // 0x177698: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x177698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_17769c:
    // 0x17769c: 0x80599d8  j           func_166760
label_1776a0:
    if (ctx->pc == 0x1776A0u) {
        ctx->pc = 0x1776A0u;
            // 0x1776a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1776A4u;
        goto label_1776a4;
    }
    ctx->pc = 0x17769Cu;
    ctx->pc = 0x1776A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17769Cu;
            // 0x1776a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166760_0x166760(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1776A4u;
label_1776a4:
    // 0x1776a4: 0x0  nop
    ctx->pc = 0x1776a4u;
    // NOP
label_1776a8:
    // 0x1776a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1776a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1776ac:
    // 0x1776ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1776acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1776b0:
    // 0x1776b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1776b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1776b4:
    // 0x1776b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1776b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1776b8:
    // 0x1776b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1776b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1776bc:
    // 0x1776bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1776bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1776c0:
    // 0x1776c0: 0x82110001  lb          $s1, 0x1($s0)
    ctx->pc = 0x1776c0u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1776c4:
    // 0x1776c4: 0x56220029  bnel        $s1, $v0, . + 4 + (0x29 << 2)
label_1776c8:
    if (ctx->pc == 0x1776C8u) {
        ctx->pc = 0x1776C8u;
            // 0x1776c8: 0xa6000068  sh          $zero, 0x68($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1776CCu;
        goto label_1776cc;
    }
    ctx->pc = 0x1776C4u;
    {
        const bool branch_taken_0x1776c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1776c4) {
            ctx->pc = 0x1776C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1776C4u;
            // 0x1776c8: 0xa6000068  sh          $zero, 0x68($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17776Cu;
            goto label_17776c;
        }
    }
    ctx->pc = 0x1776CCu;
label_1776cc:
    // 0x1776cc: 0x82020072  lb          $v0, 0x72($s0)
    ctx->pc = 0x1776ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 114)));
label_1776d0:
    // 0x1776d0: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
label_1776d4:
    if (ctx->pc == 0x1776D4u) {
        ctx->pc = 0x1776D4u;
            // 0x1776d4: 0xa6000068  sh          $zero, 0x68($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1776D8u;
        goto label_1776d8;
    }
    ctx->pc = 0x1776D0u;
    {
        const bool branch_taken_0x1776d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1776d0) {
            ctx->pc = 0x1776D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1776D0u;
            // 0x1776d4: 0xa6000068  sh          $zero, 0x68($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17776Cu;
            goto label_17776c;
        }
    }
    ctx->pc = 0x1776D8u;
label_1776d8:
    // 0x1776d8: 0xc05bbd0  jal         func_16EF40
label_1776dc:
    if (ctx->pc == 0x1776DCu) {
        ctx->pc = 0x1776DCu;
            // 0x1776dc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1776E0u;
        goto label_1776e0;
    }
    ctx->pc = 0x1776D8u;
    SET_GPR_U32(ctx, 31, 0x1776E0u);
    ctx->pc = 0x1776DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1776D8u;
            // 0x1776dc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16EF40u;
    if (runtime->hasFunction(0x16EF40u)) {
        auto targetFn = runtime->lookupFunction(0x16EF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1776E0u; }
        if (ctx->pc != 0x1776E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016EF40_0x16ef40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1776E0u; }
        if (ctx->pc != 0x1776E0u) { return; }
    }
    ctx->pc = 0x1776E0u;
label_1776e0:
    // 0x1776e0: 0x50510022  beql        $v0, $s1, . + 4 + (0x22 << 2)
label_1776e4:
    if (ctx->pc == 0x1776E4u) {
        ctx->pc = 0x1776E4u;
            // 0x1776e4: 0xa6000068  sh          $zero, 0x68($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1776E8u;
        goto label_1776e8;
    }
    ctx->pc = 0x1776E0u;
    {
        const bool branch_taken_0x1776e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1776e0) {
            ctx->pc = 0x1776E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1776E0u;
            // 0x1776e4: 0xa6000068  sh          $zero, 0x68($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17776Cu;
            goto label_17776c;
        }
    }
    ctx->pc = 0x1776E8u;
label_1776e8:
    // 0x1776e8: 0xc05bfe0  jal         func_16FF80
label_1776ec:
    if (ctx->pc == 0x1776ECu) {
        ctx->pc = 0x1776ECu;
            // 0x1776ec: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1776F0u;
        goto label_1776f0;
    }
    ctx->pc = 0x1776E8u;
    SET_GPR_U32(ctx, 31, 0x1776F0u);
    ctx->pc = 0x1776ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1776E8u;
            // 0x1776ec: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FF80u;
    if (runtime->hasFunction(0x16FF80u)) {
        auto targetFn = runtime->lookupFunction(0x16FF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1776F0u; }
        if (ctx->pc != 0x1776F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016FF80_0x16ff80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1776F0u; }
        if (ctx->pc != 0x1776F0u) { return; }
    }
    ctx->pc = 0x1776F0u;
label_1776f0:
    // 0x1776f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1776f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1776f4:
    // 0x1776f4: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x1776f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_1776f8:
    // 0x1776f8: 0x5446000d  bnel        $v0, $a2, . + 4 + (0xD << 2)
label_1776fc:
    if (ctx->pc == 0x1776FCu) {
        ctx->pc = 0x1776FCu;
            // 0x1776fc: 0xa6000068  sh          $zero, 0x68($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x177700u;
        goto label_177700;
    }
    ctx->pc = 0x1776F8u;
    {
        const bool branch_taken_0x1776f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x1776f8) {
            ctx->pc = 0x1776FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1776F8u;
            // 0x1776fc: 0xa6000068  sh          $zero, 0x68($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177730u;
            goto label_177730;
        }
    }
    ctx->pc = 0x177700u;
label_177700:
    // 0x177700: 0x96040068  lhu         $a0, 0x68($s0)
    ctx->pc = 0x177700u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
label_177704:
    // 0x177704: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x177704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_177708:
    // 0x177708: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x177708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_17770c:
    // 0x17770c: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x17770cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_177710:
    // 0x177710: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x177710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_177714:
    // 0x177714: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x177714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_177718:
    // 0x177718: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x177718u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_17771c:
    // 0x17771c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x17771cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_177720:
    // 0x177720: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_177724:
    if (ctx->pc == 0x177724u) {
        ctx->pc = 0x177724u;
            // 0x177724: 0xa6040068  sh          $a0, 0x68($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 4));
        ctx->pc = 0x177728u;
        goto label_177728;
    }
    ctx->pc = 0x177720u;
    {
        const bool branch_taken_0x177720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177720u;
            // 0x177724: 0xa6040068  sh          $a0, 0x68($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177720) {
            ctx->pc = 0x177730u;
            goto label_177730;
        }
    }
    ctx->pc = 0x177728u;
label_177728:
    // 0x177728: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x177728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_17772c:
    // 0x17772c: 0xa6020060  sh          $v0, 0x60($s0)
    ctx->pc = 0x17772cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 2));
label_177730:
    // 0x177730: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x177730u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
label_177734:
    // 0x177734: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_177738:
    if (ctx->pc == 0x177738u) {
        ctx->pc = 0x177738u;
            // 0x177738: 0xae060064  sw          $a2, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 6));
        ctx->pc = 0x17773Cu;
        goto label_17773c;
    }
    ctx->pc = 0x177734u;
    {
        const bool branch_taken_0x177734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177734u;
            // 0x177738: 0xae060064  sw          $a2, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177734) {
            ctx->pc = 0x17776Cu;
            goto label_17776c;
        }
    }
    ctx->pc = 0x17773Cu;
label_17773c:
    // 0x17773c: 0x9203006d  lbu         $v1, 0x6D($s0)
    ctx->pc = 0x17773cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_177740:
    // 0x177740: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x177740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_177744:
    // 0x177744: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x177744u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_177748:
    // 0x177748: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_17774c:
    if (ctx->pc == 0x17774Cu) {
        ctx->pc = 0x177750u;
        goto label_177750;
    }
    ctx->pc = 0x177748u;
    {
        const bool branch_taken_0x177748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x177748) {
            ctx->pc = 0x17775Cu;
            goto label_17775c;
        }
    }
    ctx->pc = 0x177750u;
label_177750:
    // 0x177750: 0xc05cc84  jal         func_173210
label_177754:
    if (ctx->pc == 0x177754u) {
        ctx->pc = 0x177754u;
            // 0x177754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x177758u;
        goto label_177758;
    }
    ctx->pc = 0x177750u;
    SET_GPR_U32(ctx, 31, 0x177758u);
    ctx->pc = 0x177754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177750u;
            // 0x177754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173210u;
    if (runtime->hasFunction(0x173210u)) {
        auto targetFn = runtime->lookupFunction(0x173210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177758u; }
        if (ctx->pc != 0x177758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173210_0x173210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177758u; }
        if (ctx->pc != 0x177758u) { return; }
    }
    ctx->pc = 0x177758u;
label_177758:
    // 0x177758: 0x9203006d  lbu         $v1, 0x6D($s0)
    ctx->pc = 0x177758u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_17775c:
    // 0x17775c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_177760:
    if (ctx->pc == 0x177760u) {
        ctx->pc = 0x177760u;
            // 0x177760: 0x2622ffff  addiu       $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x177764u;
        goto label_177764;
    }
    ctx->pc = 0x17775Cu;
    {
        const bool branch_taken_0x17775c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x177760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17775Cu;
            // 0x177760: 0x2622ffff  addiu       $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17775c) {
            ctx->pc = 0x177770u;
            goto label_177770;
        }
    }
    ctx->pc = 0x177764u;
label_177764:
    // 0x177764: 0xa6000060  sh          $zero, 0x60($s0)
    ctx->pc = 0x177764u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 0));
label_177768:
    // 0x177768: 0xa6000068  sh          $zero, 0x68($s0)
    ctx->pc = 0x177768u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
label_17776c:
    // 0x17776c: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x17776cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_177770:
    // 0x177770: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x177770u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_177774:
    // 0x177774: 0x50400040  beql        $v0, $zero, . + 4 + (0x40 << 2)
label_177778:
    if (ctx->pc == 0x177778u) {
        ctx->pc = 0x177778u;
            // 0x177778: 0xa600006a  sh          $zero, 0x6A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x17777Cu;
        goto label_17777c;
    }
    ctx->pc = 0x177774u;
    {
        const bool branch_taken_0x177774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x177774) {
            ctx->pc = 0x177778u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177774u;
            // 0x177778: 0xa600006a  sh          $zero, 0x6A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177878u;
            goto label_177878;
        }
    }
    ctx->pc = 0x17777Cu;
label_17777c:
    // 0x17777c: 0x82020072  lb          $v0, 0x72($s0)
    ctx->pc = 0x17777cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 114)));
label_177780:
    // 0x177780: 0x5440003d  bnel        $v0, $zero, . + 4 + (0x3D << 2)
label_177784:
    if (ctx->pc == 0x177784u) {
        ctx->pc = 0x177784u;
            // 0x177784: 0xa600006a  sh          $zero, 0x6A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x177788u;
        goto label_177788;
    }
    ctx->pc = 0x177780u;
    {
        const bool branch_taken_0x177780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x177780) {
            ctx->pc = 0x177784u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177780u;
            // 0x177784: 0xa600006a  sh          $zero, 0x6A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177878u;
            goto label_177878;
        }
    }
    ctx->pc = 0x177788u;
label_177788:
    // 0x177788: 0xc05bbd0  jal         func_16EF40
label_17778c:
    if (ctx->pc == 0x17778Cu) {
        ctx->pc = 0x17778Cu;
            // 0x17778c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x177790u;
        goto label_177790;
    }
    ctx->pc = 0x177788u;
    SET_GPR_U32(ctx, 31, 0x177790u);
    ctx->pc = 0x17778Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177788u;
            // 0x17778c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16EF40u;
    if (runtime->hasFunction(0x16EF40u)) {
        auto targetFn = runtime->lookupFunction(0x16EF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177790u; }
        if (ctx->pc != 0x177790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016EF40_0x16ef40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177790u; }
        if (ctx->pc != 0x177790u) { return; }
    }
    ctx->pc = 0x177790u;
label_177790:
    // 0x177790: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x177790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_177794:
    // 0x177794: 0x50430038  beql        $v0, $v1, . + 4 + (0x38 << 2)
label_177798:
    if (ctx->pc == 0x177798u) {
        ctx->pc = 0x177798u;
            // 0x177798: 0xa600006a  sh          $zero, 0x6A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x17779Cu;
        goto label_17779c;
    }
    ctx->pc = 0x177794u;
    {
        const bool branch_taken_0x177794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x177794) {
            ctx->pc = 0x177798u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177794u;
            // 0x177798: 0xa600006a  sh          $zero, 0x6A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177878u;
            goto label_177878;
        }
    }
    ctx->pc = 0x17779Cu;
label_17779c:
    // 0x17779c: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x17779cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1777a0:
    // 0x1777a0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1777a4:
    if (ctx->pc == 0x1777A4u) {
        ctx->pc = 0x1777A4u;
            // 0x1777a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1777A8u;
        goto label_1777a8;
    }
    ctx->pc = 0x1777A0u;
    {
        const bool branch_taken_0x1777a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1777A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1777A0u;
            // 0x1777a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1777a0) {
            ctx->pc = 0x1777C0u;
            goto label_1777c0;
        }
    }
    ctx->pc = 0x1777A8u;
label_1777a8:
    // 0x1777a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1777a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1777ac:
    // 0x1777ac: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1777acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1777b0:
    // 0x1777b0: 0x40f809  jalr        $v0
label_1777b4:
    if (ctx->pc == 0x1777B4u) {
        ctx->pc = 0x1777B4u;
            // 0x1777b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1777B8u;
        goto label_1777b8;
    }
    ctx->pc = 0x1777B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1777B8u);
        ctx->pc = 0x1777B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1777B0u;
            // 0x1777b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1777B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1777B8u; }
            if (ctx->pc != 0x1777B8u) { return; }
        }
        }
    }
    ctx->pc = 0x1777B8u;
label_1777b8:
    // 0x1777b8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1777bc:
    if (ctx->pc == 0x1777BCu) {
        ctx->pc = 0x1777BCu;
            // 0x1777bc: 0x28420040  slti        $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
        ctx->pc = 0x1777C0u;
        goto label_1777c0;
    }
    ctx->pc = 0x1777B8u;
    {
        const bool branch_taken_0x1777b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1777BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1777B8u;
            // 0x1777bc: 0x28420040  slti        $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1777b8) {
            ctx->pc = 0x1777C4u;
            goto label_1777c4;
        }
    }
    ctx->pc = 0x1777C0u;
label_1777c0:
    // 0x1777c0: 0x28420040  slti        $v0, $v0, 0x40
    ctx->pc = 0x1777c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
label_1777c4:
    // 0x1777c4: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
label_1777c8:
    if (ctx->pc == 0x1777C8u) {
        ctx->pc = 0x1777C8u;
            // 0x1777c8: 0xa600006a  sh          $zero, 0x6A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1777CCu;
        goto label_1777cc;
    }
    ctx->pc = 0x1777C4u;
    {
        const bool branch_taken_0x1777c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1777c4) {
            ctx->pc = 0x1777C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1777C4u;
            // 0x1777c8: 0xa600006a  sh          $zero, 0x6A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177878u;
            goto label_177878;
        }
    }
    ctx->pc = 0x1777CCu;
label_1777cc:
    // 0x1777cc: 0x9602006a  lhu         $v0, 0x6A($s0)
    ctx->pc = 0x1777ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 106)));
label_1777d0:
    // 0x1777d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1777d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1777d4:
    // 0x1777d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1777d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1777d8:
    // 0x1777d8: 0x16230007  bne         $s1, $v1, . + 4 + (0x7 << 2)
label_1777dc:
    if (ctx->pc == 0x1777DCu) {
        ctx->pc = 0x1777DCu;
            // 0x1777dc: 0xa602006a  sh          $v0, 0x6A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1777E0u;
        goto label_1777e0;
    }
    ctx->pc = 0x1777D8u;
    {
        const bool branch_taken_0x1777d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1777DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1777D8u;
            // 0x1777dc: 0xa602006a  sh          $v0, 0x6A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1777d8) {
            ctx->pc = 0x1777F8u;
            goto label_1777f8;
        }
    }
    ctx->pc = 0x1777E0u;
label_1777e0:
    // 0x1777e0: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x1777e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1777e4:
    // 0x1777e4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1777e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1777e8:
    // 0x1777e8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1777e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_1777ec:
    // 0x1777ec: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1777ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1777f0:
    // 0x1777f0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1777f4:
    if (ctx->pc == 0x1777F4u) {
        ctx->pc = 0x1777F4u;
            // 0x1777f4: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->pc = 0x1777F8u;
        goto label_1777f8;
    }
    ctx->pc = 0x1777F0u;
    {
        const bool branch_taken_0x1777f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1777F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1777F0u;
            // 0x1777f4: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1777f0) {
            ctx->pc = 0x177810u;
            goto label_177810;
        }
    }
    ctx->pc = 0x1777F8u;
label_1777f8:
    // 0x1777f8: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x1777f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1777fc:
    // 0x1777fc: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1777fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_177800:
    // 0x177800: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x177800u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_177804:
    // 0x177804: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x177804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_177808:
    // 0x177808: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x177808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_17780c:
    // 0x17780c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17780cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_177810:
    // 0x177810: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x177810u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_177814:
    // 0x177814: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_177818:
    if (ctx->pc == 0x177818u) {
        ctx->pc = 0x177818u;
            // 0x177818: 0x86020060  lh          $v0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->pc = 0x17781Cu;
        goto label_17781c;
    }
    ctx->pc = 0x177814u;
    {
        const bool branch_taken_0x177814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x177814) {
            ctx->pc = 0x177818u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177814u;
            // 0x177818: 0x86020060  lh          $v0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177828u;
            goto label_177828;
        }
    }
    ctx->pc = 0x17781Cu;
label_17781c:
    // 0x17781c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17781cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_177820:
    // 0x177820: 0xa6020060  sh          $v0, 0x60($s0)
    ctx->pc = 0x177820u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 2));
label_177824:
    // 0x177824: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x177824u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
label_177828:
    // 0x177828: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_17782c:
    if (ctx->pc == 0x17782Cu) {
        ctx->pc = 0x17782Cu;
            // 0x17782c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x177830u;
        goto label_177830;
    }
    ctx->pc = 0x177828u;
    {
        const bool branch_taken_0x177828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17782Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177828u;
            // 0x17782c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177828) {
            ctx->pc = 0x177878u;
            goto label_177878;
        }
    }
    ctx->pc = 0x177830u;
label_177830:
    // 0x177830: 0x8204006d  lb          $a0, 0x6D($s0)
    ctx->pc = 0x177830u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_177834:
    // 0x177834: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
label_177838:
    if (ctx->pc == 0x177838u) {
        ctx->pc = 0x177838u;
            // 0x177838: 0x9203006d  lbu         $v1, 0x6D($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        ctx->pc = 0x17783Cu;
        goto label_17783c;
    }
    ctx->pc = 0x177834u;
    {
        const bool branch_taken_0x177834 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x177838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177834u;
            // 0x177838: 0x9203006d  lbu         $v1, 0x6D($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177834) {
            ctx->pc = 0x177850u;
            goto label_177850;
        }
    }
    ctx->pc = 0x17783Cu;
label_17783c:
    // 0x17783c: 0xc05cc84  jal         func_173210
label_177840:
    if (ctx->pc == 0x177840u) {
        ctx->pc = 0x177840u;
            // 0x177840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x177844u;
        goto label_177844;
    }
    ctx->pc = 0x17783Cu;
    SET_GPR_U32(ctx, 31, 0x177844u);
    ctx->pc = 0x177840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17783Cu;
            // 0x177840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173210u;
    if (runtime->hasFunction(0x173210u)) {
        auto targetFn = runtime->lookupFunction(0x173210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177844u; }
        if (ctx->pc != 0x177844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173210_0x173210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177844u; }
        if (ctx->pc != 0x177844u) { return; }
    }
    ctx->pc = 0x177844u;
label_177844:
    // 0x177844: 0x10000008  b           . + 4 + (0x8 << 2)
label_177848:
    if (ctx->pc == 0x177848u) {
        ctx->pc = 0x177848u;
            // 0x177848: 0x9203006d  lbu         $v1, 0x6D($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        ctx->pc = 0x17784Cu;
        goto label_17784c;
    }
    ctx->pc = 0x177844u;
    {
        const bool branch_taken_0x177844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177844u;
            // 0x177848: 0x9203006d  lbu         $v1, 0x6D($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177844) {
            ctx->pc = 0x177868u;
            goto label_177868;
        }
    }
    ctx->pc = 0x17784Cu;
label_17784c:
    // 0x17784c: 0x0  nop
    ctx->pc = 0x17784cu;
    // NOP
label_177850:
    // 0x177850: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x177850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_177854:
    // 0x177854: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
label_177858:
    if (ctx->pc == 0x177858u) {
        ctx->pc = 0x17785Cu;
        goto label_17785c;
    }
    ctx->pc = 0x177854u;
    {
        const bool branch_taken_0x177854 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x177854) {
            ctx->pc = 0x177868u;
            goto label_177868;
        }
    }
    ctx->pc = 0x17785Cu;
label_17785c:
    // 0x17785c: 0xc05dd6e  jal         func_1775B8
label_177860:
    if (ctx->pc == 0x177860u) {
        ctx->pc = 0x177860u;
            // 0x177860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x177864u;
        goto label_177864;
    }
    ctx->pc = 0x17785Cu;
    SET_GPR_U32(ctx, 31, 0x177864u);
    ctx->pc = 0x177860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17785Cu;
            // 0x177860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1775B8u;
    goto label_1775b8;
    ctx->pc = 0x177864u;
label_177864:
    // 0x177864: 0x9203006d  lbu         $v1, 0x6D($s0)
    ctx->pc = 0x177864u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_177868:
    // 0x177868: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_17786c:
    if (ctx->pc == 0x17786Cu) {
        ctx->pc = 0x17786Cu;
            // 0x17786c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x177870u;
        goto label_177870;
    }
    ctx->pc = 0x177868u;
    {
        const bool branch_taken_0x177868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x177868) {
            ctx->pc = 0x17786Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177868u;
            // 0x17786c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17787Cu;
            goto label_17787c;
        }
    }
    ctx->pc = 0x177870u;
label_177870:
    // 0x177870: 0xa6000060  sh          $zero, 0x60($s0)
    ctx->pc = 0x177870u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 0));
label_177874:
    // 0x177874: 0xa600006a  sh          $zero, 0x6A($s0)
    ctx->pc = 0x177874u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
label_177878:
    // 0x177878: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x177878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_17787c:
    // 0x17787c: 0x50800019  beql        $a0, $zero, . + 4 + (0x19 << 2)
label_177880:
    if (ctx->pc == 0x177880u) {
        ctx->pc = 0x177880u;
            // 0x177880: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x177884u;
        goto label_177884;
    }
    ctx->pc = 0x17787Cu;
    {
        const bool branch_taken_0x17787c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17787c) {
            ctx->pc = 0x177880u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17787Cu;
            // 0x177880: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1778E4u;
            goto label_1778e4;
        }
    }
    ctx->pc = 0x177884u;
label_177884:
    // 0x177884: 0xc05c2e2  jal         func_170B88
label_177888:
    if (ctx->pc == 0x177888u) {
        ctx->pc = 0x17788Cu;
        goto label_17788c;
    }
    ctx->pc = 0x177884u;
    SET_GPR_U32(ctx, 31, 0x17788Cu);
    ctx->pc = 0x170B88u;
    if (runtime->hasFunction(0x170B88u)) {
        auto targetFn = runtime->lookupFunction(0x170B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17788Cu; }
        if (ctx->pc != 0x17788Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170B88_0x170b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17788Cu; }
        if (ctx->pc != 0x17788Cu) { return; }
    }
    ctx->pc = 0x17788Cu;
label_17788c:
    // 0x17788c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x17788cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_177890:
    // 0x177890: 0x54430014  bnel        $v0, $v1, . + 4 + (0x14 << 2)
label_177894:
    if (ctx->pc == 0x177894u) {
        ctx->pc = 0x177894u;
            // 0x177894: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x177898u;
        goto label_177898;
    }
    ctx->pc = 0x177890u;
    {
        const bool branch_taken_0x177890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x177890) {
            ctx->pc = 0x177894u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177890u;
            // 0x177894: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1778E4u;
            goto label_1778e4;
        }
    }
    ctx->pc = 0x177898u;
label_177898:
    // 0x177898: 0x8204006d  lb          $a0, 0x6D($s0)
    ctx->pc = 0x177898u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_17789c:
    // 0x17789c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17789cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1778a0:
    // 0x1778a0: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_1778a4:
    if (ctx->pc == 0x1778A4u) {
        ctx->pc = 0x1778A4u;
            // 0x1778a4: 0x9203006d  lbu         $v1, 0x6D($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        ctx->pc = 0x1778A8u;
        goto label_1778a8;
    }
    ctx->pc = 0x1778A0u;
    {
        const bool branch_taken_0x1778a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1778A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1778A0u;
            // 0x1778a4: 0x9203006d  lbu         $v1, 0x6D($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1778a0) {
            ctx->pc = 0x1778B8u;
            goto label_1778b8;
        }
    }
    ctx->pc = 0x1778A8u;
label_1778a8:
    // 0x1778a8: 0xc05cc84  jal         func_173210
label_1778ac:
    if (ctx->pc == 0x1778ACu) {
        ctx->pc = 0x1778ACu;
            // 0x1778ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1778B0u;
        goto label_1778b0;
    }
    ctx->pc = 0x1778A8u;
    SET_GPR_U32(ctx, 31, 0x1778B0u);
    ctx->pc = 0x1778ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1778A8u;
            // 0x1778ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173210u;
    if (runtime->hasFunction(0x173210u)) {
        auto targetFn = runtime->lookupFunction(0x173210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1778B0u; }
        if (ctx->pc != 0x1778B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173210_0x173210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1778B0u; }
        if (ctx->pc != 0x1778B0u) { return; }
    }
    ctx->pc = 0x1778B0u;
label_1778b0:
    // 0x1778b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1778b4:
    if (ctx->pc == 0x1778B4u) {
        ctx->pc = 0x1778B4u;
            // 0x1778b4: 0x9203006d  lbu         $v1, 0x6D($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        ctx->pc = 0x1778B8u;
        goto label_1778b8;
    }
    ctx->pc = 0x1778B0u;
    {
        const bool branch_taken_0x1778b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1778B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1778B0u;
            // 0x1778b4: 0x9203006d  lbu         $v1, 0x6D($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1778b0) {
            ctx->pc = 0x1778D0u;
            goto label_1778d0;
        }
    }
    ctx->pc = 0x1778B8u;
label_1778b8:
    // 0x1778b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1778b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1778bc:
    // 0x1778bc: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
label_1778c0:
    if (ctx->pc == 0x1778C0u) {
        ctx->pc = 0x1778C4u;
        goto label_1778c4;
    }
    ctx->pc = 0x1778BCu;
    {
        const bool branch_taken_0x1778bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1778bc) {
            ctx->pc = 0x1778D0u;
            goto label_1778d0;
        }
    }
    ctx->pc = 0x1778C4u;
label_1778c4:
    // 0x1778c4: 0xc05dd6e  jal         func_1775B8
label_1778c8:
    if (ctx->pc == 0x1778C8u) {
        ctx->pc = 0x1778C8u;
            // 0x1778c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1778CCu;
        goto label_1778cc;
    }
    ctx->pc = 0x1778C4u;
    SET_GPR_U32(ctx, 31, 0x1778CCu);
    ctx->pc = 0x1778C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1778C4u;
            // 0x1778c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1775B8u;
    goto label_1775b8;
    ctx->pc = 0x1778CCu;
label_1778cc:
    // 0x1778cc: 0x9203006d  lbu         $v1, 0x6D($s0)
    ctx->pc = 0x1778ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_1778d0:
    // 0x1778d0: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_1778d4:
    if (ctx->pc == 0x1778D4u) {
        ctx->pc = 0x1778D4u;
            // 0x1778d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1778D8u;
        goto label_1778d8;
    }
    ctx->pc = 0x1778D0u;
    {
        const bool branch_taken_0x1778d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1778d0) {
            ctx->pc = 0x1778D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1778D0u;
            // 0x1778d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1778E4u;
            goto label_1778e4;
        }
    }
    ctx->pc = 0x1778D8u;
label_1778d8:
    // 0x1778d8: 0xa600006a  sh          $zero, 0x6A($s0)
    ctx->pc = 0x1778d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
label_1778dc:
    // 0x1778dc: 0xa6000060  sh          $zero, 0x60($s0)
    ctx->pc = 0x1778dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 0));
label_1778e0:
    // 0x1778e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1778e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1778e4:
    // 0x1778e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1778e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1778e8:
    // 0x1778e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1778e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1778ec:
    // 0x1778ec: 0x3e00008  jr          $ra
label_1778f0:
    if (ctx->pc == 0x1778F0u) {
        ctx->pc = 0x1778F0u;
            // 0x1778f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1778F4u;
        goto label_1778f4;
    }
    ctx->pc = 0x1778ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1778F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1778ECu;
            // 0x1778f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1778F4u;
label_1778f4:
    // 0x1778f4: 0x0  nop
    ctx->pc = 0x1778f4u;
    // NOP
label_1778f8:
    // 0x1778f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1778f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1778fc:
    // 0x1778fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1778fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_177900:
    // 0x177900: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x177900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_177904:
    // 0x177904: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x177904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_177908:
    // 0x177908: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x177908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_17790c:
    // 0x17790c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_177910:
    if (ctx->pc == 0x177910u) {
        ctx->pc = 0x177910u;
            // 0x177910: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x177914u;
        goto label_177914;
    }
    ctx->pc = 0x17790Cu;
    {
        const bool branch_taken_0x17790c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17790Cu;
            // 0x177910: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17790c) {
            ctx->pc = 0x177938u;
            goto label_177938;
        }
    }
    ctx->pc = 0x177914u;
label_177914:
    // 0x177914: 0xc05c2e2  jal         func_170B88
label_177918:
    if (ctx->pc == 0x177918u) {
        ctx->pc = 0x17791Cu;
        goto label_17791c;
    }
    ctx->pc = 0x177914u;
    SET_GPR_U32(ctx, 31, 0x17791Cu);
    ctx->pc = 0x170B88u;
    if (runtime->hasFunction(0x170B88u)) {
        auto targetFn = runtime->lookupFunction(0x170B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17791Cu; }
        if (ctx->pc != 0x17791Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170B88_0x170b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17791Cu; }
        if (ctx->pc != 0x17791Cu) { return; }
    }
    ctx->pc = 0x17791Cu;
label_17791c:
    // 0x17791c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x17791cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_177920:
    // 0x177920: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_177924:
    if (ctx->pc == 0x177924u) {
        ctx->pc = 0x177924u;
            // 0x177924: 0x8e040094  lw          $a0, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->pc = 0x177928u;
        goto label_177928;
    }
    ctx->pc = 0x177920u;
    {
        const bool branch_taken_0x177920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x177920) {
            ctx->pc = 0x177924u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177920u;
            // 0x177924: 0x8e040094  lw          $a0, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17793Cu;
            goto label_17793c;
        }
    }
    ctx->pc = 0x177928u;
label_177928:
    // 0x177928: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x177928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17792c:
    // 0x17792c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x17792cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_177930:
    // 0x177930: 0xa6020060  sh          $v0, 0x60($s0)
    ctx->pc = 0x177930u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 2));
label_177934:
    // 0x177934: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x177934u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_177938:
    // 0x177938: 0x8e040094  lw          $a0, 0x94($s0)
    ctx->pc = 0x177938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_17793c:
    // 0x17793c: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_177940:
    if (ctx->pc == 0x177940u) {
        ctx->pc = 0x177940u;
            // 0x177940: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x177944u;
        goto label_177944;
    }
    ctx->pc = 0x17793Cu;
    {
        const bool branch_taken_0x17793c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17793c) {
            ctx->pc = 0x177940u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17793Cu;
            // 0x177940: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17796Cu;
            goto label_17796c;
        }
    }
    ctx->pc = 0x177944u;
label_177944:
    // 0x177944: 0xc06018a  jal         func_180628
label_177948:
    if (ctx->pc == 0x177948u) {
        ctx->pc = 0x17794Cu;
        goto label_17794c;
    }
    ctx->pc = 0x177944u;
    SET_GPR_U32(ctx, 31, 0x17794Cu);
    ctx->pc = 0x180628u;
    if (runtime->hasFunction(0x180628u)) {
        auto targetFn = runtime->lookupFunction(0x180628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17794Cu; }
        if (ctx->pc != 0x17794Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180628_0x180628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17794Cu; }
        if (ctx->pc != 0x17794Cu) { return; }
    }
    ctx->pc = 0x17794Cu;
label_17794c:
    // 0x17794c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x17794cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_177950:
    // 0x177950: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_177954:
    if (ctx->pc == 0x177954u) {
        ctx->pc = 0x177954u;
            // 0x177954: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x177958u;
        goto label_177958;
    }
    ctx->pc = 0x177950u;
    {
        const bool branch_taken_0x177950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x177950) {
            ctx->pc = 0x177954u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177950u;
            // 0x177954: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17796Cu;
            goto label_17796c;
        }
    }
    ctx->pc = 0x177958u;
label_177958:
    // 0x177958: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x177958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_17795c:
    // 0x17795c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17795cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_177960:
    // 0x177960: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x177960u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_177964:
    // 0x177964: 0xa6030060  sh          $v1, 0x60($s0)
    ctx->pc = 0x177964u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 3));
label_177968:
    // 0x177968: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x177968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17796c:
    // 0x17796c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17796cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_177970:
    // 0x177970: 0x3e00008  jr          $ra
label_177974:
    if (ctx->pc == 0x177974u) {
        ctx->pc = 0x177974u;
            // 0x177974: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x177978u;
        goto label_fallthrough_0x177970;
    }
    ctx->pc = 0x177970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177970u;
            // 0x177974: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x177970:
    ctx->pc = 0x177978u;
}
