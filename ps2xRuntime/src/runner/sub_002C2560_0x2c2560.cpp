#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C2560
// Address: 0x2c2560 - 0x2c2710
void sub_002C2560_0x2c2560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2560_0x2c2560");
#endif

    switch (ctx->pc) {
        case 0x2c2560u: goto label_2c2560;
        case 0x2c2564u: goto label_2c2564;
        case 0x2c2568u: goto label_2c2568;
        case 0x2c256cu: goto label_2c256c;
        case 0x2c2570u: goto label_2c2570;
        case 0x2c2574u: goto label_2c2574;
        case 0x2c2578u: goto label_2c2578;
        case 0x2c257cu: goto label_2c257c;
        case 0x2c2580u: goto label_2c2580;
        case 0x2c2584u: goto label_2c2584;
        case 0x2c2588u: goto label_2c2588;
        case 0x2c258cu: goto label_2c258c;
        case 0x2c2590u: goto label_2c2590;
        case 0x2c2594u: goto label_2c2594;
        case 0x2c2598u: goto label_2c2598;
        case 0x2c259cu: goto label_2c259c;
        case 0x2c25a0u: goto label_2c25a0;
        case 0x2c25a4u: goto label_2c25a4;
        case 0x2c25a8u: goto label_2c25a8;
        case 0x2c25acu: goto label_2c25ac;
        case 0x2c25b0u: goto label_2c25b0;
        case 0x2c25b4u: goto label_2c25b4;
        case 0x2c25b8u: goto label_2c25b8;
        case 0x2c25bcu: goto label_2c25bc;
        case 0x2c25c0u: goto label_2c25c0;
        case 0x2c25c4u: goto label_2c25c4;
        case 0x2c25c8u: goto label_2c25c8;
        case 0x2c25ccu: goto label_2c25cc;
        case 0x2c25d0u: goto label_2c25d0;
        case 0x2c25d4u: goto label_2c25d4;
        case 0x2c25d8u: goto label_2c25d8;
        case 0x2c25dcu: goto label_2c25dc;
        case 0x2c25e0u: goto label_2c25e0;
        case 0x2c25e4u: goto label_2c25e4;
        case 0x2c25e8u: goto label_2c25e8;
        case 0x2c25ecu: goto label_2c25ec;
        case 0x2c25f0u: goto label_2c25f0;
        case 0x2c25f4u: goto label_2c25f4;
        case 0x2c25f8u: goto label_2c25f8;
        case 0x2c25fcu: goto label_2c25fc;
        case 0x2c2600u: goto label_2c2600;
        case 0x2c2604u: goto label_2c2604;
        case 0x2c2608u: goto label_2c2608;
        case 0x2c260cu: goto label_2c260c;
        case 0x2c2610u: goto label_2c2610;
        case 0x2c2614u: goto label_2c2614;
        case 0x2c2618u: goto label_2c2618;
        case 0x2c261cu: goto label_2c261c;
        case 0x2c2620u: goto label_2c2620;
        case 0x2c2624u: goto label_2c2624;
        case 0x2c2628u: goto label_2c2628;
        case 0x2c262cu: goto label_2c262c;
        case 0x2c2630u: goto label_2c2630;
        case 0x2c2634u: goto label_2c2634;
        case 0x2c2638u: goto label_2c2638;
        case 0x2c263cu: goto label_2c263c;
        case 0x2c2640u: goto label_2c2640;
        case 0x2c2644u: goto label_2c2644;
        case 0x2c2648u: goto label_2c2648;
        case 0x2c264cu: goto label_2c264c;
        case 0x2c2650u: goto label_2c2650;
        case 0x2c2654u: goto label_2c2654;
        case 0x2c2658u: goto label_2c2658;
        case 0x2c265cu: goto label_2c265c;
        case 0x2c2660u: goto label_2c2660;
        case 0x2c2664u: goto label_2c2664;
        case 0x2c2668u: goto label_2c2668;
        case 0x2c266cu: goto label_2c266c;
        case 0x2c2670u: goto label_2c2670;
        case 0x2c2674u: goto label_2c2674;
        case 0x2c2678u: goto label_2c2678;
        case 0x2c267cu: goto label_2c267c;
        case 0x2c2680u: goto label_2c2680;
        case 0x2c2684u: goto label_2c2684;
        case 0x2c2688u: goto label_2c2688;
        case 0x2c268cu: goto label_2c268c;
        case 0x2c2690u: goto label_2c2690;
        case 0x2c2694u: goto label_2c2694;
        case 0x2c2698u: goto label_2c2698;
        case 0x2c269cu: goto label_2c269c;
        case 0x2c26a0u: goto label_2c26a0;
        case 0x2c26a4u: goto label_2c26a4;
        case 0x2c26a8u: goto label_2c26a8;
        case 0x2c26acu: goto label_2c26ac;
        case 0x2c26b0u: goto label_2c26b0;
        case 0x2c26b4u: goto label_2c26b4;
        case 0x2c26b8u: goto label_2c26b8;
        case 0x2c26bcu: goto label_2c26bc;
        case 0x2c26c0u: goto label_2c26c0;
        case 0x2c26c4u: goto label_2c26c4;
        case 0x2c26c8u: goto label_2c26c8;
        case 0x2c26ccu: goto label_2c26cc;
        case 0x2c26d0u: goto label_2c26d0;
        case 0x2c26d4u: goto label_2c26d4;
        case 0x2c26d8u: goto label_2c26d8;
        case 0x2c26dcu: goto label_2c26dc;
        case 0x2c26e0u: goto label_2c26e0;
        case 0x2c26e4u: goto label_2c26e4;
        case 0x2c26e8u: goto label_2c26e8;
        case 0x2c26ecu: goto label_2c26ec;
        case 0x2c26f0u: goto label_2c26f0;
        case 0x2c26f4u: goto label_2c26f4;
        case 0x2c26f8u: goto label_2c26f8;
        case 0x2c26fcu: goto label_2c26fc;
        case 0x2c2700u: goto label_2c2700;
        case 0x2c2704u: goto label_2c2704;
        case 0x2c2708u: goto label_2c2708;
        case 0x2c270cu: goto label_2c270c;
        default: break;
    }

    ctx->pc = 0x2c2560u;

label_2c2560:
    // 0x2c2560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c2560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c2564:
    // 0x2c2564: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c2564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c2568:
    // 0x2c2568: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c2568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c256c:
    // 0x2c256c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c256cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c2570:
    // 0x2c2570: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c2570u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c2574:
    // 0x2c2574: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2c2578:
    if (ctx->pc == 0x2C2578u) {
        ctx->pc = 0x2C2578u;
            // 0x2c2578: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C257Cu;
        goto label_2c257c;
    }
    ctx->pc = 0x2C2574u;
    {
        const bool branch_taken_0x2c2574 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2574u;
            // 0x2c2578: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2574) {
            ctx->pc = 0x2C25B8u;
            goto label_2c25b8;
        }
    }
    ctx->pc = 0x2C257Cu;
label_2c257c:
    // 0x2c257c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2c2580:
    if (ctx->pc == 0x2C2580u) {
        ctx->pc = 0x2C2580u;
            // 0x2c2580: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C2584u;
        goto label_2c2584;
    }
    ctx->pc = 0x2C257Cu;
    {
        const bool branch_taken_0x2c257c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c257c) {
            ctx->pc = 0x2C2580u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C257Cu;
            // 0x2c2580: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C25A4u;
            goto label_2c25a4;
        }
    }
    ctx->pc = 0x2C2584u;
label_2c2584:
    // 0x2c2584: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_2c2588:
    if (ctx->pc == 0x2C2588u) {
        ctx->pc = 0x2C258Cu;
        goto label_2c258c;
    }
    ctx->pc = 0x2C2584u;
    {
        const bool branch_taken_0x2c2584 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2584) {
            ctx->pc = 0x2C25A0u;
            goto label_2c25a0;
        }
    }
    ctx->pc = 0x2C258Cu;
label_2c258c:
    // 0x2c258c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2c258cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2c2590:
    // 0x2c2590: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c2594:
    if (ctx->pc == 0x2C2594u) {
        ctx->pc = 0x2C2598u;
        goto label_2c2598;
    }
    ctx->pc = 0x2C2590u;
    {
        const bool branch_taken_0x2c2590 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2590) {
            ctx->pc = 0x2C25A0u;
            goto label_2c25a0;
        }
    }
    ctx->pc = 0x2C2598u;
label_2c2598:
    // 0x2c2598: 0xc0400a8  jal         func_1002A0
label_2c259c:
    if (ctx->pc == 0x2C259Cu) {
        ctx->pc = 0x2C25A0u;
        goto label_2c25a0;
    }
    ctx->pc = 0x2C2598u;
    SET_GPR_U32(ctx, 31, 0x2C25A0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C25A0u; }
        if (ctx->pc != 0x2C25A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C25A0u; }
        if (ctx->pc != 0x2C25A0u) { return; }
    }
    ctx->pc = 0x2C25A0u;
label_2c25a0:
    // 0x2c25a0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c25a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c25a4:
    // 0x2c25a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c25a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c25a8:
    // 0x2c25a8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c25ac:
    if (ctx->pc == 0x2C25ACu) {
        ctx->pc = 0x2C25ACu;
            // 0x2c25ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C25B0u;
        goto label_2c25b0;
    }
    ctx->pc = 0x2C25A8u;
    {
        const bool branch_taken_0x2c25a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c25a8) {
            ctx->pc = 0x2C25ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C25A8u;
            // 0x2c25ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C25BCu;
            goto label_2c25bc;
        }
    }
    ctx->pc = 0x2C25B0u;
label_2c25b0:
    // 0x2c25b0: 0xc0400a8  jal         func_1002A0
label_2c25b4:
    if (ctx->pc == 0x2C25B4u) {
        ctx->pc = 0x2C25B4u;
            // 0x2c25b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C25B8u;
        goto label_2c25b8;
    }
    ctx->pc = 0x2C25B0u;
    SET_GPR_U32(ctx, 31, 0x2C25B8u);
    ctx->pc = 0x2C25B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C25B0u;
            // 0x2c25b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C25B8u; }
        if (ctx->pc != 0x2C25B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C25B8u; }
        if (ctx->pc != 0x2C25B8u) { return; }
    }
    ctx->pc = 0x2C25B8u;
label_2c25b8:
    // 0x2c25b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c25b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c25bc:
    // 0x2c25bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c25bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c25c0:
    // 0x2c25c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c25c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c25c4:
    // 0x2c25c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c25c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c25c8:
    // 0x2c25c8: 0x3e00008  jr          $ra
label_2c25cc:
    if (ctx->pc == 0x2C25CCu) {
        ctx->pc = 0x2C25CCu;
            // 0x2c25cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C25D0u;
        goto label_2c25d0;
    }
    ctx->pc = 0x2C25C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C25CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C25C8u;
            // 0x2c25cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C25D0u;
label_2c25d0:
    // 0x2c25d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c25d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c25d4:
    // 0x2c25d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c25d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c25d8:
    // 0x2c25d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c25d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c25dc:
    // 0x2c25dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c25dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c25e0:
    // 0x2c25e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c25e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c25e4:
    // 0x2c25e4: 0x12200041  beqz        $s1, . + 4 + (0x41 << 2)
label_2c25e8:
    if (ctx->pc == 0x2C25E8u) {
        ctx->pc = 0x2C25E8u;
            // 0x2c25e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C25ECu;
        goto label_2c25ec;
    }
    ctx->pc = 0x2C25E4u;
    {
        const bool branch_taken_0x2c25e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C25E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C25E4u;
            // 0x2c25e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c25e4) {
            ctx->pc = 0x2C26ECu;
            goto label_2c26ec;
        }
    }
    ctx->pc = 0x2C25ECu;
label_2c25ec:
    // 0x2c25ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c25ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c25f0:
    // 0x2c25f0: 0x24421430  addiu       $v0, $v0, 0x1430
    ctx->pc = 0x2c25f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5168));
label_2c25f4:
    // 0x2c25f4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c25f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c25f8:
    // 0x2c25f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c25f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c25fc:
    // 0x2c25fc: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2c25fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2c2600:
    // 0x2c2600: 0x320f809  jalr        $t9
label_2c2604:
    if (ctx->pc == 0x2C2604u) {
        ctx->pc = 0x2C2608u;
        goto label_2c2608;
    }
    ctx->pc = 0x2C2600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C2608u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C2608u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C2608u; }
            if (ctx->pc != 0x2C2608u) { return; }
        }
        }
    }
    ctx->pc = 0x2C2608u;
label_2c2608:
    // 0x2c2608: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x2c2608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_2c260c:
    // 0x2c260c: 0x50800014  beql        $a0, $zero, . + 4 + (0x14 << 2)
label_2c2610:
    if (ctx->pc == 0x2C2610u) {
        ctx->pc = 0x2C2610u;
            // 0x2c2610: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->pc = 0x2C2614u;
        goto label_2c2614;
    }
    ctx->pc = 0x2C260Cu;
    {
        const bool branch_taken_0x2c260c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c260c) {
            ctx->pc = 0x2C2610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C260Cu;
            // 0x2c2610: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C2660u;
            goto label_2c2660;
        }
    }
    ctx->pc = 0x2C2614u;
label_2c2614:
    // 0x2c2614: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c2614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c2618:
    // 0x2c2618: 0x244213f0  addiu       $v0, $v0, 0x13F0
    ctx->pc = 0x2c2618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5104));
label_2c261c:
    // 0x2c261c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_2c2620:
    if (ctx->pc == 0x2C2620u) {
        ctx->pc = 0x2C2620u;
            // 0x2c2620: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->pc = 0x2C2624u;
        goto label_2c2624;
    }
    ctx->pc = 0x2C261Cu;
    {
        const bool branch_taken_0x2c261c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C261Cu;
            // 0x2c2620: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c261c) {
            ctx->pc = 0x2C265Cu;
            goto label_2c265c;
        }
    }
    ctx->pc = 0x2C2624u;
label_2c2624:
    // 0x2c2624: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c2624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c2628:
    // 0x2c2628: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x2c2628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_2c262c:
    // 0x2c262c: 0xc0d37dc  jal         func_34DF70
label_2c2630:
    if (ctx->pc == 0x2C2630u) {
        ctx->pc = 0x2C2630u;
            // 0x2c2630: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->pc = 0x2C2634u;
        goto label_2c2634;
    }
    ctx->pc = 0x2C262Cu;
    SET_GPR_U32(ctx, 31, 0x2C2634u);
    ctx->pc = 0x2C2630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C262Cu;
            // 0x2c2630: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2634u; }
        if (ctx->pc != 0x2C2634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2634u; }
        if (ctx->pc != 0x2C2634u) { return; }
    }
    ctx->pc = 0x2C2634u;
label_2c2634:
    // 0x2c2634: 0x26230060  addiu       $v1, $s1, 0x60
    ctx->pc = 0x2c2634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_2c2638:
    // 0x2c2638: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2c263c:
    if (ctx->pc == 0x2C263Cu) {
        ctx->pc = 0x2C2640u;
        goto label_2c2640;
    }
    ctx->pc = 0x2C2638u;
    {
        const bool branch_taken_0x2c2638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2638) {
            ctx->pc = 0x2C265Cu;
            goto label_2c265c;
        }
    }
    ctx->pc = 0x2C2640u;
label_2c2640:
    // 0x2c2640: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c2640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c2644:
    // 0x2c2644: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x2c2644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_2c2648:
    // 0x2c2648: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2c264c:
    if (ctx->pc == 0x2C264Cu) {
        ctx->pc = 0x2C264Cu;
            // 0x2c264c: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->pc = 0x2C2650u;
        goto label_2c2650;
    }
    ctx->pc = 0x2C2648u;
    {
        const bool branch_taken_0x2c2648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C264Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2648u;
            // 0x2c264c: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2648) {
            ctx->pc = 0x2C265Cu;
            goto label_2c265c;
        }
    }
    ctx->pc = 0x2C2650u;
label_2c2650:
    // 0x2c2650: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c2650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c2654:
    // 0x2c2654: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c2654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2c2658:
    // 0x2c2658: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x2c2658u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
label_2c265c:
    // 0x2c265c: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x2c265cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_2c2660:
    // 0x2c2660: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_2c2664:
    if (ctx->pc == 0x2C2664u) {
        ctx->pc = 0x2C2668u;
        goto label_2c2668;
    }
    ctx->pc = 0x2C2660u;
    {
        const bool branch_taken_0x2c2660 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2660) {
            ctx->pc = 0x2C26B0u;
            goto label_2c26b0;
        }
    }
    ctx->pc = 0x2C2668u;
label_2c2668:
    // 0x2c2668: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c2668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c266c:
    // 0x2c266c: 0x244213b0  addiu       $v0, $v0, 0x13B0
    ctx->pc = 0x2c266cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5040));
label_2c2670:
    // 0x2c2670: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_2c2674:
    if (ctx->pc == 0x2C2674u) {
        ctx->pc = 0x2C2674u;
            // 0x2c2674: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x2C2678u;
        goto label_2c2678;
    }
    ctx->pc = 0x2C2670u;
    {
        const bool branch_taken_0x2c2670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2670u;
            // 0x2c2674: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2670) {
            ctx->pc = 0x2C26B0u;
            goto label_2c26b0;
        }
    }
    ctx->pc = 0x2C2678u;
label_2c2678:
    // 0x2c2678: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c2678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c267c:
    // 0x2c267c: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x2c267cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_2c2680:
    // 0x2c2680: 0xc0d37dc  jal         func_34DF70
label_2c2684:
    if (ctx->pc == 0x2C2684u) {
        ctx->pc = 0x2C2684u;
            // 0x2c2684: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x2C2688u;
        goto label_2c2688;
    }
    ctx->pc = 0x2C2680u;
    SET_GPR_U32(ctx, 31, 0x2C2688u);
    ctx->pc = 0x2C2684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2680u;
            // 0x2c2684: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2688u; }
        if (ctx->pc != 0x2C2688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2688u; }
        if (ctx->pc != 0x2C2688u) { return; }
    }
    ctx->pc = 0x2C2688u;
label_2c2688:
    // 0x2c2688: 0x26230050  addiu       $v1, $s1, 0x50
    ctx->pc = 0x2c2688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_2c268c:
    // 0x2c268c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2c2690:
    if (ctx->pc == 0x2C2690u) {
        ctx->pc = 0x2C2694u;
        goto label_2c2694;
    }
    ctx->pc = 0x2C268Cu;
    {
        const bool branch_taken_0x2c268c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c268c) {
            ctx->pc = 0x2C26B0u;
            goto label_2c26b0;
        }
    }
    ctx->pc = 0x2C2694u;
label_2c2694:
    // 0x2c2694: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c2694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c2698:
    // 0x2c2698: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x2c2698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_2c269c:
    // 0x2c269c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2c26a0:
    if (ctx->pc == 0x2C26A0u) {
        ctx->pc = 0x2C26A0u;
            // 0x2c26a0: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x2C26A4u;
        goto label_2c26a4;
    }
    ctx->pc = 0x2C269Cu;
    {
        const bool branch_taken_0x2c269c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C26A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C269Cu;
            // 0x2c26a0: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c269c) {
            ctx->pc = 0x2C26B0u;
            goto label_2c26b0;
        }
    }
    ctx->pc = 0x2C26A4u;
label_2c26a4:
    // 0x2c26a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c26a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c26a8:
    // 0x2c26a8: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c26a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2c26ac:
    // 0x2c26ac: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x2c26acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
label_2c26b0:
    // 0x2c26b0: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2c26b4:
    if (ctx->pc == 0x2C26B4u) {
        ctx->pc = 0x2C26B4u;
            // 0x2c26b4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C26B8u;
        goto label_2c26b8;
    }
    ctx->pc = 0x2C26B0u;
    {
        const bool branch_taken_0x2c26b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c26b0) {
            ctx->pc = 0x2C26B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C26B0u;
            // 0x2c26b4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C26D8u;
            goto label_2c26d8;
        }
    }
    ctx->pc = 0x2C26B8u;
label_2c26b8:
    // 0x2c26b8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c26b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c26bc:
    // 0x2c26bc: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x2c26bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_2c26c0:
    // 0x2c26c0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2c26c4:
    if (ctx->pc == 0x2C26C4u) {
        ctx->pc = 0x2C26C4u;
            // 0x2c26c4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2C26C8u;
        goto label_2c26c8;
    }
    ctx->pc = 0x2C26C0u;
    {
        const bool branch_taken_0x2c26c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C26C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C26C0u;
            // 0x2c26c4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c26c0) {
            ctx->pc = 0x2C26D4u;
            goto label_2c26d4;
        }
    }
    ctx->pc = 0x2C26C8u;
label_2c26c8:
    // 0x2c26c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c26c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c26cc:
    // 0x2c26cc: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c26ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2c26d0:
    // 0x2c26d0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c26d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c26d4:
    // 0x2c26d4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c26d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c26d8:
    // 0x2c26d8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c26d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c26dc:
    // 0x2c26dc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c26e0:
    if (ctx->pc == 0x2C26E0u) {
        ctx->pc = 0x2C26E0u;
            // 0x2c26e0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C26E4u;
        goto label_2c26e4;
    }
    ctx->pc = 0x2C26DCu;
    {
        const bool branch_taken_0x2c26dc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c26dc) {
            ctx->pc = 0x2C26E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C26DCu;
            // 0x2c26e0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C26F0u;
            goto label_2c26f0;
        }
    }
    ctx->pc = 0x2C26E4u;
label_2c26e4:
    // 0x2c26e4: 0xc0400a8  jal         func_1002A0
label_2c26e8:
    if (ctx->pc == 0x2C26E8u) {
        ctx->pc = 0x2C26E8u;
            // 0x2c26e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C26ECu;
        goto label_2c26ec;
    }
    ctx->pc = 0x2C26E4u;
    SET_GPR_U32(ctx, 31, 0x2C26ECu);
    ctx->pc = 0x2C26E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C26E4u;
            // 0x2c26e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C26ECu; }
        if (ctx->pc != 0x2C26ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C26ECu; }
        if (ctx->pc != 0x2C26ECu) { return; }
    }
    ctx->pc = 0x2C26ECu;
label_2c26ec:
    // 0x2c26ec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c26ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c26f0:
    // 0x2c26f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c26f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c26f4:
    // 0x2c26f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c26f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c26f8:
    // 0x2c26f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c26f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c26fc:
    // 0x2c26fc: 0x3e00008  jr          $ra
label_2c2700:
    if (ctx->pc == 0x2C2700u) {
        ctx->pc = 0x2C2700u;
            // 0x2c2700: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C2704u;
        goto label_2c2704;
    }
    ctx->pc = 0x2C26FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C26FCu;
            // 0x2c2700: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C2704u;
label_2c2704:
    // 0x2c2704: 0x0  nop
    ctx->pc = 0x2c2704u;
    // NOP
label_2c2708:
    // 0x2c2708: 0x0  nop
    ctx->pc = 0x2c2708u;
    // NOP
label_2c270c:
    // 0x2c270c: 0x0  nop
    ctx->pc = 0x2c270cu;
    // NOP
}
