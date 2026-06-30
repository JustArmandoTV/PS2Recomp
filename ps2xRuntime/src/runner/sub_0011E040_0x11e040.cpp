#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011E040
// Address: 0x11e040 - 0x11e058
void sub_0011E040_0x11e040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E040_0x11e040");
#endif

    ctx->pc = 0x11e040u;

    // 0x11e040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11e040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11e044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11e044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11e048: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11e048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e04c: 0x80468bc  j           func_11A2F0
    ctx->pc = 0x11E04Cu;
    ctx->pc = 0x11E050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E04Cu;
            // 0x11e050: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A2F0u;
    if (runtime->hasFunction(0x11A2F0u)) {
        auto targetFn = runtime->lookupFunction(0x11A2F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0011A2F0_0x11a2f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x11E054u;
    // 0x11e054: 0x0  nop
    ctx->pc = 0x11e054u;
    // NOP
}
