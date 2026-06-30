#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016FF80
// Address: 0x16ff80 - 0x16ffa0
void sub_0016FF80_0x16ff80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016FF80_0x16ff80");
#endif

    switch (ctx->pc) {
        case 0x16ff88u: goto label_16ff88;
        default: break;
    }

    ctx->pc = 0x16ff80u;

    // 0x16ff80: 0x3e00008  jr          $ra
    ctx->pc = 0x16FF80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FF80u;
            // 0x16ff84: 0x8c82002c  lw          $v0, 0x2C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16FF88u;
label_16ff88:
    // 0x16ff88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ff88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ff8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ff8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ff90: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x16ff90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x16ff94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ff94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ff98: 0x80594c0  j           func_165300
    ctx->pc = 0x16FF98u;
    ctx->pc = 0x16FF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FF98u;
            // 0x16ff9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x165300u;
    {
        auto targetFn = runtime->lookupFunction(0x165300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16FFA0u;
}
