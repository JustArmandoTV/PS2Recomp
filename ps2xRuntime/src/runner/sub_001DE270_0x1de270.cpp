#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DE270
// Address: 0x1de270 - 0x1de280
void sub_001DE270_0x1de270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE270_0x1de270");
#endif

    ctx->pc = 0x1de270u;

    // 0x1de270: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE270u;
            // 0x1de274: 0xa4850014  sh          $a1, 0x14($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DE278u;
    // 0x1de278: 0x0  nop
    ctx->pc = 0x1de278u;
    // NOP
    // 0x1de27c: 0x0  nop
    ctx->pc = 0x1de27cu;
    // NOP
}
