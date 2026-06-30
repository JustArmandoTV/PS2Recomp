#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019C990
// Address: 0x19c990 - 0x19c9a8
void sub_0019C990_0x19c990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C990_0x19c990");
#endif

    ctx->pc = 0x19c990u;

    // 0x19c990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19c990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19c994: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c998: 0x8c840048  lw          $a0, 0x48($a0)
    ctx->pc = 0x19c998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x19c99c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c99cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c9a0: 0x80692b0  j           func_1A4AC0
    ctx->pc = 0x19C9A0u;
    ctx->pc = 0x19C9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C9A0u;
            // 0x19c9a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AC0u;
    {
        auto targetFn = runtime->lookupFunction(0x1A4AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19C9A8u;
}
