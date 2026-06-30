#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BCE38
// Address: 0x1bce38 - 0x1bceb0
void sub_001BCE38_0x1bce38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCE38_0x1bce38");
#endif

    switch (ctx->pc) {
        case 0x1bce50u: goto label_1bce50;
        default: break;
    }

    ctx->pc = 0x1bce38u;

    // 0x1bce38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bce38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bce3c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1bce3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bce40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bce40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bce44: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bce44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bce48: 0xc06f2e6  jal         func_1BCB98
    ctx->pc = 0x1BCE48u;
    SET_GPR_U32(ctx, 31, 0x1BCE50u);
    ctx->pc = 0x1BCE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCE48u;
            // 0x1bce4c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BCB98u;
    if (runtime->hasFunction(0x1BCB98u)) {
        auto targetFn = runtime->lookupFunction(0x1BCB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCE50u; }
        if (ctx->pc != 0x1BCE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BCB98_0x1bcb98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCE50u; }
        if (ctx->pc != 0x1BCE50u) { return; }
    }
    ctx->pc = 0x1BCE50u;
label_1bce50:
    // 0x1bce50: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bce50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bce54: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BCE54u;
    {
        const bool branch_taken_0x1bce54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCE54u;
            // 0x1bce58: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bce54) {
            ctx->pc = 0x1BCE9Cu;
            goto label_1bce9c;
        }
    }
    ctx->pc = 0x1BCE5Cu;
    // 0x1bce5c: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1bce5cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1bce60: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1bce60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bce64: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1bce64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1bce68: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x1bce68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1bce6c: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BCE6Cu;
    {
        const bool branch_taken_0x1bce6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1BCE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCE6Cu;
            // 0x1bce70: 0x28620043  slti        $v0, $v1, 0x43 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)67) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bce6c) {
            ctx->pc = 0x1BCE94u;
            goto label_1bce94;
        }
    }
    ctx->pc = 0x1BCE74u;
    // 0x1bce74: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BCE74u;
    {
        const bool branch_taken_0x1bce74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bce74) {
            ctx->pc = 0x1BCE78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCE74u;
            // 0x1bce78: 0x24020043  addiu       $v0, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BCE88u;
            goto label_1bce88;
        }
    }
    ctx->pc = 0x1BCE7Cu;
    // 0x1bce7c: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x1bce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1bce80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BCE80u;
    {
        const bool branch_taken_0x1bce80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCE80u;
            // 0x1bce84: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bce80) {
            ctx->pc = 0x1BCE8Cu;
            goto label_1bce8c;
        }
    }
    ctx->pc = 0x1BCE88u;
label_1bce88:
    // 0x1bce88: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1bce88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1bce8c:
    // 0x1bce8c: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1BCE8Cu;
    {
        const bool branch_taken_0x1bce8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bce8c) {
            ctx->pc = 0x1BCE90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCE8Cu;
            // 0x1bce90: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BCE94u;
            goto label_1bce94;
        }
    }
    ctx->pc = 0x1BCE94u;
label_1bce94:
    // 0x1bce94: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1bce94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x1bce98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bce98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bce9c:
    // 0x1bce9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bce9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bcea0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bcea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bcea4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCEA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCEA4u;
            // 0x1bcea8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BCEACu;
    // 0x1bceac: 0x0  nop
    ctx->pc = 0x1bceacu;
    // NOP
}
