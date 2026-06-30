#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B9C20
// Address: 0x1b9c20 - 0x1b9ca0
void sub_001B9C20_0x1b9c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9C20_0x1b9c20");
#endif

    switch (ctx->pc) {
        case 0x1b9c40u: goto label_1b9c40;
        case 0x1b9c50u: goto label_1b9c50;
        case 0x1b9c60u: goto label_1b9c60;
        default: break;
    }

    ctx->pc = 0x1b9c20u;

    // 0x1b9c20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b9c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b9c24: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1b9c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b9c28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b9c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b9c2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b9c2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9c30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b9c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b9c34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b9c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b9c38: 0xc06e376  jal         func_1B8DD8
    ctx->pc = 0x1B9C38u;
    SET_GPR_U32(ctx, 31, 0x1B9C40u);
    ctx->pc = 0x1B9C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9C38u;
            // 0x1b9c3c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8DD8u;
    if (runtime->hasFunction(0x1B8DD8u)) {
        auto targetFn = runtime->lookupFunction(0x1B8DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9C40u; }
        if (ctx->pc != 0x1B9C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8DD8_0x1b8dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9C40u; }
        if (ctx->pc != 0x1B9C40u) { return; }
    }
    ctx->pc = 0x1B9C40u;
label_1b9c40:
    // 0x1b9c40: 0x10510011  beq         $v0, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B9C40u;
    {
        const bool branch_taken_0x1b9c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1B9C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9C40u;
            // 0x1b9c44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9c40) {
            ctx->pc = 0x1B9C88u;
            goto label_1b9c88;
        }
    }
    ctx->pc = 0x1B9C48u;
    // 0x1b9c48: 0xc069948  jal         func_1A6520
    ctx->pc = 0x1B9C48u;
    SET_GPR_U32(ctx, 31, 0x1B9C50u);
    ctx->pc = 0x1B9C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9C48u;
            // 0x1b9c4c: 0x8e0521d0  lw          $a1, 0x21D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8656)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6520u;
    if (runtime->hasFunction(0x1A6520u)) {
        auto targetFn = runtime->lookupFunction(0x1A6520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9C50u; }
        if (ctx->pc != 0x1B9C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6520_0x1a6520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9C50u; }
        if (ctx->pc != 0x1B9C50u) { return; }
    }
    ctx->pc = 0x1B9C50u;
label_1b9c50:
    // 0x1b9c50: 0x1451000d  bne         $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1B9C50u;
    {
        const bool branch_taken_0x1b9c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1B9C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9C50u;
            // 0x1b9c54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9c50) {
            ctx->pc = 0x1B9C88u;
            goto label_1b9c88;
        }
    }
    ctx->pc = 0x1B9C58u;
    // 0x1b9c58: 0xc06e728  jal         func_1B9CA0
    ctx->pc = 0x1B9C58u;
    SET_GPR_U32(ctx, 31, 0x1B9C60u);
    ctx->pc = 0x1B9CA0u;
    if (runtime->hasFunction(0x1B9CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1B9CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9C60u; }
        if (ctx->pc != 0x1B9C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9CA0_0x1b9ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9C60u; }
        if (ctx->pc != 0x1B9C60u) { return; }
    }
    ctx->pc = 0x1B9C60u;
label_1b9c60:
    // 0x1b9c60: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B9C60u;
    {
        const bool branch_taken_0x1b9c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9C60u;
            // 0x1b9c64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9c60) {
            ctx->pc = 0x1B9C88u;
            goto label_1b9c88;
        }
    }
    ctx->pc = 0x1B9C68u;
    // 0x1b9c68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b9c68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9c6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b9c6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b9c70: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1b9c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b9c74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b9c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9c78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b9c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9c7c: 0x806e370  j           func_1B8DC0
    ctx->pc = 0x1B9C7Cu;
    ctx->pc = 0x1B9C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9C7Cu;
            // 0x1b9c80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8DC0u;
    {
        auto targetFn = runtime->lookupFunction(0x1B8DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B9C84u;
    // 0x1b9c84: 0x0  nop
    ctx->pc = 0x1b9c84u;
    // NOP
label_1b9c88:
    // 0x1b9c88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b9c88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9c8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b9c8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b9c90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b9c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9c94: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9C94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9C94u;
            // 0x1b9c98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9C9Cu;
    // 0x1b9c9c: 0x0  nop
    ctx->pc = 0x1b9c9cu;
    // NOP
}
