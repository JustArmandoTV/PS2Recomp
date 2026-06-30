#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B9EB0
// Address: 0x1b9eb0 - 0x1b9f30
void sub_001B9EB0_0x1b9eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9EB0_0x1b9eb0");
#endif

    switch (ctx->pc) {
        case 0x1b9ed0u: goto label_1b9ed0;
        case 0x1b9ee0u: goto label_1b9ee0;
        case 0x1b9ef0u: goto label_1b9ef0;
        default: break;
    }

    ctx->pc = 0x1b9eb0u;

    // 0x1b9eb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b9eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b9eb4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1b9eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b9eb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b9eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b9ebc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b9ebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9ec0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b9ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b9ec4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b9ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b9ec8: 0xc06e382  jal         func_1B8E08
    ctx->pc = 0x1B9EC8u;
    SET_GPR_U32(ctx, 31, 0x1B9ED0u);
    ctx->pc = 0x1B9ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9EC8u;
            // 0x1b9ecc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8E08u;
    if (runtime->hasFunction(0x1B8E08u)) {
        auto targetFn = runtime->lookupFunction(0x1B8E08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9ED0u; }
        if (ctx->pc != 0x1B9ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8E08_0x1b8e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9ED0u; }
        if (ctx->pc != 0x1B9ED0u) { return; }
    }
    ctx->pc = 0x1B9ED0u;
label_1b9ed0:
    // 0x1b9ed0: 0x10510011  beq         $v0, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B9ED0u;
    {
        const bool branch_taken_0x1b9ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1B9ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9ED0u;
            // 0x1b9ed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9ed0) {
            ctx->pc = 0x1B9F18u;
            goto label_1b9f18;
        }
    }
    ctx->pc = 0x1B9ED8u;
    // 0x1b9ed8: 0xc069962  jal         func_1A6588
    ctx->pc = 0x1B9ED8u;
    SET_GPR_U32(ctx, 31, 0x1B9EE0u);
    ctx->pc = 0x1B9EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9ED8u;
            // 0x1b9edc: 0x8e052148  lw          $a1, 0x2148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8520)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6588u;
    if (runtime->hasFunction(0x1A6588u)) {
        auto targetFn = runtime->lookupFunction(0x1A6588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9EE0u; }
        if (ctx->pc != 0x1B9EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6588_0x1a6588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9EE0u; }
        if (ctx->pc != 0x1B9EE0u) { return; }
    }
    ctx->pc = 0x1B9EE0u;
label_1b9ee0:
    // 0x1b9ee0: 0x1451000d  bne         $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1B9EE0u;
    {
        const bool branch_taken_0x1b9ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1B9EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9EE0u;
            // 0x1b9ee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9ee0) {
            ctx->pc = 0x1B9F18u;
            goto label_1b9f18;
        }
    }
    ctx->pc = 0x1B9EE8u;
    // 0x1b9ee8: 0xc06e7cc  jal         func_1B9F30
    ctx->pc = 0x1B9EE8u;
    SET_GPR_U32(ctx, 31, 0x1B9EF0u);
    ctx->pc = 0x1B9F30u;
    if (runtime->hasFunction(0x1B9F30u)) {
        auto targetFn = runtime->lookupFunction(0x1B9F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9EF0u; }
        if (ctx->pc != 0x1B9EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9F30_0x1b9f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9EF0u; }
        if (ctx->pc != 0x1B9EF0u) { return; }
    }
    ctx->pc = 0x1B9EF0u;
label_1b9ef0:
    // 0x1b9ef0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B9EF0u;
    {
        const bool branch_taken_0x1b9ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9EF0u;
            // 0x1b9ef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9ef0) {
            ctx->pc = 0x1B9F18u;
            goto label_1b9f18;
        }
    }
    ctx->pc = 0x1B9EF8u;
    // 0x1b9ef8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b9ef8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9efc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b9efcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b9f00: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1b9f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b9f04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b9f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9f08: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b9f08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9f0c: 0x806e37c  j           func_1B8DF0
    ctx->pc = 0x1B9F0Cu;
    ctx->pc = 0x1B9F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9F0Cu;
            // 0x1b9f10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8DF0u;
    {
        auto targetFn = runtime->lookupFunction(0x1B8DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B9F14u;
    // 0x1b9f14: 0x0  nop
    ctx->pc = 0x1b9f14u;
    // NOP
label_1b9f18:
    // 0x1b9f18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b9f18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9f1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b9f1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b9f20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b9f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9f24: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9F24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9F24u;
            // 0x1b9f28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9F2Cu;
    // 0x1b9f2c: 0x0  nop
    ctx->pc = 0x1b9f2cu;
    // NOP
}
