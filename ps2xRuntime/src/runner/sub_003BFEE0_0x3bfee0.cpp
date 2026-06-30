#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BFEE0
// Address: 0x3bfee0 - 0x3bff00
void sub_003BFEE0_0x3bfee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BFEE0_0x3bfee0");
#endif

    ctx->pc = 0x3bfee0u;

    // 0x3bfee0: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3bfee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x3bfee4: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x3bfee4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x3bfee8: 0x24846500  addiu       $a0, $a0, 0x6500
    ctx->pc = 0x3bfee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25856));
    // 0x3bfeec: 0x24a51cc0  addiu       $a1, $a1, 0x1CC0
    ctx->pc = 0x3bfeecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7360));
    // 0x3bfef0: 0x804a508  j           func_129420
    ctx->pc = 0x3BFEF0u;
    ctx->pc = 0x3BFEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFEF0u;
            // 0x3bfef4: 0x24060098  addiu       $a2, $zero, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00129420_0x129420(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3BFEF8u;
    // 0x3bfef8: 0x0  nop
    ctx->pc = 0x3bfef8u;
    // NOP
    // 0x3bfefc: 0x0  nop
    ctx->pc = 0x3bfefcu;
    // NOP
}
