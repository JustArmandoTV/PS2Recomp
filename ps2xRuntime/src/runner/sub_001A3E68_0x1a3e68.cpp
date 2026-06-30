#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A3E68
// Address: 0x1a3e68 - 0x1a3e88
void sub_001A3E68_0x1a3e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3E68_0x1a3e68");
#endif

    ctx->pc = 0x1a3e68u;

    // 0x1a3e68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a3e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a3e6c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1a3e6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3e70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a3e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a3e74: 0x8c852080  lw          $a1, 0x2080($a0)
    ctx->pc = 0x1a3e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8320)));
    // 0x1a3e78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a3e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3e7c: 0x8069956  j           func_1A6558
    ctx->pc = 0x1A3E7Cu;
    ctx->pc = 0x1A3E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3E7Cu;
            // 0x1a3e80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6558u;
    if (runtime->hasFunction(0x1A6558u)) {
        auto targetFn = runtime->lookupFunction(0x1A6558u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A6558_0x1a6558(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A3E84u;
    // 0x1a3e84: 0x0  nop
    ctx->pc = 0x1a3e84u;
    // NOP
}
