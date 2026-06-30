#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A24F0
// Address: 0x1a24f0 - 0x1a2600
void sub_001A24F0_0x1a24f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A24F0_0x1a24f0");
#endif

    switch (ctx->pc) {
        case 0x1a2538u: goto label_1a2538;
        case 0x1a2544u: goto label_1a2544;
        case 0x1a2558u: goto label_1a2558;
        case 0x1a2560u: goto label_1a2560;
        case 0x1a2570u: goto label_1a2570;
        case 0x1a2580u: goto label_1a2580;
        case 0x1a2598u: goto label_1a2598;
        case 0x1a25a0u: goto label_1a25a0;
        case 0x1a25b4u: goto label_1a25b4;
        case 0x1a25c4u: goto label_1a25c4;
        case 0x1a25d4u: goto label_1a25d4;
        case 0x1a25e4u: goto label_1a25e4;
        default: break;
    }

    ctx->pc = 0x1a24f0u;

    // 0x1a24f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a24f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a24f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a24f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a24f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a24f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a24fc: 0x8068942  j           func_1A2508
    ctx->pc = 0x1A24FCu;
    ctx->pc = 0x1A2500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A24FCu;
            // 0x1a2500: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2508u;
    goto label_1a2508;
    ctx->pc = 0x1A2504u;
    // 0x1a2504: 0x0  nop
    ctx->pc = 0x1a2504u;
    // NOP
label_1a2508:
    // 0x1a2508: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a2508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a250c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1a250cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x1a2510: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a2510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a2514: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a2514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2518: 0x8c526c14  lw          $s2, 0x6C14($v0)
    ctx->pc = 0x1a2518u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27668)));
    // 0x1a251c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a251cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2520: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a2520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a2524: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a2524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a2528: 0x1643002f  bne         $s2, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1A2528u;
    {
        const bool branch_taken_0x1a2528 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A252Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2528u;
            // 0x1a252c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2528) {
            ctx->pc = 0x1A25E8u;
            goto label_1a25e8;
        }
    }
    ctx->pc = 0x1A2530u;
    // 0x1a2530: 0xc066c68  jal         func_19B1A0
    ctx->pc = 0x1A2530u;
    SET_GPR_U32(ctx, 31, 0x1A2538u);
    ctx->pc = 0x19B1A0u;
    if (runtime->hasFunction(0x19B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2538u; }
        if (ctx->pc != 0x1A2538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B1A0_0x19b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2538u; }
        if (ctx->pc != 0x1A2538u) { return; }
    }
    ctx->pc = 0x1A2538u;
label_1a2538:
    // 0x1a2538: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a2538u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a253c: 0xc0686c0  jal         func_1A1B00
    ctx->pc = 0x1A253Cu;
    SET_GPR_U32(ctx, 31, 0x1A2544u);
    ctx->pc = 0x1A2540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A253Cu;
            // 0x1a2540: 0x26240058  addiu       $a0, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B00u;
    if (runtime->hasFunction(0x1A1B00u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2544u; }
        if (ctx->pc != 0x1A2544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B00_0x1a1b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2544u; }
        if (ctx->pc != 0x1A2544u) { return; }
    }
    ctx->pc = 0x1A2544u;
label_1a2544:
    // 0x1a2544: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a2544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2548: 0x16120027  bne         $s0, $s2, . + 4 + (0x27 << 2)
    ctx->pc = 0x1A2548u;
    {
        const bool branch_taken_0x1a2548 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x1A254Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2548u;
            // 0x1a254c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2548) {
            ctx->pc = 0x1A25E8u;
            goto label_1a25e8;
        }
    }
    ctx->pc = 0x1A2550u;
    // 0x1a2550: 0xc06890a  jal         func_1A2428
    ctx->pc = 0x1A2550u;
    SET_GPR_U32(ctx, 31, 0x1A2558u);
    ctx->pc = 0x1A2428u;
    if (runtime->hasFunction(0x1A2428u)) {
        auto targetFn = runtime->lookupFunction(0x1A2428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2558u; }
        if (ctx->pc != 0x1A2558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2428_0x1a2428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2558u; }
        if (ctx->pc != 0x1A2558u) { return; }
    }
    ctx->pc = 0x1A2558u;
label_1a2558:
    // 0x1a2558: 0xc068a80  jal         func_1A2A00
    ctx->pc = 0x1A2558u;
    SET_GPR_U32(ctx, 31, 0x1A2560u);
    ctx->pc = 0x1A2A00u;
    if (runtime->hasFunction(0x1A2A00u)) {
        auto targetFn = runtime->lookupFunction(0x1A2A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2560u; }
        if (ctx->pc != 0x1A2560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2A00_0x1a2a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2560u; }
        if (ctx->pc != 0x1A2560u) { return; }
    }
    ctx->pc = 0x1A2560u;
label_1a2560:
    // 0x1a2560: 0x1050000b  beq         $v0, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A2560u;
    {
        const bool branch_taken_0x1a2560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1A2564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2560u;
            // 0x1a2564: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2560) {
            ctx->pc = 0x1A2590u;
            goto label_1a2590;
        }
    }
    ctx->pc = 0x1A2568u;
    // 0x1a2568: 0x2630006c  addiu       $s0, $s1, 0x6C
    ctx->pc = 0x1a2568u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
    // 0x1a256c: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x1a256cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1a2570:
    // 0x1a2570: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2570u;
    {
        const bool branch_taken_0x1a2570 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2570) {
            ctx->pc = 0x1A2574u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2570u;
            // 0x1a2574: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A2584u;
            goto label_1a2584;
        }
    }
    ctx->pc = 0x1A2578u;
    // 0x1a2578: 0xc068980  jal         func_1A2600
    ctx->pc = 0x1A2578u;
    SET_GPR_U32(ctx, 31, 0x1A2580u);
    ctx->pc = 0x1A257Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2578u;
            // 0x1a257c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2600u;
    if (runtime->hasFunction(0x1A2600u)) {
        auto targetFn = runtime->lookupFunction(0x1A2600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2580u; }
        if (ctx->pc != 0x1A2580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2600_0x1a2600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2580u; }
        if (ctx->pc != 0x1A2580u) { return; }
    }
    ctx->pc = 0x1A2580u;
label_1a2580:
    // 0x1a2580: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1a2580u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1a2584:
    // 0x1a2584: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A2584u;
    {
        const bool branch_taken_0x1a2584 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1A2588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2584u;
            // 0x1a2588: 0x26100594  addiu       $s0, $s0, 0x594 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1428));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2584) {
            ctx->pc = 0x1A2570u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a2570;
        }
    }
    ctx->pc = 0x1A258Cu;
    // 0x1a258c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a258cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a2590:
    // 0x1a2590: 0xc0689f0  jal         func_1A27C0
    ctx->pc = 0x1A2590u;
    SET_GPR_U32(ctx, 31, 0x1A2598u);
    ctx->pc = 0x1A2594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2590u;
            // 0x1a2594: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A27C0u;
    if (runtime->hasFunction(0x1A27C0u)) {
        auto targetFn = runtime->lookupFunction(0x1A27C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2598u; }
        if (ctx->pc != 0x1A2598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A27C0_0x1a27c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2598u; }
        if (ctx->pc != 0x1A2598u) { return; }
    }
    ctx->pc = 0x1A2598u;
label_1a2598:
    // 0x1a2598: 0xc068a80  jal         func_1A2A00
    ctx->pc = 0x1A2598u;
    SET_GPR_U32(ctx, 31, 0x1A25A0u);
    ctx->pc = 0x1A2A00u;
    if (runtime->hasFunction(0x1A2A00u)) {
        auto targetFn = runtime->lookupFunction(0x1A2A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A25A0u; }
        if (ctx->pc != 0x1A25A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2A00_0x1a2a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A25A0u; }
        if (ctx->pc != 0x1A25A0u) { return; }
    }
    ctx->pc = 0x1A25A0u;
label_1a25a0:
    // 0x1a25a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a25a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a25a4: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A25A4u;
    {
        const bool branch_taken_0x1a25a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a25a4) {
            ctx->pc = 0x1A25BCu;
            goto label_1a25bc;
        }
    }
    ctx->pc = 0x1A25ACu;
    // 0x1a25ac: 0xc06c94c  jal         func_1B2530
    ctx->pc = 0x1A25ACu;
    SET_GPR_U32(ctx, 31, 0x1A25B4u);
    ctx->pc = 0x1B2530u;
    if (runtime->hasFunction(0x1B2530u)) {
        auto targetFn = runtime->lookupFunction(0x1B2530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A25B4u; }
        if (ctx->pc != 0x1A25B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2530_0x1b2530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A25B4u; }
        if (ctx->pc != 0x1A25B4u) { return; }
    }
    ctx->pc = 0x1A25B4u;
label_1a25b4:
    // 0x1a25b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a25b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1a25b8: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x1a25b8u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a25bc:
    // 0x1a25bc: 0xc068916  jal         func_1A2458
    ctx->pc = 0x1A25BCu;
    SET_GPR_U32(ctx, 31, 0x1A25C4u);
    ctx->pc = 0x1A25C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A25BCu;
            // 0x1a25c0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2458u;
    if (runtime->hasFunction(0x1A2458u)) {
        auto targetFn = runtime->lookupFunction(0x1A2458u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A25C4u; }
        if (ctx->pc != 0x1A25C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2458_0x1a2458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A25C4u; }
        if (ctx->pc != 0x1A25C4u) { return; }
    }
    ctx->pc = 0x1A25C4u;
label_1a25c4:
    // 0x1a25c4: 0x12300008  beq         $s1, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A25C4u;
    {
        const bool branch_taken_0x1a25c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x1A25C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A25C4u;
            // 0x1a25c8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a25c4) {
            ctx->pc = 0x1A25E8u;
            goto label_1a25e8;
        }
    }
    ctx->pc = 0x1A25CCu;
    // 0x1a25cc: 0xc068a36  jal         func_1A28D8
    ctx->pc = 0x1A25CCu;
    SET_GPR_U32(ctx, 31, 0x1A25D4u);
    ctx->pc = 0x1A28D8u;
    if (runtime->hasFunction(0x1A28D8u)) {
        auto targetFn = runtime->lookupFunction(0x1A28D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A25D4u; }
        if (ctx->pc != 0x1A25D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A28D8_0x1a28d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A25D4u; }
        if (ctx->pc != 0x1A25D4u) { return; }
    }
    ctx->pc = 0x1A25D4u;
label_1a25d4:
    // 0x1a25d4: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A25D4u;
    {
        const bool branch_taken_0x1a25d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1A25D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A25D4u;
            // 0x1a25d8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a25d4) {
            ctx->pc = 0x1A25E8u;
            goto label_1a25e8;
        }
    }
    ctx->pc = 0x1A25DCu;
    // 0x1a25dc: 0xc068930  jal         func_1A24C0
    ctx->pc = 0x1A25DCu;
    SET_GPR_U32(ctx, 31, 0x1A25E4u);
    ctx->pc = 0x1A24C0u;
    if (runtime->hasFunction(0x1A24C0u)) {
        auto targetFn = runtime->lookupFunction(0x1A24C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A25E4u; }
        if (ctx->pc != 0x1A25E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A24C0_0x1a24c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A25E4u; }
        if (ctx->pc != 0x1A25E4u) { return; }
    }
    ctx->pc = 0x1A25E4u;
label_1a25e4:
    // 0x1a25e4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a25e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a25e8:
    // 0x1a25e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a25e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a25ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a25ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a25f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a25f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a25f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a25f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a25f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A25F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A25FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A25F8u;
            // 0x1a25fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A2600u;
}
