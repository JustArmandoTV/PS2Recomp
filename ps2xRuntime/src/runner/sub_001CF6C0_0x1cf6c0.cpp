#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CF6C0
// Address: 0x1cf6c0 - 0x1cf6e8
void sub_001CF6C0_0x1cf6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF6C0_0x1cf6c0");
#endif

    switch (ctx->pc) {
        case 0x1cf6d8u: goto label_1cf6d8;
        default: break;
    }

    ctx->pc = 0x1cf6c0u;

    // 0x1cf6c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf6c4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1cf6c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf6c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cf6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cf6cc: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x1cf6ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1cf6d0: 0xc073bb4  jal         func_1CEED0
    ctx->pc = 0x1CF6D0u;
    SET_GPR_U32(ctx, 31, 0x1CF6D8u);
    ctx->pc = 0x1CF6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF6D0u;
            // 0x1cf6d4: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CEED0u;
    if (runtime->hasFunction(0x1CEED0u)) {
        auto targetFn = runtime->lookupFunction(0x1CEED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF6D8u; }
        if (ctx->pc != 0x1CF6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CEED0_0x1ceed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF6D8u; }
        if (ctx->pc != 0x1CF6D8u) { return; }
    }
    ctx->pc = 0x1CF6D8u;
label_1cf6d8:
    // 0x1cf6d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cf6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf6dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF6DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF6DCu;
            // 0x1cf6e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CF6E4u;
    // 0x1cf6e4: 0x0  nop
    ctx->pc = 0x1cf6e4u;
    // NOP
}
