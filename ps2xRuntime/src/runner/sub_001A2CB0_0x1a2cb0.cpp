#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A2CB0
// Address: 0x1a2cb0 - 0x1a2cd8
void sub_001A2CB0_0x1a2cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2CB0_0x1a2cb0");
#endif

    switch (ctx->pc) {
        case 0x1a2cc4u: goto label_1a2cc4;
        default: break;
    }

    ctx->pc = 0x1a2cb0u;

    // 0x1a2cb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a2cb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a2cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a2cb8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a2cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a2cbc: 0xc05c6b0  jal         func_171AC0
    ctx->pc = 0x1A2CBCu;
    SET_GPR_U32(ctx, 31, 0x1A2CC4u);
    ctx->pc = 0x1A2CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2CBCu;
            // 0x1a2cc0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171AC0u;
    if (runtime->hasFunction(0x171AC0u)) {
        auto targetFn = runtime->lookupFunction(0x171AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2CC4u; }
        if (ctx->pc != 0x1A2CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171AC0_0x171ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2CC4u; }
        if (ctx->pc != 0x1A2CC4u) { return; }
    }
    ctx->pc = 0x1A2CC4u;
label_1a2cc4:
    // 0x1a2cc4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a2cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a2cc8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a2cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a2ccc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a2cccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2CD0u;
            // 0x1a2cd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A2CD8u;
}
