#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015D260
// Address: 0x15d260 - 0x15d280
void sub_0015D260_0x15d260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D260_0x15d260");
#endif

    ctx->pc = 0x15d260u;

    // 0x15d260: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x15d260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d264: 0x240502de  addiu       $a1, $zero, 0x2DE
    ctx->pc = 0x15d264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 734));
    // 0x15d268: 0x8f848418  lw          $a0, -0x7BE8($gp)
    ctx->pc = 0x15d268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
    // 0x15d26c: 0x8056dd0  j           func_15B740
    ctx->pc = 0x15D26Cu;
    ctx->pc = 0x15D270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D26Cu;
            // 0x15d270: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B740u;
    if (runtime->hasFunction(0x15B740u)) {
        auto targetFn = runtime->lookupFunction(0x15B740u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0015B740_0x15b740(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x15D274u;
    // 0x15d274: 0x0  nop
    ctx->pc = 0x15d274u;
    // NOP
    // 0x15d278: 0x0  nop
    ctx->pc = 0x15d278u;
    // NOP
    // 0x15d27c: 0x0  nop
    ctx->pc = 0x15d27cu;
    // NOP
}
