#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001703C0
// Address: 0x1703c0 - 0x1703d8
void sub_001703C0_0x1703c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001703C0_0x1703c0");
#endif

    ctx->pc = 0x1703c0u;

    // 0x1703c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1703c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1703c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1703c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1703c8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1703c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1703cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1703ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1703d0: 0x80593da  j           func_164F68
    ctx->pc = 0x1703D0u;
    ctx->pc = 0x1703D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1703D0u;
            // 0x1703d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164F68u;
    {
        auto targetFn = runtime->lookupFunction(0x164F68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1703D8u;
}
