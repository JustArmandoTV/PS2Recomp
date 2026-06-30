#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170250
// Address: 0x170250 - 0x170280
void sub_00170250_0x170250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170250_0x170250");
#endif

    ctx->pc = 0x170250u;

    // 0x170250: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x170254: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x170258: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x170258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17025c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17025cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170260: 0x80593ce  j           func_164F38
    ctx->pc = 0x170260u;
    ctx->pc = 0x170264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170260u;
            // 0x170264: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164F38u;
    {
        auto targetFn = runtime->lookupFunction(0x164F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x170268u;
    // 0x170268: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17026c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17026cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x170270: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x170270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x170274: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170278: 0x80593d0  j           func_164F40
    ctx->pc = 0x170278u;
    ctx->pc = 0x17027Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170278u;
            // 0x17027c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164F40u;
    if (runtime->hasFunction(0x164F40u)) {
        auto targetFn = runtime->lookupFunction(0x164F40u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00164F40_0x164f40(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x170280u;
}
