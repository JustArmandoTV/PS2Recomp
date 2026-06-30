#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BF7C0
// Address: 0x3bf7c0 - 0x3bf7d0
void sub_003BF7C0_0x3bf7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF7C0_0x3bf7c0");
#endif

    ctx->pc = 0x3bf7c0u;

    // 0x3bf7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3BF7C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF7C0u;
            // 0x3bf7c4: 0xe48c010c  swc1        $f12, 0x10C($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 268), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BF7C8u;
    // 0x3bf7c8: 0x0  nop
    ctx->pc = 0x3bf7c8u;
    // NOP
    // 0x3bf7cc: 0x0  nop
    ctx->pc = 0x3bf7ccu;
    // NOP
}
