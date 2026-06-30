#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C43F0
// Address: 0x3c43f0 - 0x3c4400
void sub_003C43F0_0x3c43f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C43F0_0x3c43f0");
#endif

    ctx->pc = 0x3c43f0u;

    // 0x3c43f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3C43F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C43F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C43F0u;
            // 0x3c43f4: 0xc4800004  lwc1        $f0, 0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C43F8u;
    // 0x3c43f8: 0x0  nop
    ctx->pc = 0x3c43f8u;
    // NOP
    // 0x3c43fc: 0x0  nop
    ctx->pc = 0x3c43fcu;
    // NOP
}
