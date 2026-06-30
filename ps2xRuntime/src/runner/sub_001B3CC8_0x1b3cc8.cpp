#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B3CC8
// Address: 0x1b3cc8 - 0x1b3cf0
void sub_001B3CC8_0x1b3cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3CC8_0x1b3cc8");
#endif

    switch (ctx->pc) {
        case 0x1b3ce4u: goto label_1b3ce4;
        default: break;
    }

    ctx->pc = 0x1b3cc8u;

    // 0x1b3cc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b3ccc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b3cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b3cd0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1b3cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b3cd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b3cd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3cd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3cdc: 0xc06e35c  jal         func_1B8D70
    ctx->pc = 0x1B3CDCu;
    SET_GPR_U32(ctx, 31, 0x1B3CE4u);
    ctx->pc = 0x1B3CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3CDCu;
            // 0x1b3ce0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8D70u;
    if (runtime->hasFunction(0x1B8D70u)) {
        auto targetFn = runtime->lookupFunction(0x1B8D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3CE4u; }
        if (ctx->pc != 0x1B3CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8D70_0x1b8d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3CE4u; }
        if (ctx->pc != 0x1B3CE4u) { return; }
    }
    ctx->pc = 0x1B3CE4u;
label_1b3ce4:
    // 0x1b3ce4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3CE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3CE8u;
            // 0x1b3cec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B3CF0u;
}
