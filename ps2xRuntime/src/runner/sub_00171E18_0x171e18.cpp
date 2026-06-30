#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00171E18
// Address: 0x171e18 - 0x171e48
void sub_00171E18_0x171e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171E18_0x171e18");
#endif

    switch (ctx->pc) {
        case 0x171e2cu: goto label_171e2c;
        default: break;
    }

    ctx->pc = 0x171e18u;

    // 0x171e18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171e1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x171e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171e20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x171e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x171e24: 0xc05e408  jal         func_179020
    ctx->pc = 0x171E24u;
    SET_GPR_U32(ctx, 31, 0x171E2Cu);
    ctx->pc = 0x171E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171E24u;
            // 0x171e28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x179020u;
    if (runtime->hasFunction(0x179020u)) {
        auto targetFn = runtime->lookupFunction(0x179020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171E2Cu; }
        if (ctx->pc != 0x171E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00179020_0x179020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171E2Cu; }
        if (ctx->pc != 0x171E2Cu) { return; }
    }
    ctx->pc = 0x171E2Cu;
label_171e2c:
    // 0x171e2c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x171e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x171e30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x171e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171e34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x171e34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171e38: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x171e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x171E3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171E3Cu;
            // 0x171e40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171E44u;
    // 0x171e44: 0x0  nop
    ctx->pc = 0x171e44u;
    // NOP
}
