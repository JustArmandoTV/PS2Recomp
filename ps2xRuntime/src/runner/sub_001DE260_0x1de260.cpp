#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DE260
// Address: 0x1de260 - 0x1de270
void sub_001DE260_0x1de260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE260_0x1de260");
#endif

    ctx->pc = 0x1de260u;

    // 0x1de260: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE260u;
            // 0x1de264: 0xa4850012  sh          $a1, 0x12($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DE268u;
    // 0x1de268: 0x0  nop
    ctx->pc = 0x1de268u;
    // NOP
    // 0x1de26c: 0x0  nop
    ctx->pc = 0x1de26cu;
    // NOP
}
