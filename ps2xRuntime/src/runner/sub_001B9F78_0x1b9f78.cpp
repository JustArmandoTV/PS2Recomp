#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B9F78
// Address: 0x1b9f78 - 0x1b9ff8
void sub_001B9F78_0x1b9f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9F78_0x1b9f78");
#endif

    switch (ctx->pc) {
        case 0x1b9f98u: goto label_1b9f98;
        case 0x1b9fa8u: goto label_1b9fa8;
        case 0x1b9fb8u: goto label_1b9fb8;
        default: break;
    }

    ctx->pc = 0x1b9f78u;

    // 0x1b9f78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b9f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b9f7c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1b9f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b9f80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b9f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b9f84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b9f84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9f88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b9f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b9f8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b9f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b9f90: 0xc06e376  jal         func_1B8DD8
    ctx->pc = 0x1B9F90u;
    SET_GPR_U32(ctx, 31, 0x1B9F98u);
    ctx->pc = 0x1B9F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9F90u;
            // 0x1b9f94: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8DD8u;
    if (runtime->hasFunction(0x1B8DD8u)) {
        auto targetFn = runtime->lookupFunction(0x1B8DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9F98u; }
        if (ctx->pc != 0x1B9F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8DD8_0x1b8dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9F98u; }
        if (ctx->pc != 0x1B9F98u) { return; }
    }
    ctx->pc = 0x1B9F98u;
label_1b9f98:
    // 0x1b9f98: 0x10510011  beq         $v0, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B9F98u;
    {
        const bool branch_taken_0x1b9f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1B9F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9F98u;
            // 0x1b9f9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9f98) {
            ctx->pc = 0x1B9FE0u;
            goto label_1b9fe0;
        }
    }
    ctx->pc = 0x1B9FA0u;
    // 0x1b9fa0: 0xc069948  jal         func_1A6520
    ctx->pc = 0x1B9FA0u;
    SET_GPR_U32(ctx, 31, 0x1B9FA8u);
    ctx->pc = 0x1B9FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9FA0u;
            // 0x1b9fa4: 0x8e052148  lw          $a1, 0x2148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8520)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6520u;
    if (runtime->hasFunction(0x1A6520u)) {
        auto targetFn = runtime->lookupFunction(0x1A6520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9FA8u; }
        if (ctx->pc != 0x1B9FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6520_0x1a6520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9FA8u; }
        if (ctx->pc != 0x1B9FA8u) { return; }
    }
    ctx->pc = 0x1B9FA8u;
label_1b9fa8:
    // 0x1b9fa8: 0x1451000d  bne         $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1B9FA8u;
    {
        const bool branch_taken_0x1b9fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1B9FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9FA8u;
            // 0x1b9fac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9fa8) {
            ctx->pc = 0x1B9FE0u;
            goto label_1b9fe0;
        }
    }
    ctx->pc = 0x1B9FB0u;
    // 0x1b9fb0: 0xc06e7fe  jal         func_1B9FF8
    ctx->pc = 0x1B9FB0u;
    SET_GPR_U32(ctx, 31, 0x1B9FB8u);
    ctx->pc = 0x1B9FF8u;
    if (runtime->hasFunction(0x1B9FF8u)) {
        auto targetFn = runtime->lookupFunction(0x1B9FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9FB8u; }
        if (ctx->pc != 0x1B9FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9FF8_0x1b9ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9FB8u; }
        if (ctx->pc != 0x1B9FB8u) { return; }
    }
    ctx->pc = 0x1B9FB8u;
label_1b9fb8:
    // 0x1b9fb8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B9FB8u;
    {
        const bool branch_taken_0x1b9fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9FB8u;
            // 0x1b9fbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9fb8) {
            ctx->pc = 0x1B9FE0u;
            goto label_1b9fe0;
        }
    }
    ctx->pc = 0x1B9FC0u;
    // 0x1b9fc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b9fc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9fc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b9fc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b9fc8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1b9fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b9fcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b9fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9fd0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b9fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9fd4: 0x806e370  j           func_1B8DC0
    ctx->pc = 0x1B9FD4u;
    ctx->pc = 0x1B9FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9FD4u;
            // 0x1b9fd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8DC0u;
    {
        auto targetFn = runtime->lookupFunction(0x1B8DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B9FDCu;
    // 0x1b9fdc: 0x0  nop
    ctx->pc = 0x1b9fdcu;
    // NOP
label_1b9fe0:
    // 0x1b9fe0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b9fe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9fe4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b9fe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b9fe8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b9fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9fec: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9FECu;
            // 0x1b9ff0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9FF4u;
    // 0x1b9ff4: 0x0  nop
    ctx->pc = 0x1b9ff4u;
    // NOP
}
