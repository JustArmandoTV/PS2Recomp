#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E0690
// Address: 0x3e0690 - 0x3e06a0
void sub_003E0690_0x3e0690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0690_0x3e0690");
#endif

    ctx->pc = 0x3e0690u;

    // 0x3e0690: 0x3e00008  jr          $ra
    ctx->pc = 0x3E0690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E0694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0690u;
            // 0x3e0694: 0xc48002b8  lwc1        $f0, 0x2B8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E0698u;
    // 0x3e0698: 0x0  nop
    ctx->pc = 0x3e0698u;
    // NOP
    // 0x3e069c: 0x0  nop
    ctx->pc = 0x3e069cu;
    // NOP
}
