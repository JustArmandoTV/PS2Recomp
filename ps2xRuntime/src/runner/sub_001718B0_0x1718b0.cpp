#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001718B0
// Address: 0x1718b0 - 0x1718c8
void sub_001718B0_0x1718b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001718B0_0x1718b0");
#endif

    ctx->pc = 0x1718b0u;

    // 0x1718b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1718b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1718b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1718b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1718b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1718b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1718bc: 0x805e3bc  j           func_178EF0
    ctx->pc = 0x1718BCu;
    ctx->pc = 0x1718C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1718BCu;
            // 0x1718c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178EF0u;
    if (runtime->hasFunction(0x178EF0u)) {
        auto targetFn = runtime->lookupFunction(0x178EF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00178EF0_0x178ef0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1718C4u;
    // 0x1718c4: 0x0  nop
    ctx->pc = 0x1718c4u;
    // NOP
}
