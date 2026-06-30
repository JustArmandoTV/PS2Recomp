#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B2530
// Address: 0x1b2530 - 0x1b25a8
void sub_001B2530_0x1b2530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2530_0x1b2530");
#endif

    switch (ctx->pc) {
        case 0x1b2558u: goto label_1b2558;
        case 0x1b2564u: goto label_1b2564;
        case 0x1b2574u: goto label_1b2574;
        default: break;
    }

    ctx->pc = 0x1b2530u;

    // 0x1b2530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b2530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b2534: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b2534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b2538: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b2538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b253c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b253cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b2540: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b2540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b2544: 0x24519b8c  addiu       $s1, $v0, -0x6474
    ctx->pc = 0x1b2544u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941580));
    // 0x1b2548: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b2548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b254c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b254cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2550: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1b2550u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b2554: 0x0  nop
    ctx->pc = 0x1b2554u;
    // NOP
label_1b2558:
    // 0x1b2558: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1b2558u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1b255c: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B255Cu;
    SET_GPR_U32(ctx, 31, 0x1B2564u);
    ctx->pc = 0x1B2560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B255Cu;
            // 0x1b2560: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2564u; }
        if (ctx->pc != 0x1B2564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2564u; }
        if (ctx->pc != 0x1B2564u) { return; }
    }
    ctx->pc = 0x1B2564u;
label_1b2564:
    // 0x1b2564: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2564u;
    {
        const bool branch_taken_0x1b2564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2564u;
            // 0x1b2568: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2564) {
            ctx->pc = 0x1B257Cu;
            goto label_1b257c;
        }
    }
    ctx->pc = 0x1B256Cu;
    // 0x1b256c: 0xc06c942  jal         func_1B2508
    ctx->pc = 0x1B256Cu;
    SET_GPR_U32(ctx, 31, 0x1B2574u);
    ctx->pc = 0x1B2508u;
    if (runtime->hasFunction(0x1B2508u)) {
        auto targetFn = runtime->lookupFunction(0x1B2508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2574u; }
        if (ctx->pc != 0x1B2574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2508_0x1b2508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2574u; }
        if (ctx->pc != 0x1B2574u) { return; }
    }
    ctx->pc = 0x1B2574u;
label_1b2574:
    // 0x1b2574: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B2574u;
    {
        const bool branch_taken_0x1b2574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2574u;
            // 0x1b2578: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2574) {
            ctx->pc = 0x1B2594u;
            goto label_1b2594;
        }
    }
    ctx->pc = 0x1B257Cu;
label_1b257c:
    // 0x1b257c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b257cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1b2580: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x1b2580u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1b2584: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x1B2584u;
    {
        const bool branch_taken_0x1b2584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2584) {
            ctx->pc = 0x1B2588u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2584u;
            // 0x1b2588: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B2558u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b2558;
        }
    }
    ctx->pc = 0x1B258Cu;
    // 0x1b258c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b258cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2590: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2590u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b2594:
    // 0x1b2594: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b2594u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2598: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b2598u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b259c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b259cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b25a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B25A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B25A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B25A0u;
            // 0x1b25a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B25A8u;
}
