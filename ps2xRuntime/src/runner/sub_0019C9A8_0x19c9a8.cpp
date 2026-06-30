#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019C9A8
// Address: 0x19c9a8 - 0x19c9f0
void sub_0019C9A8_0x19c9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C9A8_0x19c9a8");
#endif

    switch (ctx->pc) {
        case 0x19c9c0u: goto label_19c9c0;
        case 0x19c9d8u: goto label_19c9d8;
        default: break;
    }

    ctx->pc = 0x19c9a8u;

    // 0x19c9a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19c9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19c9ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c9b0: 0x8c840048  lw          $a0, 0x48($a0)
    ctx->pc = 0x19c9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x19c9b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c9b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c9b8: 0x80692d0  j           func_1A4B40
    ctx->pc = 0x19C9B8u;
    ctx->pc = 0x19C9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C9B8u;
            // 0x19c9bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B40u;
    {
        auto targetFn = runtime->lookupFunction(0x1A4B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19C9C0u;
label_19c9c0:
    // 0x19c9c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19c9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19c9c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c9c8: 0x8c840048  lw          $a0, 0x48($a0)
    ctx->pc = 0x19c9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x19c9cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c9d0: 0x806926e  j           func_1A49B8
    ctx->pc = 0x19C9D0u;
    ctx->pc = 0x19C9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C9D0u;
            // 0x19c9d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A49B8u;
    {
        auto targetFn = runtime->lookupFunction(0x1A49B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19C9D8u;
label_19c9d8:
    // 0x19c9d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19c9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19c9dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c9e0: 0x8c840048  lw          $a0, 0x48($a0)
    ctx->pc = 0x19c9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x19c9e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c9e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c9e8: 0x8069292  j           func_1A4A48
    ctx->pc = 0x19C9E8u;
    ctx->pc = 0x19C9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C9E8u;
            // 0x19c9ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4A48u;
    {
        auto targetFn = runtime->lookupFunction(0x1A4A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19C9F0u;
}
