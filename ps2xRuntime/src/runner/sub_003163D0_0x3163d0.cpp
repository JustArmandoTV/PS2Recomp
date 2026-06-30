#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003163D0
// Address: 0x3163d0 - 0x316400
void sub_003163D0_0x3163d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003163D0_0x3163d0");
#endif

    ctx->pc = 0x3163d0u;

    // 0x3163d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3163D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3163D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3163D0u;
            // 0x3163d4: 0xa085007e  sb          $a1, 0x7E($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 126), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3163D8u;
    // 0x3163d8: 0x0  nop
    ctx->pc = 0x3163d8u;
    // NOP
    // 0x3163dc: 0x0  nop
    ctx->pc = 0x3163dcu;
    // NOP
    // 0x3163e0: 0x80cd634  j           func_3358D0
    ctx->pc = 0x3163E0u;
    ctx->pc = 0x3358D0u;
    if (runtime->hasFunction(0x3358D0u)) {
        auto targetFn = runtime->lookupFunction(0x3358D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_003358D0_0x3358d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3163E8u;
    // 0x3163e8: 0x0  nop
    ctx->pc = 0x3163e8u;
    // NOP
    // 0x3163ec: 0x0  nop
    ctx->pc = 0x3163ecu;
    // NOP
    // 0x3163f0: 0x80cd698  j           func_335A60
    ctx->pc = 0x3163F0u;
    ctx->pc = 0x335A60u;
    {
        auto targetFn = runtime->lookupFunction(0x335A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3163F8u;
    // 0x3163f8: 0x0  nop
    ctx->pc = 0x3163f8u;
    // NOP
    // 0x3163fc: 0x0  nop
    ctx->pc = 0x3163fcu;
    // NOP
}
