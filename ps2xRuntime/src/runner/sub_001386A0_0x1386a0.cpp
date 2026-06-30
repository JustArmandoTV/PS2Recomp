#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001386A0
// Address: 0x1386a0 - 0x1386c0
void sub_001386A0_0x1386a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001386A0_0x1386a0");
#endif

    ctx->pc = 0x1386a0u;

    // 0x1386a0: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x1386a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x1386a4: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1386a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x1386a8: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x1386a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x1386ac: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1386acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1386b0: 0x804f26c  j           func_13C9B0
    ctx->pc = 0x1386B0u;
    ctx->pc = 0x1386B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1386B0u;
            // 0x1386b4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1386B8u;
    // 0x1386b8: 0x0  nop
    ctx->pc = 0x1386b8u;
    // NOP
    // 0x1386bc: 0x0  nop
    ctx->pc = 0x1386bcu;
    // NOP
}
