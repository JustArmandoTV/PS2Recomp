#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00306810
// Address: 0x306810 - 0x306820
void sub_00306810_0x306810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306810_0x306810");
#endif

    ctx->pc = 0x306810u;

    // 0x306810: 0x3e00008  jr          $ra
    ctx->pc = 0x306810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306810u;
            // 0x306814: 0xc4800ddc  lwc1        $f0, 0xDDC($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x306818u;
    // 0x306818: 0x0  nop
    ctx->pc = 0x306818u;
    // NOP
    // 0x30681c: 0x0  nop
    ctx->pc = 0x30681cu;
    // NOP
}
