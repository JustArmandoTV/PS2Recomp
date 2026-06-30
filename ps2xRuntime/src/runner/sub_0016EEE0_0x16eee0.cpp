#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016EEE0
// Address: 0x16eee0 - 0x16ef40
void sub_0016EEE0_0x16eee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016EEE0_0x16eee0");
#endif

    switch (ctx->pc) {
        case 0x16ef08u: goto label_16ef08;
        case 0x16ef10u: goto label_16ef10;
        case 0x16ef20u: goto label_16ef20;
        default: break;
    }

    ctx->pc = 0x16eee0u;

    // 0x16eee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16eee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16eee4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16eee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16eee8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16eee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eeec: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16EEECu;
    {
        const bool branch_taken_0x16eeec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EEECu;
            // 0x16eef0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eeec) {
            ctx->pc = 0x16EF30u;
            goto label_16ef30;
        }
    }
    ctx->pc = 0x16EEF4u;
    // 0x16eef4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x16eef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16eef8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16EEF8u;
    {
        const bool branch_taken_0x16eef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EEF8u;
            // 0x16eefc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eef8) {
            ctx->pc = 0x16EF08u;
            goto label_16ef08;
        }
    }
    ctx->pc = 0x16EF00u;
    // 0x16ef00: 0xc059226  jal         func_164898
    ctx->pc = 0x16EF00u;
    SET_GPR_U32(ctx, 31, 0x16EF08u);
    ctx->pc = 0x16EF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EF00u;
            // 0x16ef04: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164898u;
    if (runtime->hasFunction(0x164898u)) {
        auto targetFn = runtime->lookupFunction(0x164898u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EF08u; }
        if (ctx->pc != 0x16EF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164898_0x164898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EF08u; }
        if (ctx->pc != 0x16EF08u) { return; }
    }
    ctx->pc = 0x16EF08u;
label_16ef08:
    // 0x16ef08: 0xc0599d2  jal         func_166748
    ctx->pc = 0x16EF08u;
    SET_GPR_U32(ctx, 31, 0x16EF10u);
    ctx->pc = 0x166748u;
    if (runtime->hasFunction(0x166748u)) {
        auto targetFn = runtime->lookupFunction(0x166748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EF10u; }
        if (ctx->pc != 0x16EF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166748_0x166748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EF10u; }
        if (ctx->pc != 0x16EF10u) { return; }
    }
    ctx->pc = 0x16EF10u;
label_16ef10:
    // 0x16ef10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16ef10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ef14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16ef14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ef18: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x16EF18u;
    SET_GPR_U32(ctx, 31, 0x16EF20u);
    ctx->pc = 0x16EF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EF18u;
            // 0x16ef1c: 0x240600ac  addiu       $a2, $zero, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EF20u; }
        if (ctx->pc != 0x16EF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EF20u; }
        if (ctx->pc != 0x16EF20u) { return; }
    }
    ctx->pc = 0x16EF20u;
label_16ef20:
    // 0x16ef20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16ef20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ef24: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16ef24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16ef28: 0x80599d8  j           func_166760
    ctx->pc = 0x16EF28u;
    ctx->pc = 0x16EF2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EF28u;
            // 0x16ef2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166760_0x166760(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16EF30u;
label_16ef30:
    // 0x16ef30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16ef30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ef34: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16ef34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16ef38: 0x3e00008  jr          $ra
    ctx->pc = 0x16EF38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EF38u;
            // 0x16ef3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16EF40u;
}
