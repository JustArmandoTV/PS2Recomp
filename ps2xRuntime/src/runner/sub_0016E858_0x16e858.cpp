#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016E858
// Address: 0x16e858 - 0x16e888
void sub_0016E858_0x16e858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E858_0x16e858");
#endif

    ctx->pc = 0x16e858u;

    // 0x16e858: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e85c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e860: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x16e860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x16e864: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e868: 0x8060d58  j           func_183560
    ctx->pc = 0x16E868u;
    ctx->pc = 0x16E86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E868u;
            // 0x16e86c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183560u;
    {
        auto targetFn = runtime->lookupFunction(0x183560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16E870u;
    // 0x16e870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e878: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x16e878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x16e87c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e880: 0x8060d6a  j           func_1835A8
    ctx->pc = 0x16E880u;
    ctx->pc = 0x16E884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E880u;
            // 0x16e884: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1835A8u;
    {
        auto targetFn = runtime->lookupFunction(0x1835A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16E888u;
}
