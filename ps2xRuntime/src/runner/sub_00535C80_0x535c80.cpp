#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00535C80
// Address: 0x535c80 - 0x535c90
void sub_00535C80_0x535c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00535C80_0x535c80");
#endif

    ctx->pc = 0x535c80u;

    // 0x535c80: 0x24840338  addiu       $a0, $a0, 0x338
    ctx->pc = 0x535c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 824));
    // 0x535c84: 0x804b156  j           func_12C558
    ctx->pc = 0x535C84u;
    ctx->pc = 0x535C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535C84u;
            // 0x535c88: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C558u;
    if (runtime->hasFunction(0x12C558u)) {
        auto targetFn = runtime->lookupFunction(0x12C558u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0012C558_0x12c558(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x535C8Cu;
    // 0x535c8c: 0x0  nop
    ctx->pc = 0x535c8cu;
    // NOP
}
