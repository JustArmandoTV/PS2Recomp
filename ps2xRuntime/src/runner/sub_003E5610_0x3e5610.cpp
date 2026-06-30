#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E5610
// Address: 0x3e5610 - 0x3e5620
void sub_003E5610_0x3e5610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E5610_0x3e5610");
#endif

    ctx->pc = 0x3e5610u;

    // 0x3e5610: 0x3e00008  jr          $ra
    ctx->pc = 0x3E5610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E5614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5610u;
            // 0x3e5614: 0xa085014c  sb          $a1, 0x14C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 332), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E5618u;
    // 0x3e5618: 0x0  nop
    ctx->pc = 0x3e5618u;
    // NOP
    // 0x3e561c: 0x0  nop
    ctx->pc = 0x3e561cu;
    // NOP
}
