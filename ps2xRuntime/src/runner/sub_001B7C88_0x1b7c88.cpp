#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B7C88
// Address: 0x1b7c88 - 0x1b7cc0
void sub_001B7C88_0x1b7c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7C88_0x1b7c88");
#endif

    ctx->pc = 0x1b7c88u;

    // 0x1b7c88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b7c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b7c8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b7c8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7c90: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B7C90u;
    {
        const bool branch_taken_0x1b7c90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7C90u;
            // 0x1b7c94: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7c90) {
            ctx->pc = 0x1B7CB0u;
            goto label_1b7cb0;
        }
    }
    ctx->pc = 0x1B7C98u;
    // 0x1b7c98: 0x8ca60018  lw          $a2, 0x18($a1)
    ctx->pc = 0x1b7c98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1b7c9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b7c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7ca0: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x1b7ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1b7ca4: 0x806df30  j           func_1B7CC0
    ctx->pc = 0x1B7CA4u;
    ctx->pc = 0x1B7CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7CA4u;
            // 0x1b7ca8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7CC0u;
    if (runtime->hasFunction(0x1B7CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1B7CC0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B7CC0_0x1b7cc0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B7CACu;
    // 0x1b7cac: 0x0  nop
    ctx->pc = 0x1b7cacu;
    // NOP
label_1b7cb0:
    // 0x1b7cb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b7cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7CB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7CB4u;
            // 0x1b7cb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7CBCu;
    // 0x1b7cbc: 0x0  nop
    ctx->pc = 0x1b7cbcu;
    // NOP
}
