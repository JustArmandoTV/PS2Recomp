#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C3340
// Address: 0x3c3340 - 0x3c3350
void sub_003C3340_0x3c3340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3340_0x3c3340");
#endif

    ctx->pc = 0x3c3340u;

    // 0x3c3340: 0x3e00008  jr          $ra
    ctx->pc = 0x3C3340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3340u;
            // 0x3c3344: 0xc48000b8  lwc1        $f0, 0xB8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C3348u;
    // 0x3c3348: 0x0  nop
    ctx->pc = 0x3c3348u;
    // NOP
    // 0x3c334c: 0x0  nop
    ctx->pc = 0x3c334cu;
    // NOP
}
