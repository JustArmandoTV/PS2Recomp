#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004ECE00
// Address: 0x4ece00 - 0x4ece10
void sub_004ECE00_0x4ece00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECE00_0x4ece00");
#endif

    ctx->pc = 0x4ece00u;

    // 0x4ece00: 0x3e00008  jr          $ra
    ctx->pc = 0x4ECE00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ECE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECE00u;
            // 0x4ece04: 0x84820114  lh          $v0, 0x114($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 276)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4ECE08u;
    // 0x4ece08: 0x0  nop
    ctx->pc = 0x4ece08u;
    // NOP
    // 0x4ece0c: 0x0  nop
    ctx->pc = 0x4ece0cu;
    // NOP
}
