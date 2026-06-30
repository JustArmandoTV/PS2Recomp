#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001966F0
// Address: 0x1966f0 - 0x196708
void sub_001966F0_0x1966f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001966F0_0x1966f0");
#endif

    ctx->pc = 0x1966f0u;

    // 0x1966f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1966f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1966f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1966f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1966f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1966f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1966fc: 0x80628d2  j           func_18A348
    ctx->pc = 0x1966FCu;
    ctx->pc = 0x196700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1966FCu;
            // 0x196700: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A348u;
    {
        auto targetFn = runtime->lookupFunction(0x18A348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x196704u;
    // 0x196704: 0x0  nop
    ctx->pc = 0x196704u;
    // NOP
}
