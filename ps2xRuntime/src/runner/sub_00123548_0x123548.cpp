#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00123548
// Address: 0x123548 - 0x123650
void sub_00123548_0x123548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123548_0x123548");
#endif

    switch (ctx->pc) {
        case 0x12356cu: goto label_12356c;
        case 0x12357cu: goto label_12357c;
        case 0x1235a0u: goto label_1235a0;
        case 0x1235a8u: goto label_1235a8;
        case 0x1235d0u: goto label_1235d0;
        case 0x1235d4u: goto label_1235d4;
        case 0x1235dcu: goto label_1235dc;
        case 0x1235ecu: goto label_1235ec;
        case 0x123600u: goto label_123600;
        case 0x123618u: goto label_123618;
        case 0x123620u: goto label_123620;
        case 0x123638u: goto label_123638;
        case 0x123644u: goto label_123644;
        default: break;
    }

    ctx->pc = 0x123548u;

    // 0x123548: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x123548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12354c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x12354cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123550: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x123550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123554: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x123554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123558: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x123558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12355c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12355cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x123560: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x123560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x123564: 0xc049760  jal         func_125D80
    ctx->pc = 0x123564u;
    SET_GPR_U32(ctx, 31, 0x12356Cu);
    ctx->pc = 0x123568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123564u;
            // 0x123568: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12356Cu; }
        if (ctx->pc != 0x12356Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12356Cu; }
        if (ctx->pc != 0x12356Cu) { return; }
    }
    ctx->pc = 0x12356Cu;
label_12356c:
    // 0x12356c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12356cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123570: 0x240503df  addiu       $a1, $zero, 0x3DF
    ctx->pc = 0x123570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 991));
    // 0x123574: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x123574u;
    {
        const bool branch_taken_0x123574 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x123578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123574u;
            // 0x123578: 0x52d3c  dsll32      $a1, $a1, 20 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123574) {
            ctx->pc = 0x123598u;
            goto label_123598;
        }
    }
    ctx->pc = 0x12357Cu;
label_12357c:
    // 0x12357c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x12357cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123580: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123580u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123584: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x123584u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123588: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x123588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12358c: 0x3e00008  jr          $ra
    ctx->pc = 0x12358Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12358Cu;
            // 0x123590: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x123594u;
    // 0x123594: 0x0  nop
    ctx->pc = 0x123594u;
    // NOP
label_123598:
    // 0x123598: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x123598u;
    SET_GPR_U32(ctx, 31, 0x1235A0u);
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1235A0u; }
        if (ctx->pc != 0x1235A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1235A0u; }
        if (ctx->pc != 0x1235A0u) { return; }
    }
    ctx->pc = 0x1235A0u;
label_1235a0:
    // 0x1235a0: 0xc0497f2  jal         func_125FC8
    ctx->pc = 0x1235A0u;
    SET_GPR_U32(ctx, 31, 0x1235A8u);
    ctx->pc = 0x1235A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1235A0u;
            // 0x1235a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125FC8u;
    if (runtime->hasFunction(0x125FC8u)) {
        auto targetFn = runtime->lookupFunction(0x125FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1235A8u; }
        if (ctx->pc != 0x1235A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125FC8_0x125fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1235A8u; }
        if (ctx->pc != 0x1235A8u) { return; }
    }
    ctx->pc = 0x1235A8u;
label_1235a8:
    // 0x1235a8: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x1235a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1235ac: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x1235acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x1235b0: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x1235b0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1235b4: 0x11787a  dsrl        $t7, $s1, 1
    ctx->pc = 0x1235b4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) >> 1);
    // 0x1235b8: 0x322e0001  andi        $t6, $s1, 0x1
    ctx->pc = 0x1235b8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1235bc: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x1235bcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x1235c0: 0x620001b  bltz        $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1235C0u;
    {
        const bool branch_taken_0x1235c0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1235C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1235C0u;
            // 0x1235c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1235c0) {
            ctx->pc = 0x123630u;
            goto label_123630;
        }
    }
    ctx->pc = 0x1235C8u;
    // 0x1235c8: 0xc048cfa  jal         func_1233E8
    ctx->pc = 0x1235C8u;
    SET_GPR_U32(ctx, 31, 0x1235D0u);
    ctx->pc = 0x1233E8u;
    if (runtime->hasFunction(0x1233E8u)) {
        auto targetFn = runtime->lookupFunction(0x1233E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1235D0u; }
        if (ctx->pc != 0x1235D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001233E8_0x1233e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1235D0u; }
        if (ctx->pc != 0x1235D0u) { return; }
    }
    ctx->pc = 0x1235D0u;
label_1235d0:
    // 0x1235d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1235d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1235d4:
    // 0x1235d4: 0xc049622  jal         func_125888
    ctx->pc = 0x1235D4u;
    SET_GPR_U32(ctx, 31, 0x1235DCu);
    ctx->pc = 0x1235D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1235D4u;
            // 0x1235d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1235DCu; }
        if (ctx->pc != 0x1235DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1235DCu; }
        if (ctx->pc != 0x1235DCu) { return; }
    }
    ctx->pc = 0x1235DCu;
label_1235dc:
    // 0x1235dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1235dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1235e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1235e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1235e4: 0xc049760  jal         func_125D80
    ctx->pc = 0x1235E4u;
    SET_GPR_U32(ctx, 31, 0x1235ECu);
    ctx->pc = 0x1235E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1235E4u;
            // 0x1235e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1235ECu; }
        if (ctx->pc != 0x1235ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1235ECu; }
        if (ctx->pc != 0x1235ECu) { return; }
    }
    ctx->pc = 0x1235ECu;
label_1235ec:
    // 0x1235ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1235ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1235f0: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1235F0u;
    {
        const bool branch_taken_0x1235f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1235F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1235F0u;
            // 0x1235f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1235f0) {
            ctx->pc = 0x123610u;
            goto label_123610;
        }
    }
    ctx->pc = 0x1235F8u;
    // 0x1235f8: 0xc0497f2  jal         func_125FC8
    ctx->pc = 0x1235F8u;
    SET_GPR_U32(ctx, 31, 0x123600u);
    ctx->pc = 0x1235FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1235F8u;
            // 0x1235fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125FC8u;
    if (runtime->hasFunction(0x125FC8u)) {
        auto targetFn = runtime->lookupFunction(0x125FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123600u; }
        if (ctx->pc != 0x123600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125FC8_0x125fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123600u; }
        if (ctx->pc != 0x123600u) { return; }
    }
    ctx->pc = 0x123600u;
label_123600:
    // 0x123600: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x123600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x123604: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x123604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x123608: 0x1000ffdc  b           . + 4 + (-0x24 << 2)
    ctx->pc = 0x123608u;
    {
        const bool branch_taken_0x123608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12360Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123608u;
            // 0x12360c: 0x222882d  daddu       $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123608) {
            ctx->pc = 0x12357Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12357c;
        }
    }
    ctx->pc = 0x123610u;
label_123610:
    // 0x123610: 0xc049622  jal         func_125888
    ctx->pc = 0x123610u;
    SET_GPR_U32(ctx, 31, 0x123618u);
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123618u; }
        if (ctx->pc != 0x123618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123618u; }
        if (ctx->pc != 0x123618u) { return; }
    }
    ctx->pc = 0x123618u;
label_123618:
    // 0x123618: 0xc0497f2  jal         func_125FC8
    ctx->pc = 0x123618u;
    SET_GPR_U32(ctx, 31, 0x123620u);
    ctx->pc = 0x12361Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123618u;
            // 0x12361c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125FC8u;
    if (runtime->hasFunction(0x125FC8u)) {
        auto targetFn = runtime->lookupFunction(0x125FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123620u; }
        if (ctx->pc != 0x123620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125FC8_0x125fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123620u; }
        if (ctx->pc != 0x123620u) { return; }
    }
    ctx->pc = 0x123620u;
label_123620:
    // 0x123620: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x123620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x123624: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x123624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x123628: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
    ctx->pc = 0x123628u;
    {
        const bool branch_taken_0x123628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12362Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123628u;
            // 0x12362c: 0x222882f  dsubu       $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123628) {
            ctx->pc = 0x12357Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12357c;
        }
    }
    ctx->pc = 0x123630u;
label_123630:
    // 0x123630: 0xc048cfa  jal         func_1233E8
    ctx->pc = 0x123630u;
    SET_GPR_U32(ctx, 31, 0x123638u);
    ctx->pc = 0x123634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123630u;
            // 0x123634: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1233E8u;
    if (runtime->hasFunction(0x1233E8u)) {
        auto targetFn = runtime->lookupFunction(0x1233E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123638u; }
        if (ctx->pc != 0x123638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001233E8_0x1233e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123638u; }
        if (ctx->pc != 0x123638u) { return; }
    }
    ctx->pc = 0x123638u;
label_123638:
    // 0x123638: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x123638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12363c: 0xc04960a  jal         func_125828
    ctx->pc = 0x12363Cu;
    SET_GPR_U32(ctx, 31, 0x123644u);
    ctx->pc = 0x123640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12363Cu;
            // 0x123640: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123644u; }
        if (ctx->pc != 0x123644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123644u; }
        if (ctx->pc != 0x123644u) { return; }
    }
    ctx->pc = 0x123644u;
label_123644:
    // 0x123644: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x123644u;
    {
        const bool branch_taken_0x123644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123644u;
            // 0x123648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123644) {
            ctx->pc = 0x1235D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1235d4;
        }
    }
    ctx->pc = 0x12364Cu;
    // 0x12364c: 0x0  nop
    ctx->pc = 0x12364cu;
    // NOP
}
