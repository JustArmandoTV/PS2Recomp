#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00224530
// Address: 0x224530 - 0x224760
void sub_00224530_0x224530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224530_0x224530");
#endif

    switch (ctx->pc) {
        case 0x224530u: goto label_224530;
        case 0x224534u: goto label_224534;
        case 0x224538u: goto label_224538;
        case 0x22453cu: goto label_22453c;
        case 0x224540u: goto label_224540;
        case 0x224544u: goto label_224544;
        case 0x224548u: goto label_224548;
        case 0x22454cu: goto label_22454c;
        case 0x224550u: goto label_224550;
        case 0x224554u: goto label_224554;
        case 0x224558u: goto label_224558;
        case 0x22455cu: goto label_22455c;
        case 0x224560u: goto label_224560;
        case 0x224564u: goto label_224564;
        case 0x224568u: goto label_224568;
        case 0x22456cu: goto label_22456c;
        case 0x224570u: goto label_224570;
        case 0x224574u: goto label_224574;
        case 0x224578u: goto label_224578;
        case 0x22457cu: goto label_22457c;
        case 0x224580u: goto label_224580;
        case 0x224584u: goto label_224584;
        case 0x224588u: goto label_224588;
        case 0x22458cu: goto label_22458c;
        case 0x224590u: goto label_224590;
        case 0x224594u: goto label_224594;
        case 0x224598u: goto label_224598;
        case 0x22459cu: goto label_22459c;
        case 0x2245a0u: goto label_2245a0;
        case 0x2245a4u: goto label_2245a4;
        case 0x2245a8u: goto label_2245a8;
        case 0x2245acu: goto label_2245ac;
        case 0x2245b0u: goto label_2245b0;
        case 0x2245b4u: goto label_2245b4;
        case 0x2245b8u: goto label_2245b8;
        case 0x2245bcu: goto label_2245bc;
        case 0x2245c0u: goto label_2245c0;
        case 0x2245c4u: goto label_2245c4;
        case 0x2245c8u: goto label_2245c8;
        case 0x2245ccu: goto label_2245cc;
        case 0x2245d0u: goto label_2245d0;
        case 0x2245d4u: goto label_2245d4;
        case 0x2245d8u: goto label_2245d8;
        case 0x2245dcu: goto label_2245dc;
        case 0x2245e0u: goto label_2245e0;
        case 0x2245e4u: goto label_2245e4;
        case 0x2245e8u: goto label_2245e8;
        case 0x2245ecu: goto label_2245ec;
        case 0x2245f0u: goto label_2245f0;
        case 0x2245f4u: goto label_2245f4;
        case 0x2245f8u: goto label_2245f8;
        case 0x2245fcu: goto label_2245fc;
        case 0x224600u: goto label_224600;
        case 0x224604u: goto label_224604;
        case 0x224608u: goto label_224608;
        case 0x22460cu: goto label_22460c;
        case 0x224610u: goto label_224610;
        case 0x224614u: goto label_224614;
        case 0x224618u: goto label_224618;
        case 0x22461cu: goto label_22461c;
        case 0x224620u: goto label_224620;
        case 0x224624u: goto label_224624;
        case 0x224628u: goto label_224628;
        case 0x22462cu: goto label_22462c;
        case 0x224630u: goto label_224630;
        case 0x224634u: goto label_224634;
        case 0x224638u: goto label_224638;
        case 0x22463cu: goto label_22463c;
        case 0x224640u: goto label_224640;
        case 0x224644u: goto label_224644;
        case 0x224648u: goto label_224648;
        case 0x22464cu: goto label_22464c;
        case 0x224650u: goto label_224650;
        case 0x224654u: goto label_224654;
        case 0x224658u: goto label_224658;
        case 0x22465cu: goto label_22465c;
        case 0x224660u: goto label_224660;
        case 0x224664u: goto label_224664;
        case 0x224668u: goto label_224668;
        case 0x22466cu: goto label_22466c;
        case 0x224670u: goto label_224670;
        case 0x224674u: goto label_224674;
        case 0x224678u: goto label_224678;
        case 0x22467cu: goto label_22467c;
        case 0x224680u: goto label_224680;
        case 0x224684u: goto label_224684;
        case 0x224688u: goto label_224688;
        case 0x22468cu: goto label_22468c;
        case 0x224690u: goto label_224690;
        case 0x224694u: goto label_224694;
        case 0x224698u: goto label_224698;
        case 0x22469cu: goto label_22469c;
        case 0x2246a0u: goto label_2246a0;
        case 0x2246a4u: goto label_2246a4;
        case 0x2246a8u: goto label_2246a8;
        case 0x2246acu: goto label_2246ac;
        case 0x2246b0u: goto label_2246b0;
        case 0x2246b4u: goto label_2246b4;
        case 0x2246b8u: goto label_2246b8;
        case 0x2246bcu: goto label_2246bc;
        case 0x2246c0u: goto label_2246c0;
        case 0x2246c4u: goto label_2246c4;
        case 0x2246c8u: goto label_2246c8;
        case 0x2246ccu: goto label_2246cc;
        case 0x2246d0u: goto label_2246d0;
        case 0x2246d4u: goto label_2246d4;
        case 0x2246d8u: goto label_2246d8;
        case 0x2246dcu: goto label_2246dc;
        case 0x2246e0u: goto label_2246e0;
        case 0x2246e4u: goto label_2246e4;
        case 0x2246e8u: goto label_2246e8;
        case 0x2246ecu: goto label_2246ec;
        case 0x2246f0u: goto label_2246f0;
        case 0x2246f4u: goto label_2246f4;
        case 0x2246f8u: goto label_2246f8;
        case 0x2246fcu: goto label_2246fc;
        case 0x224700u: goto label_224700;
        case 0x224704u: goto label_224704;
        case 0x224708u: goto label_224708;
        case 0x22470cu: goto label_22470c;
        case 0x224710u: goto label_224710;
        case 0x224714u: goto label_224714;
        case 0x224718u: goto label_224718;
        case 0x22471cu: goto label_22471c;
        case 0x224720u: goto label_224720;
        case 0x224724u: goto label_224724;
        case 0x224728u: goto label_224728;
        case 0x22472cu: goto label_22472c;
        case 0x224730u: goto label_224730;
        case 0x224734u: goto label_224734;
        case 0x224738u: goto label_224738;
        case 0x22473cu: goto label_22473c;
        case 0x224740u: goto label_224740;
        case 0x224744u: goto label_224744;
        case 0x224748u: goto label_224748;
        case 0x22474cu: goto label_22474c;
        case 0x224750u: goto label_224750;
        case 0x224754u: goto label_224754;
        case 0x224758u: goto label_224758;
        case 0x22475cu: goto label_22475c;
        default: break;
    }

    ctx->pc = 0x224530u;

label_224530:
    // 0x224530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x224530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_224534:
    // 0x224534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_224538:
    // 0x224538: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x224538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_22453c:
    // 0x22453c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_224540:
    if (ctx->pc == 0x224540u) {
        ctx->pc = 0x224544u;
        goto label_224544;
    }
    ctx->pc = 0x22453Cu;
    {
        const bool branch_taken_0x22453c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22453c) {
            ctx->pc = 0x22457Cu;
            goto label_22457c;
        }
    }
    ctx->pc = 0x224544u;
label_224544:
    // 0x224544: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x224544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_224548:
    // 0x224548: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_22454c:
    if (ctx->pc == 0x22454Cu) {
        ctx->pc = 0x224550u;
        goto label_224550;
    }
    ctx->pc = 0x224548u;
    {
        const bool branch_taken_0x224548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224548) {
            ctx->pc = 0x22457Cu;
            goto label_22457c;
        }
    }
    ctx->pc = 0x224550u;
label_224550:
    // 0x224550: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x224550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_224554:
    // 0x224554: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x224554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
label_224558:
    // 0x224558: 0xa3a50018  sb          $a1, 0x18($sp)
    ctx->pc = 0x224558u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 5));
label_22455c:
    // 0x22455c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x22455cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_224560:
    // 0x224560: 0xa3a60019  sb          $a2, 0x19($sp)
    ctx->pc = 0x224560u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 25), (uint8_t)GPR_U32(ctx, 6));
label_224564:
    // 0x224564: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x224564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_224568:
    // 0x224568: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x224568u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
label_22456c:
    // 0x22456c: 0xc08d1cc  jal         func_234730
label_224570:
    if (ctx->pc == 0x224570u) {
        ctx->pc = 0x224570u;
            // 0x224570: 0xa3a7001a  sb          $a3, 0x1A($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 26), (uint8_t)GPR_U32(ctx, 7));
        ctx->pc = 0x224574u;
        goto label_224574;
    }
    ctx->pc = 0x22456Cu;
    SET_GPR_U32(ctx, 31, 0x224574u);
    ctx->pc = 0x224570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22456Cu;
            // 0x224570: 0xa3a7001a  sb          $a3, 0x1A($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 26), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234730u;
    if (runtime->hasFunction(0x234730u)) {
        auto targetFn = runtime->lookupFunction(0x234730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224574u; }
        if (ctx->pc != 0x224574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234730_0x234730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224574u; }
        if (ctx->pc != 0x224574u) { return; }
    }
    ctx->pc = 0x224574u;
label_224574:
    // 0x224574: 0x10000004  b           . + 4 + (0x4 << 2)
label_224578:
    if (ctx->pc == 0x224578u) {
        ctx->pc = 0x224578u;
            // 0x224578: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x22457Cu;
        goto label_22457c;
    }
    ctx->pc = 0x224574u;
    {
        const bool branch_taken_0x224574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224574u;
            // 0x224578: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224574) {
            ctx->pc = 0x224588u;
            goto label_224588;
        }
    }
    ctx->pc = 0x22457Cu;
label_22457c:
    // 0x22457c: 0xc090354  jal         func_240D50
label_224580:
    if (ctx->pc == 0x224580u) {
        ctx->pc = 0x224584u;
        goto label_224584;
    }
    ctx->pc = 0x22457Cu;
    SET_GPR_U32(ctx, 31, 0x224584u);
    ctx->pc = 0x240D50u;
    if (runtime->hasFunction(0x240D50u)) {
        auto targetFn = runtime->lookupFunction(0x240D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224584u; }
        if (ctx->pc != 0x224584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00240D50_0x240d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224584u; }
        if (ctx->pc != 0x224584u) { return; }
    }
    ctx->pc = 0x224584u;
label_224584:
    // 0x224584: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_224588:
    // 0x224588: 0x3e00008  jr          $ra
label_22458c:
    if (ctx->pc == 0x22458Cu) {
        ctx->pc = 0x22458Cu;
            // 0x22458c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x224590u;
        goto label_224590;
    }
    ctx->pc = 0x224588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22458Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224588u;
            // 0x22458c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x224590u;
label_224590:
    // 0x224590: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x224590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_224594:
    // 0x224594: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x224594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_224598:
    // 0x224598: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x224598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22459c:
    // 0x22459c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22459cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2245a0:
    // 0x2245a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2245a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2245a4:
    // 0x2245a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2245a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2245a8:
    // 0x2245a8: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2245a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2245ac:
    // 0x2245ac: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_2245b0:
    if (ctx->pc == 0x2245B0u) {
        ctx->pc = 0x2245B0u;
            // 0x2245b0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2245B4u;
        goto label_2245b4;
    }
    ctx->pc = 0x2245ACu;
    {
        const bool branch_taken_0x2245ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2245B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2245ACu;
            // 0x2245b0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2245ac) {
            ctx->pc = 0x2245E0u;
            goto label_2245e0;
        }
    }
    ctx->pc = 0x2245B4u;
label_2245b4:
    // 0x2245b4: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x2245b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_2245b8:
    // 0x2245b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2245bc:
    if (ctx->pc == 0x2245BCu) {
        ctx->pc = 0x2245C0u;
        goto label_2245c0;
    }
    ctx->pc = 0x2245B8u;
    {
        const bool branch_taken_0x2245b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2245b8) {
            ctx->pc = 0x2245E0u;
            goto label_2245e0;
        }
    }
    ctx->pc = 0x2245C0u;
label_2245c0:
    // 0x2245c0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2245c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2245c4:
    // 0x2245c4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2245c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2245c8:
    // 0x2245c8: 0xa3a20050  sb          $v0, 0x50($sp)
    ctx->pc = 0x2245c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 2));
label_2245cc:
    // 0x2245cc: 0xafb20054  sw          $s2, 0x54($sp)
    ctx->pc = 0x2245ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 18));
label_2245d0:
    // 0x2245d0: 0xc08d1cc  jal         func_234730
label_2245d4:
    if (ctx->pc == 0x2245D4u) {
        ctx->pc = 0x2245D4u;
            // 0x2245d4: 0xafb10058  sw          $s1, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 17));
        ctx->pc = 0x2245D8u;
        goto label_2245d8;
    }
    ctx->pc = 0x2245D0u;
    SET_GPR_U32(ctx, 31, 0x2245D8u);
    ctx->pc = 0x2245D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2245D0u;
            // 0x2245d4: 0xafb10058  sw          $s1, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234730u;
    if (runtime->hasFunction(0x234730u)) {
        auto targetFn = runtime->lookupFunction(0x234730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2245D8u; }
        if (ctx->pc != 0x2245D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234730_0x234730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2245D8u; }
        if (ctx->pc != 0x2245D8u) { return; }
    }
    ctx->pc = 0x2245D8u;
label_2245d8:
    // 0x2245d8: 0x10000059  b           . + 4 + (0x59 << 2)
label_2245dc:
    if (ctx->pc == 0x2245DCu) {
        ctx->pc = 0x2245DCu;
            // 0x2245dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2245E0u;
        goto label_2245e0;
    }
    ctx->pc = 0x2245D8u;
    {
        const bool branch_taken_0x2245d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2245DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2245D8u;
            // 0x2245dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2245d8) {
            ctx->pc = 0x224740u;
            goto label_224740;
        }
    }
    ctx->pc = 0x2245E0u;
label_2245e0:
    // 0x2245e0: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_2245e4:
    if (ctx->pc == 0x2245E4u) {
        ctx->pc = 0x2245E4u;
            // 0x2245e4: 0x8e500010  lw          $s0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->pc = 0x2245E8u;
        goto label_2245e8;
    }
    ctx->pc = 0x2245E0u;
    {
        const bool branch_taken_0x2245e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2245e0) {
            ctx->pc = 0x2245E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2245E0u;
            // 0x2245e4: 0x8e500010  lw          $s0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x224604u;
            goto label_224604;
        }
    }
    ctx->pc = 0x2245E8u;
label_2245e8:
    // 0x2245e8: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x2245e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_2245ec:
    // 0x2245ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2245ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2245f0:
    // 0x2245f0: 0xac820084  sw          $v0, 0x84($a0)
    ctx->pc = 0x2245f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
label_2245f4:
    // 0x2245f4: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2245f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2245f8:
    // 0x2245f8: 0xc08f86c  jal         func_23E1B0
label_2245fc:
    if (ctx->pc == 0x2245FCu) {
        ctx->pc = 0x2245FCu;
            // 0x2245fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x224600u;
        goto label_224600;
    }
    ctx->pc = 0x2245F8u;
    SET_GPR_U32(ctx, 31, 0x224600u);
    ctx->pc = 0x2245FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2245F8u;
            // 0x2245fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E1B0u;
    if (runtime->hasFunction(0x23E1B0u)) {
        auto targetFn = runtime->lookupFunction(0x23E1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224600u; }
        if (ctx->pc != 0x224600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023E1B0_0x23e1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224600u; }
        if (ctx->pc != 0x224600u) { return; }
    }
    ctx->pc = 0x224600u;
label_224600:
    // 0x224600: 0x8e500010  lw          $s0, 0x10($s2)
    ctx->pc = 0x224600u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_224604:
    // 0x224604: 0xae510010  sw          $s1, 0x10($s2)
    ctx->pc = 0x224604u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
label_224608:
    // 0x224608: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x224608u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_22460c:
    // 0x22460c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_224610:
    if (ctx->pc == 0x224610u) {
        ctx->pc = 0x224614u;
        goto label_224614;
    }
    ctx->pc = 0x22460Cu;
    {
        const bool branch_taken_0x22460c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22460c) {
            ctx->pc = 0x224620u;
            goto label_224620;
        }
    }
    ctx->pc = 0x224614u;
label_224614:
    // 0x224614: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x224614u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_224618:
    // 0x224618: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x224618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_22461c:
    // 0x22461c: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x22461cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
label_224620:
    // 0x224620: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
label_224624:
    if (ctx->pc == 0x224624u) {
        ctx->pc = 0x224624u;
            // 0x224624: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x224628u;
        goto label_224628;
    }
    ctx->pc = 0x224620u;
    {
        const bool branch_taken_0x224620 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x224620) {
            ctx->pc = 0x224624u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x224620u;
            // 0x224624: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x224670u;
            goto label_224670;
        }
    }
    ctx->pc = 0x224628u;
label_224628:
    // 0x224628: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x224628u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_22462c:
    // 0x22462c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_224630:
    if (ctx->pc == 0x224630u) {
        ctx->pc = 0x224634u;
        goto label_224634;
    }
    ctx->pc = 0x22462Cu;
    {
        const bool branch_taken_0x22462c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22462c) {
            ctx->pc = 0x22466Cu;
            goto label_22466c;
        }
    }
    ctx->pc = 0x224634u;
label_224634:
    // 0x224634: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x224634u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_224638:
    // 0x224638: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x224638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_22463c:
    // 0x22463c: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x22463cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_224640:
    // 0x224640: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x224640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_224644:
    // 0x224644: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x224644u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_224648:
    // 0x224648: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_22464c:
    if (ctx->pc == 0x22464Cu) {
        ctx->pc = 0x224650u;
        goto label_224650;
    }
    ctx->pc = 0x224648u;
    {
        const bool branch_taken_0x224648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x224648) {
            ctx->pc = 0x22466Cu;
            goto label_22466c;
        }
    }
    ctx->pc = 0x224650u;
label_224650:
    // 0x224650: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_224654:
    if (ctx->pc == 0x224654u) {
        ctx->pc = 0x224658u;
        goto label_224658;
    }
    ctx->pc = 0x224650u;
    {
        const bool branch_taken_0x224650 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x224650) {
            ctx->pc = 0x22466Cu;
            goto label_22466c;
        }
    }
    ctx->pc = 0x224658u;
label_224658:
    // 0x224658: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x224658u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22465c:
    // 0x22465c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22465cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_224660:
    // 0x224660: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x224660u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_224664:
    // 0x224664: 0x320f809  jalr        $t9
label_224668:
    if (ctx->pc == 0x224668u) {
        ctx->pc = 0x224668u;
            // 0x224668: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22466Cu;
        goto label_22466c;
    }
    ctx->pc = 0x224664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22466Cu);
        ctx->pc = 0x224668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224664u;
            // 0x224668: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22466Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22466Cu; }
            if (ctx->pc != 0x22466Cu) { return; }
        }
        }
    }
    ctx->pc = 0x22466Cu;
label_22466c:
    // 0x22466c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22466cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_224670:
    // 0x224670: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x224670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_224674:
    // 0x224674: 0xc088dfc  jal         func_2237F0
label_224678:
    if (ctx->pc == 0x224678u) {
        ctx->pc = 0x224678u;
            // 0x224678: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x22467Cu;
        goto label_22467c;
    }
    ctx->pc = 0x224674u;
    SET_GPR_U32(ctx, 31, 0x22467Cu);
    ctx->pc = 0x224678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224674u;
            // 0x224678: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2237F0u;
    if (runtime->hasFunction(0x2237F0u)) {
        auto targetFn = runtime->lookupFunction(0x2237F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22467Cu; }
        if (ctx->pc != 0x22467Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002237F0_0x2237f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22467Cu; }
        if (ctx->pc != 0x22467Cu) { return; }
    }
    ctx->pc = 0x22467Cu;
label_22467c:
    // 0x22467c: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_224680:
    if (ctx->pc == 0x224680u) {
        ctx->pc = 0x224680u;
            // 0x224680: 0xc6410030  lwc1        $f1, 0x30($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x224684u;
        goto label_224684;
    }
    ctx->pc = 0x22467Cu;
    {
        const bool branch_taken_0x22467c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22467c) {
            ctx->pc = 0x224680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22467Cu;
            // 0x224680: 0xc6410030  lwc1        $f1, 0x30($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2246B0u;
            goto label_2246b0;
        }
    }
    ctx->pc = 0x224684u;
label_224684:
    // 0x224684: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x224684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_224688:
    // 0x224688: 0x3442ffee  ori         $v0, $v0, 0xFFEE
    ctx->pc = 0x224688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_22468c:
    // 0x22468c: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x22468cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_224690:
    // 0x224690: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_224694:
    // 0x224694: 0x0  nop
    ctx->pc = 0x224694u;
    // NOP
label_224698:
    // 0x224698: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x224698u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22469c:
    // 0x22469c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_2246a0:
    if (ctx->pc == 0x2246A0u) {
        ctx->pc = 0x2246A4u;
        goto label_2246a4;
    }
    ctx->pc = 0x22469Cu;
    {
        const bool branch_taken_0x22469c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22469c) {
            ctx->pc = 0x2246ACu;
            goto label_2246ac;
        }
    }
    ctx->pc = 0x2246A4u;
label_2246a4:
    // 0x2246a4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2246a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2246a8:
    // 0x2246a8: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x2246a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
label_2246ac:
    // 0x2246ac: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x2246acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2246b0:
    // 0x2246b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2246b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2246b4:
    // 0x2246b4: 0x0  nop
    ctx->pc = 0x2246b4u;
    // NOP
label_2246b8:
    // 0x2246b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2246b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2246bc:
    // 0x2246bc: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_2246c0:
    if (ctx->pc == 0x2246C0u) {
        ctx->pc = 0x2246C0u;
            // 0x2246c0: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->pc = 0x2246C4u;
        goto label_2246c4;
    }
    ctx->pc = 0x2246BCu;
    {
        const bool branch_taken_0x2246bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2246bc) {
            ctx->pc = 0x2246C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2246BCu;
            // 0x2246c0: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2246D8u;
            goto label_2246d8;
        }
    }
    ctx->pc = 0x2246C4u;
label_2246c4:
    // 0x2246c4: 0xc64c0030  lwc1        $f12, 0x30($s2)
    ctx->pc = 0x2246c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2246c8:
    // 0x2246c8: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x2246c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_2246cc:
    // 0x2246cc: 0xc088de0  jal         func_223780
label_2246d0:
    if (ctx->pc == 0x2246D0u) {
        ctx->pc = 0x2246D0u;
            // 0x2246d0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2246D4u;
        goto label_2246d4;
    }
    ctx->pc = 0x2246CCu;
    SET_GPR_U32(ctx, 31, 0x2246D4u);
    ctx->pc = 0x2246D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2246CCu;
            // 0x2246d0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223780u;
    if (runtime->hasFunction(0x223780u)) {
        auto targetFn = runtime->lookupFunction(0x223780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2246D4u; }
        if (ctx->pc != 0x2246D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223780_0x223780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2246D4u; }
        if (ctx->pc != 0x2246D4u) { return; }
    }
    ctx->pc = 0x2246D4u;
label_2246d4:
    // 0x2246d4: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2246d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2246d8:
    // 0x2246d8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2246dc:
    if (ctx->pc == 0x2246DCu) {
        ctx->pc = 0x2246DCu;
            // 0x2246dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2246E0u;
        goto label_2246e0;
    }
    ctx->pc = 0x2246D8u;
    {
        const bool branch_taken_0x2246d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2246d8) {
            ctx->pc = 0x2246DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2246D8u;
            // 0x2246dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2246ECu;
            goto label_2246ec;
        }
    }
    ctx->pc = 0x2246E0u;
label_2246e0:
    // 0x2246e0: 0xc08e49c  jal         func_239270
label_2246e4:
    if (ctx->pc == 0x2246E4u) {
        ctx->pc = 0x2246E4u;
            // 0x2246e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2246E8u;
        goto label_2246e8;
    }
    ctx->pc = 0x2246E0u;
    SET_GPR_U32(ctx, 31, 0x2246E8u);
    ctx->pc = 0x2246E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2246E0u;
            // 0x2246e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239270u;
    if (runtime->hasFunction(0x239270u)) {
        auto targetFn = runtime->lookupFunction(0x239270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2246E8u; }
        if (ctx->pc != 0x2246E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239270_0x239270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2246E8u; }
        if (ctx->pc != 0x2246E8u) { return; }
    }
    ctx->pc = 0x2246E8u;
label_2246e8:
    // 0x2246e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2246e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2246ec:
    // 0x2246ec: 0xc089470  jal         func_2251C0
label_2246f0:
    if (ctx->pc == 0x2246F0u) {
        ctx->pc = 0x2246F4u;
        goto label_2246f4;
    }
    ctx->pc = 0x2246ECu;
    SET_GPR_U32(ctx, 31, 0x2246F4u);
    ctx->pc = 0x2251C0u;
    if (runtime->hasFunction(0x2251C0u)) {
        auto targetFn = runtime->lookupFunction(0x2251C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2246F4u; }
        if (ctx->pc != 0x2246F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002251C0_0x2251c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2246F4u; }
        if (ctx->pc != 0x2246F4u) { return; }
    }
    ctx->pc = 0x2246F4u;
label_2246f4:
    // 0x2246f4: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2246f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2246f8:
    // 0x2246f8: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
label_2246fc:
    if (ctx->pc == 0x2246FCu) {
        ctx->pc = 0x2246FCu;
            // 0x2246fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x224700u;
        goto label_224700;
    }
    ctx->pc = 0x2246F8u;
    {
        const bool branch_taken_0x2246f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2246f8) {
            ctx->pc = 0x2246FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2246F8u;
            // 0x2246fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x224740u;
            goto label_224740;
        }
    }
    ctx->pc = 0x224700u;
label_224700:
    // 0x224700: 0xc08f724  jal         func_23DC90
label_224704:
    if (ctx->pc == 0x224704u) {
        ctx->pc = 0x224704u;
            // 0x224704: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x224708u;
        goto label_224708;
    }
    ctx->pc = 0x224700u;
    SET_GPR_U32(ctx, 31, 0x224708u);
    ctx->pc = 0x224704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224700u;
            // 0x224704: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23DC90u;
    if (runtime->hasFunction(0x23DC90u)) {
        auto targetFn = runtime->lookupFunction(0x23DC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224708u; }
        if (ctx->pc != 0x224708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023DC90_0x23dc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224708u; }
        if (ctx->pc != 0x224708u) { return; }
    }
    ctx->pc = 0x224708u;
label_224708:
    // 0x224708: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x224708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_22470c:
    // 0x22470c: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x22470cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_224710:
    // 0x224710: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x224710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_224714:
    // 0x224714: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_224718:
    if (ctx->pc == 0x224718u) {
        ctx->pc = 0x224718u;
            // 0x224718: 0xac820084  sw          $v0, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
        ctx->pc = 0x22471Cu;
        goto label_22471c;
    }
    ctx->pc = 0x224714u;
    {
        const bool branch_taken_0x224714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224714u;
            // 0x224718: 0xac820084  sw          $v0, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224714) {
            ctx->pc = 0x22473Cu;
            goto label_22473c;
        }
    }
    ctx->pc = 0x22471Cu;
label_22471c:
    // 0x22471c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x22471cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_224720:
    // 0x224720: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_224724:
    if (ctx->pc == 0x224724u) {
        ctx->pc = 0x224728u;
        goto label_224728;
    }
    ctx->pc = 0x224720u;
    {
        const bool branch_taken_0x224720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224720) {
            ctx->pc = 0x22473Cu;
            goto label_22473c;
        }
    }
    ctx->pc = 0x224728u;
label_224728:
    // 0x224728: 0x8082008c  lb          $v0, 0x8C($a0)
    ctx->pc = 0x224728u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 140)));
label_22472c:
    // 0x22472c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_224730:
    if (ctx->pc == 0x224730u) {
        ctx->pc = 0x224734u;
        goto label_224734;
    }
    ctx->pc = 0x22472Cu;
    {
        const bool branch_taken_0x22472c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22472c) {
            ctx->pc = 0x22473Cu;
            goto label_22473c;
        }
    }
    ctx->pc = 0x224734u;
label_224734:
    // 0x224734: 0xc08d1c4  jal         func_234710
label_224738:
    if (ctx->pc == 0x224738u) {
        ctx->pc = 0x22473Cu;
        goto label_22473c;
    }
    ctx->pc = 0x224734u;
    SET_GPR_U32(ctx, 31, 0x22473Cu);
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22473Cu; }
        if (ctx->pc != 0x22473Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22473Cu; }
        if (ctx->pc != 0x22473Cu) { return; }
    }
    ctx->pc = 0x22473Cu;
label_22473c:
    // 0x22473c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22473cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_224740:
    // 0x224740: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x224740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_224744:
    // 0x224744: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x224744u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_224748:
    // 0x224748: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x224748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22474c:
    // 0x22474c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22474cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_224750:
    // 0x224750: 0x3e00008  jr          $ra
label_224754:
    if (ctx->pc == 0x224754u) {
        ctx->pc = 0x224754u;
            // 0x224754: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x224758u;
        goto label_224758;
    }
    ctx->pc = 0x224750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224750u;
            // 0x224754: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x224758u;
label_224758:
    // 0x224758: 0x0  nop
    ctx->pc = 0x224758u;
    // NOP
label_22475c:
    // 0x22475c: 0x0  nop
    ctx->pc = 0x22475cu;
    // NOP
}
