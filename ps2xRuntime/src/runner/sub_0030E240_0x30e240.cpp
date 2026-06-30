#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030E240
// Address: 0x30e240 - 0x30e250
void sub_0030E240_0x30e240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E240_0x30e240");
#endif

    ctx->pc = 0x30e240u;

    // 0x30e240: 0x3e00008  jr          $ra
    ctx->pc = 0x30E240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E240u;
            // 0x30e244: 0x94820064  lhu         $v0, 0x64($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30E248u;
    // 0x30e248: 0x0  nop
    ctx->pc = 0x30e248u;
    // NOP
    // 0x30e24c: 0x0  nop
    ctx->pc = 0x30e24cu;
    // NOP
}
