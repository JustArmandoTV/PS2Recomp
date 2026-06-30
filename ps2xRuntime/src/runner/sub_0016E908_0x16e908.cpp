#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016E908
// Address: 0x16e908 - 0x16e920
void sub_0016E908_0x16e908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E908_0x16e908");
#endif

    ctx->pc = 0x16e908u;

    // 0x16e908: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e90c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e910: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e914: 0x8060c2e  j           func_1830B8
    ctx->pc = 0x16E914u;
    ctx->pc = 0x16E918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E914u;
            // 0x16e918: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1830B8u;
    {
        auto targetFn = runtime->lookupFunction(0x1830B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16E91Cu;
    // 0x16e91c: 0x0  nop
    ctx->pc = 0x16e91cu;
    // NOP
}
