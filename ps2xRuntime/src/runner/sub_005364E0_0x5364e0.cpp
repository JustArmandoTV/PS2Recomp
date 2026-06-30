#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005364E0
// Address: 0x5364e0 - 0x536740
void sub_005364E0_0x5364e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005364E0_0x5364e0");
#endif

    switch (ctx->pc) {
        case 0x5364e0u: goto label_5364e0;
        case 0x5364e4u: goto label_5364e4;
        case 0x5364e8u: goto label_5364e8;
        case 0x5364ecu: goto label_5364ec;
        case 0x5364f0u: goto label_5364f0;
        case 0x5364f4u: goto label_5364f4;
        case 0x5364f8u: goto label_5364f8;
        case 0x5364fcu: goto label_5364fc;
        case 0x536500u: goto label_536500;
        case 0x536504u: goto label_536504;
        case 0x536508u: goto label_536508;
        case 0x53650cu: goto label_53650c;
        case 0x536510u: goto label_536510;
        case 0x536514u: goto label_536514;
        case 0x536518u: goto label_536518;
        case 0x53651cu: goto label_53651c;
        case 0x536520u: goto label_536520;
        case 0x536524u: goto label_536524;
        case 0x536528u: goto label_536528;
        case 0x53652cu: goto label_53652c;
        case 0x536530u: goto label_536530;
        case 0x536534u: goto label_536534;
        case 0x536538u: goto label_536538;
        case 0x53653cu: goto label_53653c;
        case 0x536540u: goto label_536540;
        case 0x536544u: goto label_536544;
        case 0x536548u: goto label_536548;
        case 0x53654cu: goto label_53654c;
        case 0x536550u: goto label_536550;
        case 0x536554u: goto label_536554;
        case 0x536558u: goto label_536558;
        case 0x53655cu: goto label_53655c;
        case 0x536560u: goto label_536560;
        case 0x536564u: goto label_536564;
        case 0x536568u: goto label_536568;
        case 0x53656cu: goto label_53656c;
        case 0x536570u: goto label_536570;
        case 0x536574u: goto label_536574;
        case 0x536578u: goto label_536578;
        case 0x53657cu: goto label_53657c;
        case 0x536580u: goto label_536580;
        case 0x536584u: goto label_536584;
        case 0x536588u: goto label_536588;
        case 0x53658cu: goto label_53658c;
        case 0x536590u: goto label_536590;
        case 0x536594u: goto label_536594;
        case 0x536598u: goto label_536598;
        case 0x53659cu: goto label_53659c;
        case 0x5365a0u: goto label_5365a0;
        case 0x5365a4u: goto label_5365a4;
        case 0x5365a8u: goto label_5365a8;
        case 0x5365acu: goto label_5365ac;
        case 0x5365b0u: goto label_5365b0;
        case 0x5365b4u: goto label_5365b4;
        case 0x5365b8u: goto label_5365b8;
        case 0x5365bcu: goto label_5365bc;
        case 0x5365c0u: goto label_5365c0;
        case 0x5365c4u: goto label_5365c4;
        case 0x5365c8u: goto label_5365c8;
        case 0x5365ccu: goto label_5365cc;
        case 0x5365d0u: goto label_5365d0;
        case 0x5365d4u: goto label_5365d4;
        case 0x5365d8u: goto label_5365d8;
        case 0x5365dcu: goto label_5365dc;
        case 0x5365e0u: goto label_5365e0;
        case 0x5365e4u: goto label_5365e4;
        case 0x5365e8u: goto label_5365e8;
        case 0x5365ecu: goto label_5365ec;
        case 0x5365f0u: goto label_5365f0;
        case 0x5365f4u: goto label_5365f4;
        case 0x5365f8u: goto label_5365f8;
        case 0x5365fcu: goto label_5365fc;
        case 0x536600u: goto label_536600;
        case 0x536604u: goto label_536604;
        case 0x536608u: goto label_536608;
        case 0x53660cu: goto label_53660c;
        case 0x536610u: goto label_536610;
        case 0x536614u: goto label_536614;
        case 0x536618u: goto label_536618;
        case 0x53661cu: goto label_53661c;
        case 0x536620u: goto label_536620;
        case 0x536624u: goto label_536624;
        case 0x536628u: goto label_536628;
        case 0x53662cu: goto label_53662c;
        case 0x536630u: goto label_536630;
        case 0x536634u: goto label_536634;
        case 0x536638u: goto label_536638;
        case 0x53663cu: goto label_53663c;
        case 0x536640u: goto label_536640;
        case 0x536644u: goto label_536644;
        case 0x536648u: goto label_536648;
        case 0x53664cu: goto label_53664c;
        case 0x536650u: goto label_536650;
        case 0x536654u: goto label_536654;
        case 0x536658u: goto label_536658;
        case 0x53665cu: goto label_53665c;
        case 0x536660u: goto label_536660;
        case 0x536664u: goto label_536664;
        case 0x536668u: goto label_536668;
        case 0x53666cu: goto label_53666c;
        case 0x536670u: goto label_536670;
        case 0x536674u: goto label_536674;
        case 0x536678u: goto label_536678;
        case 0x53667cu: goto label_53667c;
        case 0x536680u: goto label_536680;
        case 0x536684u: goto label_536684;
        case 0x536688u: goto label_536688;
        case 0x53668cu: goto label_53668c;
        case 0x536690u: goto label_536690;
        case 0x536694u: goto label_536694;
        case 0x536698u: goto label_536698;
        case 0x53669cu: goto label_53669c;
        case 0x5366a0u: goto label_5366a0;
        case 0x5366a4u: goto label_5366a4;
        case 0x5366a8u: goto label_5366a8;
        case 0x5366acu: goto label_5366ac;
        case 0x5366b0u: goto label_5366b0;
        case 0x5366b4u: goto label_5366b4;
        case 0x5366b8u: goto label_5366b8;
        case 0x5366bcu: goto label_5366bc;
        case 0x5366c0u: goto label_5366c0;
        case 0x5366c4u: goto label_5366c4;
        case 0x5366c8u: goto label_5366c8;
        case 0x5366ccu: goto label_5366cc;
        case 0x5366d0u: goto label_5366d0;
        case 0x5366d4u: goto label_5366d4;
        case 0x5366d8u: goto label_5366d8;
        case 0x5366dcu: goto label_5366dc;
        case 0x5366e0u: goto label_5366e0;
        case 0x5366e4u: goto label_5366e4;
        case 0x5366e8u: goto label_5366e8;
        case 0x5366ecu: goto label_5366ec;
        case 0x5366f0u: goto label_5366f0;
        case 0x5366f4u: goto label_5366f4;
        case 0x5366f8u: goto label_5366f8;
        case 0x5366fcu: goto label_5366fc;
        case 0x536700u: goto label_536700;
        case 0x536704u: goto label_536704;
        case 0x536708u: goto label_536708;
        case 0x53670cu: goto label_53670c;
        case 0x536710u: goto label_536710;
        case 0x536714u: goto label_536714;
        case 0x536718u: goto label_536718;
        case 0x53671cu: goto label_53671c;
        case 0x536720u: goto label_536720;
        case 0x536724u: goto label_536724;
        case 0x536728u: goto label_536728;
        case 0x53672cu: goto label_53672c;
        case 0x536730u: goto label_536730;
        case 0x536734u: goto label_536734;
        case 0x536738u: goto label_536738;
        case 0x53673cu: goto label_53673c;
        default: break;
    }

    ctx->pc = 0x5364e0u;

label_5364e0:
    // 0x5364e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5364e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_5364e4:
    // 0x5364e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5364e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_5364e8:
    // 0x5364e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5364e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5364ec:
    // 0x5364ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5364ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5364f0:
    // 0x5364f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x5364f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5364f4:
    // 0x5364f4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_5364f8:
    if (ctx->pc == 0x5364F8u) {
        ctx->pc = 0x5364F8u;
            // 0x5364f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5364FCu;
        goto label_5364fc;
    }
    ctx->pc = 0x5364F4u;
    {
        const bool branch_taken_0x5364f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x5364F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5364F4u;
            // 0x5364f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5364f4) {
            ctx->pc = 0x536538u;
            goto label_536538;
        }
    }
    ctx->pc = 0x5364FCu;
label_5364fc:
    // 0x5364fc: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_536500:
    if (ctx->pc == 0x536500u) {
        ctx->pc = 0x536500u;
            // 0x536500: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x536504u;
        goto label_536504;
    }
    ctx->pc = 0x5364FCu;
    {
        const bool branch_taken_0x5364fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x5364fc) {
            ctx->pc = 0x536500u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5364FCu;
            // 0x536500: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x536524u;
            goto label_536524;
        }
    }
    ctx->pc = 0x536504u;
label_536504:
    // 0x536504: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_536508:
    if (ctx->pc == 0x536508u) {
        ctx->pc = 0x53650Cu;
        goto label_53650c;
    }
    ctx->pc = 0x536504u;
    {
        const bool branch_taken_0x536504 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x536504) {
            ctx->pc = 0x536520u;
            goto label_536520;
        }
    }
    ctx->pc = 0x53650Cu;
label_53650c:
    // 0x53650c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x53650cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_536510:
    // 0x536510: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_536514:
    if (ctx->pc == 0x536514u) {
        ctx->pc = 0x536518u;
        goto label_536518;
    }
    ctx->pc = 0x536510u;
    {
        const bool branch_taken_0x536510 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x536510) {
            ctx->pc = 0x536520u;
            goto label_536520;
        }
    }
    ctx->pc = 0x536518u;
label_536518:
    // 0x536518: 0xc0400a8  jal         func_1002A0
label_53651c:
    if (ctx->pc == 0x53651Cu) {
        ctx->pc = 0x536520u;
        goto label_536520;
    }
    ctx->pc = 0x536518u;
    SET_GPR_U32(ctx, 31, 0x536520u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536520u; }
        if (ctx->pc != 0x536520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536520u; }
        if (ctx->pc != 0x536520u) { return; }
    }
    ctx->pc = 0x536520u;
label_536520:
    // 0x536520: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x536520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_536524:
    // 0x536524: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x536524u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_536528:
    // 0x536528: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_53652c:
    if (ctx->pc == 0x53652Cu) {
        ctx->pc = 0x53652Cu;
            // 0x53652c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x536530u;
        goto label_536530;
    }
    ctx->pc = 0x536528u;
    {
        const bool branch_taken_0x536528 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x536528) {
            ctx->pc = 0x53652Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x536528u;
            // 0x53652c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53653Cu;
            goto label_53653c;
        }
    }
    ctx->pc = 0x536530u;
label_536530:
    // 0x536530: 0xc0400a8  jal         func_1002A0
label_536534:
    if (ctx->pc == 0x536534u) {
        ctx->pc = 0x536534u;
            // 0x536534: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x536538u;
        goto label_536538;
    }
    ctx->pc = 0x536530u;
    SET_GPR_U32(ctx, 31, 0x536538u);
    ctx->pc = 0x536534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x536530u;
            // 0x536534: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536538u; }
        if (ctx->pc != 0x536538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536538u; }
        if (ctx->pc != 0x536538u) { return; }
    }
    ctx->pc = 0x536538u;
label_536538:
    // 0x536538: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x536538u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53653c:
    // 0x53653c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x53653cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_536540:
    // 0x536540: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x536540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_536544:
    // 0x536544: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x536544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_536548:
    // 0x536548: 0x3e00008  jr          $ra
label_53654c:
    if (ctx->pc == 0x53654Cu) {
        ctx->pc = 0x53654Cu;
            // 0x53654c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x536550u;
        goto label_536550;
    }
    ctx->pc = 0x536548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53654Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x536548u;
            // 0x53654c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x536550u;
label_536550:
    // 0x536550: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x536550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_536554:
    // 0x536554: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x536554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_536558:
    // 0x536558: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x536558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53655c:
    // 0x53655c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53655cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_536560:
    // 0x536560: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x536560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_536564:
    // 0x536564: 0x1220002b  beqz        $s1, . + 4 + (0x2B << 2)
label_536568:
    if (ctx->pc == 0x536568u) {
        ctx->pc = 0x536568u;
            // 0x536568: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53656Cu;
        goto label_53656c;
    }
    ctx->pc = 0x536564u;
    {
        const bool branch_taken_0x536564 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x536568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x536564u;
            // 0x536568: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x536564) {
            ctx->pc = 0x536614u;
            goto label_536614;
        }
    }
    ctx->pc = 0x53656Cu;
label_53656c:
    // 0x53656c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x53656cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_536570:
    // 0x536570: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x536570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_536574:
    // 0x536574: 0x24636e90  addiu       $v1, $v1, 0x6E90
    ctx->pc = 0x536574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28304));
label_536578:
    // 0x536578: 0x24426ec4  addiu       $v0, $v0, 0x6EC4
    ctx->pc = 0x536578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28356));
label_53657c:
    // 0x53657c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x53657cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_536580:
    // 0x536580: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x536580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_536584:
    // 0x536584: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x536584u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_536588:
    // 0x536588: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x536588u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_53658c:
    // 0x53658c: 0x320f809  jalr        $t9
label_536590:
    if (ctx->pc == 0x536590u) {
        ctx->pc = 0x536594u;
        goto label_536594;
    }
    ctx->pc = 0x53658Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x536594u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x536594u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x536594u; }
            if (ctx->pc != 0x536594u) { return; }
        }
        }
    }
    ctx->pc = 0x536594u;
label_536594:
    // 0x536594: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x536594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_536598:
    // 0x536598: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_53659c:
    if (ctx->pc == 0x53659Cu) {
        ctx->pc = 0x5365A0u;
        goto label_5365a0;
    }
    ctx->pc = 0x536598u;
    {
        const bool branch_taken_0x536598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x536598) {
            ctx->pc = 0x5365BCu;
            goto label_5365bc;
        }
    }
    ctx->pc = 0x5365A0u;
label_5365a0:
    // 0x5365a0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x5365a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_5365a4:
    // 0x5365a4: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x5365a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_5365a8:
    // 0x5365a8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_5365ac:
    if (ctx->pc == 0x5365ACu) {
        ctx->pc = 0x5365ACu;
            // 0x5365ac: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x5365B0u;
        goto label_5365b0;
    }
    ctx->pc = 0x5365A8u;
    {
        const bool branch_taken_0x5365a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x5365ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5365A8u;
            // 0x5365ac: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5365a8) {
            ctx->pc = 0x5365BCu;
            goto label_5365bc;
        }
    }
    ctx->pc = 0x5365B0u;
label_5365b0:
    // 0x5365b0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x5365b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_5365b4:
    // 0x5365b4: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x5365b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_5365b8:
    // 0x5365b8: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x5365b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_5365bc:
    // 0x5365bc: 0x52200010  beql        $s1, $zero, . + 4 + (0x10 << 2)
label_5365c0:
    if (ctx->pc == 0x5365C0u) {
        ctx->pc = 0x5365C0u;
            // 0x5365c0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x5365C4u;
        goto label_5365c4;
    }
    ctx->pc = 0x5365BCu;
    {
        const bool branch_taken_0x5365bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x5365bc) {
            ctx->pc = 0x5365C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5365BCu;
            // 0x5365c0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x536600u;
            goto label_536600;
        }
    }
    ctx->pc = 0x5365C4u;
label_5365c4:
    // 0x5365c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x5365c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_5365c8:
    // 0x5365c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5365c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5365cc:
    // 0x5365cc: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x5365ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_5365d0:
    // 0x5365d0: 0xc0d37dc  jal         func_34DF70
label_5365d4:
    if (ctx->pc == 0x5365D4u) {
        ctx->pc = 0x5365D4u;
            // 0x5365d4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x5365D8u;
        goto label_5365d8;
    }
    ctx->pc = 0x5365D0u;
    SET_GPR_U32(ctx, 31, 0x5365D8u);
    ctx->pc = 0x5365D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5365D0u;
            // 0x5365d4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5365D8u; }
        if (ctx->pc != 0x5365D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5365D8u; }
        if (ctx->pc != 0x5365D8u) { return; }
    }
    ctx->pc = 0x5365D8u;
label_5365d8:
    // 0x5365d8: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_5365dc:
    if (ctx->pc == 0x5365DCu) {
        ctx->pc = 0x5365E0u;
        goto label_5365e0;
    }
    ctx->pc = 0x5365D8u;
    {
        const bool branch_taken_0x5365d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x5365d8) {
            ctx->pc = 0x5365FCu;
            goto label_5365fc;
        }
    }
    ctx->pc = 0x5365E0u;
label_5365e0:
    // 0x5365e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x5365e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_5365e4:
    // 0x5365e4: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x5365e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_5365e8:
    // 0x5365e8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_5365ec:
    if (ctx->pc == 0x5365ECu) {
        ctx->pc = 0x5365ECu;
            // 0x5365ec: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x5365F0u;
        goto label_5365f0;
    }
    ctx->pc = 0x5365E8u;
    {
        const bool branch_taken_0x5365e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x5365ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5365E8u;
            // 0x5365ec: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5365e8) {
            ctx->pc = 0x5365FCu;
            goto label_5365fc;
        }
    }
    ctx->pc = 0x5365F0u;
label_5365f0:
    // 0x5365f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x5365f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_5365f4:
    // 0x5365f4: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x5365f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_5365f8:
    // 0x5365f8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x5365f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_5365fc:
    // 0x5365fc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x5365fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_536600:
    // 0x536600: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x536600u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_536604:
    // 0x536604: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_536608:
    if (ctx->pc == 0x536608u) {
        ctx->pc = 0x536608u;
            // 0x536608: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53660Cu;
        goto label_53660c;
    }
    ctx->pc = 0x536604u;
    {
        const bool branch_taken_0x536604 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x536604) {
            ctx->pc = 0x536608u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x536604u;
            // 0x536608: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x536618u;
            goto label_536618;
        }
    }
    ctx->pc = 0x53660Cu;
label_53660c:
    // 0x53660c: 0xc0400a8  jal         func_1002A0
label_536610:
    if (ctx->pc == 0x536610u) {
        ctx->pc = 0x536610u;
            // 0x536610: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x536614u;
        goto label_536614;
    }
    ctx->pc = 0x53660Cu;
    SET_GPR_U32(ctx, 31, 0x536614u);
    ctx->pc = 0x536610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53660Cu;
            // 0x536610: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536614u; }
        if (ctx->pc != 0x536614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536614u; }
        if (ctx->pc != 0x536614u) { return; }
    }
    ctx->pc = 0x536614u;
label_536614:
    // 0x536614: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x536614u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_536618:
    // 0x536618: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x536618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_53661c:
    // 0x53661c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53661cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_536620:
    // 0x536620: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x536620u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_536624:
    // 0x536624: 0x3e00008  jr          $ra
label_536628:
    if (ctx->pc == 0x536628u) {
        ctx->pc = 0x536628u;
            // 0x536628: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x53662Cu;
        goto label_53662c;
    }
    ctx->pc = 0x536624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x536628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x536624u;
            // 0x536628: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53662Cu;
label_53662c:
    // 0x53662c: 0x0  nop
    ctx->pc = 0x53662cu;
    // NOP
label_536630:
    // 0x536630: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x536630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_536634:
    // 0x536634: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x536634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_536638:
    // 0x536638: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x536638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_53663c:
    // 0x53663c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x53663cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_536640:
    // 0x536640: 0x50a30012  beql        $a1, $v1, . + 4 + (0x12 << 2)
label_536644:
    if (ctx->pc == 0x536644u) {
        ctx->pc = 0x536644u;
            // 0x536644: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x536648u;
        goto label_536648;
    }
    ctx->pc = 0x536640u;
    {
        const bool branch_taken_0x536640 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x536640) {
            ctx->pc = 0x536644u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x536640u;
            // 0x536644: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53668Cu;
            goto label_53668c;
        }
    }
    ctx->pc = 0x536648u;
label_536648:
    // 0x536648: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x536648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_53664c:
    // 0x53664c: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
label_536650:
    if (ctx->pc == 0x536650u) {
        ctx->pc = 0x536654u;
        goto label_536654;
    }
    ctx->pc = 0x53664Cu;
    {
        const bool branch_taken_0x53664c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x53664c) {
            ctx->pc = 0x536688u;
            goto label_536688;
        }
    }
    ctx->pc = 0x536654u;
label_536654:
    // 0x536654: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x536654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_536658:
    // 0x536658: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_53665c:
    if (ctx->pc == 0x53665Cu) {
        ctx->pc = 0x536660u;
        goto label_536660;
    }
    ctx->pc = 0x536658u;
    {
        const bool branch_taken_0x536658 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x536658) {
            ctx->pc = 0x536668u;
            goto label_536668;
        }
    }
    ctx->pc = 0x536660u;
label_536660:
    // 0x536660: 0x10000009  b           . + 4 + (0x9 << 2)
label_536664:
    if (ctx->pc == 0x536664u) {
        ctx->pc = 0x536668u;
        goto label_536668;
    }
    ctx->pc = 0x536660u;
    {
        const bool branch_taken_0x536660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x536660) {
            ctx->pc = 0x536688u;
            goto label_536688;
        }
    }
    ctx->pc = 0x536668u;
label_536668:
    // 0x536668: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x536668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_53666c:
    // 0x53666c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53666cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_536670:
    // 0x536670: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x536670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_536674:
    // 0x536674: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x536674u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_536678:
    // 0x536678: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x536678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_53667c:
    // 0x53667c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x53667cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_536680:
    // 0x536680: 0x320f809  jalr        $t9
label_536684:
    if (ctx->pc == 0x536684u) {
        ctx->pc = 0x536684u;
            // 0x536684: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x536688u;
        goto label_536688;
    }
    ctx->pc = 0x536680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x536688u);
        ctx->pc = 0x536684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x536680u;
            // 0x536684: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x536688u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x536688u; }
            if (ctx->pc != 0x536688u) { return; }
        }
        }
    }
    ctx->pc = 0x536688u;
label_536688:
    // 0x536688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x536688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_53668c:
    // 0x53668c: 0x3e00008  jr          $ra
label_536690:
    if (ctx->pc == 0x536690u) {
        ctx->pc = 0x536690u;
            // 0x536690: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x536694u;
        goto label_536694;
    }
    ctx->pc = 0x53668Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x536690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53668Cu;
            // 0x536690: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x536694u;
label_536694:
    // 0x536694: 0x0  nop
    ctx->pc = 0x536694u;
    // NOP
label_536698:
    // 0x536698: 0x0  nop
    ctx->pc = 0x536698u;
    // NOP
label_53669c:
    // 0x53669c: 0x0  nop
    ctx->pc = 0x53669cu;
    // NOP
label_5366a0:
    // 0x5366a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x5366a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_5366a4:
    // 0x5366a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x5366a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_5366a8:
    // 0x5366a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5366a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_5366ac:
    // 0x5366ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5366acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5366b0:
    // 0x5366b0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x5366b0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_5366b4:
    // 0x5366b4: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_5366b8:
    if (ctx->pc == 0x5366B8u) {
        ctx->pc = 0x5366B8u;
            // 0x5366b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5366BCu;
        goto label_5366bc;
    }
    ctx->pc = 0x5366B4u;
    {
        const bool branch_taken_0x5366b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x5366B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5366B4u;
            // 0x5366b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5366b4) {
            ctx->pc = 0x5366E8u;
            goto label_5366e8;
        }
    }
    ctx->pc = 0x5366BCu;
label_5366bc:
    // 0x5366bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x5366bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5366c0:
    // 0x5366c0: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_5366c4:
    if (ctx->pc == 0x5366C4u) {
        ctx->pc = 0x5366C4u;
            // 0x5366c4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x5366C8u;
        goto label_5366c8;
    }
    ctx->pc = 0x5366C0u;
    {
        const bool branch_taken_0x5366c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x5366c0) {
            ctx->pc = 0x5366C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5366C0u;
            // 0x5366c4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5366DCu;
            goto label_5366dc;
        }
    }
    ctx->pc = 0x5366C8u;
label_5366c8:
    // 0x5366c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x5366c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_5366cc:
    // 0x5366cc: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
label_5366d0:
    if (ctx->pc == 0x5366D0u) {
        ctx->pc = 0x5366D4u;
        goto label_5366d4;
    }
    ctx->pc = 0x5366CCu;
    {
        const bool branch_taken_0x5366cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x5366cc) {
            ctx->pc = 0x536730u;
            goto label_536730;
        }
    }
    ctx->pc = 0x5366D4u;
label_5366d4:
    // 0x5366d4: 0x10000016  b           . + 4 + (0x16 << 2)
label_5366d8:
    if (ctx->pc == 0x5366D8u) {
        ctx->pc = 0x5366DCu;
        goto label_5366dc;
    }
    ctx->pc = 0x5366D4u;
    {
        const bool branch_taken_0x5366d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5366d4) {
            ctx->pc = 0x536730u;
            goto label_536730;
        }
    }
    ctx->pc = 0x5366DCu;
label_5366dc:
    // 0x5366dc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x5366dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_5366e0:
    // 0x5366e0: 0x320f809  jalr        $t9
label_5366e4:
    if (ctx->pc == 0x5366E4u) {
        ctx->pc = 0x5366E8u;
        goto label_5366e8;
    }
    ctx->pc = 0x5366E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5366E8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x5366E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5366E8u; }
            if (ctx->pc != 0x5366E8u) { return; }
        }
        }
    }
    ctx->pc = 0x5366E8u;
label_5366e8:
    // 0x5366e8: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x5366e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_5366ec:
    // 0x5366ec: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_5366f0:
    if (ctx->pc == 0x5366F0u) {
        ctx->pc = 0x5366F4u;
        goto label_5366f4;
    }
    ctx->pc = 0x5366ECu;
    {
        const bool branch_taken_0x5366ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5366ec) {
            ctx->pc = 0x536730u;
            goto label_536730;
        }
    }
    ctx->pc = 0x5366F4u;
label_5366f4:
    // 0x5366f4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x5366f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_5366f8:
    // 0x5366f8: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x5366f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_5366fc:
    // 0x5366fc: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x5366fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_536700:
    // 0x536700: 0x28630006  slti        $v1, $v1, 0x6
    ctx->pc = 0x536700u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_536704:
    // 0x536704: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_536708:
    if (ctx->pc == 0x536708u) {
        ctx->pc = 0x53670Cu;
        goto label_53670c;
    }
    ctx->pc = 0x536704u;
    {
        const bool branch_taken_0x536704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x536704) {
            ctx->pc = 0x536730u;
            goto label_536730;
        }
    }
    ctx->pc = 0x53670Cu;
label_53670c:
    // 0x53670c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x53670cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_536710:
    // 0x536710: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x536710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_536714:
    // 0x536714: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x536714u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_536718:
    // 0x536718: 0x0  nop
    ctx->pc = 0x536718u;
    // NOP
label_53671c:
    // 0x53671c: 0x0  nop
    ctx->pc = 0x53671cu;
    // NOP
label_536720:
    // 0x536720: 0x0  nop
    ctx->pc = 0x536720u;
    // NOP
label_536724:
    // 0x536724: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_536728:
    if (ctx->pc == 0x536728u) {
        ctx->pc = 0x53672Cu;
        goto label_53672c;
    }
    ctx->pc = 0x536724u;
    {
        const bool branch_taken_0x536724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x536724) {
            ctx->pc = 0x536710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_536710;
        }
    }
    ctx->pc = 0x53672Cu;
label_53672c:
    // 0x53672c: 0x0  nop
    ctx->pc = 0x53672cu;
    // NOP
label_536730:
    // 0x536730: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x536730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_536734:
    // 0x536734: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x536734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_536738:
    // 0x536738: 0x3e00008  jr          $ra
label_53673c:
    if (ctx->pc == 0x53673Cu) {
        ctx->pc = 0x53673Cu;
            // 0x53673c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x536740u;
        goto label_fallthrough_0x536738;
    }
    ctx->pc = 0x536738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53673Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x536738u;
            // 0x53673c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x536738:
    ctx->pc = 0x536740u;
}
