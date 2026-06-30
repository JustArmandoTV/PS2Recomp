#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00180818
// Address: 0x180818 - 0x1808f8
void sub_00180818_0x180818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180818_0x180818");
#endif

    switch (ctx->pc) {
        case 0x180830u: goto label_180830;
        case 0x180850u: goto label_180850;
        case 0x18088cu: goto label_18088c;
        case 0x1808b0u: goto label_1808b0;
        case 0x1808ccu: goto label_1808cc;
        case 0x1808d8u: goto label_1808d8;
        case 0x1808e0u: goto label_1808e0;
        default: break;
    }

    ctx->pc = 0x180818u;

    // 0x180818: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18081c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18081Cu;
    {
        const bool branch_taken_0x18081c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x180820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18081Cu;
            // 0x180820: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18081c) {
            ctx->pc = 0x180838u;
            goto label_180838;
        }
    }
    ctx->pc = 0x180824u;
    // 0x180824: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x180824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x180828: 0xc060334  jal         func_180CD0
    ctx->pc = 0x180828u;
    SET_GPR_U32(ctx, 31, 0x180830u);
    ctx->pc = 0x18082Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180828u;
            // 0x18082c: 0x24846930  addiu       $a0, $a0, 0x6930 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180CD0u;
    if (runtime->hasFunction(0x180CD0u)) {
        auto targetFn = runtime->lookupFunction(0x180CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180830u; }
        if (ctx->pc != 0x180830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180CD0_0x180cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180830u; }
        if (ctx->pc != 0x180830u) { return; }
    }
    ctx->pc = 0x180830u;
label_180830:
    // 0x180830: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x180830u;
    {
        const bool branch_taken_0x180830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180830u;
            // 0x180834: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180830) {
            ctx->pc = 0x1808A0u;
            goto label_1808a0;
        }
    }
    ctx->pc = 0x180838u;
label_180838:
    // 0x180838: 0x24860038  addiu       $a2, $a0, 0x38
    ctx->pc = 0x180838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x18083c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x18083cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x180840: 0x1045000c  beq         $v0, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x180840u;
    {
        const bool branch_taken_0x180840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x180844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180840u;
            // 0x180844: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180840) {
            ctx->pc = 0x180874u;
            goto label_180874;
        }
    }
    ctx->pc = 0x180848u;
    // 0x180848: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x180848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18084c: 0x0  nop
    ctx->pc = 0x18084cu;
    // NOP
label_180850:
    // 0x180850: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x180850u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x180854: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x180854u;
    {
        const bool branch_taken_0x180854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180854u;
            // 0x180858: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180854) {
            ctx->pc = 0x180874u;
            goto label_180874;
        }
    }
    ctx->pc = 0x18085Cu;
    // 0x18085c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x18085cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x180860: 0x0  nop
    ctx->pc = 0x180860u;
    // NOP
    // 0x180864: 0x0  nop
    ctx->pc = 0x180864u;
    // NOP
    // 0x180868: 0x0  nop
    ctx->pc = 0x180868u;
    // NOP
    // 0x18086c: 0x5445fff8  bnel        $v0, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18086Cu;
    {
        const bool branch_taken_0x18086c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x18086c) {
            ctx->pc = 0x180870u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18086Cu;
            // 0x180870: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x180850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_180850;
        }
    }
    ctx->pc = 0x180874u;
label_180874:
    // 0x180874: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x180874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x180878: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x180878u;
    {
        const bool branch_taken_0x180878 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x180878) {
            ctx->pc = 0x18087Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x180878u;
            // 0x18087c: 0x31940  sll         $v1, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x180898u;
            goto label_180898;
        }
    }
    ctx->pc = 0x180880u;
    // 0x180880: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x180880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x180884: 0xc060334  jal         func_180CD0
    ctx->pc = 0x180884u;
    SET_GPR_U32(ctx, 31, 0x18088Cu);
    ctx->pc = 0x180888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180884u;
            // 0x180888: 0x24846960  addiu       $a0, $a0, 0x6960 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180CD0u;
    if (runtime->hasFunction(0x180CD0u)) {
        auto targetFn = runtime->lookupFunction(0x180CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18088Cu; }
        if (ctx->pc != 0x18088Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180CD0_0x180cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18088Cu; }
        if (ctx->pc != 0x18088Cu) { return; }
    }
    ctx->pc = 0x18088Cu;
label_18088c:
    // 0x18088c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18088Cu;
    {
        const bool branch_taken_0x18088c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18088Cu;
            // 0x180890: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18088c) {
            ctx->pc = 0x1808A0u;
            goto label_1808a0;
        }
    }
    ctx->pc = 0x180894u;
    // 0x180894: 0x0  nop
    ctx->pc = 0x180894u;
    // NOP
label_180898:
    // 0x180898: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x180898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18089c: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x18089cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_1808a0:
    // 0x1808a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1808a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1808a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1808A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1808A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1808A4u;
            // 0x1808a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1808ACu;
    // 0x1808ac: 0x0  nop
    ctx->pc = 0x1808acu;
    // NOP
label_1808b0:
    // 0x1808b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1808b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1808b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1808b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1808b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1808b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1808bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1808bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1808c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1808c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1808c4: 0xc06031a  jal         func_180C68
    ctx->pc = 0x1808C4u;
    SET_GPR_U32(ctx, 31, 0x1808CCu);
    ctx->pc = 0x1808C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1808C4u;
            // 0x1808c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C68u;
    if (runtime->hasFunction(0x180C68u)) {
        auto targetFn = runtime->lookupFunction(0x180C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1808CCu; }
        if (ctx->pc != 0x1808CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180C68_0x180c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1808CCu; }
        if (ctx->pc != 0x1808CCu) { return; }
    }
    ctx->pc = 0x1808CCu;
label_1808cc:
    // 0x1808cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1808ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1808d0: 0xc06023e  jal         func_1808F8
    ctx->pc = 0x1808D0u;
    SET_GPR_U32(ctx, 31, 0x1808D8u);
    ctx->pc = 0x1808D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1808D0u;
            // 0x1808d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1808F8u;
    if (runtime->hasFunction(0x1808F8u)) {
        auto targetFn = runtime->lookupFunction(0x1808F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1808D8u; }
        if (ctx->pc != 0x1808D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001808F8_0x1808f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1808D8u; }
        if (ctx->pc != 0x1808D8u) { return; }
    }
    ctx->pc = 0x1808D8u;
label_1808d8:
    // 0x1808d8: 0xc06031c  jal         func_180C70
    ctx->pc = 0x1808D8u;
    SET_GPR_U32(ctx, 31, 0x1808E0u);
    ctx->pc = 0x1808DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1808D8u;
            // 0x1808dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C70u;
    if (runtime->hasFunction(0x180C70u)) {
        auto targetFn = runtime->lookupFunction(0x180C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1808E0u; }
        if (ctx->pc != 0x1808E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180C70_0x180c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1808E0u; }
        if (ctx->pc != 0x1808E0u) { return; }
    }
    ctx->pc = 0x1808E0u;
label_1808e0:
    // 0x1808e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1808e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1808e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1808e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1808e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1808e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1808ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1808ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1808f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1808F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1808F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1808F0u;
            // 0x1808f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1808F8u;
}
