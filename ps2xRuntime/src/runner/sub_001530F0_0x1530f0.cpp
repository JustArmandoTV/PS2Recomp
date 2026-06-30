#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001530F0
// Address: 0x1530f0 - 0x153100
void sub_001530F0_0x1530f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001530F0_0x1530f0");
#endif

    ctx->pc = 0x1530f0u;

    // 0x1530f0: 0xaf848378  sw          $a0, -0x7C88($gp)
    ctx->pc = 0x1530f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935416), GPR_U32(ctx, 4));
    // 0x1530f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1530F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1530F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1530F4u;
            // 0x1530f8: 0xe78c837c  swc1        $f12, -0x7C84($gp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294935420), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1530FCu;
    // 0x1530fc: 0x0  nop
    ctx->pc = 0x1530fcu;
    // NOP
}
