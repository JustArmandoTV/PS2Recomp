#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00172E88
// Address: 0x172e88 - 0x172ea0
void sub_00172E88_0x172e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172E88_0x172e88");
#endif

    ctx->pc = 0x172e88u;

    // 0x172e88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x172e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x172e8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x172e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x172e90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172e94: 0x805cb80  j           func_172E00
    ctx->pc = 0x172E94u;
    ctx->pc = 0x172E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172E94u;
            // 0x172e98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172E00u;
    if (runtime->hasFunction(0x172E00u)) {
        auto targetFn = runtime->lookupFunction(0x172E00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00172E00_0x172e00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x172E9Cu;
    // 0x172e9c: 0x0  nop
    ctx->pc = 0x172e9cu;
    // NOP
}
