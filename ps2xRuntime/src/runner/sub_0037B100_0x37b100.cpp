#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037B100
// Address: 0x37b100 - 0x37b110
void sub_0037B100_0x37b100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B100_0x37b100");
#endif

    ctx->pc = 0x37b100u;

    // 0x37b100: 0x3e00008  jr          $ra
    ctx->pc = 0x37B100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37B100u;
            // 0x37b104: 0xa0850000  sb          $a1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37B108u;
    // 0x37b108: 0x0  nop
    ctx->pc = 0x37b108u;
    // NOP
    // 0x37b10c: 0x0  nop
    ctx->pc = 0x37b10cu;
    // NOP
}
