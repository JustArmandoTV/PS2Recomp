#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001701C0
// Address: 0x1701c0 - 0x1701f0
void sub_001701C0_0x1701c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001701C0_0x1701c0");
#endif

    ctx->pc = 0x1701c0u;

    // 0x1701c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1701c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1701c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1701c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1701c8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1701c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1701cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1701ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1701d0: 0x80593c2  j           func_164F08
    ctx->pc = 0x1701D0u;
    ctx->pc = 0x1701D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1701D0u;
            // 0x1701d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164F08u;
    {
        auto targetFn = runtime->lookupFunction(0x164F08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1701D8u;
    // 0x1701d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1701d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1701dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1701dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1701e0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1701e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1701e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1701e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1701e8: 0x80593c0  j           func_164F00
    ctx->pc = 0x1701E8u;
    ctx->pc = 0x1701ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1701E8u;
            // 0x1701ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164F00u;
    {
        auto targetFn = runtime->lookupFunction(0x164F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1701F0u;
}
