#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A8508
// Address: 0x1a8508 - 0x1a85c8
void sub_001A8508_0x1a8508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8508_0x1a8508");
#endif

    switch (ctx->pc) {
        case 0x1a8534u: goto label_1a8534;
        case 0x1a8548u: goto label_1a8548;
        case 0x1a8564u: goto label_1a8564;
        case 0x1a8570u: goto label_1a8570;
        case 0x1a8578u: goto label_1a8578;
        case 0x1a8580u: goto label_1a8580;
        case 0x1a8588u: goto label_1a8588;
        case 0x1a85b4u: goto label_1a85b4;
        default: break;
    }

    ctx->pc = 0x1a8508u;

    // 0x1a8508: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a8508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a850c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a850cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8510: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a8514: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1a8514u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1a8518: 0x26109980  addiu       $s0, $s0, -0x6680
    ctx->pc = 0x1a8518u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941056));
    // 0x1a851c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a851cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a8520: 0x2406008b  addiu       $a2, $zero, 0x8B
    ctx->pc = 0x1a8520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
    // 0x1a8524: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a8524u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8528: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a8528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a852c: 0xc06419c  jal         func_190670
    ctx->pc = 0x1A852Cu;
    SET_GPR_U32(ctx, 31, 0x1A8534u);
    ctx->pc = 0x1A8530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A852Cu;
            // 0x1a8530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190670u;
    if (runtime->hasFunction(0x190670u)) {
        auto targetFn = runtime->lookupFunction(0x190670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8534u; }
        if (ctx->pc != 0x1A8534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190670_0x190670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8534u; }
        if (ctx->pc != 0x1A8534u) { return; }
    }
    ctx->pc = 0x1A8534u;
label_1a8534:
    // 0x1a8534: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1a8534u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1a8538: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x1a8538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x1a853c: 0x24a5ac80  addiu       $a1, $a1, -0x5380
    ctx->pc = 0x1a853cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945920));
    // 0x1a8540: 0xc064080  jal         func_190200
    ctx->pc = 0x1A8540u;
    SET_GPR_U32(ctx, 31, 0x1A8548u);
    ctx->pc = 0x1A8544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8540u;
            // 0x1a8544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190200u;
    if (runtime->hasFunction(0x190200u)) {
        auto targetFn = runtime->lookupFunction(0x190200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8548u; }
        if (ctx->pc != 0x1A8548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190200_0x190200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8548u; }
        if (ctx->pc != 0x1A8548u) { return; }
    }
    ctx->pc = 0x1A8548u;
label_1a8548:
    // 0x1a8548: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x1a8548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a854c: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x1a854cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a8550: 0xb2020197  sdl         $v0, 0x197($s0)
    ctx->pc = 0x1a8550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a8554: 0xb6020190  sdr         $v0, 0x190($s0)
    ctx->pc = 0x1a8554u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a8558: 0xae000198  sw          $zero, 0x198($s0)
    ctx->pc = 0x1a8558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 0));
    // 0x1a855c: 0xc06a1a0  jal         func_1A8680
    ctx->pc = 0x1A855Cu;
    SET_GPR_U32(ctx, 31, 0x1A8564u);
    ctx->pc = 0x1A8560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A855Cu;
            // 0x1a8560: 0x2604019c  addiu       $a0, $s0, 0x19C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 412));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8680u;
    if (runtime->hasFunction(0x1A8680u)) {
        auto targetFn = runtime->lookupFunction(0x1A8680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8564u; }
        if (ctx->pc != 0x1A8564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8680_0x1a8680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8564u; }
        if (ctx->pc != 0x1A8564u) { return; }
    }
    ctx->pc = 0x1A8564u;
label_1a8564:
    // 0x1a8564: 0x260401b0  addiu       $a0, $s0, 0x1B0
    ctx->pc = 0x1a8564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    // 0x1a8568: 0xc06d940  jal         func_1B6500
    ctx->pc = 0x1A8568u;
    SET_GPR_U32(ctx, 31, 0x1A8570u);
    ctx->pc = 0x1A856Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8568u;
            // 0x1a856c: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6500u;
    if (runtime->hasFunction(0x1B6500u)) {
        auto targetFn = runtime->lookupFunction(0x1B6500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8570u; }
        if (ctx->pc != 0x1A8570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6500_0x1b6500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8570u; }
        if (ctx->pc != 0x1A8570u) { return; }
    }
    ctx->pc = 0x1A8570u;
label_1a8570:
    // 0x1a8570: 0xc0693d2  jal         func_1A4F48
    ctx->pc = 0x1A8570u;
    SET_GPR_U32(ctx, 31, 0x1A8578u);
    ctx->pc = 0x1A8574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8570u;
            // 0x1a8574: 0x260401c4  addiu       $a0, $s0, 0x1C4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 452));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F48u;
    if (runtime->hasFunction(0x1A4F48u)) {
        auto targetFn = runtime->lookupFunction(0x1A4F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8578u; }
        if (ctx->pc != 0x1A8578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4F48_0x1a4f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8578u; }
        if (ctx->pc != 0x1A8578u) { return; }
    }
    ctx->pc = 0x1A8578u;
label_1a8578:
    // 0x1a8578: 0xc06a172  jal         func_1A85C8
    ctx->pc = 0x1A8578u;
    SET_GPR_U32(ctx, 31, 0x1A8580u);
    ctx->pc = 0x1A857Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8578u;
            // 0x1a857c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A85C8u;
    if (runtime->hasFunction(0x1A85C8u)) {
        auto targetFn = runtime->lookupFunction(0x1A85C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8580u; }
        if (ctx->pc != 0x1A8580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A85C8_0x1a85c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8580u; }
        if (ctx->pc != 0x1A8580u) { return; }
    }
    ctx->pc = 0x1A8580u;
label_1a8580:
    // 0x1a8580: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1a8580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a8584: 0x26100228  addiu       $s0, $s0, 0x228
    ctx->pc = 0x1a8584u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 552));
label_1a8588:
    // 0x1a8588: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a8588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a858c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1a858cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1a8590: 0x0  nop
    ctx->pc = 0x1a8590u;
    // NOP
    // 0x1a8594: 0x0  nop
    ctx->pc = 0x1a8594u;
    // NOP
    // 0x1a8598: 0x0  nop
    ctx->pc = 0x1a8598u;
    // NOP
    // 0x1a859c: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A859Cu;
    {
        const bool branch_taken_0x1a859c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A85A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A859Cu;
            // 0x1a85a0: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a859c) {
            ctx->pc = 0x1A8588u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a8588;
        }
    }
    ctx->pc = 0x1A85A4u;
    // 0x1a85a4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1a85a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a85a8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1a85a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1a85ac: 0xc06e190  jal         func_1B8640
    ctx->pc = 0x1A85ACu;
    SET_GPR_U32(ctx, 31, 0x1A85B4u);
    ctx->pc = 0x1A85B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A85ACu;
            // 0x1a85b0: 0x24849b48  addiu       $a0, $a0, -0x64B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8640u;
    if (runtime->hasFunction(0x1B8640u)) {
        auto targetFn = runtime->lookupFunction(0x1B8640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A85B4u; }
        if (ctx->pc != 0x1A85B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8640_0x1b8640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A85B4u; }
        if (ctx->pc != 0x1A85B4u) { return; }
    }
    ctx->pc = 0x1A85B4u;
label_1a85b4:
    // 0x1a85b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a85b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a85b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a85b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a85bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a85bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a85c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A85C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A85C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A85C0u;
            // 0x1a85c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A85C8u;
}
