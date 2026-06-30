#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B9B98
// Address: 0x1b9b98 - 0x1b9c18
void sub_001B9B98_0x1b9b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9B98_0x1b9b98");
#endif

    switch (ctx->pc) {
        case 0x1b9bb8u: goto label_1b9bb8;
        case 0x1b9bc8u: goto label_1b9bc8;
        case 0x1b9bd8u: goto label_1b9bd8;
        default: break;
    }

    ctx->pc = 0x1b9b98u;

    // 0x1b9b98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b9b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b9b9c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1b9b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b9ba0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b9ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b9ba4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b9ba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9ba8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b9ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b9bac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b9bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b9bb0: 0xc06e382  jal         func_1B8E08
    ctx->pc = 0x1B9BB0u;
    SET_GPR_U32(ctx, 31, 0x1B9BB8u);
    ctx->pc = 0x1B9BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9BB0u;
            // 0x1b9bb4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8E08u;
    if (runtime->hasFunction(0x1B8E08u)) {
        auto targetFn = runtime->lookupFunction(0x1B8E08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9BB8u; }
        if (ctx->pc != 0x1B9BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8E08_0x1b8e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9BB8u; }
        if (ctx->pc != 0x1B9BB8u) { return; }
    }
    ctx->pc = 0x1B9BB8u;
label_1b9bb8:
    // 0x1b9bb8: 0x10510011  beq         $v0, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B9BB8u;
    {
        const bool branch_taken_0x1b9bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1B9BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9BB8u;
            // 0x1b9bbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9bb8) {
            ctx->pc = 0x1B9C00u;
            goto label_1b9c00;
        }
    }
    ctx->pc = 0x1B9BC0u;
    // 0x1b9bc0: 0xc069962  jal         func_1A6588
    ctx->pc = 0x1B9BC0u;
    SET_GPR_U32(ctx, 31, 0x1B9BC8u);
    ctx->pc = 0x1B9BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9BC0u;
            // 0x1b9bc4: 0x8e0521d0  lw          $a1, 0x21D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8656)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6588u;
    if (runtime->hasFunction(0x1A6588u)) {
        auto targetFn = runtime->lookupFunction(0x1A6588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9BC8u; }
        if (ctx->pc != 0x1B9BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6588_0x1a6588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9BC8u; }
        if (ctx->pc != 0x1B9BC8u) { return; }
    }
    ctx->pc = 0x1B9BC8u;
label_1b9bc8:
    // 0x1b9bc8: 0x1451000d  bne         $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1B9BC8u;
    {
        const bool branch_taken_0x1b9bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1B9BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9BC8u;
            // 0x1b9bcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9bc8) {
            ctx->pc = 0x1B9C00u;
            goto label_1b9c00;
        }
    }
    ctx->pc = 0x1B9BD0u;
    // 0x1b9bd0: 0xc06e706  jal         func_1B9C18
    ctx->pc = 0x1B9BD0u;
    SET_GPR_U32(ctx, 31, 0x1B9BD8u);
    ctx->pc = 0x1B9C18u;
    if (runtime->hasFunction(0x1B9C18u)) {
        auto targetFn = runtime->lookupFunction(0x1B9C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9BD8u; }
        if (ctx->pc != 0x1B9BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9C18_0x1b9c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9BD8u; }
        if (ctx->pc != 0x1B9BD8u) { return; }
    }
    ctx->pc = 0x1B9BD8u;
label_1b9bd8:
    // 0x1b9bd8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B9BD8u;
    {
        const bool branch_taken_0x1b9bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9BD8u;
            // 0x1b9bdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9bd8) {
            ctx->pc = 0x1B9C00u;
            goto label_1b9c00;
        }
    }
    ctx->pc = 0x1B9BE0u;
    // 0x1b9be0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b9be0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9be4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b9be4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b9be8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1b9be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b9bec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b9becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9bf0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b9bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9bf4: 0x806e37c  j           func_1B8DF0
    ctx->pc = 0x1B9BF4u;
    ctx->pc = 0x1B9BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9BF4u;
            // 0x1b9bf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8DF0u;
    {
        auto targetFn = runtime->lookupFunction(0x1B8DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B9BFCu;
    // 0x1b9bfc: 0x0  nop
    ctx->pc = 0x1b9bfcu;
    // NOP
label_1b9c00:
    // 0x1b9c00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b9c00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9c04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b9c04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b9c08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b9c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9C0Cu;
            // 0x1b9c10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9C14u;
    // 0x1b9c14: 0x0  nop
    ctx->pc = 0x1b9c14u;
    // NOP
}
