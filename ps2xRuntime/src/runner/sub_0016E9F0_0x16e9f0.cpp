#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016E9F0
// Address: 0x16e9f0 - 0x16ea08
void sub_0016E9F0_0x16e9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E9F0_0x16e9f0");
#endif

    ctx->pc = 0x16e9f0u;

    // 0x16e9f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e9f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e9f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e9f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e9fc: 0x806102a  j           func_1840A8
    ctx->pc = 0x16E9FCu;
    ctx->pc = 0x16EA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E9FCu;
            // 0x16ea00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1840A8u;
    {
        auto targetFn = runtime->lookupFunction(0x1840A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16EA04u;
    // 0x16ea04: 0x0  nop
    ctx->pc = 0x16ea04u;
    // NOP
}
