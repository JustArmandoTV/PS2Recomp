#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019D458
// Address: 0x19d458 - 0x19d488
void sub_0019D458_0x19d458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D458_0x19d458");
#endif

    ctx->pc = 0x19d458u;

    // 0x19d458: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19d458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19d45c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d460: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x19d460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x19d464: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19D464u;
    {
        const bool branch_taken_0x19d464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D464u;
            // 0x19d468: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d464) {
            ctx->pc = 0x19D478u;
            goto label_19d478;
        }
    }
    ctx->pc = 0x19D46Cu;
    // 0x19d46c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d470: 0x806d848  j           func_1B6120
    ctx->pc = 0x19D470u;
    ctx->pc = 0x19D474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D470u;
            // 0x19d474: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6120u;
    if (runtime->hasFunction(0x1B6120u)) {
        auto targetFn = runtime->lookupFunction(0x1B6120u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B6120_0x1b6120(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19D478u;
label_19d478:
    // 0x19d478: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d47c: 0x3e00008  jr          $ra
    ctx->pc = 0x19D47Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D47Cu;
            // 0x19d480: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D484u;
    // 0x19d484: 0x0  nop
    ctx->pc = 0x19d484u;
    // NOP
}
