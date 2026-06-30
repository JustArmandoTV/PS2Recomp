#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00133AB0
// Address: 0x133ab0 - 0x133ac0
void sub_00133AB0_0x133ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133AB0_0x133ab0");
#endif

    ctx->pc = 0x133ab0u;

    // 0x133ab0: 0x804ce84  j           func_133A10
    ctx->pc = 0x133AB0u;
    ctx->pc = 0x133AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133AB0u;
            // 0x133ab4: 0x24844000  addiu       $a0, $a0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A10u;
    if (runtime->hasFunction(0x133A10u)) {
        auto targetFn = runtime->lookupFunction(0x133A10u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00133A10_0x133a10(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x133AB8u;
    // 0x133ab8: 0x0  nop
    ctx->pc = 0x133ab8u;
    // NOP
    // 0x133abc: 0x0  nop
    ctx->pc = 0x133abcu;
    // NOP
}
