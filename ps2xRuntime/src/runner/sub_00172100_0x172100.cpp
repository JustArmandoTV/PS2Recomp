#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00172100
// Address: 0x172100 - 0x172118
void sub_00172100_0x172100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172100_0x172100");
#endif

    ctx->pc = 0x172100u;

    // 0x172100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x172100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x172104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x172104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x172108: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17210c: 0x806229a  j           func_188A68
    ctx->pc = 0x17210Cu;
    ctx->pc = 0x172110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17210Cu;
            // 0x172110: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188A68u;
    if (runtime->hasFunction(0x188A68u)) {
        auto targetFn = runtime->lookupFunction(0x188A68u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00188A68_0x188a68(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x172114u;
    // 0x172114: 0x0  nop
    ctx->pc = 0x172114u;
    // NOP
}
