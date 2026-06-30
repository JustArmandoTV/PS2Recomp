#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00350A30
// Address: 0x350a30 - 0x350a40
void sub_00350A30_0x350a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350A30_0x350a30");
#endif

    ctx->pc = 0x350a30u;

    // 0x350a30: 0x3e00008  jr          $ra
    ctx->pc = 0x350A30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350A30u;
            // 0x350a34: 0x24820264  addiu       $v0, $a0, 0x264 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 612));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x350A38u;
    // 0x350a38: 0x0  nop
    ctx->pc = 0x350a38u;
    // NOP
    // 0x350a3c: 0x0  nop
    ctx->pc = 0x350a3cu;
    // NOP
}
