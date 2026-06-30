#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00166760
// Address: 0x166760 - 0x166778
void sub_00166760_0x166760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166760_0x166760");
#endif

    ctx->pc = 0x166760u;

    // 0x166760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x166760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x166764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x166764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x166768: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x166768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16676c: 0x8061f7a  j           func_187DE8
    ctx->pc = 0x16676Cu;
    ctx->pc = 0x166770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16676Cu;
            // 0x166770: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187DE8u;
    if (runtime->hasFunction(0x187DE8u)) {
        auto targetFn = runtime->lookupFunction(0x187DE8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00187DE8_0x187de8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x166774u;
    // 0x166774: 0x0  nop
    ctx->pc = 0x166774u;
    // NOP
}
