#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002454B0
// Address: 0x2454b0 - 0x245a00
void sub_002454B0_0x2454b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002454B0_0x2454b0");
#endif

    switch (ctx->pc) {
        case 0x2454b0u: goto label_2454b0;
        case 0x2454b4u: goto label_2454b4;
        case 0x2454b8u: goto label_2454b8;
        case 0x2454bcu: goto label_2454bc;
        case 0x2454c0u: goto label_2454c0;
        case 0x2454c4u: goto label_2454c4;
        case 0x2454c8u: goto label_2454c8;
        case 0x2454ccu: goto label_2454cc;
        case 0x2454d0u: goto label_2454d0;
        case 0x2454d4u: goto label_2454d4;
        case 0x2454d8u: goto label_2454d8;
        case 0x2454dcu: goto label_2454dc;
        case 0x2454e0u: goto label_2454e0;
        case 0x2454e4u: goto label_2454e4;
        case 0x2454e8u: goto label_2454e8;
        case 0x2454ecu: goto label_2454ec;
        case 0x2454f0u: goto label_2454f0;
        case 0x2454f4u: goto label_2454f4;
        case 0x2454f8u: goto label_2454f8;
        case 0x2454fcu: goto label_2454fc;
        case 0x245500u: goto label_245500;
        case 0x245504u: goto label_245504;
        case 0x245508u: goto label_245508;
        case 0x24550cu: goto label_24550c;
        case 0x245510u: goto label_245510;
        case 0x245514u: goto label_245514;
        case 0x245518u: goto label_245518;
        case 0x24551cu: goto label_24551c;
        case 0x245520u: goto label_245520;
        case 0x245524u: goto label_245524;
        case 0x245528u: goto label_245528;
        case 0x24552cu: goto label_24552c;
        case 0x245530u: goto label_245530;
        case 0x245534u: goto label_245534;
        case 0x245538u: goto label_245538;
        case 0x24553cu: goto label_24553c;
        case 0x245540u: goto label_245540;
        case 0x245544u: goto label_245544;
        case 0x245548u: goto label_245548;
        case 0x24554cu: goto label_24554c;
        case 0x245550u: goto label_245550;
        case 0x245554u: goto label_245554;
        case 0x245558u: goto label_245558;
        case 0x24555cu: goto label_24555c;
        case 0x245560u: goto label_245560;
        case 0x245564u: goto label_245564;
        case 0x245568u: goto label_245568;
        case 0x24556cu: goto label_24556c;
        case 0x245570u: goto label_245570;
        case 0x245574u: goto label_245574;
        case 0x245578u: goto label_245578;
        case 0x24557cu: goto label_24557c;
        case 0x245580u: goto label_245580;
        case 0x245584u: goto label_245584;
        case 0x245588u: goto label_245588;
        case 0x24558cu: goto label_24558c;
        case 0x245590u: goto label_245590;
        case 0x245594u: goto label_245594;
        case 0x245598u: goto label_245598;
        case 0x24559cu: goto label_24559c;
        case 0x2455a0u: goto label_2455a0;
        case 0x2455a4u: goto label_2455a4;
        case 0x2455a8u: goto label_2455a8;
        case 0x2455acu: goto label_2455ac;
        case 0x2455b0u: goto label_2455b0;
        case 0x2455b4u: goto label_2455b4;
        case 0x2455b8u: goto label_2455b8;
        case 0x2455bcu: goto label_2455bc;
        case 0x2455c0u: goto label_2455c0;
        case 0x2455c4u: goto label_2455c4;
        case 0x2455c8u: goto label_2455c8;
        case 0x2455ccu: goto label_2455cc;
        case 0x2455d0u: goto label_2455d0;
        case 0x2455d4u: goto label_2455d4;
        case 0x2455d8u: goto label_2455d8;
        case 0x2455dcu: goto label_2455dc;
        case 0x2455e0u: goto label_2455e0;
        case 0x2455e4u: goto label_2455e4;
        case 0x2455e8u: goto label_2455e8;
        case 0x2455ecu: goto label_2455ec;
        case 0x2455f0u: goto label_2455f0;
        case 0x2455f4u: goto label_2455f4;
        case 0x2455f8u: goto label_2455f8;
        case 0x2455fcu: goto label_2455fc;
        case 0x245600u: goto label_245600;
        case 0x245604u: goto label_245604;
        case 0x245608u: goto label_245608;
        case 0x24560cu: goto label_24560c;
        case 0x245610u: goto label_245610;
        case 0x245614u: goto label_245614;
        case 0x245618u: goto label_245618;
        case 0x24561cu: goto label_24561c;
        case 0x245620u: goto label_245620;
        case 0x245624u: goto label_245624;
        case 0x245628u: goto label_245628;
        case 0x24562cu: goto label_24562c;
        case 0x245630u: goto label_245630;
        case 0x245634u: goto label_245634;
        case 0x245638u: goto label_245638;
        case 0x24563cu: goto label_24563c;
        case 0x245640u: goto label_245640;
        case 0x245644u: goto label_245644;
        case 0x245648u: goto label_245648;
        case 0x24564cu: goto label_24564c;
        case 0x245650u: goto label_245650;
        case 0x245654u: goto label_245654;
        case 0x245658u: goto label_245658;
        case 0x24565cu: goto label_24565c;
        case 0x245660u: goto label_245660;
        case 0x245664u: goto label_245664;
        case 0x245668u: goto label_245668;
        case 0x24566cu: goto label_24566c;
        case 0x245670u: goto label_245670;
        case 0x245674u: goto label_245674;
        case 0x245678u: goto label_245678;
        case 0x24567cu: goto label_24567c;
        case 0x245680u: goto label_245680;
        case 0x245684u: goto label_245684;
        case 0x245688u: goto label_245688;
        case 0x24568cu: goto label_24568c;
        case 0x245690u: goto label_245690;
        case 0x245694u: goto label_245694;
        case 0x245698u: goto label_245698;
        case 0x24569cu: goto label_24569c;
        case 0x2456a0u: goto label_2456a0;
        case 0x2456a4u: goto label_2456a4;
        case 0x2456a8u: goto label_2456a8;
        case 0x2456acu: goto label_2456ac;
        case 0x2456b0u: goto label_2456b0;
        case 0x2456b4u: goto label_2456b4;
        case 0x2456b8u: goto label_2456b8;
        case 0x2456bcu: goto label_2456bc;
        case 0x2456c0u: goto label_2456c0;
        case 0x2456c4u: goto label_2456c4;
        case 0x2456c8u: goto label_2456c8;
        case 0x2456ccu: goto label_2456cc;
        case 0x2456d0u: goto label_2456d0;
        case 0x2456d4u: goto label_2456d4;
        case 0x2456d8u: goto label_2456d8;
        case 0x2456dcu: goto label_2456dc;
        case 0x2456e0u: goto label_2456e0;
        case 0x2456e4u: goto label_2456e4;
        case 0x2456e8u: goto label_2456e8;
        case 0x2456ecu: goto label_2456ec;
        case 0x2456f0u: goto label_2456f0;
        case 0x2456f4u: goto label_2456f4;
        case 0x2456f8u: goto label_2456f8;
        case 0x2456fcu: goto label_2456fc;
        case 0x245700u: goto label_245700;
        case 0x245704u: goto label_245704;
        case 0x245708u: goto label_245708;
        case 0x24570cu: goto label_24570c;
        case 0x245710u: goto label_245710;
        case 0x245714u: goto label_245714;
        case 0x245718u: goto label_245718;
        case 0x24571cu: goto label_24571c;
        case 0x245720u: goto label_245720;
        case 0x245724u: goto label_245724;
        case 0x245728u: goto label_245728;
        case 0x24572cu: goto label_24572c;
        case 0x245730u: goto label_245730;
        case 0x245734u: goto label_245734;
        case 0x245738u: goto label_245738;
        case 0x24573cu: goto label_24573c;
        case 0x245740u: goto label_245740;
        case 0x245744u: goto label_245744;
        case 0x245748u: goto label_245748;
        case 0x24574cu: goto label_24574c;
        case 0x245750u: goto label_245750;
        case 0x245754u: goto label_245754;
        case 0x245758u: goto label_245758;
        case 0x24575cu: goto label_24575c;
        case 0x245760u: goto label_245760;
        case 0x245764u: goto label_245764;
        case 0x245768u: goto label_245768;
        case 0x24576cu: goto label_24576c;
        case 0x245770u: goto label_245770;
        case 0x245774u: goto label_245774;
        case 0x245778u: goto label_245778;
        case 0x24577cu: goto label_24577c;
        case 0x245780u: goto label_245780;
        case 0x245784u: goto label_245784;
        case 0x245788u: goto label_245788;
        case 0x24578cu: goto label_24578c;
        case 0x245790u: goto label_245790;
        case 0x245794u: goto label_245794;
        case 0x245798u: goto label_245798;
        case 0x24579cu: goto label_24579c;
        case 0x2457a0u: goto label_2457a0;
        case 0x2457a4u: goto label_2457a4;
        case 0x2457a8u: goto label_2457a8;
        case 0x2457acu: goto label_2457ac;
        case 0x2457b0u: goto label_2457b0;
        case 0x2457b4u: goto label_2457b4;
        case 0x2457b8u: goto label_2457b8;
        case 0x2457bcu: goto label_2457bc;
        case 0x2457c0u: goto label_2457c0;
        case 0x2457c4u: goto label_2457c4;
        case 0x2457c8u: goto label_2457c8;
        case 0x2457ccu: goto label_2457cc;
        case 0x2457d0u: goto label_2457d0;
        case 0x2457d4u: goto label_2457d4;
        case 0x2457d8u: goto label_2457d8;
        case 0x2457dcu: goto label_2457dc;
        case 0x2457e0u: goto label_2457e0;
        case 0x2457e4u: goto label_2457e4;
        case 0x2457e8u: goto label_2457e8;
        case 0x2457ecu: goto label_2457ec;
        case 0x2457f0u: goto label_2457f0;
        case 0x2457f4u: goto label_2457f4;
        case 0x2457f8u: goto label_2457f8;
        case 0x2457fcu: goto label_2457fc;
        case 0x245800u: goto label_245800;
        case 0x245804u: goto label_245804;
        case 0x245808u: goto label_245808;
        case 0x24580cu: goto label_24580c;
        case 0x245810u: goto label_245810;
        case 0x245814u: goto label_245814;
        case 0x245818u: goto label_245818;
        case 0x24581cu: goto label_24581c;
        case 0x245820u: goto label_245820;
        case 0x245824u: goto label_245824;
        case 0x245828u: goto label_245828;
        case 0x24582cu: goto label_24582c;
        case 0x245830u: goto label_245830;
        case 0x245834u: goto label_245834;
        case 0x245838u: goto label_245838;
        case 0x24583cu: goto label_24583c;
        case 0x245840u: goto label_245840;
        case 0x245844u: goto label_245844;
        case 0x245848u: goto label_245848;
        case 0x24584cu: goto label_24584c;
        case 0x245850u: goto label_245850;
        case 0x245854u: goto label_245854;
        case 0x245858u: goto label_245858;
        case 0x24585cu: goto label_24585c;
        case 0x245860u: goto label_245860;
        case 0x245864u: goto label_245864;
        case 0x245868u: goto label_245868;
        case 0x24586cu: goto label_24586c;
        case 0x245870u: goto label_245870;
        case 0x245874u: goto label_245874;
        case 0x245878u: goto label_245878;
        case 0x24587cu: goto label_24587c;
        case 0x245880u: goto label_245880;
        case 0x245884u: goto label_245884;
        case 0x245888u: goto label_245888;
        case 0x24588cu: goto label_24588c;
        case 0x245890u: goto label_245890;
        case 0x245894u: goto label_245894;
        case 0x245898u: goto label_245898;
        case 0x24589cu: goto label_24589c;
        case 0x2458a0u: goto label_2458a0;
        case 0x2458a4u: goto label_2458a4;
        case 0x2458a8u: goto label_2458a8;
        case 0x2458acu: goto label_2458ac;
        case 0x2458b0u: goto label_2458b0;
        case 0x2458b4u: goto label_2458b4;
        case 0x2458b8u: goto label_2458b8;
        case 0x2458bcu: goto label_2458bc;
        case 0x2458c0u: goto label_2458c0;
        case 0x2458c4u: goto label_2458c4;
        case 0x2458c8u: goto label_2458c8;
        case 0x2458ccu: goto label_2458cc;
        case 0x2458d0u: goto label_2458d0;
        case 0x2458d4u: goto label_2458d4;
        case 0x2458d8u: goto label_2458d8;
        case 0x2458dcu: goto label_2458dc;
        case 0x2458e0u: goto label_2458e0;
        case 0x2458e4u: goto label_2458e4;
        case 0x2458e8u: goto label_2458e8;
        case 0x2458ecu: goto label_2458ec;
        case 0x2458f0u: goto label_2458f0;
        case 0x2458f4u: goto label_2458f4;
        case 0x2458f8u: goto label_2458f8;
        case 0x2458fcu: goto label_2458fc;
        case 0x245900u: goto label_245900;
        case 0x245904u: goto label_245904;
        case 0x245908u: goto label_245908;
        case 0x24590cu: goto label_24590c;
        case 0x245910u: goto label_245910;
        case 0x245914u: goto label_245914;
        case 0x245918u: goto label_245918;
        case 0x24591cu: goto label_24591c;
        case 0x245920u: goto label_245920;
        case 0x245924u: goto label_245924;
        case 0x245928u: goto label_245928;
        case 0x24592cu: goto label_24592c;
        case 0x245930u: goto label_245930;
        case 0x245934u: goto label_245934;
        case 0x245938u: goto label_245938;
        case 0x24593cu: goto label_24593c;
        case 0x245940u: goto label_245940;
        case 0x245944u: goto label_245944;
        case 0x245948u: goto label_245948;
        case 0x24594cu: goto label_24594c;
        case 0x245950u: goto label_245950;
        case 0x245954u: goto label_245954;
        case 0x245958u: goto label_245958;
        case 0x24595cu: goto label_24595c;
        case 0x245960u: goto label_245960;
        case 0x245964u: goto label_245964;
        case 0x245968u: goto label_245968;
        case 0x24596cu: goto label_24596c;
        case 0x245970u: goto label_245970;
        case 0x245974u: goto label_245974;
        case 0x245978u: goto label_245978;
        case 0x24597cu: goto label_24597c;
        case 0x245980u: goto label_245980;
        case 0x245984u: goto label_245984;
        case 0x245988u: goto label_245988;
        case 0x24598cu: goto label_24598c;
        case 0x245990u: goto label_245990;
        case 0x245994u: goto label_245994;
        case 0x245998u: goto label_245998;
        case 0x24599cu: goto label_24599c;
        case 0x2459a0u: goto label_2459a0;
        case 0x2459a4u: goto label_2459a4;
        case 0x2459a8u: goto label_2459a8;
        case 0x2459acu: goto label_2459ac;
        case 0x2459b0u: goto label_2459b0;
        case 0x2459b4u: goto label_2459b4;
        case 0x2459b8u: goto label_2459b8;
        case 0x2459bcu: goto label_2459bc;
        case 0x2459c0u: goto label_2459c0;
        case 0x2459c4u: goto label_2459c4;
        case 0x2459c8u: goto label_2459c8;
        case 0x2459ccu: goto label_2459cc;
        case 0x2459d0u: goto label_2459d0;
        case 0x2459d4u: goto label_2459d4;
        case 0x2459d8u: goto label_2459d8;
        case 0x2459dcu: goto label_2459dc;
        case 0x2459e0u: goto label_2459e0;
        case 0x2459e4u: goto label_2459e4;
        case 0x2459e8u: goto label_2459e8;
        case 0x2459ecu: goto label_2459ec;
        case 0x2459f0u: goto label_2459f0;
        case 0x2459f4u: goto label_2459f4;
        case 0x2459f8u: goto label_2459f8;
        case 0x2459fcu: goto label_2459fc;
        default: break;
    }

    ctx->pc = 0x2454b0u;

label_2454b0:
    // 0x2454b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2454b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2454b4:
    // 0x2454b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2454b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2454b8:
    // 0x2454b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2454b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2454bc:
    // 0x2454bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2454bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2454c0:
    // 0x2454c0: 0xa3a0004c  sb          $zero, 0x4C($sp)
    ctx->pc = 0x2454c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 0));
label_2454c4:
    // 0x2454c4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2454c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2454c8:
    // 0x2454c8: 0xa3a0004d  sb          $zero, 0x4D($sp)
    ctx->pc = 0x2454c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 0));
label_2454cc:
    // 0x2454cc: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x2454ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_2454d0:
    // 0x2454d0: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x2454d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_2454d4:
    // 0x2454d4: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x2454d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_2454d8:
    // 0x2454d8: 0xc091510  jal         func_245440
label_2454dc:
    if (ctx->pc == 0x2454DCu) {
        ctx->pc = 0x2454DCu;
            // 0x2454dc: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->pc = 0x2454E0u;
        goto label_2454e0;
    }
    ctx->pc = 0x2454D8u;
    SET_GPR_U32(ctx, 31, 0x2454E0u);
    ctx->pc = 0x2454DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2454D8u;
            // 0x2454dc: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245440u;
    if (runtime->hasFunction(0x245440u)) {
        auto targetFn = runtime->lookupFunction(0x245440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2454E0u; }
        if (ctx->pc != 0x2454E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245440_0x245440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2454E0u; }
        if (ctx->pc != 0x2454E0u) { return; }
    }
    ctx->pc = 0x2454E0u;
label_2454e0:
    // 0x2454e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2454e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2454e4:
    // 0x2454e4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2454e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2454e8:
    // 0x2454e8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2454e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2454ec:
    // 0x2454ec: 0xc07ffd4  jal         func_1FFF50
label_2454f0:
    if (ctx->pc == 0x2454F0u) {
        ctx->pc = 0x2454F0u;
            // 0x2454f0: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2454F4u;
        goto label_2454f4;
    }
    ctx->pc = 0x2454ECu;
    SET_GPR_U32(ctx, 31, 0x2454F4u);
    ctx->pc = 0x2454F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2454ECu;
            // 0x2454f0: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFF50u;
    if (runtime->hasFunction(0x1FFF50u)) {
        auto targetFn = runtime->lookupFunction(0x1FFF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2454F4u; }
        if (ctx->pc != 0x2454F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFF50_0x1fff50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2454F4u; }
        if (ctx->pc != 0x2454F4u) { return; }
    }
    ctx->pc = 0x2454F4u;
label_2454f4:
    // 0x2454f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2454f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2454f8:
    // 0x2454f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2454f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2454fc:
    // 0x2454fc: 0x3e00008  jr          $ra
label_245500:
    if (ctx->pc == 0x245500u) {
        ctx->pc = 0x245500u;
            // 0x245500: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x245504u;
        goto label_245504;
    }
    ctx->pc = 0x2454FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2454FCu;
            // 0x245500: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x245504u;
label_245504:
    // 0x245504: 0x0  nop
    ctx->pc = 0x245504u;
    // NOP
label_245508:
    // 0x245508: 0x0  nop
    ctx->pc = 0x245508u;
    // NOP
label_24550c:
    // 0x24550c: 0x0  nop
    ctx->pc = 0x24550cu;
    // NOP
label_245510:
    // 0x245510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x245510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_245514:
    // 0x245514: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x245514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_245518:
    // 0x245518: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x245518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_24551c:
    // 0x24551c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x24551cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_245520:
    // 0x245520: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_245524:
    if (ctx->pc == 0x245524u) {
        ctx->pc = 0x245528u;
        goto label_245528;
    }
    ctx->pc = 0x245520u;
    {
        const bool branch_taken_0x245520 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x245520) {
            ctx->pc = 0x245538u;
            goto label_245538;
        }
    }
    ctx->pc = 0x245528u;
label_245528:
    // 0x245528: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x245528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_24552c:
    // 0x24552c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24552cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_245530:
    // 0x245530: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x245530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_245534:
    // 0x245534: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x245534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_245538:
    // 0x245538: 0xc0917e8  jal         func_245FA0
label_24553c:
    if (ctx->pc == 0x24553Cu) {
        ctx->pc = 0x24553Cu;
            // 0x24553c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x245540u;
        goto label_245540;
    }
    ctx->pc = 0x245538u;
    SET_GPR_U32(ctx, 31, 0x245540u);
    ctx->pc = 0x24553Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245538u;
            // 0x24553c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245FA0u;
    if (runtime->hasFunction(0x245FA0u)) {
        auto targetFn = runtime->lookupFunction(0x245FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245540u; }
        if (ctx->pc != 0x245540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245FA0_0x245fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245540u; }
        if (ctx->pc != 0x245540u) { return; }
    }
    ctx->pc = 0x245540u;
label_245540:
    // 0x245540: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x245540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_245544:
    // 0x245544: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x245544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_245548:
    // 0x245548: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x245548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24554c:
    // 0x24554c: 0x3e00008  jr          $ra
label_245550:
    if (ctx->pc == 0x245550u) {
        ctx->pc = 0x245550u;
            // 0x245550: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x245554u;
        goto label_245554;
    }
    ctx->pc = 0x24554Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24554Cu;
            // 0x245550: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x245554u;
label_245554:
    // 0x245554: 0x0  nop
    ctx->pc = 0x245554u;
    // NOP
label_245558:
    // 0x245558: 0x0  nop
    ctx->pc = 0x245558u;
    // NOP
label_24555c:
    // 0x24555c: 0x0  nop
    ctx->pc = 0x24555cu;
    // NOP
label_245560:
    // 0x245560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x245560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_245564:
    // 0x245564: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x245564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_245568:
    // 0x245568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x245568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24556c:
    // 0x24556c: 0xc091680  jal         func_245A00
label_245570:
    if (ctx->pc == 0x245570u) {
        ctx->pc = 0x245570u;
            // 0x245570: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x245574u;
        goto label_245574;
    }
    ctx->pc = 0x24556Cu;
    SET_GPR_U32(ctx, 31, 0x245574u);
    ctx->pc = 0x245570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24556Cu;
            // 0x245570: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245A00u;
    if (runtime->hasFunction(0x245A00u)) {
        auto targetFn = runtime->lookupFunction(0x245A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245574u; }
        if (ctx->pc != 0x245574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245A00_0x245a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245574u; }
        if (ctx->pc != 0x245574u) { return; }
    }
    ctx->pc = 0x245574u;
label_245574:
    // 0x245574: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x245574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_245578:
    // 0x245578: 0x3e00008  jr          $ra
label_24557c:
    if (ctx->pc == 0x24557Cu) {
        ctx->pc = 0x24557Cu;
            // 0x24557c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x245580u;
        goto label_245580;
    }
    ctx->pc = 0x245578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24557Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245578u;
            // 0x24557c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x245580u;
label_245580:
    // 0x245580: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x245580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_245584:
    // 0x245584: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x245584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_245588:
    // 0x245588: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x245588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_24558c:
    // 0x24558c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0
    ctx->pc = 0x24558cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
label_245590:
    // 0x245590: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x245590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_245594:
    // 0x245594: 0x27a300fc  addiu       $v1, $sp, 0xFC
    ctx->pc = 0x245594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
label_245598:
    // 0x245598: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x245598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_24559c:
    // 0x24559c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x24559cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2455a0:
    // 0x2455a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2455a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2455a4:
    // 0x2455a4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2455a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2455a8:
    // 0x2455a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2455a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2455ac:
    // 0x2455ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2455acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2455b0:
    // 0x2455b0: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x2455b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2455b4:
    // 0x2455b4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2455b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2455b8:
    // 0x2455b8: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2455b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2455bc:
    // 0x2455bc: 0xa3a200fc  sb          $v0, 0xFC($sp)
    ctx->pc = 0x2455bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 252), (uint8_t)GPR_U32(ctx, 2));
label_2455c0:
    // 0x2455c0: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2455c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2455c4:
    // 0x2455c4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2455c8:
    if (ctx->pc == 0x2455C8u) {
        ctx->pc = 0x2455C8u;
            // 0x2455c8: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2455CCu;
        goto label_2455cc;
    }
    ctx->pc = 0x2455C4u;
    {
        const bool branch_taken_0x2455c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2455C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2455C4u;
            // 0x2455c8: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2455c4) {
            ctx->pc = 0x2455F8u;
            goto label_2455f8;
        }
    }
    ctx->pc = 0x2455CCu;
label_2455cc:
    // 0x2455cc: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2455ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2455d0:
    // 0x2455d0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2455d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2455d4:
    // 0x2455d4: 0x2442cef8  addiu       $v0, $v0, -0x3108
    ctx->pc = 0x2455d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954744));
label_2455d8:
    // 0x2455d8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2455d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2455dc:
    // 0x2455dc: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2455dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_2455e0:
    // 0x2455e0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2455e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_2455e4:
    // 0x2455e4: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2455e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_2455e8:
    // 0x2455e8: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x2455e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_2455ec:
    // 0x2455ec: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2455ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_2455f0:
    // 0x2455f0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2455f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_2455f4:
    // 0x2455f4: 0x0  nop
    ctx->pc = 0x2455f4u;
    // NOP
label_2455f8:
    // 0x2455f8: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x2455f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2455fc:
    // 0x2455fc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2455fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_245600:
    // 0x245600: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x245600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_245604:
    // 0x245604: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x245604u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_245608:
    // 0x245608: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x245608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_24560c:
    // 0x24560c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x24560cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_245610:
    // 0x245610: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x245610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_245614:
    // 0x245614: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x245614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_245618:
    // 0x245618: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x245618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
label_24561c:
    // 0x24561c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x24561cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_245620:
    // 0x245620: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x245620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_245624:
    // 0x245624: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x245624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_245628:
    // 0x245628: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x245628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_24562c:
    // 0x24562c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x24562cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_245630:
    // 0x245630: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x245630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_245634:
    // 0x245634: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x245634u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_245638:
    // 0x245638: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x245638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24563c:
    // 0x24563c: 0xc4a20040  lwc1        $f2, 0x40($a1)
    ctx->pc = 0x24563cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_245640:
    // 0x245640: 0xc4a10050  lwc1        $f1, 0x50($a1)
    ctx->pc = 0x245640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_245644:
    // 0x245644: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x245644u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_245648:
    // 0x245648: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x245648u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_24564c:
    // 0x24564c: 0xc4a20044  lwc1        $f2, 0x44($a1)
    ctx->pc = 0x24564cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_245650:
    // 0x245650: 0xc4a10054  lwc1        $f1, 0x54($a1)
    ctx->pc = 0x245650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_245654:
    // 0x245654: 0xc7a80070  lwc1        $f8, 0x70($sp)
    ctx->pc = 0x245654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_245658:
    // 0x245658: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x245658u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_24565c:
    // 0x24565c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x24565cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_245660:
    // 0x245660: 0xc4a20048  lwc1        $f2, 0x48($a1)
    ctx->pc = 0x245660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_245664:
    // 0x245664: 0xc4a10058  lwc1        $f1, 0x58($a1)
    ctx->pc = 0x245664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_245668:
    // 0x245668: 0xc7a70074  lwc1        $f7, 0x74($sp)
    ctx->pc = 0x245668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_24566c:
    // 0x24566c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x24566cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_245670:
    // 0x245670: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x245670u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_245674:
    // 0x245674: 0xc4a2004c  lwc1        $f2, 0x4C($a1)
    ctx->pc = 0x245674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_245678:
    // 0x245678: 0xc4a1005c  lwc1        $f1, 0x5C($a1)
    ctx->pc = 0x245678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24567c:
    // 0x24567c: 0xc7a60078  lwc1        $f6, 0x78($sp)
    ctx->pc = 0x24567cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_245680:
    // 0x245680: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x245680u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_245684:
    // 0x245684: 0xe7a1007c  swc1        $f1, 0x7C($sp)
    ctx->pc = 0x245684u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_245688:
    // 0x245688: 0xc4c20050  lwc1        $f2, 0x50($a2)
    ctx->pc = 0x245688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24568c:
    // 0x24568c: 0xc4c10040  lwc1        $f1, 0x40($a2)
    ctx->pc = 0x24568cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_245690:
    // 0x245690: 0xc7a4007c  lwc1        $f4, 0x7C($sp)
    ctx->pc = 0x245690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_245694:
    // 0x245694: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x245694u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_245698:
    // 0x245698: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x245698u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_24569c:
    // 0x24569c: 0xc4c30054  lwc1        $f3, 0x54($a2)
    ctx->pc = 0x24569cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2456a0:
    // 0x2456a0: 0xc4c10044  lwc1        $f1, 0x44($a2)
    ctx->pc = 0x2456a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2456a4:
    // 0x2456a4: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x2456a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2456a8:
    // 0x2456a8: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x2456a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_2456ac:
    // 0x2456ac: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x2456acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_2456b0:
    // 0x2456b0: 0xc4c30058  lwc1        $f3, 0x58($a2)
    ctx->pc = 0x2456b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2456b4:
    // 0x2456b4: 0xc4c10048  lwc1        $f1, 0x48($a2)
    ctx->pc = 0x2456b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2456b8:
    // 0x2456b8: 0xc7a50064  lwc1        $f5, 0x64($sp)
    ctx->pc = 0x2456b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2456bc:
    // 0x2456bc: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x2456bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_2456c0:
    // 0x2456c0: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x2456c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_2456c4:
    // 0x2456c4: 0xc4c9005c  lwc1        $f9, 0x5C($a2)
    ctx->pc = 0x2456c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_2456c8:
    // 0x2456c8: 0xc4c1004c  lwc1        $f1, 0x4C($a2)
    ctx->pc = 0x2456c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2456cc:
    // 0x2456cc: 0xc7a30068  lwc1        $f3, 0x68($sp)
    ctx->pc = 0x2456ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2456d0:
    // 0x2456d0: 0x46014841  sub.s       $f1, $f9, $f1
    ctx->pc = 0x2456d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[9], ctx->f[1]);
label_2456d4:
    // 0x2456d4: 0xe7a1006c  swc1        $f1, 0x6C($sp)
    ctx->pc = 0x2456d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_2456d8:
    // 0x2456d8: 0xc4aa005c  lwc1        $f10, 0x5C($a1)
    ctx->pc = 0x2456d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_2456dc:
    // 0x2456dc: 0xc4c9005c  lwc1        $f9, 0x5C($a2)
    ctx->pc = 0x2456dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_2456e0:
    // 0x2456e0: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x2456e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2456e4:
    // 0x2456e4: 0x460a0282  mul.s       $f10, $f0, $f10
    ctx->pc = 0x2456e4u;
    ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
label_2456e8:
    // 0x2456e8: 0x46090242  mul.s       $f9, $f0, $f9
    ctx->pc = 0x2456e8u;
    ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
label_2456ec:
    // 0x2456ec: 0x46085002  mul.s       $f0, $f10, $f8
    ctx->pc = 0x2456ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[8]);
label_2456f0:
    // 0x2456f0: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2456f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_2456f4:
    // 0x2456f4: 0x46075002  mul.s       $f0, $f10, $f7
    ctx->pc = 0x2456f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[7]);
label_2456f8:
    // 0x2456f8: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x2456f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_2456fc:
    // 0x2456fc: 0x46065002  mul.s       $f0, $f10, $f6
    ctx->pc = 0x2456fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
label_245700:
    // 0x245700: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x245700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_245704:
    // 0x245704: 0x46045002  mul.s       $f0, $f10, $f4
    ctx->pc = 0x245704u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
label_245708:
    // 0x245708: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x245708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_24570c:
    // 0x24570c: 0x46024802  mul.s       $f0, $f9, $f2
    ctx->pc = 0x24570cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
label_245710:
    // 0x245710: 0xc7a700e0  lwc1        $f7, 0xE0($sp)
    ctx->pc = 0x245710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_245714:
    // 0x245714: 0xc7a600e4  lwc1        $f6, 0xE4($sp)
    ctx->pc = 0x245714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_245718:
    // 0x245718: 0xc7a400e8  lwc1        $f4, 0xE8($sp)
    ctx->pc = 0x245718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_24571c:
    // 0x24571c: 0xc7a200ec  lwc1        $f2, 0xEC($sp)
    ctx->pc = 0x24571cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_245720:
    // 0x245720: 0x46003800  add.s       $f0, $f7, $f0
    ctx->pc = 0x245720u;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
label_245724:
    // 0x245724: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x245724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_245728:
    // 0x245728: 0x46054802  mul.s       $f0, $f9, $f5
    ctx->pc = 0x245728u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[5]);
label_24572c:
    // 0x24572c: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x24572cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_245730:
    // 0x245730: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x245730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_245734:
    // 0x245734: 0x46034802  mul.s       $f0, $f9, $f3
    ctx->pc = 0x245734u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[3]);
label_245738:
    // 0x245738: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x245738u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_24573c:
    // 0x24573c: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x24573cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_245740:
    // 0x245740: 0x46014802  mul.s       $f0, $f9, $f1
    ctx->pc = 0x245740u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
label_245744:
    // 0x245744: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x245744u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_245748:
    // 0x245748: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x245748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_24574c:
    // 0x24574c: 0xc4a3009c  lwc1        $f3, 0x9C($a1)
    ctx->pc = 0x24574cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_245750:
    // 0x245750: 0xc4c1009c  lwc1        $f1, 0x9C($a2)
    ctx->pc = 0x245750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_245754:
    // 0x245754: 0xc4a200a0  lwc1        $f2, 0xA0($a1)
    ctx->pc = 0x245754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_245758:
    // 0x245758: 0xc4c000a0  lwc1        $f0, 0xA0($a2)
    ctx->pc = 0x245758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24575c:
    // 0x24575c: 0x460350c2  mul.s       $f3, $f10, $f3
    ctx->pc = 0x24575cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
label_245760:
    // 0x245760: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x245760u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
label_245764:
    // 0x245764: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x245764u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_245768:
    // 0x245768: 0x4601001c  madd.s      $f0, $f0, $f1
    ctx->pc = 0x245768u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
label_24576c:
    // 0x24576c: 0xc0a45a0  jal         func_291680
label_245770:
    if (ctx->pc == 0x245770u) {
        ctx->pc = 0x245770u;
            // 0x245770: 0xe7a000ec  swc1        $f0, 0xEC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
        ctx->pc = 0x245774u;
        goto label_245774;
    }
    ctx->pc = 0x24576Cu;
    SET_GPR_U32(ctx, 31, 0x245774u);
    ctx->pc = 0x245770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24576Cu;
            // 0x245770: 0xe7a000ec  swc1        $f0, 0xEC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x291680u;
    if (runtime->hasFunction(0x291680u)) {
        auto targetFn = runtime->lookupFunction(0x291680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245774u; }
        if (ctx->pc != 0x245774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291680_0x291680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245774u; }
        if (ctx->pc != 0x245774u) { return; }
    }
    ctx->pc = 0x245774u;
label_245774:
    // 0x245774: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x245774u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_245778:
    // 0x245778: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x245778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_24577c:
    // 0x24577c: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x24577cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_245780:
    // 0x245780: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x245780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_245784:
    // 0x245784: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x245784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_245788:
    // 0x245788: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x245788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24578c:
    // 0x24578c: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x24578cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_245790:
    // 0x245790: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x245790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_245794:
    // 0x245794: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x245794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_245798:
    // 0x245798: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x245798u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_24579c:
    // 0x24579c: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x24579cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2457a0:
    // 0x2457a0: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x2457a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_2457a4:
    // 0x2457a4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_2457a8:
    if (ctx->pc == 0x2457A8u) {
        ctx->pc = 0x2457ACu;
        goto label_2457ac;
    }
    ctx->pc = 0x2457A4u;
    {
        const bool branch_taken_0x2457a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2457a4) {
            ctx->pc = 0x2457B8u;
            goto label_2457b8;
        }
    }
    ctx->pc = 0x2457ACu;
label_2457ac:
    // 0x2457ac: 0x10000006  b           . + 4 + (0x6 << 2)
label_2457b0:
    if (ctx->pc == 0x2457B0u) {
        ctx->pc = 0x2457B0u;
            // 0x2457b0: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x2457B4u;
        goto label_2457b4;
    }
    ctx->pc = 0x2457ACu;
    {
        const bool branch_taken_0x2457ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2457B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2457ACu;
            // 0x2457b0: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2457ac) {
            ctx->pc = 0x2457C8u;
            goto label_2457c8;
        }
    }
    ctx->pc = 0x2457B4u;
label_2457b4:
    // 0x2457b4: 0x0  nop
    ctx->pc = 0x2457b4u;
    // NOP
label_2457b8:
    // 0x2457b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2457b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2457bc:
    // 0x2457bc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2457bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2457c0:
    // 0x2457c0: 0x320f809  jalr        $t9
label_2457c4:
    if (ctx->pc == 0x2457C4u) {
        ctx->pc = 0x2457C8u;
        goto label_2457c8;
    }
    ctx->pc = 0x2457C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2457C8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2457C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2457C8u; }
            if (ctx->pc != 0x2457C8u) { return; }
        }
        }
    }
    ctx->pc = 0x2457C8u;
label_2457c8:
    // 0x2457c8: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x2457c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_2457cc:
    // 0x2457cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2457ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2457d0:
    // 0x2457d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2457d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2457d4:
    // 0x2457d4: 0x10000018  b           . + 4 + (0x18 << 2)
label_2457d8:
    if (ctx->pc == 0x2457D8u) {
        ctx->pc = 0x2457D8u;
            // 0x2457d8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2457DCu;
        goto label_2457dc;
    }
    ctx->pc = 0x2457D4u;
    {
        const bool branch_taken_0x2457d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2457D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2457D4u;
            // 0x2457d8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2457d4) {
            ctx->pc = 0x245838u;
            goto label_245838;
        }
    }
    ctx->pc = 0x2457DCu;
label_2457dc:
    // 0x2457dc: 0x0  nop
    ctx->pc = 0x2457dcu;
    // NOP
label_2457e0:
    // 0x2457e0: 0x2cc10100  sltiu       $at, $a2, 0x100
    ctx->pc = 0x2457e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_2457e4:
    // 0x2457e4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_2457e8:
    if (ctx->pc == 0x2457E8u) {
        ctx->pc = 0x2457E8u;
            // 0x2457e8: 0x61942  srl         $v1, $a2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
        ctx->pc = 0x2457ECu;
        goto label_2457ec;
    }
    ctx->pc = 0x2457E4u;
    {
        const bool branch_taken_0x2457e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2457E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2457E4u;
            // 0x2457e8: 0x61942  srl         $v1, $a2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2457e4) {
            ctx->pc = 0x245808u;
            goto label_245808;
        }
    }
    ctx->pc = 0x2457ECu;
label_2457ec:
    // 0x2457ec: 0x30c2001f  andi        $v0, $a2, 0x1F
    ctx->pc = 0x2457ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
label_2457f0:
    // 0x2457f0: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x2457f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2457f4:
    // 0x2457f4: 0x441804  sllv        $v1, $a0, $v0
    ctx->pc = 0x2457f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_2457f8:
    // 0x2457f8: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x2457f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_2457fc:
    // 0x2457fc: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x2457fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_245800:
    // 0x245800: 0x10000003  b           . + 4 + (0x3 << 2)
label_245804:
    if (ctx->pc == 0x245804u) {
        ctx->pc = 0x245804u;
            // 0x245804: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->pc = 0x245808u;
        goto label_245808;
    }
    ctx->pc = 0x245800u;
    {
        const bool branch_taken_0x245800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245800u;
            // 0x245804: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245800) {
            ctx->pc = 0x245810u;
            goto label_245810;
        }
    }
    ctx->pc = 0x245808u;
label_245808:
    // 0x245808: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x245808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24580c:
    // 0x24580c: 0x0  nop
    ctx->pc = 0x24580cu;
    // NOP
label_245810:
    // 0x245810: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_245814:
    if (ctx->pc == 0x245814u) {
        ctx->pc = 0x245818u;
        goto label_245818;
    }
    ctx->pc = 0x245810u;
    {
        const bool branch_taken_0x245810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245810) {
            ctx->pc = 0x245830u;
            goto label_245830;
        }
    }
    ctx->pc = 0x245818u;
label_245818:
    // 0x245818: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x245818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_24581c:
    // 0x24581c: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x24581cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_245820:
    // 0x245820: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x245820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_245824:
    // 0x245824: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x245824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_245828:
    // 0x245828: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x245828u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_24582c:
    // 0x24582c: 0x0  nop
    ctx->pc = 0x24582cu;
    // NOP
label_245830:
    // 0x245830: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x245830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_245834:
    // 0x245834: 0x0  nop
    ctx->pc = 0x245834u;
    // NOP
label_245838:
    // 0x245838: 0xd0102a  slt         $v0, $a2, $s0
    ctx->pc = 0x245838u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_24583c:
    // 0x24583c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_245840:
    if (ctx->pc == 0x245840u) {
        ctx->pc = 0x245844u;
        goto label_245844;
    }
    ctx->pc = 0x24583Cu;
    {
        const bool branch_taken_0x24583c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24583c) {
            ctx->pc = 0x2457E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2457e0;
        }
    }
    ctx->pc = 0x245844u;
label_245844:
    // 0x245844: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x245844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_245848:
    // 0x245848: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x245848u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_24584c:
    // 0x24584c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x24584cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_245850:
    // 0x245850: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x245850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_245854:
    // 0x245854: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x245854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_245858:
    // 0x245858: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x245858u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_24585c:
    // 0x24585c: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x24585cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_245860:
    // 0x245860: 0x8fa800f0  lw          $t0, 0xF0($sp)
    ctx->pc = 0x245860u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_245864:
    // 0x245864: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
label_245868:
    if (ctx->pc == 0x245868u) {
        ctx->pc = 0x245868u;
            // 0x245868: 0x2622821  addu        $a1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->pc = 0x24586Cu;
        goto label_24586c;
    }
    ctx->pc = 0x245864u;
    {
        const bool branch_taken_0x245864 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x245868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245864u;
            // 0x245868: 0x2622821  addu        $a1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245864) {
            ctx->pc = 0x245870u;
            goto label_245870;
        }
    }
    ctx->pc = 0x24586Cu;
label_24586c:
    // 0x24586c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x24586cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_245870:
    // 0x245870: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x245870u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_245874:
    // 0x245874: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x245874u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_245878:
    // 0x245878: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x245878u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24587c:
    // 0x24587c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24587cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_245880:
    // 0x245880: 0xc091cc4  jal         func_247310
label_245884:
    if (ctx->pc == 0x245884u) {
        ctx->pc = 0x245884u;
            // 0x245884: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x245888u;
        goto label_245888;
    }
    ctx->pc = 0x245880u;
    SET_GPR_U32(ctx, 31, 0x245888u);
    ctx->pc = 0x245884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245880u;
            // 0x245884: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x247310u;
    if (runtime->hasFunction(0x247310u)) {
        auto targetFn = runtime->lookupFunction(0x247310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245888u; }
        if (ctx->pc != 0x245888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00247310_0x247310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245888u; }
        if (ctx->pc != 0x245888u) { return; }
    }
    ctx->pc = 0x245888u;
label_245888:
    // 0x245888: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x245888u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_24588c:
    // 0x24588c: 0x27a300f8  addiu       $v1, $sp, 0xF8
    ctx->pc = 0x24588cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_245890:
    // 0x245890: 0x24a5ea60  addiu       $a1, $a1, -0x15A0
    ctx->pc = 0x245890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
label_245894:
    // 0x245894: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x245894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_245898:
    // 0x245898: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x245898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_24589c:
    // 0x24589c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x24589cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2458a0:
    // 0x2458a0: 0xa3a200f8  sb          $v0, 0xF8($sp)
    ctx->pc = 0x2458a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 248), (uint8_t)GPR_U32(ctx, 2));
label_2458a4:
    // 0x2458a4: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2458a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2458a8:
    // 0x2458a8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2458ac:
    if (ctx->pc == 0x2458ACu) {
        ctx->pc = 0x2458B0u;
        goto label_2458b0;
    }
    ctx->pc = 0x2458A8u;
    {
        const bool branch_taken_0x2458a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2458a8) {
            ctx->pc = 0x2458D8u;
            goto label_2458d8;
        }
    }
    ctx->pc = 0x2458B0u;
label_2458b0:
    // 0x2458b0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2458b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2458b4:
    // 0x2458b4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2458b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2458b8:
    // 0x2458b8: 0x2442cf00  addiu       $v0, $v0, -0x3100
    ctx->pc = 0x2458b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954752));
label_2458bc:
    // 0x2458bc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2458bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2458c0:
    // 0x2458c0: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2458c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_2458c4:
    // 0x2458c4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2458c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_2458c8:
    // 0x2458c8: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2458c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_2458cc:
    // 0x2458cc: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x2458ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_2458d0:
    // 0x2458d0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2458d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_2458d4:
    // 0x2458d4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2458d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_2458d8:
    // 0x2458d8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2458d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_2458dc:
    // 0x2458dc: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x2458dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_2458e0:
    // 0x2458e0: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2458e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_2458e4:
    // 0x2458e4: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x2458e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_2458e8:
    // 0x2458e8: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2458e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2458ec:
    // 0x2458ec: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
label_2458f0:
    if (ctx->pc == 0x2458F0u) {
        ctx->pc = 0x2458F0u;
            // 0x2458f0: 0x26700010  addiu       $s0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x2458F4u;
        goto label_2458f4;
    }
    ctx->pc = 0x2458ECu;
    {
        const bool branch_taken_0x2458ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2458F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2458ECu;
            // 0x2458f0: 0x26700010  addiu       $s0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2458ec) {
            ctx->pc = 0x245908u;
            goto label_245908;
        }
    }
    ctx->pc = 0x2458F4u;
label_2458f4:
    // 0x2458f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2458f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2458f8:
    // 0x2458f8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2458f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2458fc:
    // 0x2458fc: 0x320f809  jalr        $t9
label_245900:
    if (ctx->pc == 0x245900u) {
        ctx->pc = 0x245904u;
        goto label_245904;
    }
    ctx->pc = 0x2458FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x245904u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x245904u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x245904u; }
            if (ctx->pc != 0x245904u) { return; }
        }
        }
    }
    ctx->pc = 0x245904u;
label_245904:
    // 0x245904: 0x0  nop
    ctx->pc = 0x245904u;
    // NOP
label_245908:
    // 0x245908: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x245908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24590c:
    // 0x24590c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x24590cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_245910:
    // 0x245910: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x245910u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_245914:
    // 0x245914: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x245914u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_245918:
    // 0x245918: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x245918u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24591c:
    // 0x24591c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24591cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_245920:
    // 0x245920: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x245920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_245924:
    // 0x245924: 0x3e00008  jr          $ra
label_245928:
    if (ctx->pc == 0x245928u) {
        ctx->pc = 0x245928u;
            // 0x245928: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x24592Cu;
        goto label_24592c;
    }
    ctx->pc = 0x245924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245924u;
            // 0x245928: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24592Cu;
label_24592c:
    // 0x24592c: 0x0  nop
    ctx->pc = 0x24592cu;
    // NOP
label_245930:
    // 0x245930: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x245930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_245934:
    // 0x245934: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x245934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_245938:
    // 0x245938: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x245938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_24593c:
    // 0x24593c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x24593cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_245940:
    // 0x245940: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x245940u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_245944:
    // 0x245944: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x245944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_245948:
    // 0x245948: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x245948u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_24594c:
    // 0x24594c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24594cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_245950:
    // 0x245950: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x245950u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_245954:
    // 0x245954: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x245954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_245958:
    // 0x245958: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x245958u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_24595c:
    // 0x24595c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24595cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_245960:
    // 0x245960: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x245960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_245964:
    // 0x245964: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x245964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_245968:
    // 0x245968: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x245968u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24596c:
    // 0x24596c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x24596cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_245970:
    // 0x245970: 0x320f809  jalr        $t9
label_245974:
    if (ctx->pc == 0x245974u) {
        ctx->pc = 0x245974u;
            // 0x245974: 0x140802d  daddu       $s0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x245978u;
        goto label_245978;
    }
    ctx->pc = 0x245970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x245978u);
        ctx->pc = 0x245974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245970u;
            // 0x245974: 0x140802d  daddu       $s0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x245978u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x245978u; }
            if (ctx->pc != 0x245978u) { return; }
        }
        }
    }
    ctx->pc = 0x245978u;
label_245978:
    // 0x245978: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x245978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_24597c:
    // 0x24597c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x24597cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_245980:
    // 0x245980: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x245980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_245984:
    // 0x245984: 0xafb40070  sw          $s4, 0x70($sp)
    ctx->pc = 0x245984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 20));
label_245988:
    // 0x245988: 0xafb30074  sw          $s3, 0x74($sp)
    ctx->pc = 0x245988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 19));
label_24598c:
    // 0x24598c: 0xafb2007c  sw          $s2, 0x7C($sp)
    ctx->pc = 0x24598cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 18));
label_245990:
    // 0x245990: 0xafb10080  sw          $s1, 0x80($sp)
    ctx->pc = 0x245990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 17));
label_245994:
    // 0x245994: 0xc091c60  jal         func_247180
label_245998:
    if (ctx->pc == 0x245998u) {
        ctx->pc = 0x245998u;
            // 0x245998: 0xafb00084  sw          $s0, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 16));
        ctx->pc = 0x24599Cu;
        goto label_24599c;
    }
    ctx->pc = 0x245994u;
    SET_GPR_U32(ctx, 31, 0x24599Cu);
    ctx->pc = 0x245998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245994u;
            // 0x245998: 0xafb00084  sw          $s0, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x247180u;
    if (runtime->hasFunction(0x247180u)) {
        auto targetFn = runtime->lookupFunction(0x247180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24599Cu; }
        if (ctx->pc != 0x24599Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00247180_0x247180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24599Cu; }
        if (ctx->pc != 0x24599Cu) { return; }
    }
    ctx->pc = 0x24599Cu;
label_24599c:
    // 0x24599c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x24599cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2459a0:
    // 0x2459a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2459a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2459a4:
    // 0x2459a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2459a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2459a8:
    // 0x2459a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2459a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2459ac:
    // 0x2459ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2459acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2459b0:
    // 0x2459b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2459b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2459b4:
    // 0x2459b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2459b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2459b8:
    // 0x2459b8: 0x3e00008  jr          $ra
label_2459bc:
    if (ctx->pc == 0x2459BCu) {
        ctx->pc = 0x2459BCu;
            // 0x2459bc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x2459C0u;
        goto label_2459c0;
    }
    ctx->pc = 0x2459B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2459BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2459B8u;
            // 0x2459bc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2459C0u;
label_2459c0:
    // 0x2459c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2459c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2459c4:
    // 0x2459c4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2459c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2459c8:
    // 0x2459c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2459c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2459cc:
    // 0x2459cc: 0xc091720  jal         func_245C80
label_2459d0:
    if (ctx->pc == 0x2459D0u) {
        ctx->pc = 0x2459D0u;
            // 0x2459d0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2459D4u;
        goto label_2459d4;
    }
    ctx->pc = 0x2459CCu;
    SET_GPR_U32(ctx, 31, 0x2459D4u);
    ctx->pc = 0x2459D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2459CCu;
            // 0x2459d0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245C80u;
    if (runtime->hasFunction(0x245C80u)) {
        auto targetFn = runtime->lookupFunction(0x245C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2459D4u; }
        if (ctx->pc != 0x2459D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245C80_0x245c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2459D4u; }
        if (ctx->pc != 0x2459D4u) { return; }
    }
    ctx->pc = 0x2459D4u;
label_2459d4:
    // 0x2459d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2459d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2459d8:
    // 0x2459d8: 0x3e00008  jr          $ra
label_2459dc:
    if (ctx->pc == 0x2459DCu) {
        ctx->pc = 0x2459DCu;
            // 0x2459dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2459E0u;
        goto label_2459e0;
    }
    ctx->pc = 0x2459D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2459DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2459D8u;
            // 0x2459dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2459E0u;
label_2459e0:
    // 0x2459e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2459e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2459e4:
    // 0x2459e4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2459e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2459e8:
    // 0x2459e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2459e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2459ec:
    // 0x2459ec: 0xc091780  jal         func_245E00
label_2459f0:
    if (ctx->pc == 0x2459F0u) {
        ctx->pc = 0x2459F0u;
            // 0x2459f0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2459F4u;
        goto label_2459f4;
    }
    ctx->pc = 0x2459ECu;
    SET_GPR_U32(ctx, 31, 0x2459F4u);
    ctx->pc = 0x2459F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2459ECu;
            // 0x2459f0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245E00u;
    if (runtime->hasFunction(0x245E00u)) {
        auto targetFn = runtime->lookupFunction(0x245E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2459F4u; }
        if (ctx->pc != 0x2459F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245E00_0x245e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2459F4u; }
        if (ctx->pc != 0x2459F4u) { return; }
    }
    ctx->pc = 0x2459F4u;
label_2459f4:
    // 0x2459f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2459f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2459f8:
    // 0x2459f8: 0x3e00008  jr          $ra
label_2459fc:
    if (ctx->pc == 0x2459FCu) {
        ctx->pc = 0x2459FCu;
            // 0x2459fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x245A00u;
        goto label_fallthrough_0x2459f8;
    }
    ctx->pc = 0x2459F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2459FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2459F8u;
            // 0x2459fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2459f8:
    ctx->pc = 0x245A00u;
}
