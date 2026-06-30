#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019E830
// Address: 0x19e830 - 0x19e858
void sub_0019E830_0x19e830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E830_0x19e830");
#endif

    ctx->pc = 0x19e830u;

    // 0x19e830: 0x3e00008  jr          $ra
    ctx->pc = 0x19E830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E830u;
            // 0x19e834: 0x8c8200b8  lw          $v0, 0xB8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19E838u;
    // 0x19e838: 0x3e00008  jr          $ra
    ctx->pc = 0x19E838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E838u;
            // 0x19e83c: 0xac8500b8  sw          $a1, 0xB8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19E840u;
    // 0x19e840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19e840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19e844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e84c: 0x8067a16  j           func_19E858
    ctx->pc = 0x19E84Cu;
    ctx->pc = 0x19E850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E84Cu;
            // 0x19e850: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E858u;
    if (runtime->hasFunction(0x19E858u)) {
        auto targetFn = runtime->lookupFunction(0x19E858u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0019E858_0x19e858(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19E854u;
    // 0x19e854: 0x0  nop
    ctx->pc = 0x19e854u;
    // NOP
}
