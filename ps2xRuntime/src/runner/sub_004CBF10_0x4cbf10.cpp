#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CBF10
// Address: 0x4cbf10 - 0x4cbf20
void sub_004CBF10_0x4cbf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CBF10_0x4cbf10");
#endif

    ctx->pc = 0x4cbf10u;

    // 0x4cbf10: 0x3e00008  jr          $ra
    ctx->pc = 0x4CBF10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CBF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBF10u;
            // 0x4cbf14: 0xc4800054  lwc1        $f0, 0x54($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CBF18u;
    // 0x4cbf18: 0x0  nop
    ctx->pc = 0x4cbf18u;
    // NOP
    // 0x4cbf1c: 0x0  nop
    ctx->pc = 0x4cbf1cu;
    // NOP
}
