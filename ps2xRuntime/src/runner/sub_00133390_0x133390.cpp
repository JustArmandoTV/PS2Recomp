#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00133390
// Address: 0x133390 - 0x1333a0
void sub_00133390_0x133390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133390_0x133390");
#endif

    ctx->pc = 0x133390u;

    // 0x133390: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x133390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x133394: 0x80517bc  j           func_145EF0
    ctx->pc = 0x133394u;
    ctx->pc = 0x133398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133394u;
            // 0x133398: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EF0u;
    if (runtime->hasFunction(0x145EF0u)) {
        auto targetFn = runtime->lookupFunction(0x145EF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00145EF0_0x145ef0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x13339Cu;
    // 0x13339c: 0x0  nop
    ctx->pc = 0x13339cu;
    // NOP
}
