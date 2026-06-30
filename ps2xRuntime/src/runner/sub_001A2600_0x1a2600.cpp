#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A2600
// Address: 0x1a2600 - 0x1a27c0
void sub_001A2600_0x1a2600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2600_0x1a2600");
#endif

    switch (ctx->pc) {
        case 0x1a2654u: goto label_1a2654;
        case 0x1a2674u: goto label_1a2674;
        case 0x1a2684u: goto label_1a2684;
        case 0x1a26ecu: goto label_1a26ec;
        case 0x1a2708u: goto label_1a2708;
        case 0x1a271cu: goto label_1a271c;
        case 0x1a2724u: goto label_1a2724;
        case 0x1a2730u: goto label_1a2730;
        case 0x1a2750u: goto label_1a2750;
        case 0x1a275cu: goto label_1a275c;
        case 0x1a2764u: goto label_1a2764;
        case 0x1a2798u: goto label_1a2798;
        default: break;
    }

    ctx->pc = 0x1a2600u;

    // 0x1a2600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a2604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a2604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a2608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a260c: 0x8068986  j           func_1A2618
    ctx->pc = 0x1A260Cu;
    ctx->pc = 0x1A2610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A260Cu;
            // 0x1a2610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2618u;
    goto label_1a2618;
    ctx->pc = 0x1A2614u;
    // 0x1a2614: 0x0  nop
    ctx->pc = 0x1a2614u;
    // NOP
label_1a2618:
    // 0x1a2618: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1a2618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x1a261c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a261cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a2620: 0x8c456c14  lw          $a1, 0x6C14($v0)
    ctx->pc = 0x1a2620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27668)));
    // 0x1a2624: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a2624u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2628: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a2628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a262c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a262cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a2630: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a2630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a2634: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a2634u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2638: 0x14a3001d  bne         $a1, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1A2638u;
    {
        const bool branch_taken_0x1a2638 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A263Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2638u;
            // 0x1a263c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2638) {
            ctx->pc = 0x1A26B0u;
            goto label_1a26b0;
        }
    }
    ctx->pc = 0x1A2640u;
    // 0x1a2640: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A2640u;
    {
        const bool branch_taken_0x1a2640 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2640) {
            ctx->pc = 0x1A2660u;
            goto label_1a2660;
        }
    }
    ctx->pc = 0x1A2648u;
    // 0x1a2648: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1a2648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1a264c: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x1A264Cu;
    SET_GPR_U32(ctx, 31, 0x1A2654u);
    ctx->pc = 0x1A2650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A264Cu;
            // 0x1a2650: 0x2484a898  addiu       $a0, $a0, -0x5768 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2654u; }
        if (ctx->pc != 0x1A2654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2654u; }
        if (ctx->pc != 0x1A2654u) { return; }
    }
    ctx->pc = 0x1A2654u;
label_1a2654:
    // 0x1a2654: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1A2654u;
    {
        const bool branch_taken_0x1a2654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2654u;
            // 0x1a2658: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2654) {
            ctx->pc = 0x1A26B0u;
            goto label_1a26b0;
        }
    }
    ctx->pc = 0x1A265Cu;
    // 0x1a265c: 0x0  nop
    ctx->pc = 0x1a265cu;
    // NOP
label_1a2660:
    // 0x1a2660: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1a2660u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a2664: 0x16050012  bne         $s0, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A2664u;
    {
        const bool branch_taken_0x1a2664 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        ctx->pc = 0x1A2668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2664u;
            // 0x1a2668: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2664) {
            ctx->pc = 0x1A26B0u;
            goto label_1a26b0;
        }
    }
    ctx->pc = 0x1A266Cu;
    // 0x1a266c: 0xc068a04  jal         func_1A2810
    ctx->pc = 0x1A266Cu;
    SET_GPR_U32(ctx, 31, 0x1A2674u);
    ctx->pc = 0x1A2810u;
    if (runtime->hasFunction(0x1A2810u)) {
        auto targetFn = runtime->lookupFunction(0x1A2810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2674u; }
        if (ctx->pc != 0x1A2674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2810_0x1a2810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2674u; }
        if (ctx->pc != 0x1A2674u) { return; }
    }
    ctx->pc = 0x1A2674u;
label_1a2674:
    // 0x1a2674: 0x5050000e  beql        $v0, $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A2674u;
    {
        const bool branch_taken_0x1a2674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1a2674) {
            ctx->pc = 0x1A2678u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2674u;
            // 0x1a2678: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A26B0u;
            goto label_1a26b0;
        }
    }
    ctx->pc = 0x1A267Cu;
    // 0x1a267c: 0xc068a36  jal         func_1A28D8
    ctx->pc = 0x1A267Cu;
    SET_GPR_U32(ctx, 31, 0x1A2684u);
    ctx->pc = 0x1A28D8u;
    if (runtime->hasFunction(0x1A28D8u)) {
        auto targetFn = runtime->lookupFunction(0x1A28D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2684u; }
        if (ctx->pc != 0x1A2684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A28D8_0x1a28d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2684u; }
        if (ctx->pc != 0x1A2684u) { return; }
    }
    ctx->pc = 0x1A2684u;
label_1a2684:
    // 0x1a2684: 0x1050000a  beq         $v0, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A2684u;
    {
        const bool branch_taken_0x1a2684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1A2688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2684u;
            // 0x1a2688: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2684) {
            ctx->pc = 0x1A26B0u;
            goto label_1a26b0;
        }
    }
    ctx->pc = 0x1A268Cu;
    // 0x1a268c: 0x8e230590  lw          $v1, 0x590($s1)
    ctx->pc = 0x1a268cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1424)));
    // 0x1a2690: 0x10700007  beq         $v1, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A2690u;
    {
        const bool branch_taken_0x1a2690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x1A2694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2690u;
            // 0x1a2694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2690) {
            ctx->pc = 0x1A26B0u;
            goto label_1a26b0;
        }
    }
    ctx->pc = 0x1A2698u;
    // 0x1a2698: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a2698u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a269c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a269cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a26a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a26a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a26a4: 0x80689b2  j           func_1A26C8
    ctx->pc = 0x1A26A4u;
    ctx->pc = 0x1A26A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A26A4u;
            // 0x1a26a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A26C8u;
    goto label_1a26c8;
    ctx->pc = 0x1A26ACu;
    // 0x1a26ac: 0x0  nop
    ctx->pc = 0x1a26acu;
    // NOP
label_1a26b0:
    // 0x1a26b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a26b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a26b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a26b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a26b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a26b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a26bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A26BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A26C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A26BCu;
            // 0x1a26c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A26C4u;
    // 0x1a26c4: 0x0  nop
    ctx->pc = 0x1a26c4u;
    // NOP
label_1a26c8:
    // 0x1a26c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a26c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a26cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a26ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a26d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a26d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a26d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a26d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a26d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a26d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a26dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a26dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a26e0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a26e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a26e4: 0xc068a02  jal         func_1A2808
    ctx->pc = 0x1A26E4u;
    SET_GPR_U32(ctx, 31, 0x1A26ECu);
    ctx->pc = 0x1A26E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A26E4u;
            // 0x1a26e8: 0x8e120048  lw          $s2, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2808u;
    if (runtime->hasFunction(0x1A2808u)) {
        auto targetFn = runtime->lookupFunction(0x1A2808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A26ECu; }
        if (ctx->pc != 0x1A26ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2808_0x1a2808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A26ECu; }
        if (ctx->pc != 0x1A26ECu) { return; }
    }
    ctx->pc = 0x1A26ECu;
label_1a26ec:
    // 0x1a26ec: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x1a26ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a26f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a26f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a26f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a26f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a26f8: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A26F8u;
    {
        const bool branch_taken_0x1a26f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A26FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A26F8u;
            // 0x1a26fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a26f8) {
            ctx->pc = 0x1A2710u;
            goto label_1a2710;
        }
    }
    ctx->pc = 0x1A2700u;
    // 0x1a2700: 0xc068a02  jal         func_1A2808
    ctx->pc = 0x1A2700u;
    SET_GPR_U32(ctx, 31, 0x1A2708u);
    ctx->pc = 0x1A2704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2700u;
            // 0x1a2704: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2808u;
    if (runtime->hasFunction(0x1A2808u)) {
        auto targetFn = runtime->lookupFunction(0x1A2808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2708u; }
        if (ctx->pc != 0x1A2708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2808_0x1a2808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2708u; }
        if (ctx->pc != 0x1A2708u) { return; }
    }
    ctx->pc = 0x1A2708u;
label_1a2708:
    // 0x1a2708: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A2708u;
    {
        const bool branch_taken_0x1a2708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A270Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2708u;
            // 0x1a270c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2708) {
            ctx->pc = 0x1A276Cu;
            goto label_1a276c;
        }
    }
    ctx->pc = 0x1A2710u;
label_1a2710:
    // 0x1a2710: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1a2710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1a2714: 0xc068a06  jal         func_1A2818
    ctx->pc = 0x1A2714u;
    SET_GPR_U32(ctx, 31, 0x1A271Cu);
    ctx->pc = 0x1A2818u;
    if (runtime->hasFunction(0x1A2818u)) {
        auto targetFn = runtime->lookupFunction(0x1A2818u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A271Cu; }
        if (ctx->pc != 0x1A271Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2818_0x1a2818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A271Cu; }
        if (ctx->pc != 0x1A271Cu) { return; }
    }
    ctx->pc = 0x1A271Cu;
label_1a271c:
    // 0x1a271c: 0xc06c96a  jal         func_1B25A8
    ctx->pc = 0x1A271Cu;
    SET_GPR_U32(ctx, 31, 0x1A2724u);
    ctx->pc = 0x1A2720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A271Cu;
            // 0x1a2720: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B25A8u;
    if (runtime->hasFunction(0x1B25A8u)) {
        auto targetFn = runtime->lookupFunction(0x1B25A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2724u; }
        if (ctx->pc != 0x1A2724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B25A8_0x1b25a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2724u; }
        if (ctx->pc != 0x1A2724u) { return; }
    }
    ctx->pc = 0x1A2724u;
label_1a2724:
    // 0x1a2724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2728: 0xc068a06  jal         func_1A2818
    ctx->pc = 0x1A2728u;
    SET_GPR_U32(ctx, 31, 0x1A2730u);
    ctx->pc = 0x1A272Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2728u;
            // 0x1a272c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2818u;
    if (runtime->hasFunction(0x1A2818u)) {
        auto targetFn = runtime->lookupFunction(0x1A2818u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2730u; }
        if (ctx->pc != 0x1A2730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2818_0x1a2818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2730u; }
        if (ctx->pc != 0x1A2730u) { return; }
    }
    ctx->pc = 0x1A2730u;
label_1a2730:
    // 0x1a2730: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a2730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a2734: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2734u;
    {
        const bool branch_taken_0x1a2734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2734u;
            // 0x1a2738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2734) {
            ctx->pc = 0x1A2748u;
            goto label_1a2748;
        }
    }
    ctx->pc = 0x1A273Cu;
    // 0x1a273c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A273Cu;
    {
        const bool branch_taken_0x1a273c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A273Cu;
            // 0x1a2740: 0xae000074  sw          $zero, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a273c) {
            ctx->pc = 0x1A2754u;
            goto label_1a2754;
        }
    }
    ctx->pc = 0x1A2744u;
    // 0x1a2744: 0x0  nop
    ctx->pc = 0x1a2744u;
    // NOP
label_1a2748:
    // 0x1a2748: 0xc06884c  jal         func_1A2130
    ctx->pc = 0x1A2748u;
    SET_GPR_U32(ctx, 31, 0x1A2750u);
    ctx->pc = 0x1A274Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2748u;
            // 0x1a274c: 0xae110074  sw          $s1, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2130u;
    if (runtime->hasFunction(0x1A2130u)) {
        auto targetFn = runtime->lookupFunction(0x1A2130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2750u; }
        if (ctx->pc != 0x1A2750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2130_0x1a2130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2750u; }
        if (ctx->pc != 0x1A2750u) { return; }
    }
    ctx->pc = 0x1A2750u;
label_1a2750:
    // 0x1a2750: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a2754:
    // 0x1a2754: 0xc068a02  jal         func_1A2808
    ctx->pc = 0x1A2754u;
    SET_GPR_U32(ctx, 31, 0x1A275Cu);
    ctx->pc = 0x1A2758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2754u;
            // 0x1a2758: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2808u;
    if (runtime->hasFunction(0x1A2808u)) {
        auto targetFn = runtime->lookupFunction(0x1A2808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A275Cu; }
        if (ctx->pc != 0x1A275Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2808_0x1a2808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A275Cu; }
        if (ctx->pc != 0x1A275Cu) { return; }
    }
    ctx->pc = 0x1A275Cu;
label_1a275c:
    // 0x1a275c: 0xc06c942  jal         func_1B2508
    ctx->pc = 0x1A275Cu;
    SET_GPR_U32(ctx, 31, 0x1A2764u);
    ctx->pc = 0x1A2760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A275Cu;
            // 0x1a2760: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2508u;
    if (runtime->hasFunction(0x1B2508u)) {
        auto targetFn = runtime->lookupFunction(0x1B2508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2764u; }
        if (ctx->pc != 0x1A2764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2508_0x1b2508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2764u; }
        if (ctx->pc != 0x1A2764u) { return; }
    }
    ctx->pc = 0x1A2764u;
label_1a2764:
    // 0x1a2764: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a2764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1a2768: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1a2768u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a276c:
    // 0x1a276c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a276cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2770: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a2770u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a2774: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a2774u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2778: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a2778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a277c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A277Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A277Cu;
            // 0x1a2780: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A2784u;
    // 0x1a2784: 0x0  nop
    ctx->pc = 0x1a2784u;
    // NOP
    // 0x1a2788: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a278c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a278cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a2790: 0xc0688c4  jal         func_1A2310
    ctx->pc = 0x1A2790u;
    SET_GPR_U32(ctx, 31, 0x1A2798u);
    ctx->pc = 0x1A2310u;
    if (runtime->hasFunction(0x1A2310u)) {
        auto targetFn = runtime->lookupFunction(0x1A2310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2798u; }
        if (ctx->pc != 0x1A2798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2310_0x1a2310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2798u; }
        if (ctx->pc != 0x1A2798u) { return; }
    }
    ctx->pc = 0x1A2798u;
label_1a2798:
    // 0x1a2798: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a279c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a279cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a27a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A27A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A27A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A27A0u;
            // 0x1a27a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A27A8u;
    // 0x1a27a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a27a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a27ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a27acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a27b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a27b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a27b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a27b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a27b8: 0x806893c  j           func_1A24F0
    ctx->pc = 0x1A27B8u;
    ctx->pc = 0x1A27BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A27B8u;
            // 0x1a27bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A24F0u;
    if (runtime->hasFunction(0x1A24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1A24F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A24F0_0x1a24f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A27C0u;
}
