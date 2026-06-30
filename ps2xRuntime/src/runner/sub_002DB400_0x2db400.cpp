#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB400
// Address: 0x2db400 - 0x2db410
void sub_002DB400_0x2db400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB400_0x2db400");
#endif

    ctx->pc = 0x2db400u;

    // 0x2db400: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB400u;
            // 0x2db404: 0xac850d7c  sw          $a1, 0xD7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3452), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DB408u;
    // 0x2db408: 0x0  nop
    ctx->pc = 0x2db408u;
    // NOP
    // 0x2db40c: 0x0  nop
    ctx->pc = 0x2db40cu;
    // NOP
}
