#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034F9B0
// Address: 0x34f9b0 - 0x34f9c0
void sub_0034F9B0_0x34f9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034F9B0_0x34f9b0");
#endif

    ctx->pc = 0x34f9b0u;

    // 0x34f9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x34F9B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34F9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F9B0u;
            // 0x34f9b4: 0xc480008c  lwc1        $f0, 0x8C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34F9B8u;
    // 0x34f9b8: 0x0  nop
    ctx->pc = 0x34f9b8u;
    // NOP
    // 0x34f9bc: 0x0  nop
    ctx->pc = 0x34f9bcu;
    // NOP
}
