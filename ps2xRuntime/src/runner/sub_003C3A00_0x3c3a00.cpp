#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C3A00
// Address: 0x3c3a00 - 0x3c3a10
void sub_003C3A00_0x3c3a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3A00_0x3c3a00");
#endif

    ctx->pc = 0x3c3a00u;

    // 0x3c3a00: 0x3e00008  jr          $ra
    ctx->pc = 0x3C3A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3A00u;
            // 0x3c3a04: 0xc4800004  lwc1        $f0, 0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C3A08u;
    // 0x3c3a08: 0x0  nop
    ctx->pc = 0x3c3a08u;
    // NOP
    // 0x3c3a0c: 0x0  nop
    ctx->pc = 0x3c3a0cu;
    // NOP
}
