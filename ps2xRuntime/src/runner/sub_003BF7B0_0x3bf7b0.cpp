#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BF7B0
// Address: 0x3bf7b0 - 0x3bf7c0
void sub_003BF7B0_0x3bf7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF7B0_0x3bf7b0");
#endif

    ctx->pc = 0x3bf7b0u;

    // 0x3bf7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3BF7B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF7B0u;
            // 0x3bf7b4: 0xe48c0110  swc1        $f12, 0x110($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BF7B8u;
    // 0x3bf7b8: 0x0  nop
    ctx->pc = 0x3bf7b8u;
    // NOP
    // 0x3bf7bc: 0x0  nop
    ctx->pc = 0x3bf7bcu;
    // NOP
}
