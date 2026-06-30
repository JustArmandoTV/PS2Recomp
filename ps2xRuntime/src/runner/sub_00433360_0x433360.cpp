#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00433360
// Address: 0x433360 - 0x433370
void sub_00433360_0x433360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00433360_0x433360");
#endif

    ctx->pc = 0x433360u;

    // 0x433360: 0x3e00008  jr          $ra
    ctx->pc = 0x433360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x433364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x433360u;
            // 0x433364: 0xc4800118  lwc1        $f0, 0x118($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x433368u;
    // 0x433368: 0x0  nop
    ctx->pc = 0x433368u;
    // NOP
    // 0x43336c: 0x0  nop
    ctx->pc = 0x43336cu;
    // NOP
}
