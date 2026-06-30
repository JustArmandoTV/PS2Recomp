#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C3040
// Address: 0x3c3040 - 0x3c3050
void sub_003C3040_0x3c3040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3040_0x3c3040");
#endif

    ctx->pc = 0x3c3040u;

    // 0x3c3040: 0x3e00008  jr          $ra
    ctx->pc = 0x3C3040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3040u;
            // 0x3c3044: 0xc48000bc  lwc1        $f0, 0xBC($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C3048u;
    // 0x3c3048: 0x0  nop
    ctx->pc = 0x3c3048u;
    // NOP
    // 0x3c304c: 0x0  nop
    ctx->pc = 0x3c304cu;
    // NOP
}
