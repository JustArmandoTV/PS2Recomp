#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DCA10
// Address: 0x1dca10 - 0x1dca20
void sub_001DCA10_0x1dca10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCA10_0x1dca10");
#endif

    ctx->pc = 0x1dca10u;

    // 0x1dca10: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1dca10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x1dca14: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCA14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCA14u;
            // 0x1dca18: 0xc440c5e0  lwc1        $f0, -0x3A20($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DCA1Cu;
    // 0x1dca1c: 0x0  nop
    ctx->pc = 0x1dca1cu;
    // NOP
}
