#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E5620
// Address: 0x3e5620 - 0x3e5630
void sub_003E5620_0x3e5620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E5620_0x3e5620");
#endif

    ctx->pc = 0x3e5620u;

    // 0x3e5620: 0x5182b  sltu        $v1, $zero, $a1
    ctx->pc = 0x3e5620u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3e5624: 0x3e00008  jr          $ra
    ctx->pc = 0x3E5624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E5628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5624u;
            // 0x3e5628: 0xa0830c75  sb          $v1, 0xC75($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 3189), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E562Cu;
    // 0x3e562c: 0x0  nop
    ctx->pc = 0x3e562cu;
    // NOP
}
