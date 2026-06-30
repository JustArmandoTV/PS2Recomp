#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015D200
// Address: 0x15d200 - 0x15d220
void sub_0015D200_0x15d200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D200_0x15d200");
#endif

    ctx->pc = 0x15d200u;

    // 0x15d200: 0x8f848418  lw          $a0, -0x7BE8($gp)
    ctx->pc = 0x15d200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
    // 0x15d204: 0x3c06006d  lui         $a2, 0x6D
    ctx->pc = 0x15d204u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)109 << 16));
    // 0x15d208: 0x240500da  addiu       $a1, $zero, 0xDA
    ctx->pc = 0x15d208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 218));
    // 0x15d20c: 0x24c6ce10  addiu       $a2, $a2, -0x31F0
    ctx->pc = 0x15d20cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954512));
    // 0x15d210: 0x8056dd0  j           func_15B740
    ctx->pc = 0x15D210u;
    ctx->pc = 0x15D214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D210u;
            // 0x15d214: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B740u;
    if (runtime->hasFunction(0x15B740u)) {
        auto targetFn = runtime->lookupFunction(0x15B740u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0015B740_0x15b740(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x15D218u;
    // 0x15d218: 0x0  nop
    ctx->pc = 0x15d218u;
    // NOP
    // 0x15d21c: 0x0  nop
    ctx->pc = 0x15d21cu;
    // NOP
}
