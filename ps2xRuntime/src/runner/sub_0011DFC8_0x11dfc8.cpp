#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011DFC8
// Address: 0x11dfc8 - 0x11dfe0
void sub_0011DFC8_0x11dfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011DFC8_0x11dfc8");
#endif

    ctx->pc = 0x11dfc8u;

    // 0x11dfc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11dfc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11dfcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11dfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11dfd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11dfd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11dfd4: 0x8046344  j           func_118D10
    ctx->pc = 0x11DFD4u;
    ctx->pc = 0x11DFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11DFD4u;
            // 0x11dfd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118D10u;
    {
        auto targetFn = runtime->lookupFunction(0x118D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x11DFDCu;
    // 0x11dfdc: 0x0  nop
    ctx->pc = 0x11dfdcu;
    // NOP
}
