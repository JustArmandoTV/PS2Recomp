#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00196690
// Address: 0x196690 - 0x1966a8
void sub_00196690_0x196690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196690_0x196690");
#endif

    ctx->pc = 0x196690u;

    // 0x196690: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x196694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x196698: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19669c: 0x80628a2  j           func_18A288
    ctx->pc = 0x19669Cu;
    ctx->pc = 0x1966A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19669Cu;
            // 0x1966a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A288u;
    if (runtime->hasFunction(0x18A288u)) {
        auto targetFn = runtime->lookupFunction(0x18A288u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0018A288_0x18a288(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1966A4u;
    // 0x1966a4: 0x0  nop
    ctx->pc = 0x1966a4u;
    // NOP
}
