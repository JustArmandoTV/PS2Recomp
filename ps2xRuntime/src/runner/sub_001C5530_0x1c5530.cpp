#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C5530
// Address: 0x1c5530 - 0x1c55c0
void sub_001C5530_0x1c5530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5530_0x1c5530");
#endif

    switch (ctx->pc) {
        case 0x1c5568u: goto label_1c5568;
        case 0x1c5578u: goto label_1c5578;
        case 0x1c5588u: goto label_1c5588;
        case 0x1c5598u: goto label_1c5598;
        case 0x1c55a8u: goto label_1c55a8;
        default: break;
    }

    ctx->pc = 0x1c5530u;

    // 0x1c5530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c5530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c5534: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1c5534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
    // 0x1c5538: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c5538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c553c: 0x3c10006e  lui         $s0, 0x6E
    ctx->pc = 0x1c553cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)110 << 16));
    // 0x1c5540: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c5540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c5544: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x1c5544u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x1c5548: 0x26102000  addiu       $s0, $s0, 0x2000
    ctx->pc = 0x1c5548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8192));
    // 0x1c554c: 0x2631a5c8  addiu       $s1, $s1, -0x5A38
    ctx->pc = 0x1c554cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944200));
    // 0x1c5550: 0xac441ff8  sw          $a0, 0x1FF8($v0)
    ctx->pc = 0x1c5550u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8184), GPR_U32(ctx, 4));
    // 0x1c5554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5558: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c5558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c555c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c555cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c5560: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C5560u;
    SET_GPR_U32(ctx, 31, 0x1C5568u);
    ctx->pc = 0x1C5564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5560u;
            // 0x1c5564: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5568u; }
        if (ctx->pc != 0x1C5568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5568u; }
        if (ctx->pc != 0x1C5568u) { return; }
    }
    ctx->pc = 0x1C5568u;
label_1c5568:
    // 0x1c5568: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x1c5568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c556c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c556cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5570: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C5570u;
    SET_GPR_U32(ctx, 31, 0x1C5578u);
    ctx->pc = 0x1C5574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5570u;
            // 0x1c5574: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5578u; }
        if (ctx->pc != 0x1C5578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5578u; }
        if (ctx->pc != 0x1C5578u) { return; }
    }
    ctx->pc = 0x1C5578u;
label_1c5578:
    // 0x1c5578: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x1c5578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1c557c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c557cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5580: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C5580u;
    SET_GPR_U32(ctx, 31, 0x1C5588u);
    ctx->pc = 0x1C5584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5580u;
            // 0x1c5584: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5588u; }
        if (ctx->pc != 0x1C5588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5588u; }
        if (ctx->pc != 0x1C5588u) { return; }
    }
    ctx->pc = 0x1C5588u;
label_1c5588:
    // 0x1c5588: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x1c5588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1c558c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c558cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5590: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C5590u;
    SET_GPR_U32(ctx, 31, 0x1C5598u);
    ctx->pc = 0x1C5594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5590u;
            // 0x1c5594: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5598u; }
        if (ctx->pc != 0x1C5598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5598u; }
        if (ctx->pc != 0x1C5598u) { return; }
    }
    ctx->pc = 0x1C5598u;
label_1c5598:
    // 0x1c5598: 0x2604000a  addiu       $a0, $s0, 0xA
    ctx->pc = 0x1c5598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
    // 0x1c559c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c559cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c55a0: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C55A0u;
    SET_GPR_U32(ctx, 31, 0x1C55A8u);
    ctx->pc = 0x1C55A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C55A0u;
            // 0x1c55a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C55A8u; }
        if (ctx->pc != 0x1C55A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C55A8u; }
        if (ctx->pc != 0x1C55A8u) { return; }
    }
    ctx->pc = 0x1C55A8u;
label_1c55a8:
    // 0x1c55a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c55a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c55ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c55acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c55b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c55b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c55b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c55b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c55b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C55B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C55BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C55B8u;
            // 0x1c55bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C55C0u;
}
