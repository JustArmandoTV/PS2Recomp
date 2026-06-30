#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004ECDF0
// Address: 0x4ecdf0 - 0x4ece00
void sub_004ECDF0_0x4ecdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECDF0_0x4ecdf0");
#endif

    ctx->pc = 0x4ecdf0u;

    // 0x4ecdf0: 0x3e00008  jr          $ra
    ctx->pc = 0x4ECDF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ECDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECDF0u;
            // 0x4ecdf4: 0xc4800030  lwc1        $f0, 0x30($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4ECDF8u;
    // 0x4ecdf8: 0x0  nop
    ctx->pc = 0x4ecdf8u;
    // NOP
    // 0x4ecdfc: 0x0  nop
    ctx->pc = 0x4ecdfcu;
    // NOP
}
