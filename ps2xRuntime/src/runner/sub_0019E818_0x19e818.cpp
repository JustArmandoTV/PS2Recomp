#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019E818
// Address: 0x19e818 - 0x19e830
void sub_0019E818_0x19e818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E818_0x19e818");
#endif

    ctx->pc = 0x19e818u;

    // 0x19e818: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19e818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19e81c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e824: 0x806f9b8  j           func_1BE6E0
    ctx->pc = 0x19E824u;
    ctx->pc = 0x19E828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E824u;
            // 0x19e828: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE6E0u;
    if (runtime->hasFunction(0x1BE6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE6E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001BE6E0_0x1be6e0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19E82Cu;
    // 0x19e82c: 0x0  nop
    ctx->pc = 0x19e82cu;
    // NOP
}
