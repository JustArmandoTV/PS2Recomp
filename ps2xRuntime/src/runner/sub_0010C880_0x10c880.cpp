#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C880
// Address: 0x10c880 - 0x10c928
void sub_0010C880_0x10c880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C880_0x10c880");
#endif

    switch (ctx->pc) {
        case 0x10c898u: goto label_10c898;
        case 0x10c8a0u: goto label_10c8a0;
        case 0x10c8c4u: goto label_10c8c4;
        case 0x10c8d0u: goto label_10c8d0;
        case 0x10c8f4u: goto label_10c8f4;
        case 0x10c914u: goto label_10c914;
        default: break;
    }

    ctx->pc = 0x10c880u;

    // 0x10c880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10c880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10c884: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10c884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10c888: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10c888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c88c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10c88cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10c890: 0xc0431b4  jal         func_10C6D0
    ctx->pc = 0x10C890u;
    SET_GPR_U32(ctx, 31, 0x10C898u);
    ctx->pc = 0x10C894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C890u;
            // 0x10c894: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C6D0u;
    if (runtime->hasFunction(0x10C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x10C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C898u; }
        if (ctx->pc != 0x10C898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C6D0_0x10c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C898u; }
        if (ctx->pc != 0x10C898u) { return; }
    }
    ctx->pc = 0x10C898u;
label_10c898:
    // 0x10c898: 0xc045968  jal         func_1165A0
    ctx->pc = 0x10C898u;
    SET_GPR_U32(ctx, 31, 0x10C8A0u);
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C8A0u; }
        if (ctx->pc != 0x10C8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C8A0u; }
        if (ctx->pc != 0x10C8A0u) { return; }
    }
    ctx->pc = 0x10C8A0u;
label_10c8a0:
    // 0x10c8a0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10c8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10c8a4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x10c8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10c8a8: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x10c8a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x10c8ac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10c8acu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x10c8b0: 0xf  sync
    ctx->pc = 0x10c8b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10c8b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C8B4u;
    {
        const bool branch_taken_0x10c8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C8B4u;
            // 0x10c8b8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c8b4) {
            ctx->pc = 0x10C8C8u;
            goto label_10c8c8;
        }
    }
    ctx->pc = 0x10C8BCu;
    // 0x10c8bc: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x10C8BCu;
    SET_GPR_U32(ctx, 31, 0x10C8C4u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C8C4u; }
        if (ctx->pc != 0x10C8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C8C4u; }
        if (ctx->pc != 0x10C8C4u) { return; }
    }
    ctx->pc = 0x10C8C4u;
label_10c8c4:
    // 0x10c8c4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10c8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_10c8c8:
    // 0x10c8c8: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x10c8c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x10c8cc: 0x0  nop
    ctx->pc = 0x10c8ccu;
    // NOP
label_10c8d0:
    // 0x10c8d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10c8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x10c8d4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x10c8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x10c8d8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C8D8u;
    {
        const bool branch_taken_0x10c8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10c8d8) {
            ctx->pc = 0x10C8ECu;
            goto label_10c8ec;
        }
    }
    ctx->pc = 0x10C8E0u;
    // 0x10c8e0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10c8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c8e4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10C8E4u;
    {
        const bool branch_taken_0x10c8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c8e4) {
            ctx->pc = 0x10C8D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10c8d0;
        }
    }
    ctx->pc = 0x10C8ECu;
label_10c8ec:
    // 0x10c8ec: 0xc045968  jal         func_1165A0
    ctx->pc = 0x10C8ECu;
    SET_GPR_U32(ctx, 31, 0x10C8F4u);
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C8F4u; }
        if (ctx->pc != 0x10C8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C8F4u; }
        if (ctx->pc != 0x10C8F4u) { return; }
    }
    ctx->pc = 0x10C8F4u;
label_10c8f4:
    // 0x10c8f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x10c8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10c8f8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x10c8f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x10c8fc: 0xac23f000  sw          $v1, -0x1000($at)
    ctx->pc = 0x10c8fcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294963200), GPR_U32(ctx, 3)); // MMIO: 0x1000f000
    // 0x10c900: 0xf  sync
    ctx->pc = 0x10c900u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10c904: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C904u;
    {
        const bool branch_taken_0x10c904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c904) {
            ctx->pc = 0x10C914u;
            goto label_10c914;
        }
    }
    ctx->pc = 0x10C90Cu;
    // 0x10c90c: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x10C90Cu;
    SET_GPR_U32(ctx, 31, 0x10C914u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C914u; }
        if (ctx->pc != 0x10C914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C914u; }
        if (ctx->pc != 0x10C914u) { return; }
    }
    ctx->pc = 0x10C914u;
label_10c914:
    // 0x10c914: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x10c914u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10c918: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10c918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c91c: 0x3e00008  jr          $ra
    ctx->pc = 0x10C91Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C91Cu;
            // 0x10c920: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C924u;
    // 0x10c924: 0x0  nop
    ctx->pc = 0x10c924u;
    // NOP
}
