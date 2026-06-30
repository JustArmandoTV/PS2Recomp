#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A07F0
// Address: 0x1a07f0 - 0x1a0850
void sub_001A07F0_0x1a07f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A07F0_0x1a07f0");
#endif

    switch (ctx->pc) {
        case 0x1a0808u: goto label_1a0808;
        default: break;
    }

    ctx->pc = 0x1a07f0u;

    // 0x1a07f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a07f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a07f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a07f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a07f8: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x1a07f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x1a07fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a07fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0800: 0x80601be  j           func_1806F8
    ctx->pc = 0x1A0800u;
    ctx->pc = 0x1A0804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0800u;
            // 0x1a0804: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1806F8u;
    {
        auto targetFn = runtime->lookupFunction(0x1806F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1A0808u;
label_1a0808:
    // 0x1a0808: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a0808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a080c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a080cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a0810: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x1a0810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x1a0814: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0818: 0x80601f4  j           func_1807D0
    ctx->pc = 0x1A0818u;
    ctx->pc = 0x1A081Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0818u;
            // 0x1a081c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1807D0u;
    {
        auto targetFn = runtime->lookupFunction(0x1807D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1A0820u;
    // 0x1a0820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a0820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a0824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a0824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a0828: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x1a0828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x1a082c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a082cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0830: 0x806022c  j           func_1808B0
    ctx->pc = 0x1A0830u;
    ctx->pc = 0x1A0834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0830u;
            // 0x1a0834: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1808B0u;
    {
        auto targetFn = runtime->lookupFunction(0x1808B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1A0838u;
    // 0x1a0838: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a0838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a083c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a083cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a0840: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x1a0840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x1a0844: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0848: 0x8060264  j           func_180990
    ctx->pc = 0x1A0848u;
    ctx->pc = 0x1A084Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0848u;
            // 0x1a084c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180990u;
    {
        auto targetFn = runtime->lookupFunction(0x180990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1A0850u;
}
