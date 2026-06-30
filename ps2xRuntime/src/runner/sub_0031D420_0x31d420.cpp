#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031D420
// Address: 0x31d420 - 0x31d430
void sub_0031D420_0x31d420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D420_0x31d420");
#endif

    ctx->pc = 0x31d420u;

    // 0x31d420: 0x3e00008  jr          $ra
    ctx->pc = 0x31D420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D420u;
            // 0x31d424: 0x90820092  lbu         $v0, 0x92($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31D428u;
    // 0x31d428: 0x0  nop
    ctx->pc = 0x31d428u;
    // NOP
    // 0x31d42c: 0x0  nop
    ctx->pc = 0x31d42cu;
    // NOP
}
