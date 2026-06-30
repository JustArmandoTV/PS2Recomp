#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A2C70
// Address: 0x1a2c70 - 0x1a2cb0
void sub_001A2C70_0x1a2c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2C70_0x1a2c70");
#endif

    switch (ctx->pc) {
        case 0x1a2c98u: goto label_1a2c98;
        default: break;
    }

    ctx->pc = 0x1a2c70u;

    // 0x1a2c70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a2c74: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2C74u;
    {
        const bool branch_taken_0x1a2c74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2C74u;
            // 0x1a2c78: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2c74) {
            ctx->pc = 0x1A2C88u;
            goto label_1a2c88;
        }
    }
    ctx->pc = 0x1A2C7Cu;
    // 0x1a2c7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2c80: 0x805c67e  j           func_1719F8
    ctx->pc = 0x1A2C80u;
    ctx->pc = 0x1A2C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2C80u;
            // 0x1a2c84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1719F8u;
    if (runtime->hasFunction(0x1719F8u)) {
        auto targetFn = runtime->lookupFunction(0x1719F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001719F8_0x1719f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A2C88u;
label_1a2c88:
    // 0x1a2c88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2C8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2C8Cu;
            // 0x1a2c90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A2C94u;
    // 0x1a2c94: 0x0  nop
    ctx->pc = 0x1a2c94u;
    // NOP
label_1a2c98:
    // 0x1a2c98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a2c9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a2c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a2ca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2ca4: 0x805c652  j           func_171948
    ctx->pc = 0x1A2CA4u;
    ctx->pc = 0x1A2CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2CA4u;
            // 0x1a2ca8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171948u;
    {
        auto targetFn = runtime->lookupFunction(0x171948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1A2CACu;
    // 0x1a2cac: 0x0  nop
    ctx->pc = 0x1a2cacu;
    // NOP
}
