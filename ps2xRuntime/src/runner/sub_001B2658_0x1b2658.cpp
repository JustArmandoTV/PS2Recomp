#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B2658
// Address: 0x1b2658 - 0x1b2770
void sub_001B2658_0x1b2658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2658_0x1b2658");
#endif

    switch (ctx->pc) {
        case 0x1b269cu: goto label_1b269c;
        case 0x1b26b8u: goto label_1b26b8;
        case 0x1b26e8u: goto label_1b26e8;
        case 0x1b26f8u: goto label_1b26f8;
        case 0x1b2708u: goto label_1b2708;
        case 0x1b2718u: goto label_1b2718;
        case 0x1b2728u: goto label_1b2728;
        case 0x1b2738u: goto label_1b2738;
        default: break;
    }

    ctx->pc = 0x1b2658u;

    // 0x1b2658: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b2658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b265c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b265cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b2660: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b2660u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2664: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b2664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b2668: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b2668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b266c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b266cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b2670: 0x8e300048  lw          $s0, 0x48($s1)
    ctx->pc = 0x1b2670u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1b2674: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1b2674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1b2678: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x1b2678u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1b267c: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x1B267Cu;
    {
        const bool branch_taken_0x1b267c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b267c) {
            ctx->pc = 0x1B2680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B267Cu;
            // 0x1b2680: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B2758u;
            goto label_1b2758;
        }
    }
    ctx->pc = 0x1B2684u;
    // 0x1b2684: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x1b2684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1b2688: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x1B2688u;
    {
        const bool branch_taken_0x1b2688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2688) {
            ctx->pc = 0x1B268Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2688u;
            // 0x1b268c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B2758u;
            goto label_1b2758;
        }
    }
    ctx->pc = 0x1B2690u;
    // 0x1b2690: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x1b2690u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
    // 0x1b2694: 0xc06e140  jal         func_1B8500
    ctx->pc = 0x1B2694u;
    SET_GPR_U32(ctx, 31, 0x1B269Cu);
    ctx->pc = 0x1B8500u;
    if (runtime->hasFunction(0x1B8500u)) {
        auto targetFn = runtime->lookupFunction(0x1B8500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B269Cu; }
        if (ctx->pc != 0x1B269Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8500_0x1b8500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B269Cu; }
        if (ctx->pc != 0x1B269Cu) { return; }
    }
    ctx->pc = 0x1B269Cu;
label_1b269c:
    // 0x1b269c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b269cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b26a0: 0x2602fffe  addiu       $v0, $s0, -0x2
    ctx->pc = 0x1b26a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x1b26a4: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1b26a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b26a8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B26A8u;
    {
        const bool branch_taken_0x1b26a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b26a8) {
            ctx->pc = 0x1B26ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B26A8u;
            // 0x1b26ac: 0x8e300048  lw          $s0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B26BCu;
            goto label_1b26bc;
        }
    }
    ctx->pc = 0x1B26B0u;
    // 0x1b26b0: 0xc06c9dc  jal         func_1B2770
    ctx->pc = 0x1B26B0u;
    SET_GPR_U32(ctx, 31, 0x1B26B8u);
    ctx->pc = 0x1B26B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B26B0u;
            // 0x1b26b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2770u;
    if (runtime->hasFunction(0x1B2770u)) {
        auto targetFn = runtime->lookupFunction(0x1B2770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B26B8u; }
        if (ctx->pc != 0x1B26B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2770_0x1b2770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B26B8u; }
        if (ctx->pc != 0x1B26B8u) { return; }
    }
    ctx->pc = 0x1B26B8u;
label_1b26b8:
    // 0x1b26b8: 0x8e300048  lw          $s0, 0x48($s1)
    ctx->pc = 0x1b26b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_1b26bc:
    // 0x1b26bc: 0x2e020007  sltiu       $v0, $s0, 0x7
    ctx->pc = 0x1b26bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1b26c0: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B26C0u;
    {
        const bool branch_taken_0x1b26c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b26c0) {
            ctx->pc = 0x1B26C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B26C0u;
            // 0x1b26c4: 0xae300048  sw          $s0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B2730u;
            goto label_1b2730;
        }
    }
    ctx->pc = 0x1B26C8u;
    // 0x1b26c8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1b26c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b26cc: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1b26ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x1b26d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b26d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b26d4: 0x8c63ae20  lw          $v1, -0x51E0($v1)
    ctx->pc = 0x1b26d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946336)));
    // 0x1b26d8: 0x600008  jr          $v1
    ctx->pc = 0x1B26D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B26E0u: goto label_1b26e0;
            case 0x1B26F0u: goto label_1b26f0;
            case 0x1B2700u: goto label_1b2700;
            case 0x1B2710u: goto label_1b2710;
            case 0x1B2720u: goto label_1b2720;
            case 0x1B272Cu: goto label_1b272c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B26E0u;
label_1b26e0:
    // 0x1b26e0: 0xc06c9ec  jal         func_1B27B0
    ctx->pc = 0x1B26E0u;
    SET_GPR_U32(ctx, 31, 0x1B26E8u);
    ctx->pc = 0x1B26E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B26E0u;
            // 0x1b26e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B27B0u;
    if (runtime->hasFunction(0x1B27B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B27B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B26E8u; }
        if (ctx->pc != 0x1B26E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B27B0_0x1b27b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B26E8u; }
        if (ctx->pc != 0x1B26E8u) { return; }
    }
    ctx->pc = 0x1B26E8u;
label_1b26e8:
    // 0x1b26e8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1B26E8u;
    {
        const bool branch_taken_0x1b26e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B26ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B26E8u;
            // 0x1b26ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b26e8) {
            ctx->pc = 0x1B272Cu;
            goto label_1b272c;
        }
    }
    ctx->pc = 0x1B26F0u;
label_1b26f0:
    // 0x1b26f0: 0xc06c9f8  jal         func_1B27E0
    ctx->pc = 0x1B26F0u;
    SET_GPR_U32(ctx, 31, 0x1B26F8u);
    ctx->pc = 0x1B26F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B26F0u;
            // 0x1b26f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B27E0u;
    if (runtime->hasFunction(0x1B27E0u)) {
        auto targetFn = runtime->lookupFunction(0x1B27E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B26F8u; }
        if (ctx->pc != 0x1B26F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B27E0_0x1b27e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B26F8u; }
        if (ctx->pc != 0x1B26F8u) { return; }
    }
    ctx->pc = 0x1B26F8u;
label_1b26f8:
    // 0x1b26f8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B26F8u;
    {
        const bool branch_taken_0x1b26f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B26FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B26F8u;
            // 0x1b26fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b26f8) {
            ctx->pc = 0x1B272Cu;
            goto label_1b272c;
        }
    }
    ctx->pc = 0x1B2700u;
label_1b2700:
    // 0x1b2700: 0xc06cad8  jal         func_1B2B60
    ctx->pc = 0x1B2700u;
    SET_GPR_U32(ctx, 31, 0x1B2708u);
    ctx->pc = 0x1B2704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2700u;
            // 0x1b2704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2B60u;
    if (runtime->hasFunction(0x1B2B60u)) {
        auto targetFn = runtime->lookupFunction(0x1B2B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2708u; }
        if (ctx->pc != 0x1B2708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2B60_0x1b2b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2708u; }
        if (ctx->pc != 0x1B2708u) { return; }
    }
    ctx->pc = 0x1B2708u;
label_1b2708:
    // 0x1b2708: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B2708u;
    {
        const bool branch_taken_0x1b2708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B270Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2708u;
            // 0x1b270c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2708) {
            ctx->pc = 0x1B272Cu;
            goto label_1b272c;
        }
    }
    ctx->pc = 0x1B2710u;
label_1b2710:
    // 0x1b2710: 0xc06cb00  jal         func_1B2C00
    ctx->pc = 0x1B2710u;
    SET_GPR_U32(ctx, 31, 0x1B2718u);
    ctx->pc = 0x1B2714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2710u;
            // 0x1b2714: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2C00u;
    if (runtime->hasFunction(0x1B2C00u)) {
        auto targetFn = runtime->lookupFunction(0x1B2C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2718u; }
        if (ctx->pc != 0x1B2718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2C00_0x1b2c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2718u; }
        if (ctx->pc != 0x1B2718u) { return; }
    }
    ctx->pc = 0x1B2718u;
label_1b2718:
    // 0x1b2718: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2718u;
    {
        const bool branch_taken_0x1b2718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B271Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2718u;
            // 0x1b271c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2718) {
            ctx->pc = 0x1B272Cu;
            goto label_1b272c;
        }
    }
    ctx->pc = 0x1B2720u;
label_1b2720:
    // 0x1b2720: 0xc06cb1c  jal         func_1B2C70
    ctx->pc = 0x1B2720u;
    SET_GPR_U32(ctx, 31, 0x1B2728u);
    ctx->pc = 0x1B2724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2720u;
            // 0x1b2724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2C70u;
    if (runtime->hasFunction(0x1B2C70u)) {
        auto targetFn = runtime->lookupFunction(0x1B2C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2728u; }
        if (ctx->pc != 0x1B2728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2C70_0x1b2c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2728u; }
        if (ctx->pc != 0x1B2728u) { return; }
    }
    ctx->pc = 0x1B2728u;
label_1b2728:
    // 0x1b2728: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b2728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b272c:
    // 0x1b272c: 0xae300048  sw          $s0, 0x48($s1)
    ctx->pc = 0x1b272cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 16));
label_1b2730:
    // 0x1b2730: 0xc06e140  jal         func_1B8500
    ctx->pc = 0x1B2730u;
    SET_GPR_U32(ctx, 31, 0x1B2738u);
    ctx->pc = 0x1B2734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2730u;
            // 0x1b2734: 0x263037d0  addiu       $s0, $s1, 0x37D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 14288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8500u;
    if (runtime->hasFunction(0x1B8500u)) {
        auto targetFn = runtime->lookupFunction(0x1B8500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2738u; }
        if (ctx->pc != 0x1B2738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8500_0x1b8500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2738u; }
        if (ctx->pc != 0x1B2738u) { return; }
    }
    ctx->pc = 0x1B2738u;
label_1b2738:
    // 0x1b2738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b273c: 0x52282f  dsubu       $a1, $v0, $s2
    ctx->pc = 0x1b273cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) - GPR_U64(ctx, 18));
    // 0x1b2740: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b2740u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2744: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2748: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b2748u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b274c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b274cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b2750: 0x806e180  j           func_1B8600
    ctx->pc = 0x1B2750u;
    ctx->pc = 0x1B2754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2750u;
            // 0x1b2754: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8600u;
    if (runtime->hasFunction(0x1B8600u)) {
        auto targetFn = runtime->lookupFunction(0x1B8600u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B8600_0x1b8600(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B2758u;
label_1b2758:
    // 0x1b2758: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b2758u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b275c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b275cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2760: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b2760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b2764: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2764u;
            // 0x1b2768: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B276Cu;
    // 0x1b276c: 0x0  nop
    ctx->pc = 0x1b276cu;
    // NOP
}
