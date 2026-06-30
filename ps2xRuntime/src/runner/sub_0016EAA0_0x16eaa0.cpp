#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016EAA0
// Address: 0x16eaa0 - 0x16eab8
void sub_0016EAA0_0x16eaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016EAA0_0x16eaa0");
#endif

    ctx->pc = 0x16eaa0u;

    // 0x16eaa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16eaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16eaa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16eaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16eaa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16eaa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16eaac: 0x8061116  j           func_184458
    ctx->pc = 0x16EAACu;
    ctx->pc = 0x16EAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EAACu;
            // 0x16eab0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184458u;
    {
        auto targetFn = runtime->lookupFunction(0x184458u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16EAB4u;
    // 0x16eab4: 0x0  nop
    ctx->pc = 0x16eab4u;
    // NOP
}
