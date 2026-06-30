#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DCA30
// Address: 0x1dca30 - 0x1dca40
void sub_001DCA30_0x1dca30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCA30_0x1dca30");
#endif

    ctx->pc = 0x1dca30u;

    // 0x1dca30: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCA30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCA30u;
            // 0x1dca34: 0xc480000c  lwc1        $f0, 0xC($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DCA38u;
    // 0x1dca38: 0x0  nop
    ctx->pc = 0x1dca38u;
    // NOP
    // 0x1dca3c: 0x0  nop
    ctx->pc = 0x1dca3cu;
    // NOP
}
