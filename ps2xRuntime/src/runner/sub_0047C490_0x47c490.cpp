#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047C490
// Address: 0x47c490 - 0x47c4a0
void sub_0047C490_0x47c490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047C490_0x47c490");
#endif

    ctx->pc = 0x47c490u;

    // 0x47c490: 0x3e00008  jr          $ra
    ctx->pc = 0x47C490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47C494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47C490u;
            // 0x47c494: 0xac8501c4  sw          $a1, 0x1C4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 452), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47C498u;
    // 0x47c498: 0x0  nop
    ctx->pc = 0x47c498u;
    // NOP
    // 0x47c49c: 0x0  nop
    ctx->pc = 0x47c49cu;
    // NOP
}
