#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C7F0
// Address: 0x10c7f0 - 0x10c880
void sub_0010C7F0_0x10c7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C7F0_0x10c7f0");
#endif

    switch (ctx->pc) {
        case 0x10c800u: goto label_10c800;
        case 0x10c824u: goto label_10c824;
        case 0x10c830u: goto label_10c830;
        case 0x10c854u: goto label_10c854;
        default: break;
    }

    ctx->pc = 0x10c7f0u;

    // 0x10c7f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10c7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10c7f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10c7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10c7f8: 0xc045968  jal         func_1165A0
    ctx->pc = 0x10C7F8u;
    SET_GPR_U32(ctx, 31, 0x10C800u);
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C800u; }
        if (ctx->pc != 0x10C800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C800u; }
        if (ctx->pc != 0x10C800u) { return; }
    }
    ctx->pc = 0x10C800u;
label_10c800:
    // 0x10c800: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10c800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10c804: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x10c804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10c808: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x10c808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x10c80c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10c80cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x10c810: 0xf  sync
    ctx->pc = 0x10c810u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10c814: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C814u;
    {
        const bool branch_taken_0x10c814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C814u;
            // 0x10c818: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c814) {
            ctx->pc = 0x10C828u;
            goto label_10c828;
        }
    }
    ctx->pc = 0x10C81Cu;
    // 0x10c81c: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x10C81Cu;
    SET_GPR_U32(ctx, 31, 0x10C824u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C824u; }
        if (ctx->pc != 0x10C824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C824u; }
        if (ctx->pc != 0x10C824u) { return; }
    }
    ctx->pc = 0x10C824u;
label_10c824:
    // 0x10c824: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10c824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_10c828:
    // 0x10c828: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x10c828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x10c82c: 0x0  nop
    ctx->pc = 0x10c82cu;
    // NOP
label_10c830:
    // 0x10c830: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10c830u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x10c834: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x10c834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x10c838: 0x0  nop
    ctx->pc = 0x10c838u;
    // NOP
    // 0x10c83c: 0x0  nop
    ctx->pc = 0x10c83cu;
    // NOP
    // 0x10c840: 0x0  nop
    ctx->pc = 0x10c840u;
    // NOP
    // 0x10c844: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10C844u;
    {
        const bool branch_taken_0x10c844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c844) {
            ctx->pc = 0x10C830u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10c830;
        }
    }
    ctx->pc = 0x10C84Cu;
    // 0x10c84c: 0xc045968  jal         func_1165A0
    ctx->pc = 0x10C84Cu;
    SET_GPR_U32(ctx, 31, 0x10C854u);
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C854u; }
        if (ctx->pc != 0x10C854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C854u; }
        if (ctx->pc != 0x10C854u) { return; }
    }
    ctx->pc = 0x10C854u;
label_10c854:
    // 0x10c854: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10c854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10c858: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x10c858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10c85c: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x10c85cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x10c860: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10c860u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x10c864: 0xf  sync
    ctx->pc = 0x10c864u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10c868: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C868u;
    {
        const bool branch_taken_0x10c868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C868u;
            // 0x10c86c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c868) {
            ctx->pc = 0x10C878u;
            goto label_10c878;
        }
    }
    ctx->pc = 0x10C870u;
    // 0x10c870: 0x804597c  j           func_1165F0
    ctx->pc = 0x10C870u;
    ctx->pc = 0x10C874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C870u;
            // 0x10c874: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001165F0_0x1165f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10C878u;
label_10c878:
    // 0x10c878: 0x3e00008  jr          $ra
    ctx->pc = 0x10C878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C878u;
            // 0x10c87c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C880u;
}
