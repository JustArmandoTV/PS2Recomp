#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00566540
// Address: 0x566540 - 0x566960
void sub_00566540_0x566540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00566540_0x566540");
#endif

    switch (ctx->pc) {
        case 0x566540u: goto label_566540;
        case 0x566544u: goto label_566544;
        case 0x566548u: goto label_566548;
        case 0x56654cu: goto label_56654c;
        case 0x566550u: goto label_566550;
        case 0x566554u: goto label_566554;
        case 0x566558u: goto label_566558;
        case 0x56655cu: goto label_56655c;
        case 0x566560u: goto label_566560;
        case 0x566564u: goto label_566564;
        case 0x566568u: goto label_566568;
        case 0x56656cu: goto label_56656c;
        case 0x566570u: goto label_566570;
        case 0x566574u: goto label_566574;
        case 0x566578u: goto label_566578;
        case 0x56657cu: goto label_56657c;
        case 0x566580u: goto label_566580;
        case 0x566584u: goto label_566584;
        case 0x566588u: goto label_566588;
        case 0x56658cu: goto label_56658c;
        case 0x566590u: goto label_566590;
        case 0x566594u: goto label_566594;
        case 0x566598u: goto label_566598;
        case 0x56659cu: goto label_56659c;
        case 0x5665a0u: goto label_5665a0;
        case 0x5665a4u: goto label_5665a4;
        case 0x5665a8u: goto label_5665a8;
        case 0x5665acu: goto label_5665ac;
        case 0x5665b0u: goto label_5665b0;
        case 0x5665b4u: goto label_5665b4;
        case 0x5665b8u: goto label_5665b8;
        case 0x5665bcu: goto label_5665bc;
        case 0x5665c0u: goto label_5665c0;
        case 0x5665c4u: goto label_5665c4;
        case 0x5665c8u: goto label_5665c8;
        case 0x5665ccu: goto label_5665cc;
        case 0x5665d0u: goto label_5665d0;
        case 0x5665d4u: goto label_5665d4;
        case 0x5665d8u: goto label_5665d8;
        case 0x5665dcu: goto label_5665dc;
        case 0x5665e0u: goto label_5665e0;
        case 0x5665e4u: goto label_5665e4;
        case 0x5665e8u: goto label_5665e8;
        case 0x5665ecu: goto label_5665ec;
        case 0x5665f0u: goto label_5665f0;
        case 0x5665f4u: goto label_5665f4;
        case 0x5665f8u: goto label_5665f8;
        case 0x5665fcu: goto label_5665fc;
        case 0x566600u: goto label_566600;
        case 0x566604u: goto label_566604;
        case 0x566608u: goto label_566608;
        case 0x56660cu: goto label_56660c;
        case 0x566610u: goto label_566610;
        case 0x566614u: goto label_566614;
        case 0x566618u: goto label_566618;
        case 0x56661cu: goto label_56661c;
        case 0x566620u: goto label_566620;
        case 0x566624u: goto label_566624;
        case 0x566628u: goto label_566628;
        case 0x56662cu: goto label_56662c;
        case 0x566630u: goto label_566630;
        case 0x566634u: goto label_566634;
        case 0x566638u: goto label_566638;
        case 0x56663cu: goto label_56663c;
        case 0x566640u: goto label_566640;
        case 0x566644u: goto label_566644;
        case 0x566648u: goto label_566648;
        case 0x56664cu: goto label_56664c;
        case 0x566650u: goto label_566650;
        case 0x566654u: goto label_566654;
        case 0x566658u: goto label_566658;
        case 0x56665cu: goto label_56665c;
        case 0x566660u: goto label_566660;
        case 0x566664u: goto label_566664;
        case 0x566668u: goto label_566668;
        case 0x56666cu: goto label_56666c;
        case 0x566670u: goto label_566670;
        case 0x566674u: goto label_566674;
        case 0x566678u: goto label_566678;
        case 0x56667cu: goto label_56667c;
        case 0x566680u: goto label_566680;
        case 0x566684u: goto label_566684;
        case 0x566688u: goto label_566688;
        case 0x56668cu: goto label_56668c;
        case 0x566690u: goto label_566690;
        case 0x566694u: goto label_566694;
        case 0x566698u: goto label_566698;
        case 0x56669cu: goto label_56669c;
        case 0x5666a0u: goto label_5666a0;
        case 0x5666a4u: goto label_5666a4;
        case 0x5666a8u: goto label_5666a8;
        case 0x5666acu: goto label_5666ac;
        case 0x5666b0u: goto label_5666b0;
        case 0x5666b4u: goto label_5666b4;
        case 0x5666b8u: goto label_5666b8;
        case 0x5666bcu: goto label_5666bc;
        case 0x5666c0u: goto label_5666c0;
        case 0x5666c4u: goto label_5666c4;
        case 0x5666c8u: goto label_5666c8;
        case 0x5666ccu: goto label_5666cc;
        case 0x5666d0u: goto label_5666d0;
        case 0x5666d4u: goto label_5666d4;
        case 0x5666d8u: goto label_5666d8;
        case 0x5666dcu: goto label_5666dc;
        case 0x5666e0u: goto label_5666e0;
        case 0x5666e4u: goto label_5666e4;
        case 0x5666e8u: goto label_5666e8;
        case 0x5666ecu: goto label_5666ec;
        case 0x5666f0u: goto label_5666f0;
        case 0x5666f4u: goto label_5666f4;
        case 0x5666f8u: goto label_5666f8;
        case 0x5666fcu: goto label_5666fc;
        case 0x566700u: goto label_566700;
        case 0x566704u: goto label_566704;
        case 0x566708u: goto label_566708;
        case 0x56670cu: goto label_56670c;
        case 0x566710u: goto label_566710;
        case 0x566714u: goto label_566714;
        case 0x566718u: goto label_566718;
        case 0x56671cu: goto label_56671c;
        case 0x566720u: goto label_566720;
        case 0x566724u: goto label_566724;
        case 0x566728u: goto label_566728;
        case 0x56672cu: goto label_56672c;
        case 0x566730u: goto label_566730;
        case 0x566734u: goto label_566734;
        case 0x566738u: goto label_566738;
        case 0x56673cu: goto label_56673c;
        case 0x566740u: goto label_566740;
        case 0x566744u: goto label_566744;
        case 0x566748u: goto label_566748;
        case 0x56674cu: goto label_56674c;
        case 0x566750u: goto label_566750;
        case 0x566754u: goto label_566754;
        case 0x566758u: goto label_566758;
        case 0x56675cu: goto label_56675c;
        case 0x566760u: goto label_566760;
        case 0x566764u: goto label_566764;
        case 0x566768u: goto label_566768;
        case 0x56676cu: goto label_56676c;
        case 0x566770u: goto label_566770;
        case 0x566774u: goto label_566774;
        case 0x566778u: goto label_566778;
        case 0x56677cu: goto label_56677c;
        case 0x566780u: goto label_566780;
        case 0x566784u: goto label_566784;
        case 0x566788u: goto label_566788;
        case 0x56678cu: goto label_56678c;
        case 0x566790u: goto label_566790;
        case 0x566794u: goto label_566794;
        case 0x566798u: goto label_566798;
        case 0x56679cu: goto label_56679c;
        case 0x5667a0u: goto label_5667a0;
        case 0x5667a4u: goto label_5667a4;
        case 0x5667a8u: goto label_5667a8;
        case 0x5667acu: goto label_5667ac;
        case 0x5667b0u: goto label_5667b0;
        case 0x5667b4u: goto label_5667b4;
        case 0x5667b8u: goto label_5667b8;
        case 0x5667bcu: goto label_5667bc;
        case 0x5667c0u: goto label_5667c0;
        case 0x5667c4u: goto label_5667c4;
        case 0x5667c8u: goto label_5667c8;
        case 0x5667ccu: goto label_5667cc;
        case 0x5667d0u: goto label_5667d0;
        case 0x5667d4u: goto label_5667d4;
        case 0x5667d8u: goto label_5667d8;
        case 0x5667dcu: goto label_5667dc;
        case 0x5667e0u: goto label_5667e0;
        case 0x5667e4u: goto label_5667e4;
        case 0x5667e8u: goto label_5667e8;
        case 0x5667ecu: goto label_5667ec;
        case 0x5667f0u: goto label_5667f0;
        case 0x5667f4u: goto label_5667f4;
        case 0x5667f8u: goto label_5667f8;
        case 0x5667fcu: goto label_5667fc;
        case 0x566800u: goto label_566800;
        case 0x566804u: goto label_566804;
        case 0x566808u: goto label_566808;
        case 0x56680cu: goto label_56680c;
        case 0x566810u: goto label_566810;
        case 0x566814u: goto label_566814;
        case 0x566818u: goto label_566818;
        case 0x56681cu: goto label_56681c;
        case 0x566820u: goto label_566820;
        case 0x566824u: goto label_566824;
        case 0x566828u: goto label_566828;
        case 0x56682cu: goto label_56682c;
        case 0x566830u: goto label_566830;
        case 0x566834u: goto label_566834;
        case 0x566838u: goto label_566838;
        case 0x56683cu: goto label_56683c;
        case 0x566840u: goto label_566840;
        case 0x566844u: goto label_566844;
        case 0x566848u: goto label_566848;
        case 0x56684cu: goto label_56684c;
        case 0x566850u: goto label_566850;
        case 0x566854u: goto label_566854;
        case 0x566858u: goto label_566858;
        case 0x56685cu: goto label_56685c;
        case 0x566860u: goto label_566860;
        case 0x566864u: goto label_566864;
        case 0x566868u: goto label_566868;
        case 0x56686cu: goto label_56686c;
        case 0x566870u: goto label_566870;
        case 0x566874u: goto label_566874;
        case 0x566878u: goto label_566878;
        case 0x56687cu: goto label_56687c;
        case 0x566880u: goto label_566880;
        case 0x566884u: goto label_566884;
        case 0x566888u: goto label_566888;
        case 0x56688cu: goto label_56688c;
        case 0x566890u: goto label_566890;
        case 0x566894u: goto label_566894;
        case 0x566898u: goto label_566898;
        case 0x56689cu: goto label_56689c;
        case 0x5668a0u: goto label_5668a0;
        case 0x5668a4u: goto label_5668a4;
        case 0x5668a8u: goto label_5668a8;
        case 0x5668acu: goto label_5668ac;
        case 0x5668b0u: goto label_5668b0;
        case 0x5668b4u: goto label_5668b4;
        case 0x5668b8u: goto label_5668b8;
        case 0x5668bcu: goto label_5668bc;
        case 0x5668c0u: goto label_5668c0;
        case 0x5668c4u: goto label_5668c4;
        case 0x5668c8u: goto label_5668c8;
        case 0x5668ccu: goto label_5668cc;
        case 0x5668d0u: goto label_5668d0;
        case 0x5668d4u: goto label_5668d4;
        case 0x5668d8u: goto label_5668d8;
        case 0x5668dcu: goto label_5668dc;
        case 0x5668e0u: goto label_5668e0;
        case 0x5668e4u: goto label_5668e4;
        case 0x5668e8u: goto label_5668e8;
        case 0x5668ecu: goto label_5668ec;
        case 0x5668f0u: goto label_5668f0;
        case 0x5668f4u: goto label_5668f4;
        case 0x5668f8u: goto label_5668f8;
        case 0x5668fcu: goto label_5668fc;
        case 0x566900u: goto label_566900;
        case 0x566904u: goto label_566904;
        case 0x566908u: goto label_566908;
        case 0x56690cu: goto label_56690c;
        case 0x566910u: goto label_566910;
        case 0x566914u: goto label_566914;
        case 0x566918u: goto label_566918;
        case 0x56691cu: goto label_56691c;
        case 0x566920u: goto label_566920;
        case 0x566924u: goto label_566924;
        case 0x566928u: goto label_566928;
        case 0x56692cu: goto label_56692c;
        case 0x566930u: goto label_566930;
        case 0x566934u: goto label_566934;
        case 0x566938u: goto label_566938;
        case 0x56693cu: goto label_56693c;
        case 0x566940u: goto label_566940;
        case 0x566944u: goto label_566944;
        case 0x566948u: goto label_566948;
        case 0x56694cu: goto label_56694c;
        case 0x566950u: goto label_566950;
        case 0x566954u: goto label_566954;
        case 0x566958u: goto label_566958;
        case 0x56695cu: goto label_56695c;
        default: break;
    }

    ctx->pc = 0x566540u;

label_566540:
    // 0x566540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x566540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_566544:
    // 0x566544: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x566544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_566548:
    // 0x566548: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x566548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_56654c:
    // 0x56654c: 0x24637f30  addiu       $v1, $v1, 0x7F30
    ctx->pc = 0x56654cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32560));
label_566550:
    // 0x566550: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x566550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_566554:
    // 0x566554: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x566554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_566558:
    // 0x566558: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x566558u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_56655c:
    // 0x56655c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x56655cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_566560:
    // 0x566560: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x566560u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
label_566564:
    // 0x566564: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x566564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_566568:
    // 0x566568: 0xa082003c  sb          $v0, 0x3C($a0)
    ctx->pc = 0x566568u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 60), (uint8_t)GPR_U32(ctx, 2));
label_56656c:
    // 0x56656c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x56656cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_566570:
    // 0x566570: 0xc04a576  jal         func_1295D8
label_566574:
    if (ctx->pc == 0x566574u) {
        ctx->pc = 0x566574u;
            // 0x566574: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x566578u;
        goto label_566578;
    }
    ctx->pc = 0x566570u;
    SET_GPR_U32(ctx, 31, 0x566578u);
    ctx->pc = 0x566574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x566570u;
            // 0x566574: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566578u; }
        if (ctx->pc != 0x566578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566578u; }
        if (ctx->pc != 0x566578u) { return; }
    }
    ctx->pc = 0x566578u;
label_566578:
    // 0x566578: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x566578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_56657c:
    // 0x56657c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x56657cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_566580:
    // 0x566580: 0xc04a576  jal         func_1295D8
label_566584:
    if (ctx->pc == 0x566584u) {
        ctx->pc = 0x566584u;
            // 0x566584: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x566588u;
        goto label_566588;
    }
    ctx->pc = 0x566580u;
    SET_GPR_U32(ctx, 31, 0x566588u);
    ctx->pc = 0x566584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x566580u;
            // 0x566584: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566588u; }
        if (ctx->pc != 0x566588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566588u; }
        if (ctx->pc != 0x566588u) { return; }
    }
    ctx->pc = 0x566588u;
label_566588:
    // 0x566588: 0xc159868  jal         func_5661A0
label_56658c:
    if (ctx->pc == 0x56658Cu) {
        ctx->pc = 0x56658Cu;
            // 0x56658c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x566590u;
        goto label_566590;
    }
    ctx->pc = 0x566588u;
    SET_GPR_U32(ctx, 31, 0x566590u);
    ctx->pc = 0x56658Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x566588u;
            // 0x56658c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5661A0u;
    if (runtime->hasFunction(0x5661A0u)) {
        auto targetFn = runtime->lookupFunction(0x5661A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566590u; }
        if (ctx->pc != 0x566590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005661A0_0x5661a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566590u; }
        if (ctx->pc != 0x566590u) { return; }
    }
    ctx->pc = 0x566590u;
label_566590:
    // 0x566590: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x566590u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_566594:
    // 0x566594: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x566594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_566598:
    // 0x566598: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x566598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_56659c:
    // 0x56659c: 0x3e00008  jr          $ra
label_5665a0:
    if (ctx->pc == 0x5665A0u) {
        ctx->pc = 0x5665A0u;
            // 0x5665a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x5665A4u;
        goto label_5665a4;
    }
    ctx->pc = 0x56659Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5665A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56659Cu;
            // 0x5665a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5665A4u;
label_5665a4:
    // 0x5665a4: 0x0  nop
    ctx->pc = 0x5665a4u;
    // NOP
label_5665a8:
    // 0x5665a8: 0x0  nop
    ctx->pc = 0x5665a8u;
    // NOP
label_5665ac:
    // 0x5665ac: 0x0  nop
    ctx->pc = 0x5665acu;
    // NOP
label_5665b0:
    // 0x5665b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5665b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_5665b4:
    // 0x5665b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5665b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_5665b8:
    // 0x5665b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5665b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5665bc:
    // 0x5665bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5665bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5665c0:
    // 0x5665c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x5665c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5665c4:
    // 0x5665c4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_5665c8:
    if (ctx->pc == 0x5665C8u) {
        ctx->pc = 0x5665C8u;
            // 0x5665c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5665CCu;
        goto label_5665cc;
    }
    ctx->pc = 0x5665C4u;
    {
        const bool branch_taken_0x5665c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x5665C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5665C4u;
            // 0x5665c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5665c4) {
            ctx->pc = 0x5665F8u;
            goto label_5665f8;
        }
    }
    ctx->pc = 0x5665CCu;
label_5665cc:
    // 0x5665cc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5665ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_5665d0:
    // 0x5665d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x5665d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5665d4:
    // 0x5665d4: 0x24427f40  addiu       $v0, $v0, 0x7F40
    ctx->pc = 0x5665d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32576));
label_5665d8:
    // 0x5665d8: 0xc15993c  jal         func_5664F0
label_5665dc:
    if (ctx->pc == 0x5665DCu) {
        ctx->pc = 0x5665DCu;
            // 0x5665dc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x5665E0u;
        goto label_5665e0;
    }
    ctx->pc = 0x5665D8u;
    SET_GPR_U32(ctx, 31, 0x5665E0u);
    ctx->pc = 0x5665DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5665D8u;
            // 0x5665dc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5664F0u;
    if (runtime->hasFunction(0x5664F0u)) {
        auto targetFn = runtime->lookupFunction(0x5664F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5665E0u; }
        if (ctx->pc != 0x5665E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005664F0_0x5664f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5665E0u; }
        if (ctx->pc != 0x5665E0u) { return; }
    }
    ctx->pc = 0x5665E0u;
label_5665e0:
    // 0x5665e0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x5665e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_5665e4:
    // 0x5665e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5665e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_5665e8:
    // 0x5665e8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_5665ec:
    if (ctx->pc == 0x5665ECu) {
        ctx->pc = 0x5665ECu;
            // 0x5665ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5665F0u;
        goto label_5665f0;
    }
    ctx->pc = 0x5665E8u;
    {
        const bool branch_taken_0x5665e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x5665e8) {
            ctx->pc = 0x5665ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5665E8u;
            // 0x5665ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5665FCu;
            goto label_5665fc;
        }
    }
    ctx->pc = 0x5665F0u;
label_5665f0:
    // 0x5665f0: 0xc0400a8  jal         func_1002A0
label_5665f4:
    if (ctx->pc == 0x5665F4u) {
        ctx->pc = 0x5665F4u;
            // 0x5665f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5665F8u;
        goto label_5665f8;
    }
    ctx->pc = 0x5665F0u;
    SET_GPR_U32(ctx, 31, 0x5665F8u);
    ctx->pc = 0x5665F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5665F0u;
            // 0x5665f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5665F8u; }
        if (ctx->pc != 0x5665F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5665F8u; }
        if (ctx->pc != 0x5665F8u) { return; }
    }
    ctx->pc = 0x5665F8u;
label_5665f8:
    // 0x5665f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x5665f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5665fc:
    // 0x5665fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5665fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_566600:
    // 0x566600: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x566600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_566604:
    // 0x566604: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x566604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_566608:
    // 0x566608: 0x3e00008  jr          $ra
label_56660c:
    if (ctx->pc == 0x56660Cu) {
        ctx->pc = 0x56660Cu;
            // 0x56660c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x566610u;
        goto label_566610;
    }
    ctx->pc = 0x566608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x56660Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566608u;
            // 0x56660c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x566610u;
label_566610:
    // 0x566610: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x566610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_566614:
    // 0x566614: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x566614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_566618:
    // 0x566618: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x566618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_56661c:
    // 0x56661c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x56661cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_566620:
    // 0x566620: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x566620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_566624:
    // 0x566624: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x566624u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_566628:
    // 0x566628: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x566628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_56662c:
    // 0x56662c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x56662cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_566630:
    // 0x566630: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x566630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_566634:
    // 0x566634: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x566634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_566638:
    // 0x566638: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x566638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_56663c:
    // 0x56663c: 0x8c750e80  lw          $s5, 0xE80($v1)
    ctx->pc = 0x56663cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_566640:
    // 0x566640: 0x9084003c  lbu         $a0, 0x3C($a0)
    ctx->pc = 0x566640u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 60)));
label_566644:
    // 0x566644: 0x8ea50780  lw          $a1, 0x780($s5)
    ctx->pc = 0x566644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1920)));
label_566648:
    // 0x566648: 0x1080002f  beqz        $a0, . + 4 + (0x2F << 2)
label_56664c:
    if (ctx->pc == 0x56664Cu) {
        ctx->pc = 0x56664Cu;
            // 0x56664c: 0x8eb10784  lw          $s1, 0x784($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1924)));
        ctx->pc = 0x566650u;
        goto label_566650;
    }
    ctx->pc = 0x566648u;
    {
        const bool branch_taken_0x566648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x56664Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566648u;
            // 0x56664c: 0x8eb10784  lw          $s1, 0x784($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1924)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x566648) {
            ctx->pc = 0x566708u;
            goto label_566708;
        }
    }
    ctx->pc = 0x566650u;
label_566650:
    // 0x566650: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
label_566654:
    if (ctx->pc == 0x566654u) {
        ctx->pc = 0x566658u;
        goto label_566658;
    }
    ctx->pc = 0x566650u;
    {
        const bool branch_taken_0x566650 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x566650) {
            ctx->pc = 0x566708u;
            goto label_566708;
        }
    }
    ctx->pc = 0x566658u;
label_566658:
    // 0x566658: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x566658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_56665c:
    // 0x56665c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x56665cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_566660:
    // 0x566660: 0x24420e80  addiu       $v0, $v0, 0xE80
    ctx->pc = 0x566660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3712));
label_566664:
    // 0x566664: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x566664u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_566668:
    // 0x566668: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x566668u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_56666c:
    // 0x56666c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x56666cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_566670:
    // 0x566670: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x566670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_566674:
    // 0x566674: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x566674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_566678:
    // 0x566678: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x566678u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_56667c:
    // 0x56667c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x56667cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_566680:
    // 0x566680: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x566680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_566684:
    // 0x566684: 0x8ea30cc0  lw          $v1, 0xCC0($s5)
    ctx->pc = 0x566684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3264)));
label_566688:
    // 0x566688: 0x8c840d6c  lw          $a0, 0xD6C($a0)
    ctx->pc = 0x566688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3436)));
label_56668c:
    // 0x56668c: 0x80840010  lb          $a0, 0x10($a0)
    ctx->pc = 0x56668cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_566690:
    // 0x566690: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_566694:
    if (ctx->pc == 0x566694u) {
        ctx->pc = 0x566694u;
            // 0x566694: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x566698u;
        goto label_566698;
    }
    ctx->pc = 0x566690u;
    {
        const bool branch_taken_0x566690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x566694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566690u;
            // 0x566694: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x566690) {
            ctx->pc = 0x5666C0u;
            goto label_5666c0;
        }
    }
    ctx->pc = 0x566698u;
label_566698:
    // 0x566698: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_56669c:
    if (ctx->pc == 0x56669Cu) {
        ctx->pc = 0x5666A0u;
        goto label_5666a0;
    }
    ctx->pc = 0x566698u;
    {
        const bool branch_taken_0x566698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x566698) {
            ctx->pc = 0x5666A8u;
            goto label_5666a8;
        }
    }
    ctx->pc = 0x5666A0u;
label_5666a0:
    // 0x5666a0: 0x1000000b  b           . + 4 + (0xB << 2)
label_5666a4:
    if (ctx->pc == 0x5666A4u) {
        ctx->pc = 0x5666A8u;
        goto label_5666a8;
    }
    ctx->pc = 0x5666A0u;
    {
        const bool branch_taken_0x5666a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5666a0) {
            ctx->pc = 0x5666D0u;
            goto label_5666d0;
        }
    }
    ctx->pc = 0x5666A8u;
label_5666a8:
    // 0x5666a8: 0x8ea20cbc  lw          $v0, 0xCBC($s5)
    ctx->pc = 0x5666a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3260)));
label_5666ac:
    // 0x5666ac: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x5666acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_5666b0:
    // 0x5666b0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x5666b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_5666b4:
    // 0x5666b4: 0x10000006  b           . + 4 + (0x6 << 2)
label_5666b8:
    if (ctx->pc == 0x5666B8u) {
        ctx->pc = 0x5666B8u;
            // 0x5666b8: 0x8c470008  lw          $a3, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->pc = 0x5666BCu;
        goto label_5666bc;
    }
    ctx->pc = 0x5666B4u;
    {
        const bool branch_taken_0x5666b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5666B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5666B4u;
            // 0x5666b8: 0x8c470008  lw          $a3, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5666b4) {
            ctx->pc = 0x5666D0u;
            goto label_5666d0;
        }
    }
    ctx->pc = 0x5666BCu;
label_5666bc:
    // 0x5666bc: 0x0  nop
    ctx->pc = 0x5666bcu;
    // NOP
label_5666c0:
    // 0x5666c0: 0x8ea20cbc  lw          $v0, 0xCBC($s5)
    ctx->pc = 0x5666c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3260)));
label_5666c4:
    // 0x5666c4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x5666c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_5666c8:
    // 0x5666c8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x5666c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_5666cc:
    // 0x5666cc: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x5666ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_5666d0:
    // 0x5666d0: 0x4363c  dsll32      $a2, $a0, 24
    ctx->pc = 0x5666d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 24));
label_5666d4:
    // 0x5666d4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x5666d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_5666d8:
    // 0x5666d8: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x5666d8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
label_5666dc:
    // 0x5666dc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x5666dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_5666e0:
    // 0x5666e0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x5666e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_5666e4:
    // 0x5666e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x5666e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5666e8:
    // 0x5666e8: 0xc1597ac  jal         func_565EB0
label_5666ec:
    if (ctx->pc == 0x5666ECu) {
        ctx->pc = 0x5666ECu;
            // 0x5666ec: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x5666F0u;
        goto label_5666f0;
    }
    ctx->pc = 0x5666E8u;
    SET_GPR_U32(ctx, 31, 0x5666F0u);
    ctx->pc = 0x5666ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5666E8u;
            // 0x5666ec: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x565EB0u;
    if (runtime->hasFunction(0x565EB0u)) {
        auto targetFn = runtime->lookupFunction(0x565EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5666F0u; }
        if (ctx->pc != 0x5666F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00565EB0_0x565eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5666F0u; }
        if (ctx->pc != 0x5666F0u) { return; }
    }
    ctx->pc = 0x5666F0u;
label_5666f0:
    // 0x5666f0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x5666f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_5666f4:
    // 0x5666f4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x5666f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_5666f8:
    // 0x5666f8: 0x291182a  slt         $v1, $s4, $s1
    ctx->pc = 0x5666f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_5666fc:
    // 0x5666fc: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
label_566700:
    if (ctx->pc == 0x566700u) {
        ctx->pc = 0x566700u;
            // 0x566700: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->pc = 0x566704u;
        goto label_566704;
    }
    ctx->pc = 0x5666FCu;
    {
        const bool branch_taken_0x5666fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x566700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5666FCu;
            // 0x566700: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5666fc) {
            ctx->pc = 0x56667Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_56667c;
        }
    }
    ctx->pc = 0x566704u;
label_566704:
    // 0x566704: 0x0  nop
    ctx->pc = 0x566704u;
    // NOP
label_566708:
    // 0x566708: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x566708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_56670c:
    // 0x56670c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x56670cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_566710:
    // 0x566710: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x566710u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_566714:
    // 0x566714: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x566714u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_566718:
    // 0x566718: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x566718u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_56671c:
    // 0x56671c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x56671cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_566720:
    // 0x566720: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x566720u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_566724:
    // 0x566724: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x566724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_566728:
    // 0x566728: 0x3e00008  jr          $ra
label_56672c:
    if (ctx->pc == 0x56672Cu) {
        ctx->pc = 0x56672Cu;
            // 0x56672c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x566730u;
        goto label_566730;
    }
    ctx->pc = 0x566728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x56672Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566728u;
            // 0x56672c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x566730u;
label_566730:
    // 0x566730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x566730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_566734:
    // 0x566734: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x566734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_566738:
    // 0x566738: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x566738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_56673c:
    // 0x56673c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x56673cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_566740:
    // 0x566740: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x566740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_566744:
    // 0x566744: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_566748:
    if (ctx->pc == 0x566748u) {
        ctx->pc = 0x566748u;
            // 0x566748: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56674Cu;
        goto label_56674c;
    }
    ctx->pc = 0x566744u;
    {
        const bool branch_taken_0x566744 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x566748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566744u;
            // 0x566748: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x566744) {
            ctx->pc = 0x566778u;
            goto label_566778;
        }
    }
    ctx->pc = 0x56674Cu;
label_56674c:
    // 0x56674c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x56674cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_566750:
    // 0x566750: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x566750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_566754:
    // 0x566754: 0x24427f50  addiu       $v0, $v0, 0x7F50
    ctx->pc = 0x566754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32592));
label_566758:
    // 0x566758: 0xc0ec4f0  jal         func_3B13C0
label_56675c:
    if (ctx->pc == 0x56675Cu) {
        ctx->pc = 0x56675Cu;
            // 0x56675c: 0xae220374  sw          $v0, 0x374($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 884), GPR_U32(ctx, 2));
        ctx->pc = 0x566760u;
        goto label_566760;
    }
    ctx->pc = 0x566758u;
    SET_GPR_U32(ctx, 31, 0x566760u);
    ctx->pc = 0x56675Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x566758u;
            // 0x56675c: 0xae220374  sw          $v0, 0x374($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 884), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B13C0u;
    if (runtime->hasFunction(0x3B13C0u)) {
        auto targetFn = runtime->lookupFunction(0x3B13C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566760u; }
        if (ctx->pc != 0x566760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B13C0_0x3b13c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566760u; }
        if (ctx->pc != 0x566760u) { return; }
    }
    ctx->pc = 0x566760u;
label_566760:
    // 0x566760: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x566760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_566764:
    // 0x566764: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x566764u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_566768:
    // 0x566768: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_56676c:
    if (ctx->pc == 0x56676Cu) {
        ctx->pc = 0x56676Cu;
            // 0x56676c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x566770u;
        goto label_566770;
    }
    ctx->pc = 0x566768u;
    {
        const bool branch_taken_0x566768 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x566768) {
            ctx->pc = 0x56676Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x566768u;
            // 0x56676c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56677Cu;
            goto label_56677c;
        }
    }
    ctx->pc = 0x566770u;
label_566770:
    // 0x566770: 0xc0400a8  jal         func_1002A0
label_566774:
    if (ctx->pc == 0x566774u) {
        ctx->pc = 0x566774u;
            // 0x566774: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x566778u;
        goto label_566778;
    }
    ctx->pc = 0x566770u;
    SET_GPR_U32(ctx, 31, 0x566778u);
    ctx->pc = 0x566774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x566770u;
            // 0x566774: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566778u; }
        if (ctx->pc != 0x566778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566778u; }
        if (ctx->pc != 0x566778u) { return; }
    }
    ctx->pc = 0x566778u;
label_566778:
    // 0x566778: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x566778u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_56677c:
    // 0x56677c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x56677cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_566780:
    // 0x566780: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x566780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_566784:
    // 0x566784: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x566784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_566788:
    // 0x566788: 0x3e00008  jr          $ra
label_56678c:
    if (ctx->pc == 0x56678Cu) {
        ctx->pc = 0x56678Cu;
            // 0x56678c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x566790u;
        goto label_566790;
    }
    ctx->pc = 0x566788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x56678Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566788u;
            // 0x56678c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x566790u;
label_566790:
    // 0x566790: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x566790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_566794:
    // 0x566794: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x566794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_566798:
    // 0x566798: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x566798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_56679c:
    // 0x56679c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x56679cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_5667a0:
    // 0x5667a0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x5667a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_5667a4:
    // 0x5667a4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x5667a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_5667a8:
    // 0x5667a8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x5667a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5667ac:
    // 0x5667ac: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x5667acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_5667b0:
    // 0x5667b0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x5667b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_5667b4:
    // 0x5667b4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x5667b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_5667b8:
    // 0x5667b8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x5667b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_5667bc:
    // 0x5667bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x5667bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_5667c0:
    // 0x5667c0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x5667c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_5667c4:
    // 0x5667c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x5667c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_5667c8:
    // 0x5667c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x5667c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5667cc:
    // 0x5667cc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x5667ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_5667d0:
    // 0x5667d0: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x5667d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_5667d4:
    // 0x5667d4: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x5667d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_5667d8:
    // 0x5667d8: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x5667d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_5667dc:
    // 0x5667dc: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x5667dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_5667e0:
    // 0x5667e0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x5667e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_5667e4:
    // 0x5667e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x5667e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5667e8:
    // 0x5667e8: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x5667e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_5667ec:
    // 0x5667ec: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x5667ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_5667f0:
    // 0x5667f0: 0x8c830cc0  lw          $v1, 0xCC0($a0)
    ctx->pc = 0x5667f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3264)));
label_5667f4:
    // 0x5667f4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x5667f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_5667f8:
    // 0x5667f8: 0x2a52821  addu        $a1, $s5, $a1
    ctx->pc = 0x5667f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
label_5667fc:
    // 0x5667fc: 0xc4b400a4  lwc1        $f20, 0xA4($a1)
    ctx->pc = 0x5667fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_566800:
    // 0x566800: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_566804:
    if (ctx->pc == 0x566804u) {
        ctx->pc = 0x566804u;
            // 0x566804: 0x24b60090  addiu       $s6, $a1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
        ctx->pc = 0x566808u;
        goto label_566808;
    }
    ctx->pc = 0x566800u;
    {
        const bool branch_taken_0x566800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x566804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566800u;
            // 0x566804: 0x24b60090  addiu       $s6, $a1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x566800) {
            ctx->pc = 0x566834u;
            goto label_566834;
        }
    }
    ctx->pc = 0x566808u;
label_566808:
    // 0x566808: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_56680c:
    if (ctx->pc == 0x56680Cu) {
        ctx->pc = 0x56680Cu;
            // 0x56680c: 0x8c820cbc  lw          $v0, 0xCBC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3260)));
        ctx->pc = 0x566810u;
        goto label_566810;
    }
    ctx->pc = 0x566808u;
    {
        const bool branch_taken_0x566808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x566808) {
            ctx->pc = 0x56680Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x566808u;
            // 0x56680c: 0x8c820cbc  lw          $v0, 0xCBC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3260)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x566818u;
            goto label_566818;
        }
    }
    ctx->pc = 0x566810u;
label_566810:
    // 0x566810: 0x10000011  b           . + 4 + (0x11 << 2)
label_566814:
    if (ctx->pc == 0x566814u) {
        ctx->pc = 0x566818u;
        goto label_566818;
    }
    ctx->pc = 0x566810u;
    {
        const bool branch_taken_0x566810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x566810) {
            ctx->pc = 0x566858u;
            goto label_566858;
        }
    }
    ctx->pc = 0x566818u;
label_566818:
    // 0x566818: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x566818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_56681c:
    // 0x56681c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x56681cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_566820:
    // 0x566820: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x566820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_566824:
    // 0x566824: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x566824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_566828:
    // 0x566828: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x566828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_56682c:
    // 0x56682c: 0x1000000a  b           . + 4 + (0xA << 2)
label_566830:
    if (ctx->pc == 0x566830u) {
        ctx->pc = 0x566830u;
            // 0x566830: 0x8c510008  lw          $s1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->pc = 0x566834u;
        goto label_566834;
    }
    ctx->pc = 0x56682Cu;
    {
        const bool branch_taken_0x56682c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x566830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56682Cu;
            // 0x566830: 0x8c510008  lw          $s1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56682c) {
            ctx->pc = 0x566858u;
            goto label_566858;
        }
    }
    ctx->pc = 0x566834u;
label_566834:
    // 0x566834: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x566834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_566838:
    // 0x566838: 0x8c820cbc  lw          $v0, 0xCBC($a0)
    ctx->pc = 0x566838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3260)));
label_56683c:
    // 0x56683c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x56683cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_566840:
    // 0x566840: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x566840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_566844:
    // 0x566844: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x566844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_566848:
    // 0x566848: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x566848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_56684c:
    // 0x56684c: 0xc13bc0c  jal         func_4EF030
label_566850:
    if (ctx->pc == 0x566850u) {
        ctx->pc = 0x566850u;
            // 0x566850: 0x8c510004  lw          $s1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x566854u;
        goto label_566854;
    }
    ctx->pc = 0x56684Cu;
    SET_GPR_U32(ctx, 31, 0x566854u);
    ctx->pc = 0x566850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56684Cu;
            // 0x566850: 0x8c510004  lw          $s1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4EF030u;
    if (runtime->hasFunction(0x4EF030u)) {
        auto targetFn = runtime->lookupFunction(0x4EF030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566854u; }
        if (ctx->pc != 0x566854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004EF030_0x4ef030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566854u; }
        if (ctx->pc != 0x566854u) { return; }
    }
    ctx->pc = 0x566854u;
label_566854:
    // 0x566854: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x566854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_566858:
    // 0x566858: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x566858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_56685c:
    // 0x56685c: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x56685cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_566860:
    // 0x566860: 0xc0506ac  jal         func_141AB0
label_566864:
    if (ctx->pc == 0x566864u) {
        ctx->pc = 0x566864u;
            // 0x566864: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x566868u;
        goto label_566868;
    }
    ctx->pc = 0x566860u;
    SET_GPR_U32(ctx, 31, 0x566868u);
    ctx->pc = 0x566864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x566860u;
            // 0x566864: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566868u; }
        if (ctx->pc != 0x566868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566868u; }
        if (ctx->pc != 0x566868u) { return; }
    }
    ctx->pc = 0x566868u;
label_566868:
    // 0x566868: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x566868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_56686c:
    // 0x56686c: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x56686cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_566870:
    // 0x566870: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x566870u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_566874:
    // 0x566874: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x566874u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_566878:
    // 0x566878: 0x320f809  jalr        $t9
label_56687c:
    if (ctx->pc == 0x56687Cu) {
        ctx->pc = 0x56687Cu;
            // 0x56687c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x566880u;
        goto label_566880;
    }
    ctx->pc = 0x566878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x566880u);
        ctx->pc = 0x56687Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566878u;
            // 0x56687c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x566880u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x566880u; }
            if (ctx->pc != 0x566880u) { return; }
        }
        }
    }
    ctx->pc = 0x566880u;
label_566880:
    // 0x566880: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x566880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_566884:
    // 0x566884: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x566884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_566888:
    // 0x566888: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x566888u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_56688c:
    // 0x56688c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x56688cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_566890:
    // 0x566890: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x566890u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_566894:
    // 0x566894: 0xc0ebf3c  jal         func_3AFCF0
label_566898:
    if (ctx->pc == 0x566898u) {
        ctx->pc = 0x566898u;
            // 0x566898: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56689Cu;
        goto label_56689c;
    }
    ctx->pc = 0x566894u;
    SET_GPR_U32(ctx, 31, 0x56689Cu);
    ctx->pc = 0x566898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x566894u;
            // 0x566898: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCF0u;
    if (runtime->hasFunction(0x3AFCF0u)) {
        auto targetFn = runtime->lookupFunction(0x3AFCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56689Cu; }
        if (ctx->pc != 0x56689Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AFCF0_0x3afcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56689Cu; }
        if (ctx->pc != 0x56689Cu) { return; }
    }
    ctx->pc = 0x56689Cu;
label_56689c:
    // 0x56689c: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x56689cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_5668a0:
    // 0x5668a0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x5668a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5668a4:
    // 0x5668a4: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x5668a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_5668a8:
    // 0x5668a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x5668a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_5668ac:
    // 0x5668ac: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x5668acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5668b0:
    // 0x5668b0: 0xc0ebe78  jal         func_3AF9E0
label_5668b4:
    if (ctx->pc == 0x5668B4u) {
        ctx->pc = 0x5668B4u;
            // 0x5668b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x5668B8u;
        goto label_5668b8;
    }
    ctx->pc = 0x5668B0u;
    SET_GPR_U32(ctx, 31, 0x5668B8u);
    ctx->pc = 0x5668B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5668B0u;
            // 0x5668b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AF9E0u;
    if (runtime->hasFunction(0x3AF9E0u)) {
        auto targetFn = runtime->lookupFunction(0x3AF9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5668B8u; }
        if (ctx->pc != 0x5668B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AF9E0_0x3af9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5668B8u; }
        if (ctx->pc != 0x5668B8u) { return; }
    }
    ctx->pc = 0x5668B8u;
label_5668b8:
    // 0x5668b8: 0xc6a0002c  lwc1        $f0, 0x2C($s5)
    ctx->pc = 0x5668b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5668bc:
    // 0x5668bc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x5668bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5668c0:
    // 0x5668c0: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_5668c4:
    if (ctx->pc == 0x5668C4u) {
        ctx->pc = 0x5668C4u;
            // 0x5668c4: 0x8e86000c  lw          $a2, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->pc = 0x5668C8u;
        goto label_5668c8;
    }
    ctx->pc = 0x5668C0u;
    {
        const bool branch_taken_0x5668c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x5668c0) {
            ctx->pc = 0x5668C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5668C0u;
            // 0x5668c4: 0x8e86000c  lw          $a2, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5668E8u;
            goto label_5668e8;
        }
    }
    ctx->pc = 0x5668C8u;
label_5668c8:
    // 0x5668c8: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x5668c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_5668cc:
    // 0x5668cc: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x5668ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5668d0:
    // 0x5668d0: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x5668d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_5668d4:
    // 0x5668d4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x5668d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5668d8:
    // 0x5668d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x5668d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_5668dc:
    // 0x5668dc: 0xc0ebc60  jal         func_3AF180
label_5668e0:
    if (ctx->pc == 0x5668E0u) {
        ctx->pc = 0x5668E0u;
            // 0x5668e0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5668E4u;
        goto label_5668e4;
    }
    ctx->pc = 0x5668DCu;
    SET_GPR_U32(ctx, 31, 0x5668E4u);
    ctx->pc = 0x5668E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5668DCu;
            // 0x5668e0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AF180u;
    if (runtime->hasFunction(0x3AF180u)) {
        auto targetFn = runtime->lookupFunction(0x3AF180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5668E4u; }
        if (ctx->pc != 0x5668E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AF180_0x3af180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5668E4u; }
        if (ctx->pc != 0x5668E4u) { return; }
    }
    ctx->pc = 0x5668E4u;
label_5668e4:
    // 0x5668e4: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x5668e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_5668e8:
    // 0x5668e8: 0x26c5001c  addiu       $a1, $s6, 0x1C
    ctx->pc = 0x5668e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 28));
label_5668ec:
    // 0x5668ec: 0x8e870010  lw          $a3, 0x10($s4)
    ctx->pc = 0x5668ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_5668f0:
    // 0x5668f0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x5668f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_5668f4:
    // 0x5668f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x5668f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_5668f8:
    // 0x5668f8: 0xc0ec0e4  jal         func_3B0390
label_5668fc:
    if (ctx->pc == 0x5668FCu) {
        ctx->pc = 0x5668FCu;
            // 0x5668fc: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x566900u;
        goto label_566900;
    }
    ctx->pc = 0x5668F8u;
    SET_GPR_U32(ctx, 31, 0x566900u);
    ctx->pc = 0x5668FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5668F8u;
            // 0x5668fc: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B0390u;
    if (runtime->hasFunction(0x3B0390u)) {
        auto targetFn = runtime->lookupFunction(0x3B0390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566900u; }
        if (ctx->pc != 0x566900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B0390_0x3b0390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566900u; }
        if (ctx->pc != 0x566900u) { return; }
    }
    ctx->pc = 0x566900u;
label_566900:
    // 0x566900: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x566900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_566904:
    // 0x566904: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x566904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_566908:
    // 0x566908: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x566908u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_56690c:
    // 0x56690c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x56690cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_566910:
    // 0x566910: 0x320f809  jalr        $t9
label_566914:
    if (ctx->pc == 0x566914u) {
        ctx->pc = 0x566918u;
        goto label_566918;
    }
    ctx->pc = 0x566910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x566918u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x566918u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x566918u; }
            if (ctx->pc != 0x566918u) { return; }
        }
        }
    }
    ctx->pc = 0x566918u;
label_566918:
    // 0x566918: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x566918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_56691c:
    // 0x56691c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x56691cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_566920:
    // 0x566920: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x566920u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_566924:
    // 0x566924: 0xc159a58  jal         func_566960
label_566928:
    if (ctx->pc == 0x566928u) {
        ctx->pc = 0x566928u;
            // 0x566928: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56692Cu;
        goto label_56692c;
    }
    ctx->pc = 0x566924u;
    SET_GPR_U32(ctx, 31, 0x56692Cu);
    ctx->pc = 0x566928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x566924u;
            // 0x566928: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x566960u;
    if (runtime->hasFunction(0x566960u)) {
        auto targetFn = runtime->lookupFunction(0x566960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56692Cu; }
        if (ctx->pc != 0x56692Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00566960_0x566960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56692Cu; }
        if (ctx->pc != 0x56692Cu) { return; }
    }
    ctx->pc = 0x56692Cu;
label_56692c:
    // 0x56692c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x56692cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_566930:
    // 0x566930: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x566930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_566934:
    // 0x566934: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x566934u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_566938:
    // 0x566938: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x566938u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_56693c:
    // 0x56693c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x56693cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_566940:
    // 0x566940: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x566940u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_566944:
    // 0x566944: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x566944u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_566948:
    // 0x566948: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x566948u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_56694c:
    // 0x56694c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x56694cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_566950:
    // 0x566950: 0x3e00008  jr          $ra
label_566954:
    if (ctx->pc == 0x566954u) {
        ctx->pc = 0x566954u;
            // 0x566954: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x566958u;
        goto label_566958;
    }
    ctx->pc = 0x566950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x566954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566950u;
            // 0x566954: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x566958u;
label_566958:
    // 0x566958: 0x0  nop
    ctx->pc = 0x566958u;
    // NOP
label_56695c:
    // 0x56695c: 0x0  nop
    ctx->pc = 0x56695cu;
    // NOP
}
