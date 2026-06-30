#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00386C20
// Address: 0x386c20 - 0x386c30
void sub_00386C20_0x386c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386C20_0x386c20");
#endif

    ctx->pc = 0x386c20u;

    // 0x386c20: 0x3e00008  jr          $ra
    ctx->pc = 0x386C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x386C20u;
            // 0x386c24: 0xe48c0154  swc1        $f12, 0x154($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 340), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x386C28u;
    // 0x386c28: 0x0  nop
    ctx->pc = 0x386c28u;
    // NOP
    // 0x386c2c: 0x0  nop
    ctx->pc = 0x386c2cu;
    // NOP
}
