#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001236B0
// Address: 0x1236b0 - 0x1237b8
void sub_001236B0_0x1236b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001236B0_0x1236b0");
#endif

    switch (ctx->pc) {
        case 0x1236c8u: goto label_1236c8;
        case 0x1236d8u: goto label_1236d8;
        case 0x1236e8u: goto label_1236e8;
        case 0x123708u: goto label_123708;
        case 0x123710u: goto label_123710;
        case 0x123738u: goto label_123738;
        case 0x12373cu: goto label_12373c;
        case 0x123744u: goto label_123744;
        case 0x123754u: goto label_123754;
        case 0x123768u: goto label_123768;
        case 0x123780u: goto label_123780;
        case 0x123788u: goto label_123788;
        case 0x1237a0u: goto label_1237a0;
        case 0x1237acu: goto label_1237ac;
        default: break;
    }

    ctx->pc = 0x1236b0u;

    // 0x1236b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1236b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1236b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1236b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1236b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1236b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1236bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1236bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1236c0: 0xc049514  jal         func_125450
    ctx->pc = 0x1236C0u;
    SET_GPR_U32(ctx, 31, 0x1236C8u);
    ctx->pc = 0x1236C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1236C0u;
            // 0x1236c4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1236C8u; }
        if (ctx->pc != 0x1236C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1236C8u; }
        if (ctx->pc != 0x1236C8u) { return; }
    }
    ctx->pc = 0x1236C8u;
label_1236c8:
    // 0x1236c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1236c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1236cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1236ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1236d0: 0xc049760  jal         func_125D80
    ctx->pc = 0x1236D0u;
    SET_GPR_U32(ctx, 31, 0x1236D8u);
    ctx->pc = 0x1236D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1236D0u;
            // 0x1236d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1236D8u; }
        if (ctx->pc != 0x1236D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1236D8u; }
        if (ctx->pc != 0x1236D8u) { return; }
    }
    ctx->pc = 0x1236D8u;
label_1236d8:
    // 0x1236d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1236d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1236dc: 0x240503df  addiu       $a1, $zero, 0x3DF
    ctx->pc = 0x1236dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 991));
    // 0x1236e0: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1236E0u;
    {
        const bool branch_taken_0x1236e0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1236E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1236E0u;
            // 0x1236e4: 0x52d3c  dsll32      $a1, $a1, 20 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1236e0) {
            ctx->pc = 0x123700u;
            goto label_123700;
        }
    }
    ctx->pc = 0x1236E8u;
label_1236e8:
    // 0x1236e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1236e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1236ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1236ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1236f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1236f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1236f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1236f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1236f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1236F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1236FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1236F8u;
            // 0x1236fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x123700u;
label_123700:
    // 0x123700: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x123700u;
    SET_GPR_U32(ctx, 31, 0x123708u);
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123708u; }
        if (ctx->pc != 0x123708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123708u; }
        if (ctx->pc != 0x123708u) { return; }
    }
    ctx->pc = 0x123708u;
label_123708:
    // 0x123708: 0xc0497f2  jal         func_125FC8
    ctx->pc = 0x123708u;
    SET_GPR_U32(ctx, 31, 0x123710u);
    ctx->pc = 0x12370Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123708u;
            // 0x12370c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125FC8u;
    if (runtime->hasFunction(0x125FC8u)) {
        auto targetFn = runtime->lookupFunction(0x125FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123710u; }
        if (ctx->pc != 0x123710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125FC8_0x125fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123710u; }
        if (ctx->pc != 0x123710u) { return; }
    }
    ctx->pc = 0x123710u;
label_123710:
    // 0x123710: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x123710u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    // 0x123714: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x123714u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x123718: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x123718u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x12371c: 0x11787a  dsrl        $t7, $s1, 1
    ctx->pc = 0x12371cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) >> 1);
    // 0x123720: 0x322e0001  andi        $t6, $s1, 0x1
    ctx->pc = 0x123720u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x123724: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x123724u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x123728: 0x620001b  bltz        $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x123728u;
    {
        const bool branch_taken_0x123728 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x12372Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123728u;
            // 0x12372c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123728) {
            ctx->pc = 0x123798u;
            goto label_123798;
        }
    }
    ctx->pc = 0x123730u;
    // 0x123730: 0xc048cfa  jal         func_1233E8
    ctx->pc = 0x123730u;
    SET_GPR_U32(ctx, 31, 0x123738u);
    ctx->pc = 0x1233E8u;
    if (runtime->hasFunction(0x1233E8u)) {
        auto targetFn = runtime->lookupFunction(0x1233E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123738u; }
        if (ctx->pc != 0x123738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001233E8_0x1233e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123738u; }
        if (ctx->pc != 0x123738u) { return; }
    }
    ctx->pc = 0x123738u;
label_123738:
    // 0x123738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x123738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12373c:
    // 0x12373c: 0xc049622  jal         func_125888
    ctx->pc = 0x12373Cu;
    SET_GPR_U32(ctx, 31, 0x123744u);
    ctx->pc = 0x123740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12373Cu;
            // 0x123740: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123744u; }
        if (ctx->pc != 0x123744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123744u; }
        if (ctx->pc != 0x123744u) { return; }
    }
    ctx->pc = 0x123744u;
label_123744:
    // 0x123744: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x123744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123748: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x123748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12374c: 0xc049760  jal         func_125D80
    ctx->pc = 0x12374Cu;
    SET_GPR_U32(ctx, 31, 0x123754u);
    ctx->pc = 0x123750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12374Cu;
            // 0x123750: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123754u; }
        if (ctx->pc != 0x123754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123754u; }
        if (ctx->pc != 0x123754u) { return; }
    }
    ctx->pc = 0x123754u;
label_123754:
    // 0x123754: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x123754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123758: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x123758u;
    {
        const bool branch_taken_0x123758 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x12375Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123758u;
            // 0x12375c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123758) {
            ctx->pc = 0x123778u;
            goto label_123778;
        }
    }
    ctx->pc = 0x123760u;
    // 0x123760: 0xc0497f2  jal         func_125FC8
    ctx->pc = 0x123760u;
    SET_GPR_U32(ctx, 31, 0x123768u);
    ctx->pc = 0x123764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123760u;
            // 0x123764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125FC8u;
    if (runtime->hasFunction(0x125FC8u)) {
        auto targetFn = runtime->lookupFunction(0x125FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123768u; }
        if (ctx->pc != 0x123768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125FC8_0x125fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123768u; }
        if (ctx->pc != 0x123768u) { return; }
    }
    ctx->pc = 0x123768u;
label_123768:
    // 0x123768: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x123768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12376c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x12376cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x123770: 0x1000ffdd  b           . + 4 + (-0x23 << 2)
    ctx->pc = 0x123770u;
    {
        const bool branch_taken_0x123770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123770u;
            // 0x123774: 0x222882d  daddu       $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123770) {
            ctx->pc = 0x1236E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1236e8;
        }
    }
    ctx->pc = 0x123778u;
label_123778:
    // 0x123778: 0xc049622  jal         func_125888
    ctx->pc = 0x123778u;
    SET_GPR_U32(ctx, 31, 0x123780u);
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123780u; }
        if (ctx->pc != 0x123780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123780u; }
        if (ctx->pc != 0x123780u) { return; }
    }
    ctx->pc = 0x123780u;
label_123780:
    // 0x123780: 0xc0497f2  jal         func_125FC8
    ctx->pc = 0x123780u;
    SET_GPR_U32(ctx, 31, 0x123788u);
    ctx->pc = 0x123784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123780u;
            // 0x123784: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125FC8u;
    if (runtime->hasFunction(0x125FC8u)) {
        auto targetFn = runtime->lookupFunction(0x125FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123788u; }
        if (ctx->pc != 0x123788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125FC8_0x125fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123788u; }
        if (ctx->pc != 0x123788u) { return; }
    }
    ctx->pc = 0x123788u;
label_123788:
    // 0x123788: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x123788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12378c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x12378cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x123790: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
    ctx->pc = 0x123790u;
    {
        const bool branch_taken_0x123790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123790u;
            // 0x123794: 0x222882f  dsubu       $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123790) {
            ctx->pc = 0x1236E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1236e8;
        }
    }
    ctx->pc = 0x123798u;
label_123798:
    // 0x123798: 0xc048cfa  jal         func_1233E8
    ctx->pc = 0x123798u;
    SET_GPR_U32(ctx, 31, 0x1237A0u);
    ctx->pc = 0x12379Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123798u;
            // 0x12379c: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1233E8u;
    if (runtime->hasFunction(0x1233E8u)) {
        auto targetFn = runtime->lookupFunction(0x1233E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1237A0u; }
        if (ctx->pc != 0x1237A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001233E8_0x1233e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1237A0u; }
        if (ctx->pc != 0x1237A0u) { return; }
    }
    ctx->pc = 0x1237A0u;
label_1237a0:
    // 0x1237a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1237a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1237a4: 0xc04960a  jal         func_125828
    ctx->pc = 0x1237A4u;
    SET_GPR_U32(ctx, 31, 0x1237ACu);
    ctx->pc = 0x1237A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1237A4u;
            // 0x1237a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1237ACu; }
        if (ctx->pc != 0x1237ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1237ACu; }
        if (ctx->pc != 0x1237ACu) { return; }
    }
    ctx->pc = 0x1237ACu;
label_1237ac:
    // 0x1237ac: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x1237ACu;
    {
        const bool branch_taken_0x1237ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1237B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1237ACu;
            // 0x1237b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1237ac) {
            ctx->pc = 0x12373Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12373c;
        }
    }
    ctx->pc = 0x1237B4u;
    // 0x1237b4: 0x0  nop
    ctx->pc = 0x1237b4u;
    // NOP
}
