#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BF770
// Address: 0x3bf770 - 0x3bf780
void sub_003BF770_0x3bf770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF770_0x3bf770");
#endif

    ctx->pc = 0x3bf770u;

    // 0x3bf770: 0x3e00008  jr          $ra
    ctx->pc = 0x3BF770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF770u;
            // 0x3bf774: 0xc4800dc0  lwc1        $f0, 0xDC0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BF778u;
    // 0x3bf778: 0x0  nop
    ctx->pc = 0x3bf778u;
    // NOP
    // 0x3bf77c: 0x0  nop
    ctx->pc = 0x3bf77cu;
    // NOP
}
