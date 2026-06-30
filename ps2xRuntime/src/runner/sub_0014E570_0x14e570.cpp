#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014E570
// Address: 0x14e570 - 0x14e580
void sub_0014E570_0x14e570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E570_0x14e570");
#endif

    ctx->pc = 0x14e570u;

    // 0x14e570: 0x3e00008  jr          $ra
    ctx->pc = 0x14E570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E570u;
            // 0x14e574: 0xaf8481a0  sw          $a0, -0x7E60($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934944), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14E578u;
    // 0x14e578: 0x0  nop
    ctx->pc = 0x14e578u;
    // NOP
    // 0x14e57c: 0x0  nop
    ctx->pc = 0x14e57cu;
    // NOP
}
