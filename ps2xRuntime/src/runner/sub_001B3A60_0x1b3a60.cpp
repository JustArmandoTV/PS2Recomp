#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B3A60
// Address: 0x1b3a60 - 0x1b3ad8
void sub_001B3A60_0x1b3a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3A60_0x1b3a60");
#endif

    switch (ctx->pc) {
        case 0x1b3a88u: goto label_1b3a88;
        case 0x1b3a90u: goto label_1b3a90;
        case 0x1b3a9cu: goto label_1b3a9c;
        case 0x1b3aacu: goto label_1b3aac;
        default: break;
    }

    ctx->pc = 0x1b3a60u;

    // 0x1b3a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b3a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b3a64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b3a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3a68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b3a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b3a6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b3a6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3a70: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x1b3a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1b3a74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b3a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b3a78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b3a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b3a7c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b3a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b3a80: 0xc06419c  jal         func_190670
    ctx->pc = 0x1B3A80u;
    SET_GPR_U32(ctx, 31, 0x1B3A88u);
    ctx->pc = 0x1B3A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3A80u;
            // 0x1b3a84: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190670u;
    if (runtime->hasFunction(0x190670u)) {
        auto targetFn = runtime->lookupFunction(0x190670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A88u; }
        if (ctx->pc != 0x1B3A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190670_0x190670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A88u; }
        if (ctx->pc != 0x1B3A88u) { return; }
    }
    ctx->pc = 0x1B3A88u;
label_1b3a88:
    // 0x1b3a88: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1b3a88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3a8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b3a90:
    // 0x1b3a90: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x1b3a90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1b3a94: 0xc06e178  jal         func_1B85E0
    ctx->pc = 0x1B3A94u;
    SET_GPR_U32(ctx, 31, 0x1B3A9Cu);
    ctx->pc = 0x1B3A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3A94u;
            // 0x1b3a98: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B85E0u;
    if (runtime->hasFunction(0x1B85E0u)) {
        auto targetFn = runtime->lookupFunction(0x1B85E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A9Cu; }
        if (ctx->pc != 0x1B3A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B85E0_0x1b85e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A9Cu; }
        if (ctx->pc != 0x1B3A9Cu) { return; }
    }
    ctx->pc = 0x1B3A9Cu;
label_1b3a9c:
    // 0x1b3a9c: 0x643fffc  bgezl       $s2, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1B3A9Cu;
    {
        const bool branch_taken_0x1b3a9c = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1b3a9c) {
            ctx->pc = 0x1B3AA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3A9Cu;
            // 0x1b3aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B3A90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b3a90;
        }
    }
    ctx->pc = 0x1B3AA4u;
    // 0x1b3aa4: 0xc06e178  jal         func_1B85E0
    ctx->pc = 0x1B3AA4u;
    SET_GPR_U32(ctx, 31, 0x1B3AACu);
    ctx->pc = 0x1B3AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3AA4u;
            // 0x1b3aa8: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B85E0u;
    if (runtime->hasFunction(0x1B85E0u)) {
        auto targetFn = runtime->lookupFunction(0x1B85E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3AACu; }
        if (ctx->pc != 0x1B3AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B85E0_0x1b85e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3AACu; }
        if (ctx->pc != 0x1B3AACu) { return; }
    }
    ctx->pc = 0x1B3AACu;
label_1b3aac:
    // 0x1b3aac: 0xfe2000c0  sd          $zero, 0xC0($s1)
    ctx->pc = 0x1b3aacu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 192), GPR_U64(ctx, 0));
    // 0x1b3ab0: 0xae2000dc  sw          $zero, 0xDC($s1)
    ctx->pc = 0x1b3ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 0));
    // 0x1b3ab4: 0xfe2000c8  sd          $zero, 0xC8($s1)
    ctx->pc = 0x1b3ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 200), GPR_U64(ctx, 0));
    // 0x1b3ab8: 0xfe2000d0  sd          $zero, 0xD0($s1)
    ctx->pc = 0x1b3ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 208), GPR_U64(ctx, 0));
    // 0x1b3abc: 0xae2000d8  sw          $zero, 0xD8($s1)
    ctx->pc = 0x1b3abcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 0));
    // 0x1b3ac0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b3ac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3ac4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b3ac4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b3ac8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b3ac8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3acc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b3accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b3ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3AD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3AD0u;
            // 0x1b3ad4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B3AD8u;
}
