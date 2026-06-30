#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00352D30
// Address: 0x352d30 - 0x352d40
void sub_00352D30_0x352d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352D30_0x352d30");
#endif

    ctx->pc = 0x352d30u;

    // 0x352d30: 0x3e00008  jr          $ra
    ctx->pc = 0x352D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352D30u;
            // 0x352d34: 0xc48000cc  lwc1        $f0, 0xCC($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x352D38u;
    // 0x352d38: 0x0  nop
    ctx->pc = 0x352d38u;
    // NOP
    // 0x352d3c: 0x0  nop
    ctx->pc = 0x352d3cu;
    // NOP
}
